#pragma once
#include<vector>
#include <string>
class graphPoints {
private:
	std::vector<sf::CircleShape> points;
public:
	graphPoints();
	graphPoints(sf::CircleShape_shape, sf:: Vector2f position);

		void loadPoints(std::string_fileName);
		void addPoints(sf::CircleShape_point);

};