CMAKE_MINIMUM_REQUIRED(VERSION 3.10)
PROJECT(ZSpireFramework)

SET(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "./cmake")

FIND_PACKAGE(SDL2 REQUIRED)
FIND_PACKAGE(OpenGL REQUIRED)
FIND_PACKAGE(GLEW REQUIRED)
FIND_PACKAGE(ASSIMP REQUIRED)
FIND_PACKAGE(OpenAL REQUIRED)
FIND_PACKAGE(ALUT REQUIRED)

INCLUDE_DIRECTORIES(
	${SDL2_INCLUDE_DIR}
	${OPENGL_INCLUDE_DIR}
	${GLEW_INCLUDE_DIRS}
	${ASSIMP_INCLUDE_DIRS}
	${OPENAL_INCLUDE_DIR}
	${ALUT_INCLUDE_DIR}
	includes)

SET(CMAKE_CXX_STANDARD 17)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -fpermissive -c")

ADD_LIBRARY(ZSpireFramework STATIC
	src/zs-app.cpp
	src/zs-audio-manager.cpp
	src/zs-audio-source.cpp
	src/zs-camera.cpp
	src/zs-deffered-render.cpp
	src/zs-errors-checker.cpp
	src/zs-forward-render.cpp
	src/zs-game-object.cpp
	src/zs-input.cpp
	src/zs-light.cpp
	src/zs-logger.cpp
	src/zs-math.cpp
	src/zs-mesh.cpp
	src/zs-mesh-loader.cpp
	src/zs-scene.cpp
	src/zs-shader.cpp
	src/zs-text-renderer.cpp
	src/zs-texture.cpp
	src/zs-transform.cpp
	src/zs-ui.cpp
	src/zs-vulkan.cpp)

TARGET_LINK_LIBRARIES(
	ZSpireFramework
	${SDL2_LIBRARY}
	${OPENGL_LIBRARY}
	${GLEW_LIBRARIES}
	${ASSIMP_LIBRARIES}
	${OPENAL_LIBRARY}
	${ALUT_LIBRARIES})
