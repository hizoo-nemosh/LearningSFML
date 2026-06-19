#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include<cmath>

class Enemy {
private:
	sf::RectangleShape square;
	float speedEnemy = -3.f;
public:
	Enemy(float startX, float startY);
	void draw(sf::RenderWindow &window);
	void update(sf::Vector2f posPlayer);
};

#endif