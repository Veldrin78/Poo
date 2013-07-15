cmake_minimum_required (VERSION 2.6.2)

#Déclaration du projet 
project (POO)


set (EXECUTABLE_OUTPUT_PATH bin/${CMAKE_BUILD_TYPE})

include_directories( #include the .h files
  ${POO_SOURCE_DIR}/include
)

#Génération de la liste des fichiers sources
file(
	
	GLOB_RECURSE

	source_files

	src/*
)


#Déclaration de l'exécutable
add_executable(
	
	my_exe

	${source_files}
)