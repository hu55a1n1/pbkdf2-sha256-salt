cmake_minimum_required(VERSION 3.5)
project(pbkdf2)
enable_language(C)


set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu99 -pedantic -Wall -O2 -g -I/usr/include/mysql")

set(SOURCE_FILES
        base64.h
        base64.c
        openssl_lck.h
        openssl_lck.c
        pbkdf2.h
        pbkdf2.c)
add_library(pbkdf2 ${SOURCE_FILES})