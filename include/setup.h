/* include/setup.h.  Generated from setup.h.in by configure.  */
/* include/setup.h.in.  Generated from configure.ac by autoheader.  */

/* Define if you have BSD signals */
/* #undef BSD_RELIABLE_SIGNALS */

/* Set to the bufferpool size you want */
#define BUFFERPOOL (18 * MAXSENDQLENGTH)

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* The default permissions for configuration files. Set to 0 to prevent
   unrealircd from calling chmod() on the files. */
#define DEFAULT_PERMISSIONS 0600

/* Define to disable extended ban stacking (~q:~c:\#chan, etc) */
/* #undef DISABLE_STACKED_EXTBANS */

/* Define if you want to disable /set* and /chg* */
/* #undef DISABLE_USERMOD */

/* Define the location of the configuration files */
#define DPATH "/Users/christian/Documents/UnderRealm/Unreal3.2"

/* Define if you can set the core size to unlimited */
#define FORCE_CORE /**/

/* Define if you have getrusage */
#define GETRUSAGE_2 /**/

/* Define if you have gettimeofday */
#define GETTIMEOFDAY /**/

/* Define if you have the <glob.h> header file. */
#define GLOBH /**/

/* Define if you have strcasecmp */
#define GOT_STRCASECMP /**/

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the `bcmp' function. */
#define HAVE_BCMP 1

/* Define to 1 if you have the `bcopy' function. */
#define HAVE_BCOPY 1

/* Define to 1 if you have the `bzero' function. */
#define HAVE_BZERO 1

/* Define if you have a compiler with C99 variable length array support */
/* #undef HAVE_C99_VARLEN_ARRAY */

/* Define if you have crypt */
/* #undef HAVE_CRYPT */

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* Define to 1 if you have the `getrusage' function. */
#define HAVE_GETRUSAGE 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `index' function. */
#define HAVE_INDEX 1

/* Define to 1 if you have the `inet_addr' function. */
#define HAVE_INET_ADDR 1

/* Define to 1 if you have the `inet_netof' function. */
#define HAVE_INET_NETOF 1

/* Define to 1 if you have the `inet_ntoa' function. */
#define HAVE_INET_NTOA 1

/* Define to 1 if you have the `inet_ntop' function. */
#define HAVE_INET_NTOP /**/

/* Define to 1 if you have the `inet_pton' function. */
#define HAVE_INET_PTON /**/

/* Define to 1 if the system has the type `intptr_t'. */
#define HAVE_INTPTR_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `lrand48' function. */
/* #undef HAVE_LRAND48 */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define if you have PS_STRINGS */
/* #undef HAVE_PSSTRINGS */

/* Define if you have pstat */
/* #undef HAVE_PSTAT */

/* Define if you have setproctitle */
/* #undef HAVE_SETPROCTITLE */

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF /**/

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcat' function. */
#define HAVE_STRLCAT /**/

/* Define to 1 if you have the `strlcpy' function. */
#define HAVE_STRLCPY /**/

/* Define to 1 if you have the `strlncat' function. */
/* #undef HAVE_STRLNCAT */

/* Define to 1 if you have the `strtok' function. */
#define HAVE_STRTOK 1

/* Define to 1 if you have the `strtoken' function. */
/* #undef HAVE_STRTOKEN */

/* Define to 1 if you have the `strtoul' function. */
#define HAVE_STRTOUL 1

/* Define to 1 if you have the `syslog' function. */
#define HAVE_SYSLOG /**/

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the `times' function. */
/* #undef HAVE_TIMES */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF /**/

/* Define to 1 if you have the `vsyslog' function. */
#define HAVE_VSYSLOG /**/

/* Define if you want IPv6 enabled */
/* #undef INET6 */

/* Set to the listen backlog size you want */
#define LISTEN_SIZE 5

/* Define if you want modes shown in /list */
#define LIST_SHOW_MODES /**/

/* Define if rlim_t is long long */
#define LONG_LONG_RLIM_T /**/

/* Define if you have lrand48 */
/* #undef LRADN48 */

/* Define to <malloc.h> you need malloc.h. */
/* #undef MALLOCH */

/* Set to the max connections you want */
#define MAXCONNECTIONS 1024

/* Set to the max sendq you want */
#define MAXSENDQLENGTH 3000000

/* Define if you have O_NDELAY */
/* #undef NBLOCK_BSD */

/* Define if you have O_NONBLOCK */
#define NBLOCK_POSIX /**/

/* Define if you have FIONBIO */
/* #undef NBLOCK_SYSV */

/* Define if you don't have bcmp */
/* #undef NEED_BCMP */

/* Define if you don't have bcopy */
/* #undef NEED_BCOPY */

/* Define if you need bzero */
/* #undef NEED_BZERO */

/* Define if you need inet_addr */
/* #undef NEED_INET_ADDR */

/* Define if you need inet_netof */
/* #undef NEED_INET_NETOF */

/* Define if you need inet_ntoa */
/* #undef NEED_INET_NTOA */

/* Define if you need the strerror function. */
/* #undef NEED_STRERROR */

/* Define if you need the strtok function. */
/* #undef NEED_STRTOK */

/* Define if you need the strtoken function. */
#define NEED_STRTOKEN /**/

/* Set to the nickname history length you want */
#define NICKNAMEHISTORYLENGTH 2000

/* Define if you do not have the index function. */
/* #undef NOINDEX */

/* Define if you want spoof protection */
#define NOSPOOF /**/

/* Define to 1 if your system has no in6addr_any. */
/* #undef NO_IN6ADDR_ANY */

/* Define if you want OperOverride disabled */
/* #undef NO_OPEROVERRIDE */

/* Define if you want opers to have to use /invite to join +s/+p channels */
/* #undef OPEROVERRIDE_VERIFY */

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "http://bugs.unrealircd.org/"

/* Define to the full name of this package. */
#define PACKAGE_NAME "unrealircd"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "unrealircd 3.2.8.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "unrealircd"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://unrealircd.org/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "3.2.8.1"

/* Define if you have the <sys/param.h> header file. */
#define PARAMH /**/

/* Define if you have POSIX signals */
#define POSIX_SIGNALS /**/

/* Define if you want +a/+q prefixes */
#define PREFIX_AQ /**/

/* Define if you have the <sys/rusage.h> header file. */
/* #undef RUSAGEH */

/* Define to 1 if the `setpgrp' function takes no argument. */
#define SETPGRP_VOID 1

/* Define if you want users to be notified when their shun is removed */
/* #undef SHUN_NOTICES */

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `rlim_t', as computed by sizeof. */
#define SIZEOF_RLIM_T 8

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* Define the location of the executable */
#define SPATH "/Users/christian/Documents/UnderRealm/Unreal3.2/src/ircd"

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Link... statically(?) (defining this macro will probably cause the build
   tofail) */
/* #undef STATIC_LINKING */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define if you have the <stddef.h> header file. */
#define STDDEFH /**/

/* Define if you have the <stdlib.h> header file. */
#define STDLIBH /**/

/* Define if you have the <string.h> header file. */
#define STRINGH /**/

/* Define if you have the <strings.h> header file. */
#define STRINGSH /**/

/* Define if you have the <sys/syslog.h> header file. */
#define SYSSYSLOGH /**/

/* Define if you have SYSV signals */
/* #undef SYSV_UNRELIABLE_SIGNALS */

/* Define if you have times */
/* #undef TIMES_2 */

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Define if you want nick!user@host shown for the topic setter */
/* #undef TOPIC_NICK_IS_NUHOST */

/* Define if your system prepends an underscore to symbols */
/* #undef UNDERSCORE */

/* Define if you have the <unistd.h> header file. */
#define UNISTDH /**/

/* Define if you have libcurl installed to get remote includes and MOTD
   support */
/* #undef USE_LIBCURL */

/* Define if you want to allow SSL connections */
/* #undef USE_SSL */

/* Define if you have zlib and want zip links support. */
/* #undef ZIP_LINKS */

/* Define if you are compiling unrealircd on Sun's (or Oracle's?) Solaris */
/* #undef _SOLARIS */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `short' if <sys/types.h> does not define. */
/* #undef int16_t */

/* Define to `long' if <sys/types.h> does not define. */
/* #undef int32_t */

/* Define to the type of a signed integer type wide enough to hold a pointer,
   if such a type exists, and if the system does not define it. */
/* #undef intptr_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `unsigned short' if <sys/types.h> does not define. */
/* #undef u_int16_t */

/* Define to `unsigned long' if <sys/types.h> does not define. */
/* #undef u_int32_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */
