#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 500), "HAPPY NEW YEAR!");
    sf::CircleShape shape(75.f);
    sf::CircleShape shape2(60.f);
    sf::CircleShape shape3(45.f);
    sf::CircleShape shape4(8.f);
    sf::CircleShape shape5(8.f);
    sf::CircleShape shape6(5.f);
    sf::CircleShape shape7(5.f);
    sf::CircleShape shape8(5.f);
    sf::CircleShape shape9(5.f);
    sf::CircleShape shape10(7.f);
    sf::CircleShape shape11(7.f);
    sf::CircleShape shape12(7.f);
    sf::CircleShape shape13(7.f);
    sf::CircleShape shape14(7.f);
    sf::RectangleShape arm1(sf::Vector2f(75, 5));
    sf::RectangleShape arm2(sf::Vector2f(75, 5));
    shape.setFillColor(sf::Color::White);
        shape2.setFillColor(sf::Color::White);
        shape3.setFillColor(sf::Color::White);
        shape4.setFillColor(sf::Color::Yellow);
        shape5.setFillColor(sf::Color::Yellow);
        shape6.setFillColor(sf::Color::Red);
        shape7.setFillColor(sf::Color::Red);
        shape8.setFillColor(sf::Color::Red);
        shape9.setFillColor(sf::Color::Red);
        shape10.setFillColor(sf::Color::Green);
        shape11.setFillColor(sf::Color::Blue);
        shape12.setFillColor(sf::Color::Cyan);
        shape13.setFillColor(sf::Color::Magenta);
        shape14.setFillColor(sf::Color::Red);
         shape4.setPosition(200,200);
         shape5.setPosition(245,200);
         shape6.setPosition(248,230);
         shape7.setPosition(233,235);
         shape8.setPosition(218,235);
         shape9.setPosition(203,230);
         shape10.setPosition(227,270);
         shape11.setPosition(227,320);
         shape12.setPosition(227,370);
         shape13.setPosition(227,420);
         shape14.setPosition(227,470);
          

     arm1.rotate(45);
     arm2.rotate(-45);
     arm1.setPosition(125,260);
     arm2.setPosition(285,310);
     shape.setPosition(160,350);
     shape2.setPosition(170,250);
     shape3.setPosition(185,170);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(arm1);
        window.draw(arm2);
        window.draw(shape);
        window.draw(shape2);
        window.draw(shape3);
        window.draw(shape4);
        window.draw(shape5);
        window.draw(shape6);
        window.draw(shape7);
        window.draw(shape8);
        window.draw(shape9);
        window.draw(shape10);
        window.draw(shape11);
        window.draw(shape12);
        window.draw(shape14);
        window.draw(shape13);
        window.display();
    }

    return 0;
}