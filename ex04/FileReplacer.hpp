#ifndef FILEREPLACER_HPP
# define FILEREPLACER_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>

class FileReplacer {
    public:
        static void replace(std::string const &filename, std::string const &s1, std::string const &s2);

    private:
        static std::string processLine(std::string line, std::string const &s1, std::string const &s2);
};

#endif