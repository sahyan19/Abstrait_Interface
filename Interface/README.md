## README

# Projet Jeux en Console

Ce projet est une collection de trois mini-jeux interactifs jouables en mode console. Les jeux inclus sont un jeu de stratégie, un jeu de combat et un jeu de simulation. Chaque jeu implémente une interface commune `IJeu` et offre des commandes spécifiques pour une expérience de jeu simple mais amusante.

## Structure du Projet

Voici la structure des dossiers du projet :
```
Interface/
│
├── header/
│   ├── IJeu.hpp
│   ├── StrategyGame.hpp
│   ├── CombatGame.hpp
│   └── SimulationGame.hpp
│
├── src/
│   ├── StrategyGame.cpp
│   ├── CombatGame.cpp
│   └── SimulationGame.cpp
│
├── main.cpp
├── readme.md
└── makefile
```
### Fichiers et Répertoires

- `header/`: Contient les fichiers d'en-tête pour l'interface et les jeux.
  - `IJeu.hpp`: Définition de l'interface de base pour les jeux.
  - `StrategyGame.hpp`, `CombatGame.hpp`, `SimulationGame.hpp`: Définitions des classes pour les jeux spécifiques.
- `src/`: Contient les fichiers source pour les jeux.
  - `StrategyGame.cpp`, `CombatGame.cpp`, `SimulationGame.cpp`: Implémentations des classes pour les jeux spécifiques.
- `main.cpp`: Point d'entrée du programme, permettant de choisir et de jouer à l'un des trois jeux.

## Compilation et Exécution

### Compilation avec Makefile

1. Ouvrez un terminal et naviguez jusqu'au répertoire du projet.
2. Tapez la commande suivante pour compiler le projet :
   ```sh
   make
   ```
3. Exécutez le programme compilé :
   ```sh
   ./game
   ```

## Utilisation

1. Lancez le programme compilé (`./game`).
2. Choisissez un jeu à jouer en entrant le numéro correspondant :
   - 1: Jeu de Stratégie
   - 2: Jeu de Combat
   - 3: Jeu de Simulation
3. Une fois dans le jeu, utilisez les commandes suivantes :
   - `start`: Démarrer le jeu.
   - `pause`: Mettre le jeu en pause.
   - `quit`: Quitter le jeu.
   - Pour chaque jeu, des commandes spécifiques sont disponibles :
     - Jeu de Stratégie : `Construire`, `Rassembler`, `Attaquer`
     - Jeu de Combat : `Coup de poing`, `Coup de pied`, `bloquer`
     - Jeu de Simulation : `Construire`, `Taxer`, `Célébrer`

## Exemples d'Utilisation

### Jeu de Stratégie

```
Démarrage du jeu de stratégie...
Construisez votre base, rassemblez des ressources et battez vos ennemis !
Entrez la commande (démarrer, mettre en pause, quitter ou une action spécifique au jeu) : construire
Construire une structure...
Entrez une commande (démarrer, mettre en pause, quitter ou une action spécifique au jeu) : rassembler
Rassembler des ressources...
Entrez une commande (démarrer, mettre en pause, quitter ou une action spécifique au jeu) : attaque
Ennemi attaquant !
Entrez la commande (démarrer, mettre en pause, quitter ou une action spécifique au jeu) : quitter
Quitter le jeu de stratégie...
```

### Jeu de Combat

```
Démarrage du jeu de combat...
Combattez votre adversaire et gagnez le match !
Saisir une commande (démarrer, mettre en pause, quitter ou une action spécifique au jeu) : coup de poing
Je donne un coup de poing !
Entrez la commande (démarrer, mettre en pause, quitter ou une action spécifique au jeu) : coup de pied
Frapper l'adversaire !
Entrez la commande (démarrer, mettre en pause, quitter ou une action spécifique au jeu) : bloquer
Bloquer les attaques entrantes !
Entrez la commande (démarrer, mettre en pause, quitter ou une action spécifique au jeu) : quitter
Quitter le jeu de combat...
```

### Jeu de Simulation

```
Démarrage du jeu de simulation...
Gérez votre monde virtuel et gardez vos citoyens heureux !
Entrez la commande (démarrer, mettre en pause, quitter ou une action spécifique au jeu) : construire
Construire un nouveau bâtiment...
Saisir une commande (démarrer, mettre en pause, quitter ou une action spécifique au jeu) : taxer
Percevoir les impôts des citoyens...
Entrez une commande (démarrer, mettre en pause, quitter ou une action spécifique au jeu) : célébrer
Organiser un événement de célébration!
Entrez la commande (démarrer, mettre en pause, quitter ou une action spécifique au jeu) : quitter
Quitter le jeu de simulation...
```

## Auteur

Tahirihasina Rakotomanga  
Email: tahirihasinarakotomanga@gmail.com


---
