#include "../header/SimulationGame.hpp"
#include <iostream>
#include <chrono>
#include <thread>

void SimulationGame::start()
{
    running = true;
    score = 0;
    std::cout << "Démarrage du Jeu de Simulation..." << std::endl;
    std::cout << "Gérez votre monde virtuel et gardez vos citoyens heureux !" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1)); 
    std::cout << std::endl;
    std::cout << "=====================================================" << std::endl;
    std::cout << "==================| JEU DE SIMULATION   |============" << std::endl;
    std::cout << "=====================================================" << std::endl;
    std::cout << "COMMANDE :\n\t1 - Construire\n\t2 - Taxer\n\t3 - Célébrer" << std::endl;
}

void SimulationGame::handleInput(const std::string& input)
{
    if (running) {
        if (input == "1")
        {
            std::cout << "Construction d'un nouveau bâtiment..." << std::endl;
            score += 20;
            std::cout << std::endl;
        }
        else if (input == "2")
        {
            std::cout << "Collecte des impôts auprès des citoyens..." << std::endl;
            score += 15;
            std::cout << std::endl;
        }
        else if (input == "3")
        {
            std::cout << "Organisation d'un événement de célébration !" << std::endl;
            score += 10;
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

void SimulationGame::pause()
{
    if (running)
    {
        std::cout << "Mise en pause du Jeu de Simulation..." << std::endl;
        running = false;
        
    }
}

void SimulationGame::quit()
{
    std::cout << "Arrêt du Jeu de Simulation..." << std::endl;
    std::cout << "Score final : " << score << std::endl;
    running = false;
    std::cout << "=============================================================" << std::endl;
}

int SimulationGame::getScore() const
{
    return score;
}
