#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include "zagolovok.hpp"

int main() {
    int selected_level = 1; // before_main_menu(); андрей напишет
    std::vector<Level> levels = { level1, level2, level3, level4, level5 };
    now = levels[selected_level];

    sf::RenderWindow playw(sf::VideoMode({ 900, 600 }), "Sudoku");

    while (playw.isOpen()) {

        while (const std::optional event = playw.pollEvent())
        {
            // Close window: exit
            if (event->is<sf::Event::Closed>())
                playw.close();
        }

    }
}
