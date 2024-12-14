#include "../headers/FileManager.h"
#include <iostream>

std::vector<std::string> FileManager::loadData(const std::string& filePath) {
    std::vector<std::string> data;
    std::ifstream file(filePath);
    std::string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            data.push_back(line);
        }
        file.close();
    } else {
        std::cerr << "Unable to open file for reading: " << filePath << std::endl;
    }

    return data;
}

void FileManager::saveData(const std::string& filePath, const std::vector<std::string>& data) {
    std::ofstream file(filePath);

    if (file.is_open()) {
        for (const auto& line : data) {
            file << line << std::endl;
        }
        file.close();
    } else {
        std::cerr << "Unable to open file for writing: " << filePath << std::endl;
    }
}
