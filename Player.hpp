#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

class Player {
private:
    sf::CircleShape circle;
    float speedPlayer = 5.f;
public:
    Player();
    void move(sf::RenderWindow &window);
    void draw(sf::RenderWindow &window);
};

#endif

