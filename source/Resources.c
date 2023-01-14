#include "engine.h"

/*  Texture Animations Resources */

extern unsigned long _binary_smile_tim_start[];
TIM_IMAGE tim_smile;

void Resources_LoadTextureResources()
{
    dcRender_LoadTexture(&tim_smile, _binary_smile_tim_start);
}

/* Sprite Animations Header. */

//extern unsigned long _binary_hero_tim_start[];
// TO REMOVE

// Hero Run Animation.
SDC_SpriteFrame HeroRunFrames[] =
{
    {29-13,0,28,42}, {58-13,0,37,42}, {96-13,0,38,42}, {135-13,0,26,42},
    {162-13,0,27,42}, {190-13,0,39,42}, {217,0,39,42}
};
SDC_SpriteAnimation HeroRunAnimation = {HeroRunFrames, NULL, 3, 7, 0, 0};

SDC_SpriteFrame HeroIdleFrames[] =
{
    {29-13,0,28,42}
};
SDC_SpriteAnimation HeroIdleAnimation = {HeroIdleFrames, NULL, 3, 1, 0, 0};

void Resources_LoadSpriteResources()
{
    //dcSprite_LoadAnimationTex(&HeroRunAnimation, _binary_sonic_tim_start);
    //dcSprite_LoadAnimationTex(&HeroIdleAnimation, _binary_sonic_tim_start);
}

SDC_SpriteAnimation GetHeroRunAnimation()
{
    return HeroRunAnimation;
}

SDC_SpriteAnimation GetHeroIdleAnimation()
{
    return HeroIdleAnimation;
}