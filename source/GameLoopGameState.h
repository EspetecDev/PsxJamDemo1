#ifndef _DC_GAME_LOOP_GAMESTATE_
#define _DC_GAME_LOOP_GAMESTATE_

#include "dcMath.h"
#include "dcCamera.h"
#include "dcSprite.h"
#include "scene/scene.h"
#include "player/player.h"
#include "characters/EnemyManager.h"

typedef struct
{
    Player PlayerInstance;
    SceneMap SceneData;
    ContractData Contract;
    EnemyManager MyEnemyManager;
} FGameLoopGameState;

void GLGS_Init(FGameLoopGameState* GameState);
void GLGS_Update(FGameLoopGameState* GameState);
void GLGS_Close(FGameLoopGameState* GameState);

void InitPlayer(FGameLoopGameState* GameState);

#endif