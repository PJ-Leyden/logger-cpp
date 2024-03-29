// File: logger.hpp
// Name: P.J. Leyden
// Date: August 27th, 2019

#ifndef LOGGER_DEV_HPP
#define LOGGER_DEV_HPP

#include <string>
#include <chrono>

class Logger{
private: 
	Logger(){};

public:
	static Logger& get_instance(){
		static Logger instance;
		return instance;
	};

	static log_dev(std::string);
	


};

#endif