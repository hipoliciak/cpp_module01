/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 23:16:33 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/11/09 23:32:11 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void replaceAndWrite(const std::string& content, const std::string& s1, const std::string& s2, const std::string& outputFilename)
{
    std::ofstream outFile(outputFilename.c_str());
    if (!outFile.is_open())
	{
        std::cerr << "Error: could not open output file." << std::endl;
        return;
    }

    size_t pos = 0;
	size_t start = 0;
    size_t s1_len = s1.length();
    while ((pos = content.find(s1, start)) != std::string::npos)
	{
        outFile << content.substr(start, pos - start) << s2;
        start = pos + s1_len;
    }
    outFile << content.substr(start);
    outFile.close();
}

int main(int argc, char* argv[])
{
    if (argc != 4)
	{
        std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream inFile(filename.c_str());
    if (!inFile.is_open())
	{
        std::cerr << "Error: could not open input file." << std::endl;
        return 1;
    }

    std::string content((std::istreambuf_iterator<char>(inFile)), std::istreambuf_iterator<char>());
    inFile.close();

    std::string outputFilename = filename + ".replace";
    replaceAndWrite(content, s1, s2, outputFilename);
	std::cout << "File " << filename << " has been copied to " << outputFilename << " with replaced strings." << std::endl;

    return 0;
}
