
#include <iostream>
#include <fstream>
#include <sstream>

int main() {
    std::ifstream inFile("data.csv");

    std::string currentLine;
    std::string sCounter;
    std::string word;

    int num1;
    int num2;
    int counter = 0;

    std::stringstream ss;
    std::stringstream converter;

    while (std::getline(inFile, currentLine)) {

        // Clear the stringstreams
        ss.clear();
        ss.str("");

        converter.clear();
        converter.str("");

        // Put the current line into ss
        ss.str(currentLine);

        // Get first number
        std::getline(ss, sCounter, ',');
        converter.str(sCounter);
        converter >> num1;

        // Get second number
        std::getline(ss, sCounter, ',');
        converter.clear();
        converter.str(sCounter);
        converter >> num2;

        // Get the word
        std::getline(ss, word);

        // Add the two numbers
        counter = num1 + num2;

        // Print the word counter times
        for (int i = 0; i < counter; i++) {
            std::cout << word << " ";
        }

        std::cout << std::endl;

        counter = 0;
    }

    inFile.close();

    return 0;
}
