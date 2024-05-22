#include <iostream>
#include <string>
#include "./header/StrategyGame.hpp"
#include "./header/CombatGame.hpp"
#include "./header/SimulationGame.hpp"

using namespace std;

void runGame(IJeu& game)
{
    game.start();
    string command;
    while (true)
    {
        cout << "Entrez une commande [start, pause, quit] : ";
        cin >> command;
        if (command == "start")
        {
            game.start();
        }
        else if (command == "pause")
        {
            game.pause();
        }
        else if (command == "quit")
        {
            game.quit();
            break;
        }
        else
        {
            game.handleInput(command);
        }
    }
}

int main()
{
    StrategyGame strategyGame;
    CombatGame combatGame;
    SimulationGame simulationGame;

    cout << endl;
    cout << "***********| Choisissez un jeu à jouer |********************" << endl;
    cout << "Strategie  -> Appuiez sur '1'" << endl;
    cout << "Combat     -> Appuiez sur '2'" << endl;
    cout << "Simulation -> Appuiez sur '3'" << endl;
    int choice;
    cin >> choice;

    switch (choice)
    {
        case 1:
            runGame(strategyGame);
            break;
        case 2:
            runGame(combatGame);
            break;
        case 3:
            runGame(simulationGame);
            break;
        default:
            cout << "Choix invalide !" << endl;
            break;
    }

    return 0;
}
