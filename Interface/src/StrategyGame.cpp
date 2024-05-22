#include "../header/StrategyGame.hpp"
#include <iostream>
#include <chrono>
#include <thread>

void StrategyGame::start()
{
    running = true;
    score = 0;
    std::cout << "Démarrage du Jeu de Stratégie..." << std::endl;
    std::cout << "Construisez votre base, rassemblez des ressources et vainquez vos ennemis !" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1)); 
    std::cout << std::endl;
    std::cout << "=========================================================" << std::endl;
    std::cout << "=================| JEU DE STRATÉGIE  |===================" << std::endl;
    std::cout << "=========================================================" << std::endl;
    std::cout << "COMMANDE :\n\t1 - Construire\n\t2 - Rassembler\n\t3 - Attaquer" << std::endl;
}

void StrategyGame::handleInput(const std::string& input)
{
    if (running) {
        if (input == "1")
        {
            std::cout << "Construction d'une structure..." << std::endl;
            score += 15;
            std::cout << std::endl;
        }
        else if (input == "2")
        {
            std::cout << "Collecte des ressources..." << std::endl;
            score += 10;
            std::cout << std::endl;
        }
        else if (input == "3")
        {
            std::cout << "Attaque de l'ennemi !" << std::endl;
            score += 20;
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

void StrategyGame::pause()
{
    if (running)
    {
        std::cout << "Mise en pause du Jeu de Stratégie..." << std::endl;
        running = false;
        std::cout << std::endl;
    }
}

void StrategyGame::quit()
{
    std::cout << "Arrêt du Jeu de Stratégie..." << std::endl;
    std::cout << "Score final : " << score << std::endl;
    running = false;
    std::cout << "=============================================================" << std::endl;
}

int StrategyGame::getScore() const
{
    return score;
}
