#include "Enemy.hpp"
#include "Player.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/Keyboard.hpp>

int main() {
  sf::RenderWindow window(sf::VideoMode(800, 600), "SFML-Learning");
  window.setFramerateLimit(60);
  Player myPlayer;
  Enemy myEnemy(700.f, 500.f);
  Enemy myEnemy2(0.f, 0.f);
  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        window.close();
      }
    }
    window.clear();
    myPlayer.move(window);
    myEnemy2.update(posPlayer);
    myEnemy.update(posPlayer);
    myEnemy.draw(window);
    myPlayer.draw(window);
    myEnemy2.draw(window);
    window.display();
  }
  return 0;
}
