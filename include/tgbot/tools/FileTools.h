//
// Created by Oleg on 25.01.17.
//

#ifndef TGBOT_FILETOOLS_H
#define TGBOT_FILETOOLS_H

#include <string>

/**
 * @ingroup tools
 */
namespace FileTools {

/**
 * Reads whole file to string.
 * @param filePath Path to a file
 * @return string with file contents
 */
std::string read(const std::string& filePath);

};


#endif //TGBOT_FILETOOLS_H
