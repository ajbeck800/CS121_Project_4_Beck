#include <iostream>
#include "race.h"
#include "horse.h"

int main(){
  std::random_device rd;
  std::uniform_int_distribution<int> dist(0, 1);
  
  int coin = dist(rd);

  Horse c;
  std::int index = 0;
  std::int trackLength = 15;
  c.init(index, trackLength);
  c.advance();
  c.printlane();
  c.isWinner();

  Race theRace;
  theRace.start(c);
} // end main
