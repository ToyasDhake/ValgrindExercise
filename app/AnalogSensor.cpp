#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples)
{
}

AnalogSensor::~AnalogSensor()
{
}

int AnalogSensor::Read()
{
    // One solution is not using old C++ style pointer
    std::vector<int> readings = std::vector<int>(mSamples, 10);

    double result = 0;
    for(auto&& temp:readings)
        result += temp/readings.size();
    return result;
}
/**
* Another solution is to just delete the pointer create by hand. If one doesn't 
* want to modify the code.
*/

