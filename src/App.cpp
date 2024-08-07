#include "App.hpp"
// Constructor initializes the App with a menu and a map of commands
App::App(IMenu *menu, std::map<std::string, ICommand *> commands) : menu(menu), commands(commands) {}

// The main loop of the application
void App::run(const std::string &input, std::ostream &output)
{
    // Infinite loop to continuously accept and process commands
    //while (true)
    //{
        // Retrieves the next command from the menu
        std::vector<std::string> tokens = menu->nextCommand(input);
       
        if (!tokens.empty())
        {
            try
            {
                // Attempts to find and execute the command based on the first element of input
                // Passes the second element of input {URL} and the BloomFilter from the menu to the command's execute method
                commands.at(tokens[0])->execute(tokens[1], menu->getBloomFilter(), output);
            }
            catch (...)
            {
                //catches any exception like a non existing command etc.
            }
        }
    //}
}