#include "../header/CombatGame.hpp"
#include <iostream>
#include <chrono>
#include <thread>

void CombatGame::start()
{
    running = true;
    score = 0; 
    std::cout << "Démarrage du Jeu de Combat..." << std::endl;
    std::cout << "Affrontez votre adversaire et remportez le match !" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1)); 
    std::cout << std::endl;
    std::cout << "=============================================================" << std::endl;
    std::cout << "====================| JEU DE COMBAT  |=======================" << std::endl;
    std::cout << "=============================================================" << std::endl;
    std::cout << "COMMANDE :\n\t1 - Coup de poing\n\t2 - Coup de pied\n\t3 - Bloquer" << std::endl;
}

void CombatGame::handleInput(const std::string& input)
{
    if (running) {
        if (input == "1")
        {
            std::cout << "Lancer un coup de poing !" << std::endl;
            score += 10; 
            std::cout << std::endl;
        }
        else if (input == "2")
        {
            std::cout << "Donner un coup de pied à l'adversaire !" << std::endl;
            score += 15;
            std::cout << std::endl;
        }
        else if (input == "3")
        {
            std::cout << "Bloquer l'attaque entrante !" << std::endl;
            score += 5;
            std::cout << std::endl;
        }
        else
        {
            std::cout << "Commande inconnue : " << input << std::endl;
            std::cout << std::endl;
        }
    } else {
        std::cout << "Le jeu est en pause. Tapez 'start' pour reprendre." << std::endl;
        std::cout << std::endl;
    }
}

void CombatGame::pause()
{
    if (running)
    {
        std::cout << "Mise en pause du Jeu de Combat..." << std::endl;
        running = false;
        std::cout << std::endl;
    }
}

void CombatGame::quit()
{
    std::cout << "Arrêt du Jeu de Combat..." << std::endl;
    std::cout << "Score final : " << score << std::endl;
    running = false;
    std::cout << "=============================================================" << std::endl;
}

int CombatGame::getScore() const
{
    return score;
}
