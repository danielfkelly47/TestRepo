#include <iostream>
//#include <SFML/Graphics.hpp>
//#include <SFML/OpenGL.hpp>
#include "graphPoints.h"
using namespace std;


int main() {
 #pragma region Window Creation
   // sf::RenderWindow window (sf::VideoMode(1200, 800, "Plot Points!", sf::Style::Default, sf::ContextSettings(24)); // This is to render the window 
  //  window.setVerticalSyncEnabled(true);//This line is to set the vertical sync of the graph
   // sf::Vector2u winSize = window.getSize();
#pragma endregion
    graphPoints graphPts;                                               // create an instance of my point plotting class
   // graphPts.loadPoints("HeartRate.csv", winSize);                      //This line will import the Heart Rate document
    while (window.isOpen())                                             // This is the Windows application loop - infinite loop until closed
    {
#pragma region Check for Exit
        //sf::Event event ;
        ;// Windows is event driven - so check for events
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

#pragma endregion

        window.clear();                                                 // Clear graphics buffer

       // graphPts.drawPoints(window);                                    // Call draw function in my class

        window.display();                                               // Display the graphics from the buffer to the display
    }

    return 0;

}