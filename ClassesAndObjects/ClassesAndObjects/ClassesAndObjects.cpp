#include <iostream>
#include <vector>
using namespace std;

//add class definitions below this line
class Superhero
{
public:
    string name, identity;
    vector<string> powers;

    Superhero(string _name, string _identity, vector<string> _powers)
        : name(_name), identity(_identity), powers(_powers)
    {

    }
};

class CelestialBody {
public:

    string CloserToSun(CelestialBody second)
    {
        if (this->distance < second.distance)
        {
            return this->name;
        }
        else
        {
            return second.name;
        }
    }

    CelestialBody(string n, double diam, double dist, int m) {
        name = n;
        diameter = diam;
        distance = dist;
        moons = m;
    }

private:
    string name;
    double diameter;
    double distance;
    int moons;
};


//add class definitions above this line

int main() {

    Superhero iron_man("Iron Man", "Tony Stark", { "armored suit", "laser beams", "flight" });
    cout << iron_man.name << endl;
    cout << iron_man.identity << endl;
    for (auto a : iron_man.powers) {
        cout << a << endl;
    }

    CelestialBody mercury("Mercury", 4879.4, 57909000, 0);
    CelestialBody venus("Venus", 12103.6, 108160000, 0);
    cout << mercury.CloserToSun(venus) << endl;
    //cout << venus.distance << endl;                           // can't get access to venus beacause outside of a class

    return 0;

}