#include "FalsePositiveChecker.hpp"

// Evaluates if a URL is a false positive and reports the result.
void FalsePositiveChecker::checkAndReport(const std::string &url, bool flag, BloomFilter &bloomFilter, std::ostream &output)
{
     // Retrieve the set of false positives from the BloomFilter.
    std::unordered_set<std::string> falsePositives = bloomFilter.getFalsePositives();
      // If the flag is true, indicating the URL might be a false positive according to the BloomFilter check.
    if (flag)
    {
        // Initially, print the flag status (true).
        output << std::boolalpha << flag;
        // If the URL is actully black listed in out control set print (true) again.
        if (falsePositives.find(url) != falsePositives.end())
        {
            output << " " << std::boolalpha << flag << std::endl;
        }
        // URL is a false positive print (false).
        else
        {
            output << " " << std::boolalpha << !flag << std::endl;
        }
    }
    //URL is definitly not blacklisted print (false)
    else
    {
        output << std::boolalpha << flag << std::endl;
    }
}