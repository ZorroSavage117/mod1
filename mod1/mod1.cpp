#include <iostream>
#include <vector>

using namespace std;

// Function to simulate the game
void main()
{
    string choice = "";
    bool restart = true;

    // Main code
    cout << "Do you want to play a game? Yes - No - Maybe\n";
    cin >> choice;

    // You are playing no matter what you choose
    if (choice == "no")
    {
        cout << "You're lying..." << endl;
    }
    else if (choice == "maybe")
    {
        cout << "Yes, you do!" << endl;
    }
    else if (choice == "yes")
    {
        cout << "I have the perfect game for you." << endl;
    }
    else
    {
        cout << "You're playing anyways." << endl;
    }

    // The game begins
    // Level 1: waking up
    while (restart)
    {
        cout << "You are in a dark room, you see a shadow of a (MANTLE - FOOTBOARD) in the dim light coming through the window.\n";
        cin >> choice;

        // Living room or bedroom
        if (choice == "mantle")
        {
            // Level 2: living room
            while (restart)
            {
                cout << "You are in the living room of an unknown house. You try to find (PHONE - LIGHTSWITCH) first.\n";
                cin >> choice;

                // Phone or light switch
                if (choice == "phone")
                {
                    // Level 3: the switch
                    while (restart)
                    {
                        cout << "You find no phone but you do find a light switch. Turn on the lights? (YES - NO)\n";
                        cin >> choice;

                        // Yes or no
                        if (choice == "yes")
                        {
                            // Level 4: the ending - bad
                            cout << "You turn on the light to see your body in a recliner and it's all bloody and missing your head...\nSorry to say this but it looks like death has come for you." << endl;
                            restart = false;
                        }
                        else if (choice == "no")
                        {
                            // Level 4: the ending - ok
                            cout << "You don't flip the switch on a hunch, but then you see the Grim Reaper come through the window...\nHe is here for you, to take you to the afterlife." << endl;
                            restart = false;
                        }
                        else
                        {
                            cout << "Try again but use one of the all caps words, thank you." << endl;
                        }
                    }
                }
                else if (choice == "lightswitch")
                {
                    // Level 3: the good switch
                    while (restart)
                    {
                        cout << "You flip the switch, you see a door and a window that leads to a field of corn. You go through the (DOOR - WINDOW)\n";
                        cin >> choice;

                        // Door or window
                        if (choice == "door")
                        {
                            // Level 4: the ending - bad dream
                            cout << "You open the door, as you do so something comes flying at your face...\nYou wake up back in your bed relieved that it was only a nightmare." << endl;
                            restart = false;
                        }
                        else if (choice == "window")
                        {
                            // Level 4: the ending - good dream
                            cout << "You climb out the window and run for the field of corn, but as you reach the field you start seeing light...\nThe light that you are seeing is daylight as you wake up in your bed nice and warm." << endl;
                            restart = false;
                        }
                        else
                        {
                            cout << "Try again but use one of the all caps words, thank you." << endl;
                        }
                    }
                }
                else
                {
                    cout << "Try again but use one of the all caps words, I like your style..." << endl;
                }
            }
        }
        else if (choice == "footboard")
        {
            // Level 2: bedroom
            while (restart)
            {
                cout << "You are in a bedroom that you do not recognize. You (LEAVE - STAY) the bed that you are laying in.\n";
                cin >> choice;

                // Leave, stay, or yell
                if (choice == "leave")
                {
                    // Level 3: hallway
                    while (restart)
                    {
                        cout << "You find a hallway that is empty. You (RUN - WALK) down the hallway.\n";
                        cin >> choice;

                        // Run or walk
                        if (choice == "run")
                        {
                            // Level 4: the ending - extreme bad
                            cout << "You decide to run down the hallway, but as you do so you feel like something is ripping you apart with each step...\nYou notice that your fingers are disappearing at each joint moving to your shoulder, it's very painful...\nEventually, you are all missing except for your head, you are missing your jaw though, and you hear a voice,\n\"I told you not to run\"\nAs everything fades to black, it then fades to white as you open your eyes realizing that it was just a dream." << endl;
                            restart = false;
                        }
                        else if (choice == "walk")
                        {
                            // Level 4: the ending - good
                            cout << "As you walk down the hall, everything fades to black as you wake up in a hospital bed surrounded by family...\nThey rejoice and explain to you that you were in a coma for two years." << endl;
                            restart = false;
                        }
                        else
                        {
                            cout << "Try again but use one of the all caps words, thank you." << endl;
                            restart = false;
                        }
                    }
                }
                else if (choice == "stay")
                {
                    // Level 3: bedroom continued
                    while (restart)
                    {
                        cout << "You decide to stay. Do you go back to (BED) or do you stay (AWAKE)?\n";
                        cin >> choice;

                        // Bed or awake
                        if (choice == "bed")
                        {
                            // Level 4: the ending - ok
                            cout << "You go back to bed and go to sleep. You wake up next to your special someone. THE END." << endl;
                            restart = false;
                        }
                        else if (choice == "awake")
                        {
                            // Level 4: the ending - unknown
                            cout << "As you stay up all night, you realize that you are now stuck in this reality with no way to escape... THE END..." << endl;
                            restart = false;
                        }
                        else
                        {
                            cout << "Try again but use one of the all caps words, thank you." << endl;
                            restart = false;
                        }
                    }
                }
                else if (choice == "yell")
                {
                    // Level 3: hidden ending
                    if (choice == "yell")
                    {
                        cout << "(Hidden path) You scream at the top of your lungs and you wake up back in your bed in your own room. It was just a nightmare." << endl;
                        restart = false;
                    }
                }
                else
                {
                    cout << "Try again but use one of the all caps words but I like your style..." << endl;
                    restart = false;
                }

                // Page setup
                cout << endl;
            }
        }
    }
}