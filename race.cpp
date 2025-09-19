#include <string>
#include "horse.h"
#include "race.h"

const static int numHorses = 5;

Race::Race(){
  Race::trackLength = Horse();
} // end constructor

Race::Race(){
  Race::horse[numHorses] = Horse();
} // end constructor

void Race::start(){
  bool keepGoing = true;

  while (keepGoing){
    for (int i = 0; i < NUM_HORSES; i++) {
      advance(i, horses);
      printLane(i, horses);
        if (isWinner(i, horses) == true){
          keepGoing = false;
        } // end if
    } // end for
    std::cout << "Press enter for another turn" << std::endl;
    std::cin.ignore();
  } // end while;
} // end start
