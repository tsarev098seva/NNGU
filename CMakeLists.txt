cmake_minimum_required(VERSION 3.35) #Проверка версии CMake.

set(NNGU TestApplication) #Создаем обычную локальную переменную с именем проекта
project(${NNGU}) # Название проекта

set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Configs" FORCE) #Создается переменная CMAKE_CONFIGURATION_TYPES со значением "Debug;Release" и меткой/разделом Configs, переменная сохраниется в специальном файле доступном из всех файлов,
if(NOT CMAKE_BUILD_TYPE) # проверка имеющихся у компилятора вариантов сборки
  set(CMAKE_BUILD_TYPE Release) #Если нет то устанавливаем Release
endif()

#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Birchlib) #Добавляем директорию "${CMAKE_CURRENT_SOURCE_DIR}/vectorlib" в дополняемые каталоги включаемых файлов
#${CMAKE_CURRENT_SOURCE_DIR} - стандартная переменная с адресом рабочей директории


file(GLOB hdrs "${CMAKE_CURRENT_SOURCE_DIR}/TestApplication/*.h*") #Добавляем в переменную hdrs все файлы с расширением .h
file(GLOB srcs "${CMAKE_CURRENT_SOURCE_DIR}/TestApplication/*.c*") #Добавляем в переменную srcs все файлы с расширением .c

add_executable(${NNGU} ${srcs} ${hdrs}) #Создаем проект с именем из переменной ${NNGU}, в него добавляются файлы из переменных ${srcs} и ${hdrs}

