#include <stdio.h>

#ifdef OC_DEBUG

	#define RED     "\x1b[31m"
	#define GREEN   "\x1b[32m"
	#define YELLOW  "\x1b[33m"
	#define BLUE    "\x1b[34m"
	#define RESET   "\x1b[0m"

	#define LOG_ERROR(msg, ...)		printf(RED "ERROR: " msg RESET "\n", ##__VA_ARGS__);
	#define LOG_WARN(msg, ...)		printf(YELLOW "WARNING: " msg RESET "\n", ##__VA_ARGS__);
	#define LOG_DEBUG(msg, ...)		printf(BLUE "DEBUG: " msg RESET "\n", ##__VA_ARGS__);
	#define LOG_INFO(msg, ...)		printf(GREEN "INFO: " msg RESET "\n", ##__VA_ARGS__);

#endif