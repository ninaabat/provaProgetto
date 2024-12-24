cmake_minimum_required(VERSION 3.10)
project(EMS_Project VERSION 1.0)

# Imposta la versione di C++ da usare
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Imposta la cartella dove finiranno gli eseguibili
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Aggiunge la cartella "include" ai percorsi dove cercare i file .h
include_directories(${CMAKE_SOURCE_DIR}/include)

# Aggiunge i file sorgente .cpp in src
set(SOURCES
    ${CMAKE_SOURCE_DIR}/src/Device.cpp
    ${CMAKE_SOURCE_DIR}/src/ManualDevice.cpp
    ${CMAKE_SOURCE_DIR}/src/frigorifero.cpp
)

# Crea l'eseguibile principale con i file sorgente di test e i sorgenti della libreria
add_executable(ems_executable
    ${CMAKE_SOURCE_DIR}/main.cpp
    ${SOURCES}
)