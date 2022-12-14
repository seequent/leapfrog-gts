/* config.h.win32: Handcrafted for Microsoft C */

/* Define if you need to in order for stat and other things to work.  */
/* #undef _POSIX_SOURCE */

/* Define if you have the ANSI C header files.  */
#define STDC_HEADERS 1

#define GTS_MAJOR_VERSION 0
#define GTS_MINOR_VERSION 7
#define GTS_MICRO_VERSION 6
#define GTS_INTERFACE_AGE 0
#define GTS_BINARY_AGE 0

/* Define if you have the <floatingpoint.h> header file.  */
/* #undef HAVE_FLOATINGPOINT_H */

/* Define if you have the <fpu_control.h> header file.  */
/* #undef HAVE_FPU_CONTROL_H */

/* Define if this is Win32, possibly using the Cygwin emulation layer. */
#define WIN32 1

/* Define if this is Win32 without Cygwin.  */
#define NATIVE_WIN32 1

#ifndef M_PI
# define M_PI 3.14159265359
#endif /* not M_PI */
