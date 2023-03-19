cmake_minimum_required(VERSION 3.24)
project(projClionVer)

set(CMAKE_CXX_STANDARD 23)

add_executable(projClionVer sourceFiles/main.cpp headerFiles/account.h headerFiles/recipie.h sourceFiles/account.cpp sourceFiles/recipie.cpp headerFiles/collection.h sourceFiles/processes.cpp headerFiles/processes.h accountsF sourceFiles/fileManager.cpp headerFiles/fileManager.h headerFiles/objectNotFoundExeption.h)
