#include "Enemy.hpp"

Enemy::Enemy(float startX, float startY) {
  square.setSize(sf::Vector2f(50.f, 50.f));
  square.setFillColor(sf::Color::Blue);
  square.setPosition(startX, startY);
  speedEnemy = -3.f;
}
void Enemy::update(sf::Vector2f posPlayer) {
  square.move(speedEnemy, 0.f);
  sf::Vector2f pos = square.getPosition();
  if (pos.x < 0.f) {
    square.setPosition(0.f, pos.y);
    speedEnemy *= -1;
  }
  if (pos.x > 700.f) {
    square.setPosition(700.f, pos.y);
    speedEnemy *= -1;
  }
}

void Enemy::draw(sf::RenderWindow &window) { window.draw(square); }