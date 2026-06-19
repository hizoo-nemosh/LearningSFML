#include "Player.hpp"

float radius = 25.f;

sf::Vector2f posPlayer() { return circle.getPosition(); }

Player::Player() {
  circle.setRadius(radius);
  circle.setFillColor(sf::Color::White);
  circle.setPosition(100.f, 100.f);
  speedPlayer = 5.f;
}
void Player::move(sf::RenderWindow &window) {
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) ||
      sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
    circle.move(0.f, -speedPlayer);
  }
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) ||
      sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
    circle.move(0.f, speedPlayer);
  }
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) ||
      sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
    circle.move(-speedPlayer, 0.f);
  }
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) ||
      sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
    circle.move(speedPlayer, 0.f);
  }
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
    window.close();
  }
  sf::Vector2f pos = circle.getPosition();
  if (pos.x < 0.f) {
    circle.setPosition(0.f, pos.y);
  } else if (pos.x > 800.f - (radius * 2)) {
    circle.setPosition(800.f - (radius * 2), pos.y);
  }
  pos = circle.getPosition();
  if (pos.y < 0.f) {
    circle.setPosition(pos.x, 0.f);
  } else if (pos.y > 600.f - (radius * 2)) {
    circle.setPosition(pos.x, 600.f - (radius * 2));
  }
}
void Player::draw(sf::RenderWindow &window) { window.draw(circle); }
