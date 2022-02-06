#pragma once
#include"SFML/Graphics.hpp"
#include"const.h"
class Car {
private:
	sf::Texture texture;
	sf::Sprite sprite;
	
public:
	Car() {
		texture.loadFromFile(CAR_FILE_NAME);
		sprite.setTexture(texture);
		sprite.setScale(0.1f, 0.1f);
		sprite.setRotation(-90.f);
		sprite.setPosition((WINDOW_WIDTH - getHitBox().width) / 2.f,
			WINDOW_HEIGHT - getHitBox().height - 10);
			//
	}
	sf::Sprite getSprite() { return sprite; }
	sf::FloatRect getHitBox() {	return sprite.getGlobalBounds();}
};