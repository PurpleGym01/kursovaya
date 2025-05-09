#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include "zagolovok.hpp"

int main() {
    int selected_level = 1; // before_main_menu(); андрей напишет
    std::vector<Level> levels = { level1, level2, level3, level4, level5 };
    now = levels[selected_level];

    sf::RenderWindow playw(sf::VideoMode({ 900, 600 }), "Sudoku");
    playw.clear(sf::Color::White);

    sf::RectangleShape cell(sf::Vector2f(450.f, 450.f));
    cell.setPosition({ 50, 50 });
    cell.setFillColor(sf::Color::Black);
    playw.draw(cell);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            sf::RectangleShape cell1(sf::Vector2f(48.f, 48.f));
            float x = 51 + i * 50, y = 51 + j * 50;
            cell1.setPosition(sf::Vector2f(x, y));
            cell1.setFillColor(sf::Color::White);
            playw.draw(cell1);
        }
    }
    playw.display();

    while (playw.isOpen()) {

        while (const std::optional event = playw.pollEvent())
        {
            // Close window: exit
            if (event->is<sf::Event::Closed>())
                playw.close();

        }

    }
}
