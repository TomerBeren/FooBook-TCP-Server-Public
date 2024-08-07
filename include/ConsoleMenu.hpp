#ifndef CONSOLEMENU_H
#define CONSOLEMENU_H

#include "IMenu.hpp"

// ConsoleMenu class definition, inheriting from IMenu for menu functionalities.
class ConsoleMenu :  public IMenu
{
public:
    ConsoleMenu() = default; // Default constructor.

    // Captures and returns the next command from user input as a vector of strings.
    std::vector<std::string> nextCommand(const std::string &input);

    // Provides access to the internal BloomFilter instance for operations like checking or adding URLs.
    BloomFilter &getBloomFilter();

private:
    bool bloomFilterInitialized = false; // Tracks if the BloomFilter has been initialized.
    BloomFilter bloomFilter;             // The BloomFilter instance for URL checking and management.
};

#endif // CONSOLEMENU_H