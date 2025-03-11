#pragma once

#ifdef _WIN32
    #ifdef MODULE1_EXPORTS
        #define MODULE1_API __declspec(dllexport)
    #else
        #define MODULE1_API __declspec(dllimport)
    #endif
#else
    #define MODULE1_API
#endif

MODULE1_API void print_module1();