#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct ColorConsole
{
    enum ColorCode {
        FG_BLUE = 34,
        BG_WHITE = 47
    };

    static constexpr auto reset = "\033[0m";

    static string color(const ColorCode& code) {
        return "\033[" + to_string(code) + "m";
    }
};

struct ConsoleBox
{
    void set_text(const string &text) { cout << text << endl; }
};

ConsoleBox *consoleBox = new ConsoleBox; // Suponemos que ya está inicializado

void load_script(const string& fil) {
    ifstream file(fil);

    if (!file.is_open()) {
        consoleBox->set_text("No se pudo abrir el string " + fil + ".");
        return;
    }

    string line;
    consoleBox->set_text("Contenido del string " + fil + ":");
    while (getline(file, line)) {
        consoleBox->set_text(line);
    }
    file.close();
}