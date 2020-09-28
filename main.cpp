//Dylan Stewart
//PSO
//COMP 2040
/*

Move the sprite using the arrow keys, rotate the sprite with the 'R' key and left click with the move to display the x and y coordinates of the sprite(in command propmt)

 */

#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    //creating the window in which the sprite will be loaded
    sf::RenderWindow window(sf::VideoMode(800,800), "PS0!");
    //implemented to play with frame limit
    window.setFramerateLimit(60);
    
    // Loading sprite
    sf::Texture texture;
    if (!texture.loadFromFile("sprite.png"))
        return EXIT_FAILURE;
    sf::Sprite sprite(texture);

    //The next 2 lines are from the original sample code to create the green circle
    // sf::CircleShape shape(100.f);
    // shape.setFillColor(sf::Color::Green);

    //creating x and y variables to place the object in the middle of the window initially
    double xPos, yPos;
    xPos = window.getSize().x/2;
    yPos = window.getSize().y/2;
    //moving sprite to location
    sprite.move(sf::Vector2f(xPos, yPos));

    //game loop which detects certain keystrokes, namely the 4 arrow keys and the 'R' key
    //this loop is active the entire time the window is open 
    while (window.isOpen())
    {
      //creating event object to identify keystrokes and pressing the red x on the window 
        sf::Event event;
	//loop to continuously poll for events
        while (window.pollEvent(event))
        {
	  //if statement for closing the window
            if (event.type == sf::Event::Closed)
                window.close();

	    //switch statements to appropriately respond to our keys being pressed
	    switch(event.key.code)
	      {
	      case sf::Keyboard::Down:
		{
		 
		 sprite.move(sf::Vector2f(0, 10));
		 break;
		}

		case sf::Keyboard::Up:
		{
		 
		 sprite.move(sf::Vector2f(0, -10));
		 break;
		}

		case sf::Keyboard::Left:
		{
		 
		 sprite.move(sf::Vector2f(-10, 0));
		 break;
		}

		case sf::Keyboard::Right:
		{
		 
		 sprite.move(sf::Vector2f(10, 0));
		 break;
		}

	        case sf::Keyboard::R:
		 {
		   sprite.rotate(45);
		   break;
		 }

	      case sf::Mouse::Left:
		{
		  std::cout << "Current Position: "<< "x coor-" << sprite.getPosition().x << " y coor-" << sprite.getPosition().y << std::endl;
		}

	        default:
		{
		  break;
	        }
		
	      }
	}

        //redraw our image after the changes are made to the sprites location
        window.clear();
	window.draw(sprite);
        window.display();
    }

    return 0;
}



