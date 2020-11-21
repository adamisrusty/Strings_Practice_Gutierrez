#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iterator>

int main() {
    // Part 1
    std::string inputMessage;
    std::string findStr = " i ";
    std::string replaceStr = " I ";

    std::cout << "Part 1" << std::endl;
    std::cout << "------" << std::endl;

    std::cout << "Please enter your message: " << std::endl;
    getline(std::cin, inputMessage);

    size_t pos = inputMessage.find(" i ");
    while (pos != std::string::npos) {
        inputMessage.replace(pos, findStr.size(), replaceStr);
        pos = inputMessage.find(findStr, pos + replaceStr.size());
    }


    std::cout << inputMessage << std::endl;

    // Part 2
    std::vector<std::string> animals;
    std::string wordInput;

    std::cout << "\nPart 2" << std::endl;
    std::cout << "------" << std::endl;

    while (wordInput != "end") {
        std::cout << "Enter an animal to add to the list or enter \'end\' to stop: " << std::endl;
        std::cin >> wordInput;
        animals.push_back(wordInput);
    }

    animals.pop_back();
    std::sort(animals.begin(), animals.end());

    std::cout << "Your list of animals: " << std::endl;
    for(auto & animal : animals) {
        std::cout << animal << std::endl;
    }

    return 0;
}
