#include "infoGame.h"
#include "infoMove.h"
#include "infoBlock.h"
#include "infoPlayer.h"

int defineScoreUp(Game *g, Move firstMove);
int defineScoreDown(Game *g, Move firstMove);
int defineScoreLeft(Game *g, Move firstMove);
int defineScoreRight(Game *g, Move firstMove);

int defineScoreFirstMove(Game *g, Move firstMove);
void winner(Game *g, Player *players);
