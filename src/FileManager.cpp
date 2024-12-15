#include "../headers/FileManager.h"
#include <iostream>


FileManager::FileManager(const std::string& filePath) : filePath(filePath) {}



bool FileManager::appendToFile(const std::string& data) {
    std::ofstream file(filePath, std::ios::app); // Open file in append mode
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << filePath << " for appending." << std::endl;
        return false;
    }
    file << data << std::endl;
    file.close();
    return true;
}

std::vector<std::string> FileManager::loadData() {
    std::ifstream file(filePath);
    std::vector<std::string> lines;
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << filePath << " for reading." << std::endl;
        return lines;
    }

    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }
    file.close();
    return lines;
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
