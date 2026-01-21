/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 23:03:36 by rhiguita          #+#    #+#             */
/*   Updated: 2026/01/21 23:03:39 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

void    FileReplacer::replace(std::string const &filename, std::string const &s1, std::string const &s2)
{
    if (s1.empty())
    {
        std::cerr << "Error: Search string (s1) cannot be empty." << std::endl;
        return ;
    }

    std::ifstream inFile(filename.c_str());
    if (!inFile.is_open())
    {
        std::cerr << "Error: Could not open input file: " << filename << std::endl;
        return ;
    }

    std::string outName = filename + ".replace";
    std::ofstream outFile(outName.c_str());
    if (!outFile.is_open())
    {
        std::cerr << "Error: Could not open output file: " << outName << std::endl;
        inFile.close();
        return ;
    }

    std::string line;
    while (std::getline(inFile, line))
    {
        outFile << processLine(line, s1, s2);
        if (!inFile.eof())
        {
            outFile << "\n";
        }
    }

    inFile.close();
    outFile.close();
}

std::string FileReplacer::processLine(std::string line, std::string const &s1, std::string const &s2)
{
    std::string result;
    size_t  startPos = 0;
    size_t  foundPos;

    while ((foundPos = line.find(s1, startPos)) != std::string::npos)
    {
        result.append(line, startPos, foundPos - startPos);

        result.append(s2);

        startPos = foundPos + s1.length();
    }
    result.append(line.substr(startPos));
    return (result);
}
