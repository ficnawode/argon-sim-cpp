#pragma once

#include <string>
#include <vector>

#include <boost/property_tree/ptree.hpp>

struct Params
{
    int n;
    float m;
    float e;
    float R;
    float f;
    float L;
    float a;
    float T_0;
    float tau;
    int S_o;
    int S_d;
    int S_out;
    int S_xyz;

    void Print();
};

class ConfigParser
{
public:
    static const Params Parse(const std::string json_config_path);
};
