#include "ConfigParser.hpp"

#include <iostream>
#include <boost/property_tree/json_parser.hpp>

using namespace boost::property_tree;

const Params ConfigParser::Parse(const std::string json_config_path)
{
    ptree root;
    read_json(json_config_path, root);
    return {
        root.get<int>("n"),
        root.get<float>("m"),
        root.get<float>("e"),
        root.get<float>("R"),
        root.get<float>("f"),
        root.get<float>("L"),
        root.get<float>("a"),
        root.get<float>("T_0"),
        root.get<float>("tau"),
        root.get<int>("S_o"),
        root.get<int>("S_d"),
        root.get<int>("S_out"),
        root.get<int>("S_xyz")};
}

void Params::Print()
{
    std::cout << "Parameters: " << std::endl;
    std::cout << "n"
              << " : " << n << std::endl;
    std::cout << "m"
              << " : " << m << std::endl;
    std::cout << "e"
              << " : " << e << std::endl;
    std::cout << "R"
              << " : " << R << std::endl;
    std::cout << "f"
              << " : " << f << std::endl;
    std::cout << "L"
              << " : " << L << std::endl;
    std::cout << "a"
              << " : " << a << std::endl;
    std::cout << "T_0"
              << " : " << T_0 << std::endl;
    std::cout << "tau"
              << " : " << tau << std::endl;
    std::cout << "S_o"
              << " : " << S_o << std::endl;
    std::cout << "S_d"
              << " : " << S_d << std::endl;
    std::cout << "S_out"
              << " : " << S_out << std::endl;
    std::cout << "S_xyz"
              << " : " << S_xyz << std::endl;
}