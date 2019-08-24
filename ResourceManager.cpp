#include "ResourceManager.h"


void ResourceManager::add_file(const std::string& name, const char* path)
{
	FILE* file = load_file(path);
	m_resources_.emplace(name, file);
}
