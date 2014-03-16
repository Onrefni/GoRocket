﻿#include "GameSprite.h"GameSprite::GameSprite(){	setScreenSize(CCDirector::sharedDirector()->getWinSize());	_radius = 0;}GameSprite::~GameSprite(){}GameSprite* GameSprite::createWithFrameName(const char * pszSpriteFrameName) {    GameSprite * sprite = new GameSprite();	if (sprite && sprite->initWithSpriteFrameName(pszSpriteFrameName)) {        sprite->setRadius(sprite->boundingBox().size.width * 0.5f);        sprite->initSprite();		sprite->autorelease();		return sprite;	}	CC_SAFE_DELETE(sprite);	return NULL;}//Se tiver animacao na Sprite sobrescreva e implementevoid GameSprite::initSprite(){}bool GameSprite::morrer(){	stopAllActions();	setVisible(false);	return true;}void GameSprite::update(float dt){}