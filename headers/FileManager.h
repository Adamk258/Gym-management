#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <string>
#include <vector>
#include <fstream>

class FileManager {
public:
    // Generic functions for files
    static std::vector<std::string> loadData(const std::string& filePath);
    static void saveData(const std::string& filePath, const std::vector<std::string>& data);
};

#endif 
