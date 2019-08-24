#include "FileManager.h"

FILE* load_file(const char* file_path)
{
	FILE* file_ptr;
	errno_t err;

	if((err = fopen_s(&file_ptr,file_path, "r")) != 0)
	{
		fprintf(stderr, "error opening %s\n", file_path);
	}

	return file_ptr;
}
