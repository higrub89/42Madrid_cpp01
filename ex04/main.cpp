#include "FileReplacer.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Use: ./sed_is_for_losers <filename> <s1> <s2>" << std::endl;
        return (1);
    }
    FileReplacer::replace(argv[1], argv[2], argv[3]);
    return (0);
}