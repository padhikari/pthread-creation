dnl Process this file with autoconf to produce a configure script.
AC_INIT([pthread], [0.0.2], [pabitraadhikari@gmail.com])
AM_INIT_AUTOMAKE([-Wall -Werror])
AC_PROG_CC 
AC_CONFIG_HEADERS([config.h])
AC_CHECK_LIB(pthread, pthread_create, [PTHREAD_LIBS+=-lpthread])
AC_CONFIG_FILES([
 Makefile
 src/Makefile
])
AC_OUTPUT
