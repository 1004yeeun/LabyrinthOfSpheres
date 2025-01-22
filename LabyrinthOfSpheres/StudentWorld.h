#ifndef STUDENTWORLD_H_
#define STUDENTWORLD_H_

#include "GameWorld.h"
#include "Level.h"
#include <string>

// the StudentWorld class is responsible for keeping
// track of your game world (including the maze) and all of the actors/objects
// (RageBots, ThiefBots, peas, crystals, goodies, pits, marbles, the player’s avatar,
// etc.) that are inside the maze

class StudentWorld : public GameWorld
{
public:
  StudentWorld(std::string assetPath);
  virtual int init();
  virtual int move();
  virtual void cleanUp();

private:
};

#endif // STUDENTWORLD_H_
