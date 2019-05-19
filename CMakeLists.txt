
add_executable(main main.c)
add_executable(suiteSyracuse suiteSyracuse.c)
add_executable(cc1exo2 cc1exo2.c)
add_executable(pgcd pgcd.c)
add_executable(dm1 dms/dm1.c)
add_executable(dm1partie0 dms/dm1partie0.c)
add_executable(dm1partie1 dms/dm1partie1.c)
add_executable(functions exam0/functions.c)

target_link_libraries(Introduction-To-C gtest gtest_main)