cmake_minimum_required(VERSION 3.13)


project(ghostminer)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
	set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt5 COMPONENTS Widgets)

add_executable(ghostminer
	src/main.cpp
	)
install(TARGETS ghostminer 
	RUNTIME DESTINATION bin
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib/static)
target_link_libraries(ghostminer pthread Qt5::Widgets)
