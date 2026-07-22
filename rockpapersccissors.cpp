#include <iostream> 
#include <cstdlib>
#include <ctime>

void singleplayer(); 
void multiplayer(); 

int main(){

int playerchoice[1];
  std::cout << "---------------------------------------------\n";
  std::cout << "     Welcome to Rock, Paper, Scissors!\n";
  std::cout << "Rules: Rock beats Scissors, Scissors beats Paper, Paper beats Rock.\n";
  std::cout << " choosee your mode: 1 for single player, 2 for multiplayer: \n";
  std::cin >> playerchoice[1];

  switch (playerchoice[1]) {
    case 1:
        singleplayer();
        break;
    case 2:
        multiplayer();
        break;
    default:
        std::cout << "Invalid input. Please enter 1 for single player or 2 for multiplayer.\n";
        main();
        break;
  }

 std::cout << "press 1 for another round or 0 to quit: \n";

 do {
 std::cin >> playerchoice[1];
 if (playerchoice[1] == 1) {
    main();
 }
 else if (playerchoice[1] == 0) {
    std::cout << "Thanks for playing!\n";
    }
 else {
    std::cout << "Invalid input. Please enter 1 to play again or 0 to quit: \n";
 } }while (playerchoice[1] != 0 && playerchoice[1] != 1);


    return 0;
}


void multiplayer() {
    // This function can be implemented to handle multiplayer mode
        std::cout << "Multiplayer mode selected...\n";
    int player1Choice, player2Choice;
    std::cout << "Player 1, enter your choice (1 for rock, 2 for paper, 3 for scissors): ";
    std::cout<< "\033[8m";// invisible text
    std::cin>> player1Choice; // Get the player's choice without displaying it on the console
    std::cout << "\033[0m"; // reset text formatting
       std::cout << "Player 1 has made their choice.\n";


    std::cout << "Player 2, enter your choice (1 for rock, 2 for paper, 3 for scissors): ";
    std::cout<< "\033[8m";// invisible text
    std::cin>> player2Choice; // Get the player's choice without displaying it on the console
    std::cout << "\033[0m"; // reset text formatting
       std::cout << "Player 2 has made their choice.\n";

    switch (player1Choice) {
        case 1: // Player 1 chose rock
            if (player2Choice == 1) {
                std::cout << "It's a tie!\n";
            } else if (player2Choice == 2) {
                std::cout << "Player 2 wins!\n";
            } else if (player2Choice == 3) {
                std::cout << "Player 1 wins!\n";
            }
            break;
        case 2: // Player 1 chose paper
            if (player2Choice == 1) {
                std::cout << "Player 1 wins!\n";
            } else if (player2Choice == 2) {
                std::cout << "It's a tie!\n" ;
            } else if (player2Choice == 3) {
                std::cout << "Player 2 wins!\n" ;
            }
            break;
        
        case 3: // Player 1 chose scissors
            if (player2Choice == 1) {
                std::cout << "Player 2 wins! \n"  ;
            } else if (player2Choice == 2) {
                std::cout << "Player 1 wins! \n" ;
            } else if (player2Choice == 3) {
                std::cout << "It's a tie!\n" ; ;
            }
            break;
            default:
            std::cout << "Invalid input. Please enter 1 for rock, 2 for paper, or 3 for scissors.\n";
    }

}

void singleplayer() {
    int computerChoice;
    int playerchoice[1];
    std::cout << "Single player mode selected...\n";
    do {
        srand(time(0));
        computerChoice = rand() % 3 + 1; // 1 for rock, 2 for paper, 3 for scissors
        std::cout << "Enter your choice (1 for rock, 2 for paper, 3 for scissors): ";
        std::cin >> playerchoice[0];
        std::cout << "Computer chose: " << computerChoice << '\n';
    } while (playerchoice[0] < 1 || playerchoice[0] > 3);

    switch (computerChoice) {
        case 1: // Computer chose rock
            if (playerchoice[0] == 1) {
                std::cout << "It's a tie!\n" ;
            } else if (playerchoice[0] == 2) {
                std::cout << "You win!\n" ;
            } else if (playerchoice[0] == 3) {
                std::cout << "Computer wins!\n" ;
            }
            break;

        case 2: // Computer chose paper
            if (playerchoice[0] == 1) {
                std::cout << "Computer wins!\n" ;
            } else if (playerchoice[0] == 2) {
                std::cout << "It's a tie!\n" ;
            } else if (playerchoice[0] == 3) {
                std::cout << "You win!\n" ;
            }
            break;

        case 3: // Computer chose scissors
            if (playerchoice[0] == 1) {
                std::cout << "You win!\n" ;
            } else if (playerchoice[0] == 2) {
                std::cout << "Computer wins!\n" ;
            } else if (playerchoice[0] == 3) {
                std::cout << "It's a tie!\n" ;
            }
            break;
        default:
            std::cout << "Invalid input. Please enter 1 for rock, 2 for paper, or 3 for scissors.\n";
    }
}
