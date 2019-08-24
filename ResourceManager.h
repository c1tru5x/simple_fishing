#pragma once
#include <string>
#include <map>
#include "FileManager.h"

class ResourceManager
{
public:
	void add_file(const std::string& name, const char* path);


	FILE* get_file(const std::string& name)
	{
		return (m_resources_.find(name)->second);
	}

private:
	std::map<std::string, FILE*> m_resources_;

};

