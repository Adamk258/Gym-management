#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <string>
#include <vector>
#include <fstream>

class FileManager {

private:
std::string filePath;

public:
    // Constructor with file path
    FileManager(const std::string& filePath);

public:

    // Generic functions for files
    bool appendToFile(const std::string& data);
    std::vector<std::string> loadData();
    static void saveData(const std::string& filePath, const std::vector<std::string>& data);
};

#endif 
