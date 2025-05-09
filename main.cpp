#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

using namespace sf;

int main() {
    RenderWindow window(VideoMode({ 900, 600 }), "Sudoku");

    window.setVerticalSyncEnabled(true);

    CircleShape shape(100.f, 3);
    shape.setPosition({100, 350});
    shape.setFillColor(Color::Magenta);

    while (window.isOpen())
    {
        while (auto event = window.pollEvent())
        {
            if (event->is<Event::Closed>())
                window.close();
        }

        window.clear(Color::Black);
        window.draw(shape);
        window.display();
    }
    return 0;
}
