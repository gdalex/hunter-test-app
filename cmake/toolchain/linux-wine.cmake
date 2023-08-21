if (NOT UNIX)
    message(FATAL_ERROR "This can be used only on Linux!")
endif()

set(CMAKE_C_COMPILER winegcc)
set(CMAKE_CXX_COMPILER wineg++)
set(CMAKE_C_LINK_EXECUTABLE wineg++)

set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)
