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
└── main.cpp
```

### Fichiers et Répertoires

- `header/`: Contient les fichiers d'en-tête pour l'interface et les jeux.
  - `IJeu.hpp`: Définition de l'interface de base pour les jeux.
  - `StrategyGame.hpp`, `CombatGame.hpp`, `SimulationGame.hpp`: Définitions des classes pour les jeux spécifiques.
- `src/`: Contient les fichiers source pour les jeux.
  - `StrategyGame.cpp`, `CombatGame.cpp`, `SimulationGame.cpp`: Implémentations des classes pour les jeux spécifiques.
- `Main.cpp`: Point d'entrée du programme, permettant de choisir et de jouer à l'un des trois jeux.

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
     - Jeu de Stratégie : `build`, `gather`, `attack`
     - Jeu de Combat : `punch`, `kick`, `block`
     - Jeu de Simulation : `build`, `tax`, `celebrate`

## Exemples d'Utilisation

### Jeu de Stratégie

```
Starting Strategy Game...
Build your base, gather resources, and defeat your enemies!
Enter command (start, pause, quit, or a game-specific action): build
Building a structure...
Enter command (start, pause, quit, or a game-specific action): gather
Gathering resources...
Enter command (start, pause, quit, or a game-specific action): attack
Attacking enemy!
Enter command (start, pause, quit, or a game-specific action): quit
Quitting Strategy Game...
```

### Jeu de Combat

```
Starting Combat Game...
Fight your opponent and win the match!
Enter command (start, pause, quit, or a game-specific action): punch
Throwing a punch!
Enter command (start, pause, quit, or a game-specific action): kick
Kicking the opponent!
Enter command (start, pause, quit, or a game-specific action): block
Blocking incoming attack!
Enter command (start, pause, quit, or a game-specific action): quit
Quitting Combat Game...
```

### Jeu de Simulation

```
Starting Simulation Game...
Manage your virtual world and keep your citizens happy!
Enter command (start, pause, quit, or a game-specific action): build
Constructing a new building...
Enter command (start, pause, quit, or a game-specific action): tax
Collecting taxes from citizens...
Enter command (start, pause, quit, or a game-specific action): celebrate
Hosting a celebration event!
Enter command (start, pause, quit, or a game-specific action): quit
Quitting Simulation Game...
```

## Auteur

Tahirihasina Rakotomanga  
Email: tahirihasinarakotomanga@gmail.com


---
