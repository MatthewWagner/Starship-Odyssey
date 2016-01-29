#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string toLowerCase( string input );


class Player
{
public:

    //Heals player for a value healAmt
    void heal( double healAmt ){

        if ( (this->health + healAmt) > max_health)
        {

            //Heal player and remove health pack
            cout << "You are fully healed.";
            this->health = this->max_health;

        }
        else if ( this->health == max_health)
        {
            cout << "You are already fully healed."
        }

    }

    //Upgrade max health of player
    void upgradeHealth ( double upgrdHlth ) {

        this->max_health += upgrdHlth;

    }

private:
    double health = 100.0;
    double max_health = 100.0;
    double attack = 1.0;
    double defense = 1.0;
    double knowledge = 0.0;
    string char_name = "Link";
    string char_status = "";
};

int main()
{
    Player PlayerOne = new Player();

    PlayerOne.setHealth(200);
    //Variable Initializations
    double health = 100.0;

    double attack = 1.0;
    double defense = 1.0;
    double knowledge = 0.0;
    string destination = "";
    string char_name = "Link";
    string char_status = "";

    cout << "What is your name?\n\n";
    cin >> char_name;

    cout << "Hello " << char_name << ", are you ready to begin your Starship Odyssey?\n\n" ;
    getline (cin,char_status);


    if (char_status == "Yes", "yes", "Yup", "yup", "Yeah", "yeah")
        {
        cout << "You wake up lost and confused on a derelict starship with nothing but a flashlight and a screwdriver."
             << " The ship is damaged, all systems are off line. There are components on fire nearby and there doesn't appear to be anyone alive on-board.\n\n"
             << "Where will you go? \n\nLet's get out of here! : elevator \nLet's have a look around. : bridge\n\n";
        cin  >> destination;

        if (destination == "elevator", "Elevator")
            {
            cout << "Whew, made it out alive! Thankfully the elevator is still working. Where to now? \nDeck1\nDeck2\nDeck3\nDeck4\nDeck5\nDeck6\n\n";
            cin  >> destination;
        }
        else if (destination == "bridge")
            {
            cout << "It looks like " << char_name << " found the captain! ..or what's left of him.\n";
        }
        else
            {
            cout << "You typed that wrong.. so now you died.";
        }
        }
    else
    {
        cout << "Perhaps another time then.";
    }


return 0;

}
