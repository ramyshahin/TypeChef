#define __USE_GNU
#ifdef CONFIG_FEATURE_TOP_SMP_CPU
  #define CONFIG_FEATURE_TOP_CPU_USAGE_PERCENTAGE
#endif
#ifdef CONFIG_FEATURE_TOP_CPU_GLOBAL_PERCENTS
  #define CONFIG_FEATURE_TOP_CPU_USAGE_PERCENTAGE
#endif
#define BB_VER "1.8.5"
#define BB_BT ""
#define CONFIG_DEFAULT_DEPMOD_FILE ""


#ifdef CONFIG_HAVE_DOT_CONFIG
   #define ENABLE_HAVE_DOT_CONFIG 1
   #define IF_HAVE_DOT_CONFIG(...) __VA_ARGS__
   #define IF_NOT_HAVE_DOT_CONFIG(...)
#else
   #define ENABLE_HAVE_DOT_CONFIG 0
   #define IF_NOT_HAVE_DOT_CONFIG(...) __VA_ARGS__
   #define IF_HAVE_DOT_CONFIG(...)
#endif

#ifdef CONFIG_DESKTOP
   #define ENABLE_DESKTOP 1
   #define IF_DESKTOP(...) __VA_ARGS__
   #define IF_NOT_DESKTOP(...)
#else
   #define ENABLE_DESKTOP 0
   #define IF_NOT_DESKTOP(...) __VA_ARGS__
   #define IF_DESKTOP(...)
#endif

#ifdef CONFIG_EXTRA_COMPAT
   #define ENABLE_EXTRA_COMPAT 1
   #define IF_EXTRA_COMPAT(...) __VA_ARGS__
   #define IF_NOT_EXTRA_COMPAT(...)
#else
   #define ENABLE_EXTRA_COMPAT 0
   #define IF_NOT_EXTRA_COMPAT(...) __VA_ARGS__
   #define IF_EXTRA_COMPAT(...)
#endif

#ifdef CONFIG_INCLUDE_SUSv2
   #define ENABLE_INCLUDE_SUSv2 1
   #define IF_INCLUDE_SUSv2(...) __VA_ARGS__
   #define IF_NOT_INCLUDE_SUSv2(...)
#else
   #define ENABLE_INCLUDE_SUSv2 0
   #define IF_NOT_INCLUDE_SUSv2(...) __VA_ARGS__
   #define IF_INCLUDE_SUSv2(...)
#endif

#ifdef CONFIG_USE_PORTABLE_CODE
   #define ENABLE_USE_PORTABLE_CODE 1
   #define IF_USE_PORTABLE_CODE(...) __VA_ARGS__
   #define IF_NOT_USE_PORTABLE_CODE(...)
#else
   #define ENABLE_USE_PORTABLE_CODE 0
   #define IF_NOT_USE_PORTABLE_CODE(...) __VA_ARGS__
   #define IF_USE_PORTABLE_CODE(...)
#endif

#ifdef CONFIG_PLATFORM_LINUX
   #define ENABLE_PLATFORM_LINUX 1
   #define IF_PLATFORM_LINUX(...) __VA_ARGS__
   #define IF_NOT_PLATFORM_LINUX(...)
#else
   #define ENABLE_PLATFORM_LINUX 0
   #define IF_NOT_PLATFORM_LINUX(...) __VA_ARGS__
   #define IF_PLATFORM_LINUX(...)
#endif

#ifdef CONFIG_FEATURE_BUFFERS_USE_MALLOC
   #define ENABLE_FEATURE_BUFFERS_USE_MALLOC 1
   #define IF_FEATURE_BUFFERS_USE_MALLOC(...) __VA_ARGS__
   #define IF_NOT_FEATURE_BUFFERS_USE_MALLOC(...)
#else
   #define ENABLE_FEATURE_BUFFERS_USE_MALLOC 0
   #define IF_NOT_FEATURE_BUFFERS_USE_MALLOC(...) __VA_ARGS__
   #define IF_FEATURE_BUFFERS_USE_MALLOC(...)
#endif

#ifdef CONFIG_FEATURE_BUFFERS_GO_ON_STACK
   #define ENABLE_FEATURE_BUFFERS_GO_ON_STACK 1
   #define IF_FEATURE_BUFFERS_GO_ON_STACK(...) __VA_ARGS__
   #define IF_NOT_FEATURE_BUFFERS_GO_ON_STACK(...)
#else
   #define ENABLE_FEATURE_BUFFERS_GO_ON_STACK 0
   #define IF_NOT_FEATURE_BUFFERS_GO_ON_STACK(...) __VA_ARGS__
   #define IF_FEATURE_BUFFERS_GO_ON_STACK(...)
#endif

#ifdef CONFIG_FEATURE_BUFFERS_GO_IN_BSS
   #define ENABLE_FEATURE_BUFFERS_GO_IN_BSS 1
   #define IF_FEATURE_BUFFERS_GO_IN_BSS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_BUFFERS_GO_IN_BSS(...)
#else
   #define ENABLE_FEATURE_BUFFERS_GO_IN_BSS 0
   #define IF_NOT_FEATURE_BUFFERS_GO_IN_BSS(...) __VA_ARGS__
   #define IF_FEATURE_BUFFERS_GO_IN_BSS(...)
#endif

#ifdef CONFIG_SHOW_USAGE
   #define ENABLE_SHOW_USAGE 1
   #define IF_SHOW_USAGE(...) __VA_ARGS__
   #define IF_NOT_SHOW_USAGE(...)
#else
   #define ENABLE_SHOW_USAGE 0
   #define IF_NOT_SHOW_USAGE(...) __VA_ARGS__
   #define IF_SHOW_USAGE(...)
#endif

#ifdef CONFIG_FEATURE_VERBOSE_USAGE
   #define ENABLE_FEATURE_VERBOSE_USAGE 1
   #define IF_FEATURE_VERBOSE_USAGE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VERBOSE_USAGE(...)
#else
   #define ENABLE_FEATURE_VERBOSE_USAGE 0
   #define IF_NOT_FEATURE_VERBOSE_USAGE(...) __VA_ARGS__
   #define IF_FEATURE_VERBOSE_USAGE(...)
#endif

#ifdef CONFIG_FEATURE_COMPRESS_USAGE
   #define ENABLE_FEATURE_COMPRESS_USAGE 1
   #define IF_FEATURE_COMPRESS_USAGE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_COMPRESS_USAGE(...)
#else
   #define ENABLE_FEATURE_COMPRESS_USAGE 0
   #define IF_NOT_FEATURE_COMPRESS_USAGE(...) __VA_ARGS__
   #define IF_FEATURE_COMPRESS_USAGE(...)
#endif

#ifdef CONFIG_FEATURE_INSTALLER
   #define ENABLE_FEATURE_INSTALLER 1
   #define IF_FEATURE_INSTALLER(...) __VA_ARGS__
   #define IF_NOT_FEATURE_INSTALLER(...)
#else
   #define ENABLE_FEATURE_INSTALLER 0
   #define IF_NOT_FEATURE_INSTALLER(...) __VA_ARGS__
   #define IF_FEATURE_INSTALLER(...)
#endif

#ifdef CONFIG_LOCALE_SUPPORT
   #define ENABLE_LOCALE_SUPPORT 1
   #define IF_LOCALE_SUPPORT(...) __VA_ARGS__
   #define IF_NOT_LOCALE_SUPPORT(...)
#else
   #define ENABLE_LOCALE_SUPPORT 0
   #define IF_NOT_LOCALE_SUPPORT(...) __VA_ARGS__
   #define IF_LOCALE_SUPPORT(...)
#endif

#ifdef CONFIG_UNICODE_SUPPORT
   #define ENABLE_UNICODE_SUPPORT 1
   #define IF_UNICODE_SUPPORT(...) __VA_ARGS__
   #define IF_NOT_UNICODE_SUPPORT(...)
#else
   #define ENABLE_UNICODE_SUPPORT 0
   #define IF_NOT_UNICODE_SUPPORT(...) __VA_ARGS__
   #define IF_UNICODE_SUPPORT(...)
#endif

#ifdef CONFIG_UNICODE_USING_LOCALE
   #define ENABLE_UNICODE_USING_LOCALE 1
   #define IF_UNICODE_USING_LOCALE(...) __VA_ARGS__
   #define IF_NOT_UNICODE_USING_LOCALE(...)
#else
   #define ENABLE_UNICODE_USING_LOCALE 0
   #define IF_NOT_UNICODE_USING_LOCALE(...) __VA_ARGS__
   #define IF_UNICODE_USING_LOCALE(...)
#endif

#ifdef CONFIG_FEATURE_CHECK_UNICODE_IN_ENV
   #define ENABLE_FEATURE_CHECK_UNICODE_IN_ENV 1
   #define IF_FEATURE_CHECK_UNICODE_IN_ENV(...) __VA_ARGS__
   #define IF_NOT_FEATURE_CHECK_UNICODE_IN_ENV(...)
#else
   #define ENABLE_FEATURE_CHECK_UNICODE_IN_ENV 0
   #define IF_NOT_FEATURE_CHECK_UNICODE_IN_ENV(...) __VA_ARGS__
   #define IF_FEATURE_CHECK_UNICODE_IN_ENV(...)
#endif

#ifdef CONFIG_SUBST_WCHAR
   #define ENABLE_SUBST_WCHAR 1
   #define IF_SUBST_WCHAR(...) __VA_ARGS__
   #define IF_NOT_SUBST_WCHAR(...)
#else
   #define ENABLE_SUBST_WCHAR 0
   #define IF_NOT_SUBST_WCHAR(...) __VA_ARGS__
   #define IF_SUBST_WCHAR(...)
#endif

#ifdef CONFIG_LAST_SUPPORTED_WCHAR
   #define ENABLE_LAST_SUPPORTED_WCHAR 1
   #define IF_LAST_SUPPORTED_WCHAR(...) __VA_ARGS__
   #define IF_NOT_LAST_SUPPORTED_WCHAR(...)
#else
   #define ENABLE_LAST_SUPPORTED_WCHAR 0
   #define IF_NOT_LAST_SUPPORTED_WCHAR(...) __VA_ARGS__
   #define IF_LAST_SUPPORTED_WCHAR(...)
#endif

#ifdef CONFIG_UNICODE_COMBINING_WCHARS
   #define ENABLE_UNICODE_COMBINING_WCHARS 1
   #define IF_UNICODE_COMBINING_WCHARS(...) __VA_ARGS__
   #define IF_NOT_UNICODE_COMBINING_WCHARS(...)
#else
   #define ENABLE_UNICODE_COMBINING_WCHARS 0
   #define IF_NOT_UNICODE_COMBINING_WCHARS(...) __VA_ARGS__
   #define IF_UNICODE_COMBINING_WCHARS(...)
#endif

#ifdef CONFIG_UNICODE_WIDE_WCHARS
   #define ENABLE_UNICODE_WIDE_WCHARS 1
   #define IF_UNICODE_WIDE_WCHARS(...) __VA_ARGS__
   #define IF_NOT_UNICODE_WIDE_WCHARS(...)
#else
   #define ENABLE_UNICODE_WIDE_WCHARS 0
   #define IF_NOT_UNICODE_WIDE_WCHARS(...) __VA_ARGS__
   #define IF_UNICODE_WIDE_WCHARS(...)
#endif

#ifdef CONFIG_UNICODE_BIDI_SUPPORT
   #define ENABLE_UNICODE_BIDI_SUPPORT 1
   #define IF_UNICODE_BIDI_SUPPORT(...) __VA_ARGS__
   #define IF_NOT_UNICODE_BIDI_SUPPORT(...)
#else
   #define ENABLE_UNICODE_BIDI_SUPPORT 0
   #define IF_NOT_UNICODE_BIDI_SUPPORT(...) __VA_ARGS__
   #define IF_UNICODE_BIDI_SUPPORT(...)
#endif

#ifdef CONFIG_UNICODE_NEUTRAL_TABLE
   #define ENABLE_UNICODE_NEUTRAL_TABLE 1
   #define IF_UNICODE_NEUTRAL_TABLE(...) __VA_ARGS__
   #define IF_NOT_UNICODE_NEUTRAL_TABLE(...)
#else
   #define ENABLE_UNICODE_NEUTRAL_TABLE 0
   #define IF_NOT_UNICODE_NEUTRAL_TABLE(...) __VA_ARGS__
   #define IF_UNICODE_NEUTRAL_TABLE(...)
#endif

#ifdef CONFIG_UNICODE_PRESERVE_BROKEN
   #define ENABLE_UNICODE_PRESERVE_BROKEN 1
   #define IF_UNICODE_PRESERVE_BROKEN(...) __VA_ARGS__
   #define IF_NOT_UNICODE_PRESERVE_BROKEN(...)
#else
   #define ENABLE_UNICODE_PRESERVE_BROKEN 0
   #define IF_NOT_UNICODE_PRESERVE_BROKEN(...) __VA_ARGS__
   #define IF_UNICODE_PRESERVE_BROKEN(...)
#endif

#ifdef CONFIG_LONG_OPTS
   #define ENABLE_LONG_OPTS 1
   #define IF_LONG_OPTS(...) __VA_ARGS__
   #define IF_NOT_LONG_OPTS(...)
#else
   #define ENABLE_LONG_OPTS 0
   #define IF_NOT_LONG_OPTS(...) __VA_ARGS__
   #define IF_LONG_OPTS(...)
#endif

#ifdef CONFIG_FEATURE_DEVPTS
   #define ENABLE_FEATURE_DEVPTS 1
   #define IF_FEATURE_DEVPTS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_DEVPTS(...)
#else
   #define ENABLE_FEATURE_DEVPTS 0
   #define IF_NOT_FEATURE_DEVPTS(...) __VA_ARGS__
   #define IF_FEATURE_DEVPTS(...)
#endif

#ifdef CONFIG_FEATURE_CLEAN_UP
   #define ENABLE_FEATURE_CLEAN_UP 1
   #define IF_FEATURE_CLEAN_UP(...) __VA_ARGS__
   #define IF_NOT_FEATURE_CLEAN_UP(...)
#else
   #define ENABLE_FEATURE_CLEAN_UP 0
   #define IF_NOT_FEATURE_CLEAN_UP(...) __VA_ARGS__
   #define IF_FEATURE_CLEAN_UP(...)
#endif

#ifdef CONFIG_FEATURE_UTMP
   #define ENABLE_FEATURE_UTMP 1
   #define IF_FEATURE_UTMP(...) __VA_ARGS__
   #define IF_NOT_FEATURE_UTMP(...)
#else
   #define ENABLE_FEATURE_UTMP 0
   #define IF_NOT_FEATURE_UTMP(...) __VA_ARGS__
   #define IF_FEATURE_UTMP(...)
#endif

#ifdef CONFIG_FEATURE_WTMP
   #define ENABLE_FEATURE_WTMP 1
   #define IF_FEATURE_WTMP(...) __VA_ARGS__
   #define IF_NOT_FEATURE_WTMP(...)
#else
   #define ENABLE_FEATURE_WTMP 0
   #define IF_NOT_FEATURE_WTMP(...) __VA_ARGS__
   #define IF_FEATURE_WTMP(...)
#endif

#ifdef CONFIG_FEATURE_PIDFILE
   #define ENABLE_FEATURE_PIDFILE 1
   #define IF_FEATURE_PIDFILE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_PIDFILE(...)
#else
   #define ENABLE_FEATURE_PIDFILE 0
   #define IF_NOT_FEATURE_PIDFILE(...) __VA_ARGS__
   #define IF_FEATURE_PIDFILE(...)
#endif

#ifdef CONFIG_FEATURE_SUID
   #define ENABLE_FEATURE_SUID 1
   #define IF_FEATURE_SUID(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SUID(...)
#else
   #define ENABLE_FEATURE_SUID 0
   #define IF_NOT_FEATURE_SUID(...) __VA_ARGS__
   #define IF_FEATURE_SUID(...)
#endif

#ifdef CONFIG_FEATURE_SUID_CONFIG
   #define ENABLE_FEATURE_SUID_CONFIG 1
   #define IF_FEATURE_SUID_CONFIG(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SUID_CONFIG(...)
#else
   #define ENABLE_FEATURE_SUID_CONFIG 0
   #define IF_NOT_FEATURE_SUID_CONFIG(...) __VA_ARGS__
   #define IF_FEATURE_SUID_CONFIG(...)
#endif

#ifdef CONFIG_FEATURE_SUID_CONFIG_QUIET
   #define ENABLE_FEATURE_SUID_CONFIG_QUIET 1
   #define IF_FEATURE_SUID_CONFIG_QUIET(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SUID_CONFIG_QUIET(...)
#else
   #define ENABLE_FEATURE_SUID_CONFIG_QUIET 0
   #define IF_NOT_FEATURE_SUID_CONFIG_QUIET(...) __VA_ARGS__
   #define IF_FEATURE_SUID_CONFIG_QUIET(...)
#endif

#ifdef CONFIG_SELINUX
   #define ENABLE_SELINUX 1
   #define IF_SELINUX(...) __VA_ARGS__
   #define IF_NOT_SELINUX(...)
#else
   #define ENABLE_SELINUX 0
   #define IF_NOT_SELINUX(...) __VA_ARGS__
   #define IF_SELINUX(...)
#endif

#ifdef CONFIG_FEATURE_PREFER_APPLETS
   #define ENABLE_FEATURE_PREFER_APPLETS 1
   #define IF_FEATURE_PREFER_APPLETS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_PREFER_APPLETS(...)
#else
   #define ENABLE_FEATURE_PREFER_APPLETS 0
   #define IF_NOT_FEATURE_PREFER_APPLETS(...) __VA_ARGS__
   #define IF_FEATURE_PREFER_APPLETS(...)
#endif

#ifdef CONFIG_BUSYBOX_EXEC_PATH
   #define ENABLE_BUSYBOX_EXEC_PATH 1
   #define IF_BUSYBOX_EXEC_PATH(...) __VA_ARGS__
   #define IF_NOT_BUSYBOX_EXEC_PATH(...)
#else
   #define ENABLE_BUSYBOX_EXEC_PATH 0
   #define IF_NOT_BUSYBOX_EXEC_PATH(...) __VA_ARGS__
   #define IF_BUSYBOX_EXEC_PATH(...)
#endif

#ifdef CONFIG_FEATURE_SYSLOG
   #define ENABLE_FEATURE_SYSLOG 1
   #define IF_FEATURE_SYSLOG(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SYSLOG(...)
#else
   #define ENABLE_FEATURE_SYSLOG 0
   #define IF_NOT_FEATURE_SYSLOG(...) __VA_ARGS__
   #define IF_FEATURE_SYSLOG(...)
#endif

#ifdef CONFIG_FEATURE_HAVE_RPC
   #define ENABLE_FEATURE_HAVE_RPC 1
   #define IF_FEATURE_HAVE_RPC(...) __VA_ARGS__
   #define IF_NOT_FEATURE_HAVE_RPC(...)
#else
   #define ENABLE_FEATURE_HAVE_RPC 0
   #define IF_NOT_FEATURE_HAVE_RPC(...) __VA_ARGS__
   #define IF_FEATURE_HAVE_RPC(...)
#endif

#ifdef CONFIG_STATIC
   #define ENABLE_STATIC 1
   #define IF_STATIC(...) __VA_ARGS__
   #define IF_NOT_STATIC(...)
#else
   #define ENABLE_STATIC 0
   #define IF_NOT_STATIC(...) __VA_ARGS__
   #define IF_STATIC(...)
#endif

#ifdef CONFIG_PIE
   #define ENABLE_PIE 1
   #define IF_PIE(...) __VA_ARGS__
   #define IF_NOT_PIE(...)
#else
   #define ENABLE_PIE 0
   #define IF_NOT_PIE(...) __VA_ARGS__
   #define IF_PIE(...)
#endif

#ifdef CONFIG_NOMMU
   #define ENABLE_NOMMU 1
   #define IF_NOMMU(...) __VA_ARGS__
   #define IF_NOT_NOMMU(...)
#else
   #define ENABLE_NOMMU 0
   #define IF_NOT_NOMMU(...) __VA_ARGS__
   #define IF_NOMMU(...)
#endif

#ifdef CONFIG_BUILD_LIBBUSYBOX
   #define ENABLE_BUILD_LIBBUSYBOX 1
   #define IF_BUILD_LIBBUSYBOX(...) __VA_ARGS__
   #define IF_NOT_BUILD_LIBBUSYBOX(...)
#else
   #define ENABLE_BUILD_LIBBUSYBOX 0
   #define IF_NOT_BUILD_LIBBUSYBOX(...) __VA_ARGS__
   #define IF_BUILD_LIBBUSYBOX(...)
#endif

#ifdef CONFIG_FEATURE_INDIVIDUAL
   #define ENABLE_FEATURE_INDIVIDUAL 1
   #define IF_FEATURE_INDIVIDUAL(...) __VA_ARGS__
   #define IF_NOT_FEATURE_INDIVIDUAL(...)
#else
   #define ENABLE_FEATURE_INDIVIDUAL 0
   #define IF_NOT_FEATURE_INDIVIDUAL(...) __VA_ARGS__
   #define IF_FEATURE_INDIVIDUAL(...)
#endif

#ifdef CONFIG_FEATURE_SHARED_BUSYBOX
   #define ENABLE_FEATURE_SHARED_BUSYBOX 1
   #define IF_FEATURE_SHARED_BUSYBOX(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SHARED_BUSYBOX(...)
#else
   #define ENABLE_FEATURE_SHARED_BUSYBOX 0
   #define IF_NOT_FEATURE_SHARED_BUSYBOX(...) __VA_ARGS__
   #define IF_FEATURE_SHARED_BUSYBOX(...)
#endif

#ifdef CONFIG_LFS
   #define ENABLE_LFS 1
   #define IF_LFS(...) __VA_ARGS__
   #define IF_NOT_LFS(...)
#else
   #define ENABLE_LFS 0
   #define IF_NOT_LFS(...) __VA_ARGS__
   #define IF_LFS(...)
#endif

#ifdef CONFIG_CROSS_COMPILER_PREFIX
   #define ENABLE_CROSS_COMPILER_PREFIX 1
   #define IF_CROSS_COMPILER_PREFIX(...) __VA_ARGS__
   #define IF_NOT_CROSS_COMPILER_PREFIX(...)
#else
   #define ENABLE_CROSS_COMPILER_PREFIX 0
   #define IF_NOT_CROSS_COMPILER_PREFIX(...) __VA_ARGS__
   #define IF_CROSS_COMPILER_PREFIX(...)
#endif

#ifdef CONFIG_EXTRA_CFLAGS
   #define ENABLE_EXTRA_CFLAGS 1
   #define IF_EXTRA_CFLAGS(...) __VA_ARGS__
   #define IF_NOT_EXTRA_CFLAGS(...)
#else
   #define ENABLE_EXTRA_CFLAGS 0
   #define IF_NOT_EXTRA_CFLAGS(...) __VA_ARGS__
   #define IF_EXTRA_CFLAGS(...)
#endif

#ifdef CONFIG_DEBUG
   #define ENABLE_DEBUG 1
   #define IF_DEBUG(...) __VA_ARGS__
   #define IF_NOT_DEBUG(...)
#else
   #define ENABLE_DEBUG 0
   #define IF_NOT_DEBUG(...) __VA_ARGS__
   #define IF_DEBUG(...)
#endif

#ifdef CONFIG_DEBUG_PESSIMIZE
   #define ENABLE_DEBUG_PESSIMIZE 1
   #define IF_DEBUG_PESSIMIZE(...) __VA_ARGS__
   #define IF_NOT_DEBUG_PESSIMIZE(...)
#else
   #define ENABLE_DEBUG_PESSIMIZE 0
   #define IF_NOT_DEBUG_PESSIMIZE(...) __VA_ARGS__
   #define IF_DEBUG_PESSIMIZE(...)
#endif

#ifdef CONFIG_WERROR
   #define ENABLE_WERROR 1
   #define IF_WERROR(...) __VA_ARGS__
   #define IF_NOT_WERROR(...)
#else
   #define ENABLE_WERROR 0
   #define IF_NOT_WERROR(...) __VA_ARGS__
   #define IF_WERROR(...)
#endif

#ifdef CONFIG_NO_DEBUG_LIB
   #define ENABLE_NO_DEBUG_LIB 1
   #define IF_NO_DEBUG_LIB(...) __VA_ARGS__
   #define IF_NOT_NO_DEBUG_LIB(...)
#else
   #define ENABLE_NO_DEBUG_LIB 0
   #define IF_NOT_NO_DEBUG_LIB(...) __VA_ARGS__
   #define IF_NO_DEBUG_LIB(...)
#endif

#ifdef CONFIG_DMALLOC
   #define ENABLE_DMALLOC 1
   #define IF_DMALLOC(...) __VA_ARGS__
   #define IF_NOT_DMALLOC(...)
#else
   #define ENABLE_DMALLOC 0
   #define IF_NOT_DMALLOC(...) __VA_ARGS__
   #define IF_DMALLOC(...)
#endif

#ifdef CONFIG_EFENCE
   #define ENABLE_EFENCE 1
   #define IF_EFENCE(...) __VA_ARGS__
   #define IF_NOT_EFENCE(...)
#else
   #define ENABLE_EFENCE 0
   #define IF_NOT_EFENCE(...) __VA_ARGS__
   #define IF_EFENCE(...)
#endif

#ifdef CONFIG_INSTALL_NO_USR
   #define ENABLE_INSTALL_NO_USR 1
   #define IF_INSTALL_NO_USR(...) __VA_ARGS__
   #define IF_NOT_INSTALL_NO_USR(...)
#else
   #define ENABLE_INSTALL_NO_USR 0
   #define IF_NOT_INSTALL_NO_USR(...) __VA_ARGS__
   #define IF_INSTALL_NO_USR(...)
#endif

#ifdef CONFIG_INSTALL_APPLET_SYMLINKS
   #define ENABLE_INSTALL_APPLET_SYMLINKS 1
   #define IF_INSTALL_APPLET_SYMLINKS(...) __VA_ARGS__
   #define IF_NOT_INSTALL_APPLET_SYMLINKS(...)
#else
   #define ENABLE_INSTALL_APPLET_SYMLINKS 0
   #define IF_NOT_INSTALL_APPLET_SYMLINKS(...) __VA_ARGS__
   #define IF_INSTALL_APPLET_SYMLINKS(...)
#endif

#ifdef CONFIG_INSTALL_APPLET_HARDLINKS
   #define ENABLE_INSTALL_APPLET_HARDLINKS 1
   #define IF_INSTALL_APPLET_HARDLINKS(...) __VA_ARGS__
   #define IF_NOT_INSTALL_APPLET_HARDLINKS(...)
#else
   #define ENABLE_INSTALL_APPLET_HARDLINKS 0
   #define IF_NOT_INSTALL_APPLET_HARDLINKS(...) __VA_ARGS__
   #define IF_INSTALL_APPLET_HARDLINKS(...)
#endif

#ifdef CONFIG_INSTALL_APPLET_SCRIPT_WRAPPERS
   #define ENABLE_INSTALL_APPLET_SCRIPT_WRAPPERS 1
   #define IF_INSTALL_APPLET_SCRIPT_WRAPPERS(...) __VA_ARGS__
   #define IF_NOT_INSTALL_APPLET_SCRIPT_WRAPPERS(...)
#else
   #define ENABLE_INSTALL_APPLET_SCRIPT_WRAPPERS 0
   #define IF_NOT_INSTALL_APPLET_SCRIPT_WRAPPERS(...) __VA_ARGS__
   #define IF_INSTALL_APPLET_SCRIPT_WRAPPERS(...)
#endif

#ifdef CONFIG_INSTALL_APPLET_DONT
   #define ENABLE_INSTALL_APPLET_DONT 1
   #define IF_INSTALL_APPLET_DONT(...) __VA_ARGS__
   #define IF_NOT_INSTALL_APPLET_DONT(...)
#else
   #define ENABLE_INSTALL_APPLET_DONT 0
   #define IF_NOT_INSTALL_APPLET_DONT(...) __VA_ARGS__
   #define IF_INSTALL_APPLET_DONT(...)
#endif

#ifdef CONFIG_INSTALL_SH_APPLET_SYMLINK
   #define ENABLE_INSTALL_SH_APPLET_SYMLINK 1
   #define IF_INSTALL_SH_APPLET_SYMLINK(...) __VA_ARGS__
   #define IF_NOT_INSTALL_SH_APPLET_SYMLINK(...)
#else
   #define ENABLE_INSTALL_SH_APPLET_SYMLINK 0
   #define IF_NOT_INSTALL_SH_APPLET_SYMLINK(...) __VA_ARGS__
   #define IF_INSTALL_SH_APPLET_SYMLINK(...)
#endif

#ifdef CONFIG_INSTALL_SH_APPLET_HARDLINK
   #define ENABLE_INSTALL_SH_APPLET_HARDLINK 1
   #define IF_INSTALL_SH_APPLET_HARDLINK(...) __VA_ARGS__
   #define IF_NOT_INSTALL_SH_APPLET_HARDLINK(...)
#else
   #define ENABLE_INSTALL_SH_APPLET_HARDLINK 0
   #define IF_NOT_INSTALL_SH_APPLET_HARDLINK(...) __VA_ARGS__
   #define IF_INSTALL_SH_APPLET_HARDLINK(...)
#endif

#ifdef CONFIG_INSTALL_SH_APPLET_SCRIPT_WRAPPER
   #define ENABLE_INSTALL_SH_APPLET_SCRIPT_WRAPPER 1
   #define IF_INSTALL_SH_APPLET_SCRIPT_WRAPPER(...) __VA_ARGS__
   #define IF_NOT_INSTALL_SH_APPLET_SCRIPT_WRAPPER(...)
#else
   #define ENABLE_INSTALL_SH_APPLET_SCRIPT_WRAPPER 0
   #define IF_NOT_INSTALL_SH_APPLET_SCRIPT_WRAPPER(...) __VA_ARGS__
   #define IF_INSTALL_SH_APPLET_SCRIPT_WRAPPER(...)
#endif

#ifdef CONFIG_PREFIX
   #define ENABLE_PREFIX 1
   #define IF_PREFIX(...) __VA_ARGS__
   #define IF_NOT_PREFIX(...)
#else
   #define ENABLE_PREFIX 0
   #define IF_NOT_PREFIX(...) __VA_ARGS__
   #define IF_PREFIX(...)
#endif

#ifdef CONFIG_PASSWORD_MINLEN
   #define ENABLE_PASSWORD_MINLEN 1
   #define IF_PASSWORD_MINLEN(...) __VA_ARGS__
   #define IF_NOT_PASSWORD_MINLEN(...)
#else
   #define ENABLE_PASSWORD_MINLEN 0
   #define IF_NOT_PASSWORD_MINLEN(...) __VA_ARGS__
   #define IF_PASSWORD_MINLEN(...)
#endif

#ifdef CONFIG_MD5_SIZE_VS_SPEED
   #define ENABLE_MD5_SIZE_VS_SPEED 1
   #define IF_MD5_SIZE_VS_SPEED(...) __VA_ARGS__
   #define IF_NOT_MD5_SIZE_VS_SPEED(...)
#else
   #define ENABLE_MD5_SIZE_VS_SPEED 0
   #define IF_NOT_MD5_SIZE_VS_SPEED(...) __VA_ARGS__
   #define IF_MD5_SIZE_VS_SPEED(...)
#endif

#ifdef CONFIG_FEATURE_FAST_TOP
   #define ENABLE_FEATURE_FAST_TOP 1
   #define IF_FEATURE_FAST_TOP(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FAST_TOP(...)
#else
   #define ENABLE_FEATURE_FAST_TOP 0
   #define IF_NOT_FEATURE_FAST_TOP(...) __VA_ARGS__
   #define IF_FEATURE_FAST_TOP(...)
#endif

#ifdef CONFIG_FEATURE_ETC_NETWORKS
   #define ENABLE_FEATURE_ETC_NETWORKS 1
   #define IF_FEATURE_ETC_NETWORKS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_ETC_NETWORKS(...)
#else
   #define ENABLE_FEATURE_ETC_NETWORKS 0
   #define IF_NOT_FEATURE_ETC_NETWORKS(...) __VA_ARGS__
   #define IF_FEATURE_ETC_NETWORKS(...)
#endif

#ifdef CONFIG_FEATURE_EDITING
   #define ENABLE_FEATURE_EDITING 1
   #define IF_FEATURE_EDITING(...) __VA_ARGS__
   #define IF_NOT_FEATURE_EDITING(...)
#else
   #define ENABLE_FEATURE_EDITING 0
   #define IF_NOT_FEATURE_EDITING(...) __VA_ARGS__
   #define IF_FEATURE_EDITING(...)
#endif

#ifdef CONFIG_FEATURE_EDITING_MAX_LEN
   #define ENABLE_FEATURE_EDITING_MAX_LEN 1
   #define IF_FEATURE_EDITING_MAX_LEN(...) __VA_ARGS__
   #define IF_NOT_FEATURE_EDITING_MAX_LEN(...)
#else
   #define ENABLE_FEATURE_EDITING_MAX_LEN 0
   #define IF_NOT_FEATURE_EDITING_MAX_LEN(...) __VA_ARGS__
   #define IF_FEATURE_EDITING_MAX_LEN(...)
#endif

#ifdef CONFIG_FEATURE_EDITING_VI
   #define ENABLE_FEATURE_EDITING_VI 1
   #define IF_FEATURE_EDITING_VI(...) __VA_ARGS__
   #define IF_NOT_FEATURE_EDITING_VI(...)
#else
   #define ENABLE_FEATURE_EDITING_VI 0
   #define IF_NOT_FEATURE_EDITING_VI(...) __VA_ARGS__
   #define IF_FEATURE_EDITING_VI(...)
#endif

#ifdef CONFIG_FEATURE_EDITING_HISTORY
   #define ENABLE_FEATURE_EDITING_HISTORY 1
   #define IF_FEATURE_EDITING_HISTORY(...) __VA_ARGS__
   #define IF_NOT_FEATURE_EDITING_HISTORY(...)
#else
   #define ENABLE_FEATURE_EDITING_HISTORY 0
   #define IF_NOT_FEATURE_EDITING_HISTORY(...) __VA_ARGS__
   #define IF_FEATURE_EDITING_HISTORY(...)
#endif

#ifdef CONFIG_FEATURE_EDITING_SAVEHISTORY
   #define ENABLE_FEATURE_EDITING_SAVEHISTORY 1
   #define IF_FEATURE_EDITING_SAVEHISTORY(...) __VA_ARGS__
   #define IF_NOT_FEATURE_EDITING_SAVEHISTORY(...)
#else
   #define ENABLE_FEATURE_EDITING_SAVEHISTORY 0
   #define IF_NOT_FEATURE_EDITING_SAVEHISTORY(...) __VA_ARGS__
   #define IF_FEATURE_EDITING_SAVEHISTORY(...)
#endif

#ifdef CONFIG_FEATURE_TAB_COMPLETION
   #define ENABLE_FEATURE_TAB_COMPLETION 1
   #define IF_FEATURE_TAB_COMPLETION(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TAB_COMPLETION(...)
#else
   #define ENABLE_FEATURE_TAB_COMPLETION 0
   #define IF_NOT_FEATURE_TAB_COMPLETION(...) __VA_ARGS__
   #define IF_FEATURE_TAB_COMPLETION(...)
#endif

#ifdef CONFIG_FEATURE_USERNAME_COMPLETION
   #define ENABLE_FEATURE_USERNAME_COMPLETION 1
   #define IF_FEATURE_USERNAME_COMPLETION(...) __VA_ARGS__
   #define IF_NOT_FEATURE_USERNAME_COMPLETION(...)
#else
   #define ENABLE_FEATURE_USERNAME_COMPLETION 0
   #define IF_NOT_FEATURE_USERNAME_COMPLETION(...) __VA_ARGS__
   #define IF_FEATURE_USERNAME_COMPLETION(...)
#endif

#ifdef CONFIG_FEATURE_EDITING_FANCY_PROMPT
   #define ENABLE_FEATURE_EDITING_FANCY_PROMPT 1
   #define IF_FEATURE_EDITING_FANCY_PROMPT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_EDITING_FANCY_PROMPT(...)
#else
   #define ENABLE_FEATURE_EDITING_FANCY_PROMPT 0
   #define IF_NOT_FEATURE_EDITING_FANCY_PROMPT(...) __VA_ARGS__
   #define IF_FEATURE_EDITING_FANCY_PROMPT(...)
#endif

#ifdef CONFIG_FEATURE_EDITING_ASK_TERMINAL
   #define ENABLE_FEATURE_EDITING_ASK_TERMINAL 1
   #define IF_FEATURE_EDITING_ASK_TERMINAL(...) __VA_ARGS__
   #define IF_NOT_FEATURE_EDITING_ASK_TERMINAL(...)
#else
   #define ENABLE_FEATURE_EDITING_ASK_TERMINAL 0
   #define IF_NOT_FEATURE_EDITING_ASK_TERMINAL(...) __VA_ARGS__
   #define IF_FEATURE_EDITING_ASK_TERMINAL(...)
#endif

#ifdef CONFIG_FEATURE_NON_POSIX_CP
   #define ENABLE_FEATURE_NON_POSIX_CP 1
   #define IF_FEATURE_NON_POSIX_CP(...) __VA_ARGS__
   #define IF_NOT_FEATURE_NON_POSIX_CP(...)
#else
   #define ENABLE_FEATURE_NON_POSIX_CP 0
   #define IF_NOT_FEATURE_NON_POSIX_CP(...) __VA_ARGS__
   #define IF_FEATURE_NON_POSIX_CP(...)
#endif

#ifdef CONFIG_FEATURE_VERBOSE_CP_MESSAGE
   #define ENABLE_FEATURE_VERBOSE_CP_MESSAGE 1
   #define IF_FEATURE_VERBOSE_CP_MESSAGE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VERBOSE_CP_MESSAGE(...)
#else
   #define ENABLE_FEATURE_VERBOSE_CP_MESSAGE 0
   #define IF_NOT_FEATURE_VERBOSE_CP_MESSAGE(...) __VA_ARGS__
   #define IF_FEATURE_VERBOSE_CP_MESSAGE(...)
#endif

#ifdef CONFIG_FEATURE_COPYBUF_KB
   #define ENABLE_FEATURE_COPYBUF_KB 1
   #define IF_FEATURE_COPYBUF_KB(...) __VA_ARGS__
   #define IF_NOT_FEATURE_COPYBUF_KB(...)
#else
   #define ENABLE_FEATURE_COPYBUF_KB 0
   #define IF_NOT_FEATURE_COPYBUF_KB(...) __VA_ARGS__
   #define IF_FEATURE_COPYBUF_KB(...)
#endif

#ifdef CONFIG_MONOTONIC_SYSCALL
   #define ENABLE_MONOTONIC_SYSCALL 1
   #define IF_MONOTONIC_SYSCALL(...) __VA_ARGS__
   #define IF_NOT_MONOTONIC_SYSCALL(...)
#else
   #define ENABLE_MONOTONIC_SYSCALL 0
   #define IF_NOT_MONOTONIC_SYSCALL(...) __VA_ARGS__
   #define IF_MONOTONIC_SYSCALL(...)
#endif

#ifdef CONFIG_IOCTL_HEX2STR_ERROR
   #define ENABLE_IOCTL_HEX2STR_ERROR 1
   #define IF_IOCTL_HEX2STR_ERROR(...) __VA_ARGS__
   #define IF_NOT_IOCTL_HEX2STR_ERROR(...)
#else
   #define ENABLE_IOCTL_HEX2STR_ERROR 0
   #define IF_NOT_IOCTL_HEX2STR_ERROR(...) __VA_ARGS__
   #define IF_IOCTL_HEX2STR_ERROR(...)
#endif

#ifdef CONFIG_FEATURE_HWIB
   #define ENABLE_FEATURE_HWIB 1
   #define IF_FEATURE_HWIB(...) __VA_ARGS__
   #define IF_NOT_FEATURE_HWIB(...)
#else
   #define ENABLE_FEATURE_HWIB 0
   #define IF_NOT_FEATURE_HWIB(...) __VA_ARGS__
   #define IF_FEATURE_HWIB(...)
#endif

#ifdef CONFIG_FEATURE_SEAMLESS_XZ
   #define ENABLE_FEATURE_SEAMLESS_XZ 1
   #define IF_FEATURE_SEAMLESS_XZ(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SEAMLESS_XZ(...)
#else
   #define ENABLE_FEATURE_SEAMLESS_XZ 0
   #define IF_NOT_FEATURE_SEAMLESS_XZ(...) __VA_ARGS__
   #define IF_FEATURE_SEAMLESS_XZ(...)
#endif

#ifdef CONFIG_FEATURE_SEAMLESS_LZMA
   #define ENABLE_FEATURE_SEAMLESS_LZMA 1
   #define IF_FEATURE_SEAMLESS_LZMA(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SEAMLESS_LZMA(...)
#else
   #define ENABLE_FEATURE_SEAMLESS_LZMA 0
   #define IF_NOT_FEATURE_SEAMLESS_LZMA(...) __VA_ARGS__
   #define IF_FEATURE_SEAMLESS_LZMA(...)
#endif

#ifdef CONFIG_FEATURE_SEAMLESS_BZ2
   #define ENABLE_FEATURE_SEAMLESS_BZ2 1
   #define IF_FEATURE_SEAMLESS_BZ2(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SEAMLESS_BZ2(...)
#else
   #define ENABLE_FEATURE_SEAMLESS_BZ2 0
   #define IF_NOT_FEATURE_SEAMLESS_BZ2(...) __VA_ARGS__
   #define IF_FEATURE_SEAMLESS_BZ2(...)
#endif

#ifdef CONFIG_FEATURE_SEAMLESS_GZ
   #define ENABLE_FEATURE_SEAMLESS_GZ 1
   #define IF_FEATURE_SEAMLESS_GZ(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SEAMLESS_GZ(...)
#else
   #define ENABLE_FEATURE_SEAMLESS_GZ 0
   #define IF_NOT_FEATURE_SEAMLESS_GZ(...) __VA_ARGS__
   #define IF_FEATURE_SEAMLESS_GZ(...)
#endif

#ifdef CONFIG_FEATURE_SEAMLESS_Z
   #define ENABLE_FEATURE_SEAMLESS_Z 1
   #define IF_FEATURE_SEAMLESS_Z(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SEAMLESS_Z(...)
#else
   #define ENABLE_FEATURE_SEAMLESS_Z 0
   #define IF_NOT_FEATURE_SEAMLESS_Z(...) __VA_ARGS__
   #define IF_FEATURE_SEAMLESS_Z(...)
#endif

#ifdef CONFIG_AR
   #define ENABLE_AR 1
   #define IF_AR(...) __VA_ARGS__
   #define IF_NOT_AR(...)
#else
   #define ENABLE_AR 0
   #define IF_NOT_AR(...) __VA_ARGS__
   #define IF_AR(...)
#endif

#ifdef CONFIG_FEATURE_AR_LONG_FILENAMES
   #define ENABLE_FEATURE_AR_LONG_FILENAMES 1
   #define IF_FEATURE_AR_LONG_FILENAMES(...) __VA_ARGS__
   #define IF_NOT_FEATURE_AR_LONG_FILENAMES(...)
#else
   #define ENABLE_FEATURE_AR_LONG_FILENAMES 0
   #define IF_NOT_FEATURE_AR_LONG_FILENAMES(...) __VA_ARGS__
   #define IF_FEATURE_AR_LONG_FILENAMES(...)
#endif

#ifdef CONFIG_FEATURE_AR_CREATE
   #define ENABLE_FEATURE_AR_CREATE 1
   #define IF_FEATURE_AR_CREATE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_AR_CREATE(...)
#else
   #define ENABLE_FEATURE_AR_CREATE 0
   #define IF_NOT_FEATURE_AR_CREATE(...) __VA_ARGS__
   #define IF_FEATURE_AR_CREATE(...)
#endif

#ifdef CONFIG_BUNZIP2
   #define ENABLE_BUNZIP2 1
   #define IF_BUNZIP2(...) __VA_ARGS__
   #define IF_NOT_BUNZIP2(...)
#else
   #define ENABLE_BUNZIP2 0
   #define IF_NOT_BUNZIP2(...) __VA_ARGS__
   #define IF_BUNZIP2(...)
#endif

#ifdef CONFIG_BZIP2
   #define ENABLE_BZIP2 1
   #define IF_BZIP2(...) __VA_ARGS__
   #define IF_NOT_BZIP2(...)
#else
   #define ENABLE_BZIP2 0
   #define IF_NOT_BZIP2(...) __VA_ARGS__
   #define IF_BZIP2(...)
#endif

#ifdef CONFIG_CPIO
   #define ENABLE_CPIO 1
   #define IF_CPIO(...) __VA_ARGS__
   #define IF_NOT_CPIO(...)
#else
   #define ENABLE_CPIO 0
   #define IF_NOT_CPIO(...) __VA_ARGS__
   #define IF_CPIO(...)
#endif

#ifdef CONFIG_FEATURE_CPIO_O
   #define ENABLE_FEATURE_CPIO_O 1
   #define IF_FEATURE_CPIO_O(...) __VA_ARGS__
   #define IF_NOT_FEATURE_CPIO_O(...)
#else
   #define ENABLE_FEATURE_CPIO_O 0
   #define IF_NOT_FEATURE_CPIO_O(...) __VA_ARGS__
   #define IF_FEATURE_CPIO_O(...)
#endif

#ifdef CONFIG_FEATURE_CPIO_P
   #define ENABLE_FEATURE_CPIO_P 1
   #define IF_FEATURE_CPIO_P(...) __VA_ARGS__
   #define IF_NOT_FEATURE_CPIO_P(...)
#else
   #define ENABLE_FEATURE_CPIO_P 0
   #define IF_NOT_FEATURE_CPIO_P(...) __VA_ARGS__
   #define IF_FEATURE_CPIO_P(...)
#endif

#ifdef CONFIG_DPKG
   #define ENABLE_DPKG 1
   #define IF_DPKG(...) __VA_ARGS__
   #define IF_NOT_DPKG(...)
#else
   #define ENABLE_DPKG 0
   #define IF_NOT_DPKG(...) __VA_ARGS__
   #define IF_DPKG(...)
#endif

#ifdef CONFIG_DPKG_DEB
   #define ENABLE_DPKG_DEB 1
   #define IF_DPKG_DEB(...) __VA_ARGS__
   #define IF_NOT_DPKG_DEB(...)
#else
   #define ENABLE_DPKG_DEB 0
   #define IF_NOT_DPKG_DEB(...) __VA_ARGS__
   #define IF_DPKG_DEB(...)
#endif

#ifdef CONFIG_FEATURE_DPKG_DEB_EXTRACT_ONLY
   #define ENABLE_FEATURE_DPKG_DEB_EXTRACT_ONLY 1
   #define IF_FEATURE_DPKG_DEB_EXTRACT_ONLY(...) __VA_ARGS__
   #define IF_NOT_FEATURE_DPKG_DEB_EXTRACT_ONLY(...)
#else
   #define ENABLE_FEATURE_DPKG_DEB_EXTRACT_ONLY 0
   #define IF_NOT_FEATURE_DPKG_DEB_EXTRACT_ONLY(...) __VA_ARGS__
   #define IF_FEATURE_DPKG_DEB_EXTRACT_ONLY(...)
#endif

#ifdef CONFIG_GUNZIP
   #define ENABLE_GUNZIP 1
   #define IF_GUNZIP(...) __VA_ARGS__
   #define IF_NOT_GUNZIP(...)
#else
   #define ENABLE_GUNZIP 0
   #define IF_NOT_GUNZIP(...) __VA_ARGS__
   #define IF_GUNZIP(...)
#endif

#ifdef CONFIG_GZIP
   #define ENABLE_GZIP 1
   #define IF_GZIP(...) __VA_ARGS__
   #define IF_NOT_GZIP(...)
#else
   #define ENABLE_GZIP 0
   #define IF_NOT_GZIP(...) __VA_ARGS__
   #define IF_GZIP(...)
#endif

#ifdef CONFIG_FEATURE_GZIP_LONG_OPTIONS
   #define ENABLE_FEATURE_GZIP_LONG_OPTIONS 1
   #define IF_FEATURE_GZIP_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_GZIP_LONG_OPTIONS(...)
#else
   #define ENABLE_FEATURE_GZIP_LONG_OPTIONS 0
   #define IF_NOT_FEATURE_GZIP_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_FEATURE_GZIP_LONG_OPTIONS(...)
#endif

#ifdef CONFIG_LZOP
   #define ENABLE_LZOP 1
   #define IF_LZOP(...) __VA_ARGS__
   #define IF_NOT_LZOP(...)
#else
   #define ENABLE_LZOP 0
   #define IF_NOT_LZOP(...) __VA_ARGS__
   #define IF_LZOP(...)
#endif

#ifdef CONFIG_LZOP_COMPR_HIGH
   #define ENABLE_LZOP_COMPR_HIGH 1
   #define IF_LZOP_COMPR_HIGH(...) __VA_ARGS__
   #define IF_NOT_LZOP_COMPR_HIGH(...)
#else
   #define ENABLE_LZOP_COMPR_HIGH 0
   #define IF_NOT_LZOP_COMPR_HIGH(...) __VA_ARGS__
   #define IF_LZOP_COMPR_HIGH(...)
#endif

#ifdef CONFIG_RPM2CPIO
   #define ENABLE_RPM2CPIO 1
   #define IF_RPM2CPIO(...) __VA_ARGS__
   #define IF_NOT_RPM2CPIO(...)
#else
   #define ENABLE_RPM2CPIO 0
   #define IF_NOT_RPM2CPIO(...) __VA_ARGS__
   #define IF_RPM2CPIO(...)
#endif

#ifdef CONFIG_RPM
   #define ENABLE_RPM 1
   #define IF_RPM(...) __VA_ARGS__
   #define IF_NOT_RPM(...)
#else
   #define ENABLE_RPM 0
   #define IF_NOT_RPM(...) __VA_ARGS__
   #define IF_RPM(...)
#endif

#ifdef CONFIG_TAR
   #define ENABLE_TAR 1
   #define IF_TAR(...) __VA_ARGS__
   #define IF_NOT_TAR(...)
#else
   #define ENABLE_TAR 0
   #define IF_NOT_TAR(...) __VA_ARGS__
   #define IF_TAR(...)
#endif

#ifdef CONFIG_FEATURE_TAR_CREATE
   #define ENABLE_FEATURE_TAR_CREATE 1
   #define IF_FEATURE_TAR_CREATE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TAR_CREATE(...)
#else
   #define ENABLE_FEATURE_TAR_CREATE 0
   #define IF_NOT_FEATURE_TAR_CREATE(...) __VA_ARGS__
   #define IF_FEATURE_TAR_CREATE(...)
#endif

#ifdef CONFIG_FEATURE_TAR_AUTODETECT
   #define ENABLE_FEATURE_TAR_AUTODETECT 1
   #define IF_FEATURE_TAR_AUTODETECT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TAR_AUTODETECT(...)
#else
   #define ENABLE_FEATURE_TAR_AUTODETECT 0
   #define IF_NOT_FEATURE_TAR_AUTODETECT(...) __VA_ARGS__
   #define IF_FEATURE_TAR_AUTODETECT(...)
#endif

#ifdef CONFIG_FEATURE_TAR_FROM
   #define ENABLE_FEATURE_TAR_FROM 1
   #define IF_FEATURE_TAR_FROM(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TAR_FROM(...)
#else
   #define ENABLE_FEATURE_TAR_FROM 0
   #define IF_NOT_FEATURE_TAR_FROM(...) __VA_ARGS__
   #define IF_FEATURE_TAR_FROM(...)
#endif

#ifdef CONFIG_FEATURE_TAR_OLDGNU_COMPATIBILITY
   #define ENABLE_FEATURE_TAR_OLDGNU_COMPATIBILITY 1
   #define IF_FEATURE_TAR_OLDGNU_COMPATIBILITY(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TAR_OLDGNU_COMPATIBILITY(...)
#else
   #define ENABLE_FEATURE_TAR_OLDGNU_COMPATIBILITY 0
   #define IF_NOT_FEATURE_TAR_OLDGNU_COMPATIBILITY(...) __VA_ARGS__
   #define IF_FEATURE_TAR_OLDGNU_COMPATIBILITY(...)
#endif

#ifdef CONFIG_FEATURE_TAR_OLDSUN_COMPATIBILITY
   #define ENABLE_FEATURE_TAR_OLDSUN_COMPATIBILITY 1
   #define IF_FEATURE_TAR_OLDSUN_COMPATIBILITY(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TAR_OLDSUN_COMPATIBILITY(...)
#else
   #define ENABLE_FEATURE_TAR_OLDSUN_COMPATIBILITY 0
   #define IF_NOT_FEATURE_TAR_OLDSUN_COMPATIBILITY(...) __VA_ARGS__
   #define IF_FEATURE_TAR_OLDSUN_COMPATIBILITY(...)
#endif

#ifdef CONFIG_FEATURE_TAR_GNU_EXTENSIONS
   #define ENABLE_FEATURE_TAR_GNU_EXTENSIONS 1
   #define IF_FEATURE_TAR_GNU_EXTENSIONS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TAR_GNU_EXTENSIONS(...)
#else
   #define ENABLE_FEATURE_TAR_GNU_EXTENSIONS 0
   #define IF_NOT_FEATURE_TAR_GNU_EXTENSIONS(...) __VA_ARGS__
   #define IF_FEATURE_TAR_GNU_EXTENSIONS(...)
#endif

#ifdef CONFIG_FEATURE_TAR_LONG_OPTIONS
   #define ENABLE_FEATURE_TAR_LONG_OPTIONS 1
   #define IF_FEATURE_TAR_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TAR_LONG_OPTIONS(...)
#else
   #define ENABLE_FEATURE_TAR_LONG_OPTIONS 0
   #define IF_NOT_FEATURE_TAR_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_FEATURE_TAR_LONG_OPTIONS(...)
#endif

#ifdef CONFIG_FEATURE_TAR_TO_COMMAND
   #define ENABLE_FEATURE_TAR_TO_COMMAND 1
   #define IF_FEATURE_TAR_TO_COMMAND(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TAR_TO_COMMAND(...)
#else
   #define ENABLE_FEATURE_TAR_TO_COMMAND 0
   #define IF_NOT_FEATURE_TAR_TO_COMMAND(...) __VA_ARGS__
   #define IF_FEATURE_TAR_TO_COMMAND(...)
#endif

#ifdef CONFIG_FEATURE_TAR_UNAME_GNAME
   #define ENABLE_FEATURE_TAR_UNAME_GNAME 1
   #define IF_FEATURE_TAR_UNAME_GNAME(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TAR_UNAME_GNAME(...)
#else
   #define ENABLE_FEATURE_TAR_UNAME_GNAME 0
   #define IF_NOT_FEATURE_TAR_UNAME_GNAME(...) __VA_ARGS__
   #define IF_FEATURE_TAR_UNAME_GNAME(...)
#endif

#ifdef CONFIG_FEATURE_TAR_NOPRESERVE_TIME
   #define ENABLE_FEATURE_TAR_NOPRESERVE_TIME 1
   #define IF_FEATURE_TAR_NOPRESERVE_TIME(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TAR_NOPRESERVE_TIME(...)
#else
   #define ENABLE_FEATURE_TAR_NOPRESERVE_TIME 0
   #define IF_NOT_FEATURE_TAR_NOPRESERVE_TIME(...) __VA_ARGS__
   #define IF_FEATURE_TAR_NOPRESERVE_TIME(...)
#endif

#ifdef CONFIG_FEATURE_TAR_SELINUX
   #define ENABLE_FEATURE_TAR_SELINUX 1
   #define IF_FEATURE_TAR_SELINUX(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TAR_SELINUX(...)
#else
   #define ENABLE_FEATURE_TAR_SELINUX 0
   #define IF_NOT_FEATURE_TAR_SELINUX(...) __VA_ARGS__
   #define IF_FEATURE_TAR_SELINUX(...)
#endif

#ifdef CONFIG_UNCOMPRESS
   #define ENABLE_UNCOMPRESS 1
   #define IF_UNCOMPRESS(...) __VA_ARGS__
   #define IF_NOT_UNCOMPRESS(...)
#else
   #define ENABLE_UNCOMPRESS 0
   #define IF_NOT_UNCOMPRESS(...) __VA_ARGS__
   #define IF_UNCOMPRESS(...)
#endif

#ifdef CONFIG_UNLZMA
   #define ENABLE_UNLZMA 1
   #define IF_UNLZMA(...) __VA_ARGS__
   #define IF_NOT_UNLZMA(...)
#else
   #define ENABLE_UNLZMA 0
   #define IF_NOT_UNLZMA(...) __VA_ARGS__
   #define IF_UNLZMA(...)
#endif

#ifdef CONFIG_FEATURE_LZMA_FAST
   #define ENABLE_FEATURE_LZMA_FAST 1
   #define IF_FEATURE_LZMA_FAST(...) __VA_ARGS__
   #define IF_NOT_FEATURE_LZMA_FAST(...)
#else
   #define ENABLE_FEATURE_LZMA_FAST 0
   #define IF_NOT_FEATURE_LZMA_FAST(...) __VA_ARGS__
   #define IF_FEATURE_LZMA_FAST(...)
#endif

#ifdef CONFIG_LZMA
   #define ENABLE_LZMA 1
   #define IF_LZMA(...) __VA_ARGS__
   #define IF_NOT_LZMA(...)
#else
   #define ENABLE_LZMA 0
   #define IF_NOT_LZMA(...) __VA_ARGS__
   #define IF_LZMA(...)
#endif

#ifdef CONFIG_UNXZ
   #define ENABLE_UNXZ 1
   #define IF_UNXZ(...) __VA_ARGS__
   #define IF_NOT_UNXZ(...)
#else
   #define ENABLE_UNXZ 0
   #define IF_NOT_UNXZ(...) __VA_ARGS__
   #define IF_UNXZ(...)
#endif

#ifdef CONFIG_XZ
   #define ENABLE_XZ 1
   #define IF_XZ(...) __VA_ARGS__
   #define IF_NOT_XZ(...)
#else
   #define ENABLE_XZ 0
   #define IF_NOT_XZ(...) __VA_ARGS__
   #define IF_XZ(...)
#endif

#ifdef CONFIG_UNZIP
   #define ENABLE_UNZIP 1
   #define IF_UNZIP(...) __VA_ARGS__
   #define IF_NOT_UNZIP(...)
#else
   #define ENABLE_UNZIP 0
   #define IF_NOT_UNZIP(...) __VA_ARGS__
   #define IF_UNZIP(...)
#endif

#ifdef CONFIG_BASENAME
   #define ENABLE_BASENAME 1
   #define IF_BASENAME(...) __VA_ARGS__
   #define IF_NOT_BASENAME(...)
#else
   #define ENABLE_BASENAME 0
   #define IF_NOT_BASENAME(...) __VA_ARGS__
   #define IF_BASENAME(...)
#endif

#ifdef CONFIG_CAT
   #define ENABLE_CAT 1
   #define IF_CAT(...) __VA_ARGS__
   #define IF_NOT_CAT(...)
#else
   #define ENABLE_CAT 0
   #define IF_NOT_CAT(...) __VA_ARGS__
   #define IF_CAT(...)
#endif

#ifdef CONFIG_DATE
   #define ENABLE_DATE 1
   #define IF_DATE(...) __VA_ARGS__
   #define IF_NOT_DATE(...)
#else
   #define ENABLE_DATE 0
   #define IF_NOT_DATE(...) __VA_ARGS__
   #define IF_DATE(...)
#endif

#ifdef CONFIG_FEATURE_DATE_ISOFMT
   #define ENABLE_FEATURE_DATE_ISOFMT 1
   #define IF_FEATURE_DATE_ISOFMT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_DATE_ISOFMT(...)
#else
   #define ENABLE_FEATURE_DATE_ISOFMT 0
   #define IF_NOT_FEATURE_DATE_ISOFMT(...) __VA_ARGS__
   #define IF_FEATURE_DATE_ISOFMT(...)
#endif

#ifdef CONFIG_FEATURE_DATE_NANO
   #define ENABLE_FEATURE_DATE_NANO 1
   #define IF_FEATURE_DATE_NANO(...) __VA_ARGS__
   #define IF_NOT_FEATURE_DATE_NANO(...)
#else
   #define ENABLE_FEATURE_DATE_NANO 0
   #define IF_NOT_FEATURE_DATE_NANO(...) __VA_ARGS__
   #define IF_FEATURE_DATE_NANO(...)
#endif

#ifdef CONFIG_FEATURE_DATE_COMPAT
   #define ENABLE_FEATURE_DATE_COMPAT 1
   #define IF_FEATURE_DATE_COMPAT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_DATE_COMPAT(...)
#else
   #define ENABLE_FEATURE_DATE_COMPAT 0
   #define IF_NOT_FEATURE_DATE_COMPAT(...) __VA_ARGS__
   #define IF_FEATURE_DATE_COMPAT(...)
#endif

#ifdef CONFIG_TEST
   #define ENABLE_TEST 1
   #define IF_TEST(...) __VA_ARGS__
   #define IF_NOT_TEST(...)
#else
   #define ENABLE_TEST 0
   #define IF_NOT_TEST(...) __VA_ARGS__
   #define IF_TEST(...)
#endif

#ifdef CONFIG_FEATURE_TEST_64
   #define ENABLE_FEATURE_TEST_64 1
   #define IF_FEATURE_TEST_64(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TEST_64(...)
#else
   #define ENABLE_FEATURE_TEST_64 0
   #define IF_NOT_FEATURE_TEST_64(...) __VA_ARGS__
   #define IF_FEATURE_TEST_64(...)
#endif

#ifdef CONFIG_TR
   #define ENABLE_TR 1
   #define IF_TR(...) __VA_ARGS__
   #define IF_NOT_TR(...)
#else
   #define ENABLE_TR 0
   #define IF_NOT_TR(...) __VA_ARGS__
   #define IF_TR(...)
#endif

#ifdef CONFIG_FEATURE_TR_CLASSES
   #define ENABLE_FEATURE_TR_CLASSES 1
   #define IF_FEATURE_TR_CLASSES(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TR_CLASSES(...)
#else
   #define ENABLE_FEATURE_TR_CLASSES 0
   #define IF_NOT_FEATURE_TR_CLASSES(...) __VA_ARGS__
   #define IF_FEATURE_TR_CLASSES(...)
#endif

#ifdef CONFIG_FEATURE_TR_EQUIV
   #define ENABLE_FEATURE_TR_EQUIV 1
   #define IF_FEATURE_TR_EQUIV(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TR_EQUIV(...)
#else
   #define ENABLE_FEATURE_TR_EQUIV 0
   #define IF_NOT_FEATURE_TR_EQUIV(...) __VA_ARGS__
   #define IF_FEATURE_TR_EQUIV(...)
#endif

#ifdef CONFIG_BASE64
   #define ENABLE_BASE64 1
   #define IF_BASE64(...) __VA_ARGS__
   #define IF_NOT_BASE64(...)
#else
   #define ENABLE_BASE64 0
   #define IF_NOT_BASE64(...) __VA_ARGS__
   #define IF_BASE64(...)
#endif

#ifdef CONFIG_CAL
   #define ENABLE_CAL 1
   #define IF_CAL(...) __VA_ARGS__
   #define IF_NOT_CAL(...)
#else
   #define ENABLE_CAL 0
   #define IF_NOT_CAL(...) __VA_ARGS__
   #define IF_CAL(...)
#endif

#ifdef CONFIG_CATV
   #define ENABLE_CATV 1
   #define IF_CATV(...) __VA_ARGS__
   #define IF_NOT_CATV(...)
#else
   #define ENABLE_CATV 0
   #define IF_NOT_CATV(...) __VA_ARGS__
   #define IF_CATV(...)
#endif

#ifdef CONFIG_CHGRP
   #define ENABLE_CHGRP 1
   #define IF_CHGRP(...) __VA_ARGS__
   #define IF_NOT_CHGRP(...)
#else
   #define ENABLE_CHGRP 0
   #define IF_NOT_CHGRP(...) __VA_ARGS__
   #define IF_CHGRP(...)
#endif

#ifdef CONFIG_CHMOD
   #define ENABLE_CHMOD 1
   #define IF_CHMOD(...) __VA_ARGS__
   #define IF_NOT_CHMOD(...)
#else
   #define ENABLE_CHMOD 0
   #define IF_NOT_CHMOD(...) __VA_ARGS__
   #define IF_CHMOD(...)
#endif

#ifdef CONFIG_CHOWN
   #define ENABLE_CHOWN 1
   #define IF_CHOWN(...) __VA_ARGS__
   #define IF_NOT_CHOWN(...)
#else
   #define ENABLE_CHOWN 0
   #define IF_NOT_CHOWN(...) __VA_ARGS__
   #define IF_CHOWN(...)
#endif

#ifdef CONFIG_FEATURE_CHOWN_LONG_OPTIONS
   #define ENABLE_FEATURE_CHOWN_LONG_OPTIONS 1
   #define IF_FEATURE_CHOWN_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_CHOWN_LONG_OPTIONS(...)
#else
   #define ENABLE_FEATURE_CHOWN_LONG_OPTIONS 0
   #define IF_NOT_FEATURE_CHOWN_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_FEATURE_CHOWN_LONG_OPTIONS(...)
#endif

#ifdef CONFIG_CHROOT
   #define ENABLE_CHROOT 1
   #define IF_CHROOT(...) __VA_ARGS__
   #define IF_NOT_CHROOT(...)
#else
   #define ENABLE_CHROOT 0
   #define IF_NOT_CHROOT(...) __VA_ARGS__
   #define IF_CHROOT(...)
#endif

#ifdef CONFIG_CKSUM
   #define ENABLE_CKSUM 1
   #define IF_CKSUM(...) __VA_ARGS__
   #define IF_NOT_CKSUM(...)
#else
   #define ENABLE_CKSUM 0
   #define IF_NOT_CKSUM(...) __VA_ARGS__
   #define IF_CKSUM(...)
#endif

#ifdef CONFIG_COMM
   #define ENABLE_COMM 1
   #define IF_COMM(...) __VA_ARGS__
   #define IF_NOT_COMM(...)
#else
   #define ENABLE_COMM 0
   #define IF_NOT_COMM(...) __VA_ARGS__
   #define IF_COMM(...)
#endif

#ifdef CONFIG_CP
   #define ENABLE_CP 1
   #define IF_CP(...) __VA_ARGS__
   #define IF_NOT_CP(...)
#else
   #define ENABLE_CP 0
   #define IF_NOT_CP(...) __VA_ARGS__
   #define IF_CP(...)
#endif

#ifdef CONFIG_FEATURE_CP_LONG_OPTIONS
   #define ENABLE_FEATURE_CP_LONG_OPTIONS 1
   #define IF_FEATURE_CP_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_CP_LONG_OPTIONS(...)
#else
   #define ENABLE_FEATURE_CP_LONG_OPTIONS 0
   #define IF_NOT_FEATURE_CP_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_FEATURE_CP_LONG_OPTIONS(...)
#endif

#ifdef CONFIG_CUT
   #define ENABLE_CUT 1
   #define IF_CUT(...) __VA_ARGS__
   #define IF_NOT_CUT(...)
#else
   #define ENABLE_CUT 0
   #define IF_NOT_CUT(...) __VA_ARGS__
   #define IF_CUT(...)
#endif

#ifdef CONFIG_DD
   #define ENABLE_DD 1
   #define IF_DD(...) __VA_ARGS__
   #define IF_NOT_DD(...)
#else
   #define ENABLE_DD 0
   #define IF_NOT_DD(...) __VA_ARGS__
   #define IF_DD(...)
#endif

#ifdef CONFIG_FEATURE_DD_SIGNAL_HANDLING
   #define ENABLE_FEATURE_DD_SIGNAL_HANDLING 1
   #define IF_FEATURE_DD_SIGNAL_HANDLING(...) __VA_ARGS__
   #define IF_NOT_FEATURE_DD_SIGNAL_HANDLING(...)
#else
   #define ENABLE_FEATURE_DD_SIGNAL_HANDLING 0
   #define IF_NOT_FEATURE_DD_SIGNAL_HANDLING(...) __VA_ARGS__
   #define IF_FEATURE_DD_SIGNAL_HANDLING(...)
#endif

#ifdef CONFIG_FEATURE_DD_THIRD_STATUS_LINE
   #define ENABLE_FEATURE_DD_THIRD_STATUS_LINE 1
   #define IF_FEATURE_DD_THIRD_STATUS_LINE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_DD_THIRD_STATUS_LINE(...)
#else
   #define ENABLE_FEATURE_DD_THIRD_STATUS_LINE 0
   #define IF_NOT_FEATURE_DD_THIRD_STATUS_LINE(...) __VA_ARGS__
   #define IF_FEATURE_DD_THIRD_STATUS_LINE(...)
#endif

#ifdef CONFIG_FEATURE_DD_IBS_OBS
   #define ENABLE_FEATURE_DD_IBS_OBS 1
   #define IF_FEATURE_DD_IBS_OBS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_DD_IBS_OBS(...)
#else
   #define ENABLE_FEATURE_DD_IBS_OBS 0
   #define IF_NOT_FEATURE_DD_IBS_OBS(...) __VA_ARGS__
   #define IF_FEATURE_DD_IBS_OBS(...)
#endif

#ifdef CONFIG_DF
   #define ENABLE_DF 1
   #define IF_DF(...) __VA_ARGS__
   #define IF_NOT_DF(...)
#else
   #define ENABLE_DF 0
   #define IF_NOT_DF(...) __VA_ARGS__
   #define IF_DF(...)
#endif

#ifdef CONFIG_FEATURE_DF_FANCY
   #define ENABLE_FEATURE_DF_FANCY 1
   #define IF_FEATURE_DF_FANCY(...) __VA_ARGS__
   #define IF_NOT_FEATURE_DF_FANCY(...)
#else
   #define ENABLE_FEATURE_DF_FANCY 0
   #define IF_NOT_FEATURE_DF_FANCY(...) __VA_ARGS__
   #define IF_FEATURE_DF_FANCY(...)
#endif

#ifdef CONFIG_DIRNAME
   #define ENABLE_DIRNAME 1
   #define IF_DIRNAME(...) __VA_ARGS__
   #define IF_NOT_DIRNAME(...)
#else
   #define ENABLE_DIRNAME 0
   #define IF_NOT_DIRNAME(...) __VA_ARGS__
   #define IF_DIRNAME(...)
#endif

#ifdef CONFIG_DOS2UNIX
   #define ENABLE_DOS2UNIX 1
   #define IF_DOS2UNIX(...) __VA_ARGS__
   #define IF_NOT_DOS2UNIX(...)
#else
   #define ENABLE_DOS2UNIX 0
   #define IF_NOT_DOS2UNIX(...) __VA_ARGS__
   #define IF_DOS2UNIX(...)
#endif

#ifdef CONFIG_UNIX2DOS
   #define ENABLE_UNIX2DOS 1
   #define IF_UNIX2DOS(...) __VA_ARGS__
   #define IF_NOT_UNIX2DOS(...)
#else
   #define ENABLE_UNIX2DOS 0
   #define IF_NOT_UNIX2DOS(...) __VA_ARGS__
   #define IF_UNIX2DOS(...)
#endif

#ifdef CONFIG_DU
   #define ENABLE_DU 1
   #define IF_DU(...) __VA_ARGS__
   #define IF_NOT_DU(...)
#else
   #define ENABLE_DU 0
   #define IF_NOT_DU(...) __VA_ARGS__
   #define IF_DU(...)
#endif

#ifdef CONFIG_FEATURE_DU_DEFAULT_BLOCKSIZE_1K
   #define ENABLE_FEATURE_DU_DEFAULT_BLOCKSIZE_1K 1
   #define IF_FEATURE_DU_DEFAULT_BLOCKSIZE_1K(...) __VA_ARGS__
   #define IF_NOT_FEATURE_DU_DEFAULT_BLOCKSIZE_1K(...)
#else
   #define ENABLE_FEATURE_DU_DEFAULT_BLOCKSIZE_1K 0
   #define IF_NOT_FEATURE_DU_DEFAULT_BLOCKSIZE_1K(...) __VA_ARGS__
   #define IF_FEATURE_DU_DEFAULT_BLOCKSIZE_1K(...)
#endif

#ifdef CONFIG_ECHO
   #define ENABLE_ECHO 1
   #define IF_ECHO(...) __VA_ARGS__
   #define IF_NOT_ECHO(...)
#else
   #define ENABLE_ECHO 0
   #define IF_NOT_ECHO(...) __VA_ARGS__
   #define IF_ECHO(...)
#endif

#ifdef CONFIG_FEATURE_FANCY_ECHO
   #define ENABLE_FEATURE_FANCY_ECHO 1
   #define IF_FEATURE_FANCY_ECHO(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FANCY_ECHO(...)
#else
   #define ENABLE_FEATURE_FANCY_ECHO 0
   #define IF_NOT_FEATURE_FANCY_ECHO(...) __VA_ARGS__
   #define IF_FEATURE_FANCY_ECHO(...)
#endif

#ifdef CONFIG_ENV
   #define ENABLE_ENV 1
   #define IF_ENV(...) __VA_ARGS__
   #define IF_NOT_ENV(...)
#else
   #define ENABLE_ENV 0
   #define IF_NOT_ENV(...) __VA_ARGS__
   #define IF_ENV(...)
#endif

#ifdef CONFIG_FEATURE_ENV_LONG_OPTIONS
   #define ENABLE_FEATURE_ENV_LONG_OPTIONS 1
   #define IF_FEATURE_ENV_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_ENV_LONG_OPTIONS(...)
#else
   #define ENABLE_FEATURE_ENV_LONG_OPTIONS 0
   #define IF_NOT_FEATURE_ENV_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_FEATURE_ENV_LONG_OPTIONS(...)
#endif

#ifdef CONFIG_EXPAND
   #define ENABLE_EXPAND 1
   #define IF_EXPAND(...) __VA_ARGS__
   #define IF_NOT_EXPAND(...)
#else
   #define ENABLE_EXPAND 0
   #define IF_NOT_EXPAND(...) __VA_ARGS__
   #define IF_EXPAND(...)
#endif

#ifdef CONFIG_FEATURE_EXPAND_LONG_OPTIONS
   #define ENABLE_FEATURE_EXPAND_LONG_OPTIONS 1
   #define IF_FEATURE_EXPAND_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_EXPAND_LONG_OPTIONS(...)
#else
   #define ENABLE_FEATURE_EXPAND_LONG_OPTIONS 0
   #define IF_NOT_FEATURE_EXPAND_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_FEATURE_EXPAND_LONG_OPTIONS(...)
#endif

#ifdef CONFIG_EXPR
   #define ENABLE_EXPR 1
   #define IF_EXPR(...) __VA_ARGS__
   #define IF_NOT_EXPR(...)
#else
   #define ENABLE_EXPR 0
   #define IF_NOT_EXPR(...) __VA_ARGS__
   #define IF_EXPR(...)
#endif

#ifdef CONFIG_EXPR_MATH_SUPPORT_64
   #define ENABLE_EXPR_MATH_SUPPORT_64 1
   #define IF_EXPR_MATH_SUPPORT_64(...) __VA_ARGS__
   #define IF_NOT_EXPR_MATH_SUPPORT_64(...)
#else
   #define ENABLE_EXPR_MATH_SUPPORT_64 0
   #define IF_NOT_EXPR_MATH_SUPPORT_64(...) __VA_ARGS__
   #define IF_EXPR_MATH_SUPPORT_64(...)
#endif

#ifdef CONFIG_FALSE
   #define ENABLE_FALSE 1
   #define IF_FALSE(...) __VA_ARGS__
   #define IF_NOT_FALSE(...)
#else
   #define ENABLE_FALSE 0
   #define IF_NOT_FALSE(...) __VA_ARGS__
   #define IF_FALSE(...)
#endif

#ifdef CONFIG_FOLD
   #define ENABLE_FOLD 1
   #define IF_FOLD(...) __VA_ARGS__
   #define IF_NOT_FOLD(...)
#else
   #define ENABLE_FOLD 0
   #define IF_NOT_FOLD(...) __VA_ARGS__
   #define IF_FOLD(...)
#endif

#ifdef CONFIG_FSYNC
   #define ENABLE_FSYNC 1
   #define IF_FSYNC(...) __VA_ARGS__
   #define IF_NOT_FSYNC(...)
#else
   #define ENABLE_FSYNC 0
   #define IF_NOT_FSYNC(...) __VA_ARGS__
   #define IF_FSYNC(...)
#endif

#ifdef CONFIG_HEAD
   #define ENABLE_HEAD 1
   #define IF_HEAD(...) __VA_ARGS__
   #define IF_NOT_HEAD(...)
#else
   #define ENABLE_HEAD 0
   #define IF_NOT_HEAD(...) __VA_ARGS__
   #define IF_HEAD(...)
#endif

#ifdef CONFIG_FEATURE_FANCY_HEAD
   #define ENABLE_FEATURE_FANCY_HEAD 1
   #define IF_FEATURE_FANCY_HEAD(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FANCY_HEAD(...)
#else
   #define ENABLE_FEATURE_FANCY_HEAD 0
   #define IF_NOT_FEATURE_FANCY_HEAD(...) __VA_ARGS__
   #define IF_FEATURE_FANCY_HEAD(...)
#endif

#ifdef CONFIG_HOSTID
   #define ENABLE_HOSTID 1
   #define IF_HOSTID(...) __VA_ARGS__
   #define IF_NOT_HOSTID(...)
#else
   #define ENABLE_HOSTID 0
   #define IF_NOT_HOSTID(...) __VA_ARGS__
   #define IF_HOSTID(...)
#endif

#ifdef CONFIG_ID
   #define ENABLE_ID 1
   #define IF_ID(...) __VA_ARGS__
   #define IF_NOT_ID(...)
#else
   #define ENABLE_ID 0
   #define IF_NOT_ID(...) __VA_ARGS__
   #define IF_ID(...)
#endif

#ifdef CONFIG_INSTALL
   #define ENABLE_INSTALL 1
   #define IF_INSTALL(...) __VA_ARGS__
   #define IF_NOT_INSTALL(...)
#else
   #define ENABLE_INSTALL 0
   #define IF_NOT_INSTALL(...) __VA_ARGS__
   #define IF_INSTALL(...)
#endif

#ifdef CONFIG_FEATURE_INSTALL_LONG_OPTIONS
   #define ENABLE_FEATURE_INSTALL_LONG_OPTIONS 1
   #define IF_FEATURE_INSTALL_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_INSTALL_LONG_OPTIONS(...)
#else
   #define ENABLE_FEATURE_INSTALL_LONG_OPTIONS 0
   #define IF_NOT_FEATURE_INSTALL_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_FEATURE_INSTALL_LONG_OPTIONS(...)
#endif

#ifdef CONFIG_LENGTH
   #define ENABLE_LENGTH 1
   #define IF_LENGTH(...) __VA_ARGS__
   #define IF_NOT_LENGTH(...)
#else
   #define ENABLE_LENGTH 0
   #define IF_NOT_LENGTH(...) __VA_ARGS__
   #define IF_LENGTH(...)
#endif

#ifdef CONFIG_LN
   #define ENABLE_LN 1
   #define IF_LN(...) __VA_ARGS__
   #define IF_NOT_LN(...)
#else
   #define ENABLE_LN 0
   #define IF_NOT_LN(...) __VA_ARGS__
   #define IF_LN(...)
#endif

#ifdef CONFIG_LOGNAME
   #define ENABLE_LOGNAME 1
   #define IF_LOGNAME(...) __VA_ARGS__
   #define IF_NOT_LOGNAME(...)
#else
   #define ENABLE_LOGNAME 0
   #define IF_NOT_LOGNAME(...) __VA_ARGS__
   #define IF_LOGNAME(...)
#endif

#ifdef CONFIG_LS
   #define ENABLE_LS 1
   #define IF_LS(...) __VA_ARGS__
   #define IF_NOT_LS(...)
#else
   #define ENABLE_LS 0
   #define IF_NOT_LS(...) __VA_ARGS__
   #define IF_LS(...)
#endif

#ifdef CONFIG_FEATURE_LS_FILETYPES
   #define ENABLE_FEATURE_LS_FILETYPES 1
   #define IF_FEATURE_LS_FILETYPES(...) __VA_ARGS__
   #define IF_NOT_FEATURE_LS_FILETYPES(...)
#else
   #define ENABLE_FEATURE_LS_FILETYPES 0
   #define IF_NOT_FEATURE_LS_FILETYPES(...) __VA_ARGS__
   #define IF_FEATURE_LS_FILETYPES(...)
#endif

#ifdef CONFIG_FEATURE_LS_FOLLOWLINKS
   #define ENABLE_FEATURE_LS_FOLLOWLINKS 1
   #define IF_FEATURE_LS_FOLLOWLINKS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_LS_FOLLOWLINKS(...)
#else
   #define ENABLE_FEATURE_LS_FOLLOWLINKS 0
   #define IF_NOT_FEATURE_LS_FOLLOWLINKS(...) __VA_ARGS__
   #define IF_FEATURE_LS_FOLLOWLINKS(...)
#endif

#ifdef CONFIG_FEATURE_LS_RECURSIVE
   #define ENABLE_FEATURE_LS_RECURSIVE 1
   #define IF_FEATURE_LS_RECURSIVE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_LS_RECURSIVE(...)
#else
   #define ENABLE_FEATURE_LS_RECURSIVE 0
   #define IF_NOT_FEATURE_LS_RECURSIVE(...) __VA_ARGS__
   #define IF_FEATURE_LS_RECURSIVE(...)
#endif

#ifdef CONFIG_FEATURE_LS_SORTFILES
   #define ENABLE_FEATURE_LS_SORTFILES 1
   #define IF_FEATURE_LS_SORTFILES(...) __VA_ARGS__
   #define IF_NOT_FEATURE_LS_SORTFILES(...)
#else
   #define ENABLE_FEATURE_LS_SORTFILES 0
   #define IF_NOT_FEATURE_LS_SORTFILES(...) __VA_ARGS__
   #define IF_FEATURE_LS_SORTFILES(...)
#endif

#ifdef CONFIG_FEATURE_LS_TIMESTAMPS
   #define ENABLE_FEATURE_LS_TIMESTAMPS 1
   #define IF_FEATURE_LS_TIMESTAMPS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_LS_TIMESTAMPS(...)
#else
   #define ENABLE_FEATURE_LS_TIMESTAMPS 0
   #define IF_NOT_FEATURE_LS_TIMESTAMPS(...) __VA_ARGS__
   #define IF_FEATURE_LS_TIMESTAMPS(...)
#endif

#ifdef CONFIG_FEATURE_LS_USERNAME
   #define ENABLE_FEATURE_LS_USERNAME 1
   #define IF_FEATURE_LS_USERNAME(...) __VA_ARGS__
   #define IF_NOT_FEATURE_LS_USERNAME(...)
#else
   #define ENABLE_FEATURE_LS_USERNAME 0
   #define IF_NOT_FEATURE_LS_USERNAME(...) __VA_ARGS__
   #define IF_FEATURE_LS_USERNAME(...)
#endif

#ifdef CONFIG_FEATURE_LS_COLOR
   #define ENABLE_FEATURE_LS_COLOR 1
   #define IF_FEATURE_LS_COLOR(...) __VA_ARGS__
   #define IF_NOT_FEATURE_LS_COLOR(...)
#else
   #define ENABLE_FEATURE_LS_COLOR 0
   #define IF_NOT_FEATURE_LS_COLOR(...) __VA_ARGS__
   #define IF_FEATURE_LS_COLOR(...)
#endif

#ifdef CONFIG_FEATURE_LS_COLOR_IS_DEFAULT
   #define ENABLE_FEATURE_LS_COLOR_IS_DEFAULT 1
   #define IF_FEATURE_LS_COLOR_IS_DEFAULT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_LS_COLOR_IS_DEFAULT(...)
#else
   #define ENABLE_FEATURE_LS_COLOR_IS_DEFAULT 0
   #define IF_NOT_FEATURE_LS_COLOR_IS_DEFAULT(...) __VA_ARGS__
   #define IF_FEATURE_LS_COLOR_IS_DEFAULT(...)
#endif

#ifdef CONFIG_MD5SUM
   #define ENABLE_MD5SUM 1
   #define IF_MD5SUM(...) __VA_ARGS__
   #define IF_NOT_MD5SUM(...)
#else
   #define ENABLE_MD5SUM 0
   #define IF_NOT_MD5SUM(...) __VA_ARGS__
   #define IF_MD5SUM(...)
#endif

#ifdef CONFIG_MKDIR
   #define ENABLE_MKDIR 1
   #define IF_MKDIR(...) __VA_ARGS__
   #define IF_NOT_MKDIR(...)
#else
   #define ENABLE_MKDIR 0
   #define IF_NOT_MKDIR(...) __VA_ARGS__
   #define IF_MKDIR(...)
#endif

#ifdef CONFIG_FEATURE_MKDIR_LONG_OPTIONS
   #define ENABLE_FEATURE_MKDIR_LONG_OPTIONS 1
   #define IF_FEATURE_MKDIR_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MKDIR_LONG_OPTIONS(...)
#else
   #define ENABLE_FEATURE_MKDIR_LONG_OPTIONS 0
   #define IF_NOT_FEATURE_MKDIR_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_FEATURE_MKDIR_LONG_OPTIONS(...)
#endif

#ifdef CONFIG_MKFIFO
   #define ENABLE_MKFIFO 1
   #define IF_MKFIFO(...) __VA_ARGS__
   #define IF_NOT_MKFIFO(...)
#else
   #define ENABLE_MKFIFO 0
   #define IF_NOT_MKFIFO(...) __VA_ARGS__
   #define IF_MKFIFO(...)
#endif

#ifdef CONFIG_MKNOD
   #define ENABLE_MKNOD 1
   #define IF_MKNOD(...) __VA_ARGS__
   #define IF_NOT_MKNOD(...)
#else
   #define ENABLE_MKNOD 0
   #define IF_NOT_MKNOD(...) __VA_ARGS__
   #define IF_MKNOD(...)
#endif

#ifdef CONFIG_MV
   #define ENABLE_MV 1
   #define IF_MV(...) __VA_ARGS__
   #define IF_NOT_MV(...)
#else
   #define ENABLE_MV 0
   #define IF_NOT_MV(...) __VA_ARGS__
   #define IF_MV(...)
#endif

#ifdef CONFIG_FEATURE_MV_LONG_OPTIONS
   #define ENABLE_FEATURE_MV_LONG_OPTIONS 1
   #define IF_FEATURE_MV_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MV_LONG_OPTIONS(...)
#else
   #define ENABLE_FEATURE_MV_LONG_OPTIONS 0
   #define IF_NOT_FEATURE_MV_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_FEATURE_MV_LONG_OPTIONS(...)
#endif

#ifdef CONFIG_NICE
   #define ENABLE_NICE 1
   #define IF_NICE(...) __VA_ARGS__
   #define IF_NOT_NICE(...)
#else
   #define ENABLE_NICE 0
   #define IF_NOT_NICE(...) __VA_ARGS__
   #define IF_NICE(...)
#endif

#ifdef CONFIG_NOHUP
   #define ENABLE_NOHUP 1
   #define IF_NOHUP(...) __VA_ARGS__
   #define IF_NOT_NOHUP(...)
#else
   #define ENABLE_NOHUP 0
   #define IF_NOT_NOHUP(...) __VA_ARGS__
   #define IF_NOHUP(...)
#endif

#ifdef CONFIG_OD
   #define ENABLE_OD 1
   #define IF_OD(...) __VA_ARGS__
   #define IF_NOT_OD(...)
#else
   #define ENABLE_OD 0
   #define IF_NOT_OD(...) __VA_ARGS__
   #define IF_OD(...)
#endif

#ifdef CONFIG_PRINTENV
   #define ENABLE_PRINTENV 1
   #define IF_PRINTENV(...) __VA_ARGS__
   #define IF_NOT_PRINTENV(...)
#else
   #define ENABLE_PRINTENV 0
   #define IF_NOT_PRINTENV(...) __VA_ARGS__
   #define IF_PRINTENV(...)
#endif

#ifdef CONFIG_PRINTF
   #define ENABLE_PRINTF 1
   #define IF_PRINTF(...) __VA_ARGS__
   #define IF_NOT_PRINTF(...)
#else
   #define ENABLE_PRINTF 0
   #define IF_NOT_PRINTF(...) __VA_ARGS__
   #define IF_PRINTF(...)
#endif

#ifdef CONFIG_PWD
   #define ENABLE_PWD 1
   #define IF_PWD(...) __VA_ARGS__
   #define IF_NOT_PWD(...)
#else
   #define ENABLE_PWD 0
   #define IF_NOT_PWD(...) __VA_ARGS__
   #define IF_PWD(...)
#endif

#ifdef CONFIG_READLINK
   #define ENABLE_READLINK 1
   #define IF_READLINK(...) __VA_ARGS__
   #define IF_NOT_READLINK(...)
#else
   #define ENABLE_READLINK 0
   #define IF_NOT_READLINK(...) __VA_ARGS__
   #define IF_READLINK(...)
#endif

#ifdef CONFIG_FEATURE_READLINK_FOLLOW
   #define ENABLE_FEATURE_READLINK_FOLLOW 1
   #define IF_FEATURE_READLINK_FOLLOW(...) __VA_ARGS__
   #define IF_NOT_FEATURE_READLINK_FOLLOW(...)
#else
   #define ENABLE_FEATURE_READLINK_FOLLOW 0
   #define IF_NOT_FEATURE_READLINK_FOLLOW(...) __VA_ARGS__
   #define IF_FEATURE_READLINK_FOLLOW(...)
#endif

#ifdef CONFIG_REALPATH
   #define ENABLE_REALPATH 1
   #define IF_REALPATH(...) __VA_ARGS__
   #define IF_NOT_REALPATH(...)
#else
   #define ENABLE_REALPATH 0
   #define IF_NOT_REALPATH(...) __VA_ARGS__
   #define IF_REALPATH(...)
#endif

#ifdef CONFIG_RM
   #define ENABLE_RM 1
   #define IF_RM(...) __VA_ARGS__
   #define IF_NOT_RM(...)
#else
   #define ENABLE_RM 0
   #define IF_NOT_RM(...) __VA_ARGS__
   #define IF_RM(...)
#endif

#ifdef CONFIG_RMDIR
   #define ENABLE_RMDIR 1
   #define IF_RMDIR(...) __VA_ARGS__
   #define IF_NOT_RMDIR(...)
#else
   #define ENABLE_RMDIR 0
   #define IF_NOT_RMDIR(...) __VA_ARGS__
   #define IF_RMDIR(...)
#endif

#ifdef CONFIG_FEATURE_RMDIR_LONG_OPTIONS
   #define ENABLE_FEATURE_RMDIR_LONG_OPTIONS 1
   #define IF_FEATURE_RMDIR_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_RMDIR_LONG_OPTIONS(...)
#else
   #define ENABLE_FEATURE_RMDIR_LONG_OPTIONS 0
   #define IF_NOT_FEATURE_RMDIR_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_FEATURE_RMDIR_LONG_OPTIONS(...)
#endif

#ifdef CONFIG_SEQ
   #define ENABLE_SEQ 1
   #define IF_SEQ(...) __VA_ARGS__
   #define IF_NOT_SEQ(...)
#else
   #define ENABLE_SEQ 0
   #define IF_NOT_SEQ(...) __VA_ARGS__
   #define IF_SEQ(...)
#endif

#ifdef CONFIG_SHA1SUM
   #define ENABLE_SHA1SUM 1
   #define IF_SHA1SUM(...) __VA_ARGS__
   #define IF_NOT_SHA1SUM(...)
#else
   #define ENABLE_SHA1SUM 0
   #define IF_NOT_SHA1SUM(...) __VA_ARGS__
   #define IF_SHA1SUM(...)
#endif

#ifdef CONFIG_SHA256SUM
   #define ENABLE_SHA256SUM 1
   #define IF_SHA256SUM(...) __VA_ARGS__
   #define IF_NOT_SHA256SUM(...)
#else
   #define ENABLE_SHA256SUM 0
   #define IF_NOT_SHA256SUM(...) __VA_ARGS__
   #define IF_SHA256SUM(...)
#endif

#ifdef CONFIG_SHA512SUM
   #define ENABLE_SHA512SUM 1
   #define IF_SHA512SUM(...) __VA_ARGS__
   #define IF_NOT_SHA512SUM(...)
#else
   #define ENABLE_SHA512SUM 0
   #define IF_NOT_SHA512SUM(...) __VA_ARGS__
   #define IF_SHA512SUM(...)
#endif

#ifdef CONFIG_SLEEP
   #define ENABLE_SLEEP 1
   #define IF_SLEEP(...) __VA_ARGS__
   #define IF_NOT_SLEEP(...)
#else
   #define ENABLE_SLEEP 0
   #define IF_NOT_SLEEP(...) __VA_ARGS__
   #define IF_SLEEP(...)
#endif

#ifdef CONFIG_FEATURE_FANCY_SLEEP
   #define ENABLE_FEATURE_FANCY_SLEEP 1
   #define IF_FEATURE_FANCY_SLEEP(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FANCY_SLEEP(...)
#else
   #define ENABLE_FEATURE_FANCY_SLEEP 0
   #define IF_NOT_FEATURE_FANCY_SLEEP(...) __VA_ARGS__
   #define IF_FEATURE_FANCY_SLEEP(...)
#endif

#ifdef CONFIG_FEATURE_FLOAT_SLEEP
   #define ENABLE_FEATURE_FLOAT_SLEEP 1
   #define IF_FEATURE_FLOAT_SLEEP(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FLOAT_SLEEP(...)
#else
   #define ENABLE_FEATURE_FLOAT_SLEEP 0
   #define IF_NOT_FEATURE_FLOAT_SLEEP(...) __VA_ARGS__
   #define IF_FEATURE_FLOAT_SLEEP(...)
#endif

#ifdef CONFIG_SORT
   #define ENABLE_SORT 1
   #define IF_SORT(...) __VA_ARGS__
   #define IF_NOT_SORT(...)
#else
   #define ENABLE_SORT 0
   #define IF_NOT_SORT(...) __VA_ARGS__
   #define IF_SORT(...)
#endif

#ifdef CONFIG_FEATURE_SORT_BIG
   #define ENABLE_FEATURE_SORT_BIG 1
   #define IF_FEATURE_SORT_BIG(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SORT_BIG(...)
#else
   #define ENABLE_FEATURE_SORT_BIG 0
   #define IF_NOT_FEATURE_SORT_BIG(...) __VA_ARGS__
   #define IF_FEATURE_SORT_BIG(...)
#endif

#ifdef CONFIG_SPLIT
   #define ENABLE_SPLIT 1
   #define IF_SPLIT(...) __VA_ARGS__
   #define IF_NOT_SPLIT(...)
#else
   #define ENABLE_SPLIT 0
   #define IF_NOT_SPLIT(...) __VA_ARGS__
   #define IF_SPLIT(...)
#endif

#ifdef CONFIG_FEATURE_SPLIT_FANCY
   #define ENABLE_FEATURE_SPLIT_FANCY 1
   #define IF_FEATURE_SPLIT_FANCY(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SPLIT_FANCY(...)
#else
   #define ENABLE_FEATURE_SPLIT_FANCY 0
   #define IF_NOT_FEATURE_SPLIT_FANCY(...) __VA_ARGS__
   #define IF_FEATURE_SPLIT_FANCY(...)
#endif

#ifdef CONFIG_STAT
   #define ENABLE_STAT 1
   #define IF_STAT(...) __VA_ARGS__
   #define IF_NOT_STAT(...)
#else
   #define ENABLE_STAT 0
   #define IF_NOT_STAT(...) __VA_ARGS__
   #define IF_STAT(...)
#endif

#ifdef CONFIG_FEATURE_STAT_FORMAT
   #define ENABLE_FEATURE_STAT_FORMAT 1
   #define IF_FEATURE_STAT_FORMAT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_STAT_FORMAT(...)
#else
   #define ENABLE_FEATURE_STAT_FORMAT 0
   #define IF_NOT_FEATURE_STAT_FORMAT(...) __VA_ARGS__
   #define IF_FEATURE_STAT_FORMAT(...)
#endif

#ifdef CONFIG_STTY
   #define ENABLE_STTY 1
   #define IF_STTY(...) __VA_ARGS__
   #define IF_NOT_STTY(...)
#else
   #define ENABLE_STTY 0
   #define IF_NOT_STTY(...) __VA_ARGS__
   #define IF_STTY(...)
#endif

#ifdef CONFIG_SUM
   #define ENABLE_SUM 1
   #define IF_SUM(...) __VA_ARGS__
   #define IF_NOT_SUM(...)
#else
   #define ENABLE_SUM 0
   #define IF_NOT_SUM(...) __VA_ARGS__
   #define IF_SUM(...)
#endif

#ifdef CONFIG_SYNC
   #define ENABLE_SYNC 1
   #define IF_SYNC(...) __VA_ARGS__
   #define IF_NOT_SYNC(...)
#else
   #define ENABLE_SYNC 0
   #define IF_NOT_SYNC(...) __VA_ARGS__
   #define IF_SYNC(...)
#endif

#ifdef CONFIG_TAC
   #define ENABLE_TAC 1
   #define IF_TAC(...) __VA_ARGS__
   #define IF_NOT_TAC(...)
#else
   #define ENABLE_TAC 0
   #define IF_NOT_TAC(...) __VA_ARGS__
   #define IF_TAC(...)
#endif

#ifdef CONFIG_TAIL
   #define ENABLE_TAIL 1
   #define IF_TAIL(...) __VA_ARGS__
   #define IF_NOT_TAIL(...)
#else
   #define ENABLE_TAIL 0
   #define IF_NOT_TAIL(...) __VA_ARGS__
   #define IF_TAIL(...)
#endif

#ifdef CONFIG_FEATURE_FANCY_TAIL
   #define ENABLE_FEATURE_FANCY_TAIL 1
   #define IF_FEATURE_FANCY_TAIL(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FANCY_TAIL(...)
#else
   #define ENABLE_FEATURE_FANCY_TAIL 0
   #define IF_NOT_FEATURE_FANCY_TAIL(...) __VA_ARGS__
   #define IF_FEATURE_FANCY_TAIL(...)
#endif

#ifdef CONFIG_TEE
   #define ENABLE_TEE 1
   #define IF_TEE(...) __VA_ARGS__
   #define IF_NOT_TEE(...)
#else
   #define ENABLE_TEE 0
   #define IF_NOT_TEE(...) __VA_ARGS__
   #define IF_TEE(...)
#endif

#ifdef CONFIG_FEATURE_TEE_USE_BLOCK_IO
   #define ENABLE_FEATURE_TEE_USE_BLOCK_IO 1
   #define IF_FEATURE_TEE_USE_BLOCK_IO(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TEE_USE_BLOCK_IO(...)
#else
   #define ENABLE_FEATURE_TEE_USE_BLOCK_IO 0
   #define IF_NOT_FEATURE_TEE_USE_BLOCK_IO(...) __VA_ARGS__
   #define IF_FEATURE_TEE_USE_BLOCK_IO(...)
#endif

#ifdef CONFIG_TOUCH
   #define ENABLE_TOUCH 1
   #define IF_TOUCH(...) __VA_ARGS__
   #define IF_NOT_TOUCH(...)
#else
   #define ENABLE_TOUCH 0
   #define IF_NOT_TOUCH(...) __VA_ARGS__
   #define IF_TOUCH(...)
#endif

#ifdef CONFIG_TRUE
   #define ENABLE_TRUE 1
   #define IF_TRUE(...) __VA_ARGS__
   #define IF_NOT_TRUE(...)
#else
   #define ENABLE_TRUE 0
   #define IF_NOT_TRUE(...) __VA_ARGS__
   #define IF_TRUE(...)
#endif

#ifdef CONFIG_TTY
   #define ENABLE_TTY 1
   #define IF_TTY(...) __VA_ARGS__
   #define IF_NOT_TTY(...)
#else
   #define ENABLE_TTY 0
   #define IF_NOT_TTY(...) __VA_ARGS__
   #define IF_TTY(...)
#endif

#ifdef CONFIG_UNAME
   #define ENABLE_UNAME 1
   #define IF_UNAME(...) __VA_ARGS__
   #define IF_NOT_UNAME(...)
#else
   #define ENABLE_UNAME 0
   #define IF_NOT_UNAME(...) __VA_ARGS__
   #define IF_UNAME(...)
#endif

#ifdef CONFIG_UNEXPAND
   #define ENABLE_UNEXPAND 1
   #define IF_UNEXPAND(...) __VA_ARGS__
   #define IF_NOT_UNEXPAND(...)
#else
   #define ENABLE_UNEXPAND 0
   #define IF_NOT_UNEXPAND(...) __VA_ARGS__
   #define IF_UNEXPAND(...)
#endif

#ifdef CONFIG_FEATURE_UNEXPAND_LONG_OPTIONS
   #define ENABLE_FEATURE_UNEXPAND_LONG_OPTIONS 1
   #define IF_FEATURE_UNEXPAND_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_UNEXPAND_LONG_OPTIONS(...)
#else
   #define ENABLE_FEATURE_UNEXPAND_LONG_OPTIONS 0
   #define IF_NOT_FEATURE_UNEXPAND_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_FEATURE_UNEXPAND_LONG_OPTIONS(...)
#endif

#ifdef CONFIG_UNIQ
   #define ENABLE_UNIQ 1
   #define IF_UNIQ(...) __VA_ARGS__
   #define IF_NOT_UNIQ(...)
#else
   #define ENABLE_UNIQ 0
   #define IF_NOT_UNIQ(...) __VA_ARGS__
   #define IF_UNIQ(...)
#endif

#ifdef CONFIG_USLEEP
   #define ENABLE_USLEEP 1
   #define IF_USLEEP(...) __VA_ARGS__
   #define IF_NOT_USLEEP(...)
#else
   #define ENABLE_USLEEP 0
   #define IF_NOT_USLEEP(...) __VA_ARGS__
   #define IF_USLEEP(...)
#endif

#ifdef CONFIG_UUDECODE
   #define ENABLE_UUDECODE 1
   #define IF_UUDECODE(...) __VA_ARGS__
   #define IF_NOT_UUDECODE(...)
#else
   #define ENABLE_UUDECODE 0
   #define IF_NOT_UUDECODE(...) __VA_ARGS__
   #define IF_UUDECODE(...)
#endif

#ifdef CONFIG_UUENCODE
   #define ENABLE_UUENCODE 1
   #define IF_UUENCODE(...) __VA_ARGS__
   #define IF_NOT_UUENCODE(...)
#else
   #define ENABLE_UUENCODE 0
   #define IF_NOT_UUENCODE(...) __VA_ARGS__
   #define IF_UUENCODE(...)
#endif

#ifdef CONFIG_WC
   #define ENABLE_WC 1
   #define IF_WC(...) __VA_ARGS__
   #define IF_NOT_WC(...)
#else
   #define ENABLE_WC 0
   #define IF_NOT_WC(...) __VA_ARGS__
   #define IF_WC(...)
#endif

#ifdef CONFIG_FEATURE_WC_LARGE
   #define ENABLE_FEATURE_WC_LARGE 1
   #define IF_FEATURE_WC_LARGE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_WC_LARGE(...)
#else
   #define ENABLE_FEATURE_WC_LARGE 0
   #define IF_NOT_FEATURE_WC_LARGE(...) __VA_ARGS__
   #define IF_FEATURE_WC_LARGE(...)
#endif

#ifdef CONFIG_WHO
   #define ENABLE_WHO 1
   #define IF_WHO(...) __VA_ARGS__
   #define IF_NOT_WHO(...)
#else
   #define ENABLE_WHO 0
   #define IF_NOT_WHO(...) __VA_ARGS__
   #define IF_WHO(...)
#endif

#ifdef CONFIG_WHOAMI
   #define ENABLE_WHOAMI 1
   #define IF_WHOAMI(...) __VA_ARGS__
   #define IF_NOT_WHOAMI(...)
#else
   #define ENABLE_WHOAMI 0
   #define IF_NOT_WHOAMI(...) __VA_ARGS__
   #define IF_WHOAMI(...)
#endif

#ifdef CONFIG_YES
   #define ENABLE_YES 1
   #define IF_YES(...) __VA_ARGS__
   #define IF_NOT_YES(...)
#else
   #define ENABLE_YES 0
   #define IF_NOT_YES(...) __VA_ARGS__
   #define IF_YES(...)
#endif

#ifdef CONFIG_FEATURE_PRESERVE_HARDLINKS
   #define ENABLE_FEATURE_PRESERVE_HARDLINKS 1
   #define IF_FEATURE_PRESERVE_HARDLINKS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_PRESERVE_HARDLINKS(...)
#else
   #define ENABLE_FEATURE_PRESERVE_HARDLINKS 0
   #define IF_NOT_FEATURE_PRESERVE_HARDLINKS(...) __VA_ARGS__
   #define IF_FEATURE_PRESERVE_HARDLINKS(...)
#endif

#ifdef CONFIG_FEATURE_AUTOWIDTH
   #define ENABLE_FEATURE_AUTOWIDTH 1
   #define IF_FEATURE_AUTOWIDTH(...) __VA_ARGS__
   #define IF_NOT_FEATURE_AUTOWIDTH(...)
#else
   #define ENABLE_FEATURE_AUTOWIDTH 0
   #define IF_NOT_FEATURE_AUTOWIDTH(...) __VA_ARGS__
   #define IF_FEATURE_AUTOWIDTH(...)
#endif

#ifdef CONFIG_FEATURE_HUMAN_READABLE
   #define ENABLE_FEATURE_HUMAN_READABLE 1
   #define IF_FEATURE_HUMAN_READABLE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_HUMAN_READABLE(...)
#else
   #define ENABLE_FEATURE_HUMAN_READABLE 0
   #define IF_NOT_FEATURE_HUMAN_READABLE(...) __VA_ARGS__
   #define IF_FEATURE_HUMAN_READABLE(...)
#endif

#ifdef CONFIG_FEATURE_MD5_SHA1_SUM_CHECK
   #define ENABLE_FEATURE_MD5_SHA1_SUM_CHECK 1
   #define IF_FEATURE_MD5_SHA1_SUM_CHECK(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MD5_SHA1_SUM_CHECK(...)
#else
   #define ENABLE_FEATURE_MD5_SHA1_SUM_CHECK 0
   #define IF_NOT_FEATURE_MD5_SHA1_SUM_CHECK(...) __VA_ARGS__
   #define IF_FEATURE_MD5_SHA1_SUM_CHECK(...)
#endif

#ifdef CONFIG_CHVT
   #define ENABLE_CHVT 1
   #define IF_CHVT(...) __VA_ARGS__
   #define IF_NOT_CHVT(...)
#else
   #define ENABLE_CHVT 0
   #define IF_NOT_CHVT(...) __VA_ARGS__
   #define IF_CHVT(...)
#endif

#ifdef CONFIG_FGCONSOLE
   #define ENABLE_FGCONSOLE 1
   #define IF_FGCONSOLE(...) __VA_ARGS__
   #define IF_NOT_FGCONSOLE(...)
#else
   #define ENABLE_FGCONSOLE 0
   #define IF_NOT_FGCONSOLE(...) __VA_ARGS__
   #define IF_FGCONSOLE(...)
#endif

#ifdef CONFIG_CLEAR
   #define ENABLE_CLEAR 1
   #define IF_CLEAR(...) __VA_ARGS__
   #define IF_NOT_CLEAR(...)
#else
   #define ENABLE_CLEAR 0
   #define IF_NOT_CLEAR(...) __VA_ARGS__
   #define IF_CLEAR(...)
#endif

#ifdef CONFIG_DEALLOCVT
   #define ENABLE_DEALLOCVT 1
   #define IF_DEALLOCVT(...) __VA_ARGS__
   #define IF_NOT_DEALLOCVT(...)
#else
   #define ENABLE_DEALLOCVT 0
   #define IF_NOT_DEALLOCVT(...) __VA_ARGS__
   #define IF_DEALLOCVT(...)
#endif

#ifdef CONFIG_DUMPKMAP
   #define ENABLE_DUMPKMAP 1
   #define IF_DUMPKMAP(...) __VA_ARGS__
   #define IF_NOT_DUMPKMAP(...)
#else
   #define ENABLE_DUMPKMAP 0
   #define IF_NOT_DUMPKMAP(...) __VA_ARGS__
   #define IF_DUMPKMAP(...)
#endif

#ifdef CONFIG_KBD_MODE
   #define ENABLE_KBD_MODE 1
   #define IF_KBD_MODE(...) __VA_ARGS__
   #define IF_NOT_KBD_MODE(...)
#else
   #define ENABLE_KBD_MODE 0
   #define IF_NOT_KBD_MODE(...) __VA_ARGS__
   #define IF_KBD_MODE(...)
#endif

#ifdef CONFIG_LOADFONT
   #define ENABLE_LOADFONT 1
   #define IF_LOADFONT(...) __VA_ARGS__
   #define IF_NOT_LOADFONT(...)
#else
   #define ENABLE_LOADFONT 0
   #define IF_NOT_LOADFONT(...) __VA_ARGS__
   #define IF_LOADFONT(...)
#endif

#ifdef CONFIG_LOADKMAP
   #define ENABLE_LOADKMAP 1
   #define IF_LOADKMAP(...) __VA_ARGS__
   #define IF_NOT_LOADKMAP(...)
#else
   #define ENABLE_LOADKMAP 0
   #define IF_NOT_LOADKMAP(...) __VA_ARGS__
   #define IF_LOADKMAP(...)
#endif

#ifdef CONFIG_OPENVT
   #define ENABLE_OPENVT 1
   #define IF_OPENVT(...) __VA_ARGS__
   #define IF_NOT_OPENVT(...)
#else
   #define ENABLE_OPENVT 0
   #define IF_NOT_OPENVT(...) __VA_ARGS__
   #define IF_OPENVT(...)
#endif

#ifdef CONFIG_RESET
   #define ENABLE_RESET 1
   #define IF_RESET(...) __VA_ARGS__
   #define IF_NOT_RESET(...)
#else
   #define ENABLE_RESET 0
   #define IF_NOT_RESET(...) __VA_ARGS__
   #define IF_RESET(...)
#endif

#ifdef CONFIG_RESIZE
   #define ENABLE_RESIZE 1
   #define IF_RESIZE(...) __VA_ARGS__
   #define IF_NOT_RESIZE(...)
#else
   #define ENABLE_RESIZE 0
   #define IF_NOT_RESIZE(...) __VA_ARGS__
   #define IF_RESIZE(...)
#endif

#ifdef CONFIG_FEATURE_RESIZE_PRINT
   #define ENABLE_FEATURE_RESIZE_PRINT 1
   #define IF_FEATURE_RESIZE_PRINT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_RESIZE_PRINT(...)
#else
   #define ENABLE_FEATURE_RESIZE_PRINT 0
   #define IF_NOT_FEATURE_RESIZE_PRINT(...) __VA_ARGS__
   #define IF_FEATURE_RESIZE_PRINT(...)
#endif

#ifdef CONFIG_SETCONSOLE
   #define ENABLE_SETCONSOLE 1
   #define IF_SETCONSOLE(...) __VA_ARGS__
   #define IF_NOT_SETCONSOLE(...)
#else
   #define ENABLE_SETCONSOLE 0
   #define IF_NOT_SETCONSOLE(...) __VA_ARGS__
   #define IF_SETCONSOLE(...)
#endif

#ifdef CONFIG_FEATURE_SETCONSOLE_LONG_OPTIONS
   #define ENABLE_FEATURE_SETCONSOLE_LONG_OPTIONS 1
   #define IF_FEATURE_SETCONSOLE_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SETCONSOLE_LONG_OPTIONS(...)
#else
   #define ENABLE_FEATURE_SETCONSOLE_LONG_OPTIONS 0
   #define IF_NOT_FEATURE_SETCONSOLE_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_FEATURE_SETCONSOLE_LONG_OPTIONS(...)
#endif

#ifdef CONFIG_SETFONT
   #define ENABLE_SETFONT 1
   #define IF_SETFONT(...) __VA_ARGS__
   #define IF_NOT_SETFONT(...)
#else
   #define ENABLE_SETFONT 0
   #define IF_NOT_SETFONT(...) __VA_ARGS__
   #define IF_SETFONT(...)
#endif

#ifdef CONFIG_FEATURE_SETFONT_TEXTUAL_MAP
   #define ENABLE_FEATURE_SETFONT_TEXTUAL_MAP 1
   #define IF_FEATURE_SETFONT_TEXTUAL_MAP(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SETFONT_TEXTUAL_MAP(...)
#else
   #define ENABLE_FEATURE_SETFONT_TEXTUAL_MAP 0
   #define IF_NOT_FEATURE_SETFONT_TEXTUAL_MAP(...) __VA_ARGS__
   #define IF_FEATURE_SETFONT_TEXTUAL_MAP(...)
#endif

#ifdef CONFIG_DEFAULT_SETFONT_DIR
   #define ENABLE_DEFAULT_SETFONT_DIR 1
   #define IF_DEFAULT_SETFONT_DIR(...) __VA_ARGS__
   #define IF_NOT_DEFAULT_SETFONT_DIR(...)
#else
   #define ENABLE_DEFAULT_SETFONT_DIR 0
   #define IF_NOT_DEFAULT_SETFONT_DIR(...) __VA_ARGS__
   #define IF_DEFAULT_SETFONT_DIR(...)
#endif

#ifdef CONFIG_SETKEYCODES
   #define ENABLE_SETKEYCODES 1
   #define IF_SETKEYCODES(...) __VA_ARGS__
   #define IF_NOT_SETKEYCODES(...)
#else
   #define ENABLE_SETKEYCODES 0
   #define IF_NOT_SETKEYCODES(...) __VA_ARGS__
   #define IF_SETKEYCODES(...)
#endif

#ifdef CONFIG_SETLOGCONS
   #define ENABLE_SETLOGCONS 1
   #define IF_SETLOGCONS(...) __VA_ARGS__
   #define IF_NOT_SETLOGCONS(...)
#else
   #define ENABLE_SETLOGCONS 0
   #define IF_NOT_SETLOGCONS(...) __VA_ARGS__
   #define IF_SETLOGCONS(...)
#endif

#ifdef CONFIG_SHOWKEY
   #define ENABLE_SHOWKEY 1
   #define IF_SHOWKEY(...) __VA_ARGS__
   #define IF_NOT_SHOWKEY(...)
#else
   #define ENABLE_SHOWKEY 0
   #define IF_NOT_SHOWKEY(...) __VA_ARGS__
   #define IF_SHOWKEY(...)
#endif

#ifdef CONFIG_FEATURE_LOADFONT_PSF2
   #define ENABLE_FEATURE_LOADFONT_PSF2 1
   #define IF_FEATURE_LOADFONT_PSF2(...) __VA_ARGS__
   #define IF_NOT_FEATURE_LOADFONT_PSF2(...)
#else
   #define ENABLE_FEATURE_LOADFONT_PSF2 0
   #define IF_NOT_FEATURE_LOADFONT_PSF2(...) __VA_ARGS__
   #define IF_FEATURE_LOADFONT_PSF2(...)
#endif

#ifdef CONFIG_FEATURE_LOADFONT_RAW
   #define ENABLE_FEATURE_LOADFONT_RAW 1
   #define IF_FEATURE_LOADFONT_RAW(...) __VA_ARGS__
   #define IF_NOT_FEATURE_LOADFONT_RAW(...)
#else
   #define ENABLE_FEATURE_LOADFONT_RAW 0
   #define IF_NOT_FEATURE_LOADFONT_RAW(...) __VA_ARGS__
   #define IF_FEATURE_LOADFONT_RAW(...)
#endif

#ifdef CONFIG_MKTEMP
   #define ENABLE_MKTEMP 1
   #define IF_MKTEMP(...) __VA_ARGS__
   #define IF_NOT_MKTEMP(...)
#else
   #define ENABLE_MKTEMP 0
   #define IF_NOT_MKTEMP(...) __VA_ARGS__
   #define IF_MKTEMP(...)
#endif

#ifdef CONFIG_PIPE_PROGRESS
   #define ENABLE_PIPE_PROGRESS 1
   #define IF_PIPE_PROGRESS(...) __VA_ARGS__
   #define IF_NOT_PIPE_PROGRESS(...)
#else
   #define ENABLE_PIPE_PROGRESS 0
   #define IF_NOT_PIPE_PROGRESS(...) __VA_ARGS__
   #define IF_PIPE_PROGRESS(...)
#endif

#ifdef CONFIG_RUN_PARTS
   #define ENABLE_RUN_PARTS 1
   #define IF_RUN_PARTS(...) __VA_ARGS__
   #define IF_NOT_RUN_PARTS(...)
#else
   #define ENABLE_RUN_PARTS 0
   #define IF_NOT_RUN_PARTS(...) __VA_ARGS__
   #define IF_RUN_PARTS(...)
#endif

#ifdef CONFIG_FEATURE_RUN_PARTS_LONG_OPTIONS
   #define ENABLE_FEATURE_RUN_PARTS_LONG_OPTIONS 1
   #define IF_FEATURE_RUN_PARTS_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_RUN_PARTS_LONG_OPTIONS(...)
#else
   #define ENABLE_FEATURE_RUN_PARTS_LONG_OPTIONS 0
   #define IF_NOT_FEATURE_RUN_PARTS_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_FEATURE_RUN_PARTS_LONG_OPTIONS(...)
#endif

#ifdef CONFIG_FEATURE_RUN_PARTS_FANCY
   #define ENABLE_FEATURE_RUN_PARTS_FANCY 1
   #define IF_FEATURE_RUN_PARTS_FANCY(...) __VA_ARGS__
   #define IF_NOT_FEATURE_RUN_PARTS_FANCY(...)
#else
   #define ENABLE_FEATURE_RUN_PARTS_FANCY 0
   #define IF_NOT_FEATURE_RUN_PARTS_FANCY(...) __VA_ARGS__
   #define IF_FEATURE_RUN_PARTS_FANCY(...)
#endif

#ifdef CONFIG_START_STOP_DAEMON
   #define ENABLE_START_STOP_DAEMON 1
   #define IF_START_STOP_DAEMON(...) __VA_ARGS__
   #define IF_NOT_START_STOP_DAEMON(...)
#else
   #define ENABLE_START_STOP_DAEMON 0
   #define IF_NOT_START_STOP_DAEMON(...) __VA_ARGS__
   #define IF_START_STOP_DAEMON(...)
#endif

#ifdef CONFIG_FEATURE_START_STOP_DAEMON_FANCY
   #define ENABLE_FEATURE_START_STOP_DAEMON_FANCY 1
   #define IF_FEATURE_START_STOP_DAEMON_FANCY(...) __VA_ARGS__
   #define IF_NOT_FEATURE_START_STOP_DAEMON_FANCY(...)
#else
   #define ENABLE_FEATURE_START_STOP_DAEMON_FANCY 0
   #define IF_NOT_FEATURE_START_STOP_DAEMON_FANCY(...) __VA_ARGS__
   #define IF_FEATURE_START_STOP_DAEMON_FANCY(...)
#endif

#ifdef CONFIG_FEATURE_START_STOP_DAEMON_LONG_OPTIONS
   #define ENABLE_FEATURE_START_STOP_DAEMON_LONG_OPTIONS 1
   #define IF_FEATURE_START_STOP_DAEMON_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_START_STOP_DAEMON_LONG_OPTIONS(...)
#else
   #define ENABLE_FEATURE_START_STOP_DAEMON_LONG_OPTIONS 0
   #define IF_NOT_FEATURE_START_STOP_DAEMON_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_FEATURE_START_STOP_DAEMON_LONG_OPTIONS(...)
#endif

#ifdef CONFIG_WHICH
   #define ENABLE_WHICH 1
   #define IF_WHICH(...) __VA_ARGS__
   #define IF_NOT_WHICH(...)
#else
   #define ENABLE_WHICH 0
   #define IF_NOT_WHICH(...) __VA_ARGS__
   #define IF_WHICH(...)
#endif

#ifdef CONFIG_AWK
   #define ENABLE_AWK 1
   #define IF_AWK(...) __VA_ARGS__
   #define IF_NOT_AWK(...)
#else
   #define ENABLE_AWK 0
   #define IF_NOT_AWK(...) __VA_ARGS__
   #define IF_AWK(...)
#endif

#ifdef CONFIG_FEATURE_AWK_LIBM
   #define ENABLE_FEATURE_AWK_LIBM 1
   #define IF_FEATURE_AWK_LIBM(...) __VA_ARGS__
   #define IF_NOT_FEATURE_AWK_LIBM(...)
#else
   #define ENABLE_FEATURE_AWK_LIBM 0
   #define IF_NOT_FEATURE_AWK_LIBM(...) __VA_ARGS__
   #define IF_FEATURE_AWK_LIBM(...)
#endif

#ifdef CONFIG_CMP
   #define ENABLE_CMP 1
   #define IF_CMP(...) __VA_ARGS__
   #define IF_NOT_CMP(...)
#else
   #define ENABLE_CMP 0
   #define IF_NOT_CMP(...) __VA_ARGS__
   #define IF_CMP(...)
#endif

#ifdef CONFIG_DIFF
   #define ENABLE_DIFF 1
   #define IF_DIFF(...) __VA_ARGS__
   #define IF_NOT_DIFF(...)
#else
   #define ENABLE_DIFF 0
   #define IF_NOT_DIFF(...) __VA_ARGS__
   #define IF_DIFF(...)
#endif

#ifdef CONFIG_FEATURE_DIFF_LONG_OPTIONS
   #define ENABLE_FEATURE_DIFF_LONG_OPTIONS 1
   #define IF_FEATURE_DIFF_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_DIFF_LONG_OPTIONS(...)
#else
   #define ENABLE_FEATURE_DIFF_LONG_OPTIONS 0
   #define IF_NOT_FEATURE_DIFF_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_FEATURE_DIFF_LONG_OPTIONS(...)
#endif

#ifdef CONFIG_FEATURE_DIFF_DIR
   #define ENABLE_FEATURE_DIFF_DIR 1
   #define IF_FEATURE_DIFF_DIR(...) __VA_ARGS__
   #define IF_NOT_FEATURE_DIFF_DIR(...)
#else
   #define ENABLE_FEATURE_DIFF_DIR 0
   #define IF_NOT_FEATURE_DIFF_DIR(...) __VA_ARGS__
   #define IF_FEATURE_DIFF_DIR(...)
#endif

#ifdef CONFIG_ED
   #define ENABLE_ED 1
   #define IF_ED(...) __VA_ARGS__
   #define IF_NOT_ED(...)
#else
   #define ENABLE_ED 0
   #define IF_NOT_ED(...) __VA_ARGS__
   #define IF_ED(...)
#endif

#ifdef CONFIG_PATCH
   #define ENABLE_PATCH 1
   #define IF_PATCH(...) __VA_ARGS__
   #define IF_NOT_PATCH(...)
#else
   #define ENABLE_PATCH 0
   #define IF_NOT_PATCH(...) __VA_ARGS__
   #define IF_PATCH(...)
#endif

#ifdef CONFIG_SED
   #define ENABLE_SED 1
   #define IF_SED(...) __VA_ARGS__
   #define IF_NOT_SED(...)
#else
   #define ENABLE_SED 0
   #define IF_NOT_SED(...) __VA_ARGS__
   #define IF_SED(...)
#endif

#ifdef CONFIG_VI
   #define ENABLE_VI 1
   #define IF_VI(...) __VA_ARGS__
   #define IF_NOT_VI(...)
#else
   #define ENABLE_VI 0
   #define IF_NOT_VI(...) __VA_ARGS__
   #define IF_VI(...)
#endif

#ifdef CONFIG_FEATURE_VI_MAX_LEN
   #define ENABLE_FEATURE_VI_MAX_LEN 1
   #define IF_FEATURE_VI_MAX_LEN(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VI_MAX_LEN(...)
#else
   #define ENABLE_FEATURE_VI_MAX_LEN 0
   #define IF_NOT_FEATURE_VI_MAX_LEN(...) __VA_ARGS__
   #define IF_FEATURE_VI_MAX_LEN(...)
#endif

#ifdef CONFIG_FEATURE_VI_8BIT
   #define ENABLE_FEATURE_VI_8BIT 1
   #define IF_FEATURE_VI_8BIT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VI_8BIT(...)
#else
   #define ENABLE_FEATURE_VI_8BIT 0
   #define IF_NOT_FEATURE_VI_8BIT(...) __VA_ARGS__
   #define IF_FEATURE_VI_8BIT(...)
#endif

#ifdef CONFIG_FEATURE_VI_COLON
   #define ENABLE_FEATURE_VI_COLON 1
   #define IF_FEATURE_VI_COLON(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VI_COLON(...)
#else
   #define ENABLE_FEATURE_VI_COLON 0
   #define IF_NOT_FEATURE_VI_COLON(...) __VA_ARGS__
   #define IF_FEATURE_VI_COLON(...)
#endif

#ifdef CONFIG_FEATURE_VI_YANKMARK
   #define ENABLE_FEATURE_VI_YANKMARK 1
   #define IF_FEATURE_VI_YANKMARK(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VI_YANKMARK(...)
#else
   #define ENABLE_FEATURE_VI_YANKMARK 0
   #define IF_NOT_FEATURE_VI_YANKMARK(...) __VA_ARGS__
   #define IF_FEATURE_VI_YANKMARK(...)
#endif

#ifdef CONFIG_FEATURE_VI_SEARCH
   #define ENABLE_FEATURE_VI_SEARCH 1
   #define IF_FEATURE_VI_SEARCH(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VI_SEARCH(...)
#else
   #define ENABLE_FEATURE_VI_SEARCH 0
   #define IF_NOT_FEATURE_VI_SEARCH(...) __VA_ARGS__
   #define IF_FEATURE_VI_SEARCH(...)
#endif

#ifdef CONFIG_FEATURE_VI_USE_SIGNALS
   #define ENABLE_FEATURE_VI_USE_SIGNALS 1
   #define IF_FEATURE_VI_USE_SIGNALS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VI_USE_SIGNALS(...)
#else
   #define ENABLE_FEATURE_VI_USE_SIGNALS 0
   #define IF_NOT_FEATURE_VI_USE_SIGNALS(...) __VA_ARGS__
   #define IF_FEATURE_VI_USE_SIGNALS(...)
#endif

#ifdef CONFIG_FEATURE_VI_DOT_CMD
   #define ENABLE_FEATURE_VI_DOT_CMD 1
   #define IF_FEATURE_VI_DOT_CMD(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VI_DOT_CMD(...)
#else
   #define ENABLE_FEATURE_VI_DOT_CMD 0
   #define IF_NOT_FEATURE_VI_DOT_CMD(...) __VA_ARGS__
   #define IF_FEATURE_VI_DOT_CMD(...)
#endif

#ifdef CONFIG_FEATURE_VI_READONLY
   #define ENABLE_FEATURE_VI_READONLY 1
   #define IF_FEATURE_VI_READONLY(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VI_READONLY(...)
#else
   #define ENABLE_FEATURE_VI_READONLY 0
   #define IF_NOT_FEATURE_VI_READONLY(...) __VA_ARGS__
   #define IF_FEATURE_VI_READONLY(...)
#endif

#ifdef CONFIG_FEATURE_VI_SETOPTS
   #define ENABLE_FEATURE_VI_SETOPTS 1
   #define IF_FEATURE_VI_SETOPTS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VI_SETOPTS(...)
#else
   #define ENABLE_FEATURE_VI_SETOPTS 0
   #define IF_NOT_FEATURE_VI_SETOPTS(...) __VA_ARGS__
   #define IF_FEATURE_VI_SETOPTS(...)
#endif

#ifdef CONFIG_FEATURE_VI_SET
   #define ENABLE_FEATURE_VI_SET 1
   #define IF_FEATURE_VI_SET(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VI_SET(...)
#else
   #define ENABLE_FEATURE_VI_SET 0
   #define IF_NOT_FEATURE_VI_SET(...) __VA_ARGS__
   #define IF_FEATURE_VI_SET(...)
#endif

#ifdef CONFIG_FEATURE_VI_WIN_RESIZE
   #define ENABLE_FEATURE_VI_WIN_RESIZE 1
   #define IF_FEATURE_VI_WIN_RESIZE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VI_WIN_RESIZE(...)
#else
   #define ENABLE_FEATURE_VI_WIN_RESIZE 0
   #define IF_NOT_FEATURE_VI_WIN_RESIZE(...) __VA_ARGS__
   #define IF_FEATURE_VI_WIN_RESIZE(...)
#endif

#ifdef CONFIG_FEATURE_VI_ASK_TERMINAL
   #define ENABLE_FEATURE_VI_ASK_TERMINAL 1
   #define IF_FEATURE_VI_ASK_TERMINAL(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VI_ASK_TERMINAL(...)
#else
   #define ENABLE_FEATURE_VI_ASK_TERMINAL 0
   #define IF_NOT_FEATURE_VI_ASK_TERMINAL(...) __VA_ARGS__
   #define IF_FEATURE_VI_ASK_TERMINAL(...)
#endif

#ifdef CONFIG_FEATURE_VI_OPTIMIZE_CURSOR
   #define ENABLE_FEATURE_VI_OPTIMIZE_CURSOR 1
   #define IF_FEATURE_VI_OPTIMIZE_CURSOR(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VI_OPTIMIZE_CURSOR(...)
#else
   #define ENABLE_FEATURE_VI_OPTIMIZE_CURSOR 0
   #define IF_NOT_FEATURE_VI_OPTIMIZE_CURSOR(...) __VA_ARGS__
   #define IF_FEATURE_VI_OPTIMIZE_CURSOR(...)
#endif

#ifdef CONFIG_FEATURE_ALLOW_EXEC
   #define ENABLE_FEATURE_ALLOW_EXEC 1
   #define IF_FEATURE_ALLOW_EXEC(...) __VA_ARGS__
   #define IF_NOT_FEATURE_ALLOW_EXEC(...)
#else
   #define ENABLE_FEATURE_ALLOW_EXEC 0
   #define IF_NOT_FEATURE_ALLOW_EXEC(...) __VA_ARGS__
   #define IF_FEATURE_ALLOW_EXEC(...)
#endif

#ifdef CONFIG_FIND
   #define ENABLE_FIND 1
   #define IF_FIND(...) __VA_ARGS__
   #define IF_NOT_FIND(...)
#else
   #define ENABLE_FIND 0
   #define IF_NOT_FIND(...) __VA_ARGS__
   #define IF_FIND(...)
#endif

#ifdef CONFIG_FEATURE_FIND_PRINT0
   #define ENABLE_FEATURE_FIND_PRINT0 1
   #define IF_FEATURE_FIND_PRINT0(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FIND_PRINT0(...)
#else
   #define ENABLE_FEATURE_FIND_PRINT0 0
   #define IF_NOT_FEATURE_FIND_PRINT0(...) __VA_ARGS__
   #define IF_FEATURE_FIND_PRINT0(...)
#endif

#ifdef CONFIG_FEATURE_FIND_MTIME
   #define ENABLE_FEATURE_FIND_MTIME 1
   #define IF_FEATURE_FIND_MTIME(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FIND_MTIME(...)
#else
   #define ENABLE_FEATURE_FIND_MTIME 0
   #define IF_NOT_FEATURE_FIND_MTIME(...) __VA_ARGS__
   #define IF_FEATURE_FIND_MTIME(...)
#endif

#ifdef CONFIG_FEATURE_FIND_MMIN
   #define ENABLE_FEATURE_FIND_MMIN 1
   #define IF_FEATURE_FIND_MMIN(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FIND_MMIN(...)
#else
   #define ENABLE_FEATURE_FIND_MMIN 0
   #define IF_NOT_FEATURE_FIND_MMIN(...) __VA_ARGS__
   #define IF_FEATURE_FIND_MMIN(...)
#endif

#ifdef CONFIG_FEATURE_FIND_PERM
   #define ENABLE_FEATURE_FIND_PERM 1
   #define IF_FEATURE_FIND_PERM(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FIND_PERM(...)
#else
   #define ENABLE_FEATURE_FIND_PERM 0
   #define IF_NOT_FEATURE_FIND_PERM(...) __VA_ARGS__
   #define IF_FEATURE_FIND_PERM(...)
#endif

#ifdef CONFIG_FEATURE_FIND_TYPE
   #define ENABLE_FEATURE_FIND_TYPE 1
   #define IF_FEATURE_FIND_TYPE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FIND_TYPE(...)
#else
   #define ENABLE_FEATURE_FIND_TYPE 0
   #define IF_NOT_FEATURE_FIND_TYPE(...) __VA_ARGS__
   #define IF_FEATURE_FIND_TYPE(...)
#endif

#ifdef CONFIG_FEATURE_FIND_XDEV
   #define ENABLE_FEATURE_FIND_XDEV 1
   #define IF_FEATURE_FIND_XDEV(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FIND_XDEV(...)
#else
   #define ENABLE_FEATURE_FIND_XDEV 0
   #define IF_NOT_FEATURE_FIND_XDEV(...) __VA_ARGS__
   #define IF_FEATURE_FIND_XDEV(...)
#endif

#ifdef CONFIG_FEATURE_FIND_MAXDEPTH
   #define ENABLE_FEATURE_FIND_MAXDEPTH 1
   #define IF_FEATURE_FIND_MAXDEPTH(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FIND_MAXDEPTH(...)
#else
   #define ENABLE_FEATURE_FIND_MAXDEPTH 0
   #define IF_NOT_FEATURE_FIND_MAXDEPTH(...) __VA_ARGS__
   #define IF_FEATURE_FIND_MAXDEPTH(...)
#endif

#ifdef CONFIG_FEATURE_FIND_NEWER
   #define ENABLE_FEATURE_FIND_NEWER 1
   #define IF_FEATURE_FIND_NEWER(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FIND_NEWER(...)
#else
   #define ENABLE_FEATURE_FIND_NEWER 0
   #define IF_NOT_FEATURE_FIND_NEWER(...) __VA_ARGS__
   #define IF_FEATURE_FIND_NEWER(...)
#endif

#ifdef CONFIG_FEATURE_FIND_INUM
   #define ENABLE_FEATURE_FIND_INUM 1
   #define IF_FEATURE_FIND_INUM(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FIND_INUM(...)
#else
   #define ENABLE_FEATURE_FIND_INUM 0
   #define IF_NOT_FEATURE_FIND_INUM(...) __VA_ARGS__
   #define IF_FEATURE_FIND_INUM(...)
#endif

#ifdef CONFIG_FEATURE_FIND_EXEC
   #define ENABLE_FEATURE_FIND_EXEC 1
   #define IF_FEATURE_FIND_EXEC(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FIND_EXEC(...)
#else
   #define ENABLE_FEATURE_FIND_EXEC 0
   #define IF_NOT_FEATURE_FIND_EXEC(...) __VA_ARGS__
   #define IF_FEATURE_FIND_EXEC(...)
#endif

#ifdef CONFIG_FEATURE_FIND_USER
   #define ENABLE_FEATURE_FIND_USER 1
   #define IF_FEATURE_FIND_USER(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FIND_USER(...)
#else
   #define ENABLE_FEATURE_FIND_USER 0
   #define IF_NOT_FEATURE_FIND_USER(...) __VA_ARGS__
   #define IF_FEATURE_FIND_USER(...)
#endif

#ifdef CONFIG_FEATURE_FIND_GROUP
   #define ENABLE_FEATURE_FIND_GROUP 1
   #define IF_FEATURE_FIND_GROUP(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FIND_GROUP(...)
#else
   #define ENABLE_FEATURE_FIND_GROUP 0
   #define IF_NOT_FEATURE_FIND_GROUP(...) __VA_ARGS__
   #define IF_FEATURE_FIND_GROUP(...)
#endif

#ifdef CONFIG_FEATURE_FIND_NOT
   #define ENABLE_FEATURE_FIND_NOT 1
   #define IF_FEATURE_FIND_NOT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FIND_NOT(...)
#else
   #define ENABLE_FEATURE_FIND_NOT 0
   #define IF_NOT_FEATURE_FIND_NOT(...) __VA_ARGS__
   #define IF_FEATURE_FIND_NOT(...)
#endif

#ifdef CONFIG_FEATURE_FIND_DEPTH
   #define ENABLE_FEATURE_FIND_DEPTH 1
   #define IF_FEATURE_FIND_DEPTH(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FIND_DEPTH(...)
#else
   #define ENABLE_FEATURE_FIND_DEPTH 0
   #define IF_NOT_FEATURE_FIND_DEPTH(...) __VA_ARGS__
   #define IF_FEATURE_FIND_DEPTH(...)
#endif

#ifdef CONFIG_FEATURE_FIND_PAREN
   #define ENABLE_FEATURE_FIND_PAREN 1
   #define IF_FEATURE_FIND_PAREN(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FIND_PAREN(...)
#else
   #define ENABLE_FEATURE_FIND_PAREN 0
   #define IF_NOT_FEATURE_FIND_PAREN(...) __VA_ARGS__
   #define IF_FEATURE_FIND_PAREN(...)
#endif

#ifdef CONFIG_FEATURE_FIND_SIZE
   #define ENABLE_FEATURE_FIND_SIZE 1
   #define IF_FEATURE_FIND_SIZE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FIND_SIZE(...)
#else
   #define ENABLE_FEATURE_FIND_SIZE 0
   #define IF_NOT_FEATURE_FIND_SIZE(...) __VA_ARGS__
   #define IF_FEATURE_FIND_SIZE(...)
#endif

#ifdef CONFIG_FEATURE_FIND_PRUNE
   #define ENABLE_FEATURE_FIND_PRUNE 1
   #define IF_FEATURE_FIND_PRUNE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FIND_PRUNE(...)
#else
   #define ENABLE_FEATURE_FIND_PRUNE 0
   #define IF_NOT_FEATURE_FIND_PRUNE(...) __VA_ARGS__
   #define IF_FEATURE_FIND_PRUNE(...)
#endif

#ifdef CONFIG_FEATURE_FIND_DELETE
   #define ENABLE_FEATURE_FIND_DELETE 1
   #define IF_FEATURE_FIND_DELETE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FIND_DELETE(...)
#else
   #define ENABLE_FEATURE_FIND_DELETE 0
   #define IF_NOT_FEATURE_FIND_DELETE(...) __VA_ARGS__
   #define IF_FEATURE_FIND_DELETE(...)
#endif

#ifdef CONFIG_FEATURE_FIND_PATH
   #define ENABLE_FEATURE_FIND_PATH 1
   #define IF_FEATURE_FIND_PATH(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FIND_PATH(...)
#else
   #define ENABLE_FEATURE_FIND_PATH 0
   #define IF_NOT_FEATURE_FIND_PATH(...) __VA_ARGS__
   #define IF_FEATURE_FIND_PATH(...)
#endif

#ifdef CONFIG_FEATURE_FIND_REGEX
   #define ENABLE_FEATURE_FIND_REGEX 1
   #define IF_FEATURE_FIND_REGEX(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FIND_REGEX(...)
#else
   #define ENABLE_FEATURE_FIND_REGEX 0
   #define IF_NOT_FEATURE_FIND_REGEX(...) __VA_ARGS__
   #define IF_FEATURE_FIND_REGEX(...)
#endif

#ifdef CONFIG_FEATURE_FIND_CONTEXT
   #define ENABLE_FEATURE_FIND_CONTEXT 1
   #define IF_FEATURE_FIND_CONTEXT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FIND_CONTEXT(...)
#else
   #define ENABLE_FEATURE_FIND_CONTEXT 0
   #define IF_NOT_FEATURE_FIND_CONTEXT(...) __VA_ARGS__
   #define IF_FEATURE_FIND_CONTEXT(...)
#endif

#ifdef CONFIG_FEATURE_FIND_LINKS
   #define ENABLE_FEATURE_FIND_LINKS 1
   #define IF_FEATURE_FIND_LINKS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FIND_LINKS(...)
#else
   #define ENABLE_FEATURE_FIND_LINKS 0
   #define IF_NOT_FEATURE_FIND_LINKS(...) __VA_ARGS__
   #define IF_FEATURE_FIND_LINKS(...)
#endif

#ifdef CONFIG_GREP
   #define ENABLE_GREP 1
   #define IF_GREP(...) __VA_ARGS__
   #define IF_NOT_GREP(...)
#else
   #define ENABLE_GREP 0
   #define IF_NOT_GREP(...) __VA_ARGS__
   #define IF_GREP(...)
#endif

#ifdef CONFIG_FEATURE_GREP_EGREP_ALIAS
   #define ENABLE_FEATURE_GREP_EGREP_ALIAS 1
   #define IF_FEATURE_GREP_EGREP_ALIAS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_GREP_EGREP_ALIAS(...)
#else
   #define ENABLE_FEATURE_GREP_EGREP_ALIAS 0
   #define IF_NOT_FEATURE_GREP_EGREP_ALIAS(...) __VA_ARGS__
   #define IF_FEATURE_GREP_EGREP_ALIAS(...)
#endif

#ifdef CONFIG_FEATURE_GREP_FGREP_ALIAS
   #define ENABLE_FEATURE_GREP_FGREP_ALIAS 1
   #define IF_FEATURE_GREP_FGREP_ALIAS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_GREP_FGREP_ALIAS(...)
#else
   #define ENABLE_FEATURE_GREP_FGREP_ALIAS 0
   #define IF_NOT_FEATURE_GREP_FGREP_ALIAS(...) __VA_ARGS__
   #define IF_FEATURE_GREP_FGREP_ALIAS(...)
#endif

#ifdef CONFIG_FEATURE_GREP_CONTEXT
   #define ENABLE_FEATURE_GREP_CONTEXT 1
   #define IF_FEATURE_GREP_CONTEXT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_GREP_CONTEXT(...)
#else
   #define ENABLE_FEATURE_GREP_CONTEXT 0
   #define IF_NOT_FEATURE_GREP_CONTEXT(...) __VA_ARGS__
   #define IF_FEATURE_GREP_CONTEXT(...)
#endif

#ifdef CONFIG_XARGS
   #define ENABLE_XARGS 1
   #define IF_XARGS(...) __VA_ARGS__
   #define IF_NOT_XARGS(...)
#else
   #define ENABLE_XARGS 0
   #define IF_NOT_XARGS(...) __VA_ARGS__
   #define IF_XARGS(...)
#endif

#ifdef CONFIG_FEATURE_XARGS_SUPPORT_CONFIRMATION
   #define ENABLE_FEATURE_XARGS_SUPPORT_CONFIRMATION 1
   #define IF_FEATURE_XARGS_SUPPORT_CONFIRMATION(...) __VA_ARGS__
   #define IF_NOT_FEATURE_XARGS_SUPPORT_CONFIRMATION(...)
#else
   #define ENABLE_FEATURE_XARGS_SUPPORT_CONFIRMATION 0
   #define IF_NOT_FEATURE_XARGS_SUPPORT_CONFIRMATION(...) __VA_ARGS__
   #define IF_FEATURE_XARGS_SUPPORT_CONFIRMATION(...)
#endif

#ifdef CONFIG_FEATURE_XARGS_SUPPORT_QUOTES
   #define ENABLE_FEATURE_XARGS_SUPPORT_QUOTES 1
   #define IF_FEATURE_XARGS_SUPPORT_QUOTES(...) __VA_ARGS__
   #define IF_NOT_FEATURE_XARGS_SUPPORT_QUOTES(...)
#else
   #define ENABLE_FEATURE_XARGS_SUPPORT_QUOTES 0
   #define IF_NOT_FEATURE_XARGS_SUPPORT_QUOTES(...) __VA_ARGS__
   #define IF_FEATURE_XARGS_SUPPORT_QUOTES(...)
#endif

#ifdef CONFIG_FEATURE_XARGS_SUPPORT_TERMOPT
   #define ENABLE_FEATURE_XARGS_SUPPORT_TERMOPT 1
   #define IF_FEATURE_XARGS_SUPPORT_TERMOPT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_XARGS_SUPPORT_TERMOPT(...)
#else
   #define ENABLE_FEATURE_XARGS_SUPPORT_TERMOPT 0
   #define IF_NOT_FEATURE_XARGS_SUPPORT_TERMOPT(...) __VA_ARGS__
   #define IF_FEATURE_XARGS_SUPPORT_TERMOPT(...)
#endif

#ifdef CONFIG_FEATURE_XARGS_SUPPORT_ZERO_TERM
   #define ENABLE_FEATURE_XARGS_SUPPORT_ZERO_TERM 1
   #define IF_FEATURE_XARGS_SUPPORT_ZERO_TERM(...) __VA_ARGS__
   #define IF_NOT_FEATURE_XARGS_SUPPORT_ZERO_TERM(...)
#else
   #define ENABLE_FEATURE_XARGS_SUPPORT_ZERO_TERM 0
   #define IF_NOT_FEATURE_XARGS_SUPPORT_ZERO_TERM(...) __VA_ARGS__
   #define IF_FEATURE_XARGS_SUPPORT_ZERO_TERM(...)
#endif

#ifdef CONFIG_BOOTCHARTD
   #define ENABLE_BOOTCHARTD 1
   #define IF_BOOTCHARTD(...) __VA_ARGS__
   #define IF_NOT_BOOTCHARTD(...)
#else
   #define ENABLE_BOOTCHARTD 0
   #define IF_NOT_BOOTCHARTD(...) __VA_ARGS__
   #define IF_BOOTCHARTD(...)
#endif

#ifdef CONFIG_FEATURE_BOOTCHARTD_BLOATED_HEADER
   #define ENABLE_FEATURE_BOOTCHARTD_BLOATED_HEADER 1
   #define IF_FEATURE_BOOTCHARTD_BLOATED_HEADER(...) __VA_ARGS__
   #define IF_NOT_FEATURE_BOOTCHARTD_BLOATED_HEADER(...)
#else
   #define ENABLE_FEATURE_BOOTCHARTD_BLOATED_HEADER 0
   #define IF_NOT_FEATURE_BOOTCHARTD_BLOATED_HEADER(...) __VA_ARGS__
   #define IF_FEATURE_BOOTCHARTD_BLOATED_HEADER(...)
#endif

#ifdef CONFIG_FEATURE_BOOTCHARTD_CONFIG_FILE
   #define ENABLE_FEATURE_BOOTCHARTD_CONFIG_FILE 1
   #define IF_FEATURE_BOOTCHARTD_CONFIG_FILE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_BOOTCHARTD_CONFIG_FILE(...)
#else
   #define ENABLE_FEATURE_BOOTCHARTD_CONFIG_FILE 0
   #define IF_NOT_FEATURE_BOOTCHARTD_CONFIG_FILE(...) __VA_ARGS__
   #define IF_FEATURE_BOOTCHARTD_CONFIG_FILE(...)
#endif

#ifdef CONFIG_INIT
   #define ENABLE_INIT 1
   #define IF_INIT(...) __VA_ARGS__
   #define IF_NOT_INIT(...)
#else
   #define ENABLE_INIT 0
   #define IF_NOT_INIT(...) __VA_ARGS__
   #define IF_INIT(...)
#endif

#ifdef CONFIG_FEATURE_USE_INITTAB
   #define ENABLE_FEATURE_USE_INITTAB 1
   #define IF_FEATURE_USE_INITTAB(...) __VA_ARGS__
   #define IF_NOT_FEATURE_USE_INITTAB(...)
#else
   #define ENABLE_FEATURE_USE_INITTAB 0
   #define IF_NOT_FEATURE_USE_INITTAB(...) __VA_ARGS__
   #define IF_FEATURE_USE_INITTAB(...)
#endif

#ifdef CONFIG_FEATURE_KILL_REMOVED
   #define ENABLE_FEATURE_KILL_REMOVED 1
   #define IF_FEATURE_KILL_REMOVED(...) __VA_ARGS__
   #define IF_NOT_FEATURE_KILL_REMOVED(...)
#else
   #define ENABLE_FEATURE_KILL_REMOVED 0
   #define IF_NOT_FEATURE_KILL_REMOVED(...) __VA_ARGS__
   #define IF_FEATURE_KILL_REMOVED(...)
#endif

#ifdef CONFIG_FEATURE_KILL_DELAY
   #define ENABLE_FEATURE_KILL_DELAY 1
   #define IF_FEATURE_KILL_DELAY(...) __VA_ARGS__
   #define IF_NOT_FEATURE_KILL_DELAY(...)
#else
   #define ENABLE_FEATURE_KILL_DELAY 0
   #define IF_NOT_FEATURE_KILL_DELAY(...) __VA_ARGS__
   #define IF_FEATURE_KILL_DELAY(...)
#endif

#ifdef CONFIG_FEATURE_INIT_SCTTY
   #define ENABLE_FEATURE_INIT_SCTTY 1
   #define IF_FEATURE_INIT_SCTTY(...) __VA_ARGS__
   #define IF_NOT_FEATURE_INIT_SCTTY(...)
#else
   #define ENABLE_FEATURE_INIT_SCTTY 0
   #define IF_NOT_FEATURE_INIT_SCTTY(...) __VA_ARGS__
   #define IF_FEATURE_INIT_SCTTY(...)
#endif

#ifdef CONFIG_FEATURE_INIT_SYSLOG
   #define ENABLE_FEATURE_INIT_SYSLOG 1
   #define IF_FEATURE_INIT_SYSLOG(...) __VA_ARGS__
   #define IF_NOT_FEATURE_INIT_SYSLOG(...)
#else
   #define ENABLE_FEATURE_INIT_SYSLOG 0
   #define IF_NOT_FEATURE_INIT_SYSLOG(...) __VA_ARGS__
   #define IF_FEATURE_INIT_SYSLOG(...)
#endif

#ifdef CONFIG_FEATURE_EXTRA_QUIET
   #define ENABLE_FEATURE_EXTRA_QUIET 1
   #define IF_FEATURE_EXTRA_QUIET(...) __VA_ARGS__
   #define IF_NOT_FEATURE_EXTRA_QUIET(...)
#else
   #define ENABLE_FEATURE_EXTRA_QUIET 0
   #define IF_NOT_FEATURE_EXTRA_QUIET(...) __VA_ARGS__
   #define IF_FEATURE_EXTRA_QUIET(...)
#endif

#ifdef CONFIG_FEATURE_INIT_COREDUMPS
   #define ENABLE_FEATURE_INIT_COREDUMPS 1
   #define IF_FEATURE_INIT_COREDUMPS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_INIT_COREDUMPS(...)
#else
   #define ENABLE_FEATURE_INIT_COREDUMPS 0
   #define IF_NOT_FEATURE_INIT_COREDUMPS(...) __VA_ARGS__
   #define IF_FEATURE_INIT_COREDUMPS(...)
#endif

#ifdef CONFIG_FEATURE_INITRD
   #define ENABLE_FEATURE_INITRD 1
   #define IF_FEATURE_INITRD(...) __VA_ARGS__
   #define IF_NOT_FEATURE_INITRD(...)
#else
   #define ENABLE_FEATURE_INITRD 0
   #define IF_NOT_FEATURE_INITRD(...) __VA_ARGS__
   #define IF_FEATURE_INITRD(...)
#endif

#ifdef CONFIG_INIT_TERMINAL_TYPE
   #define ENABLE_INIT_TERMINAL_TYPE 1
   #define IF_INIT_TERMINAL_TYPE(...) __VA_ARGS__
   #define IF_NOT_INIT_TERMINAL_TYPE(...)
#else
   #define ENABLE_INIT_TERMINAL_TYPE 0
   #define IF_NOT_INIT_TERMINAL_TYPE(...) __VA_ARGS__
   #define IF_INIT_TERMINAL_TYPE(...)
#endif

#ifdef CONFIG_HALT
   #define ENABLE_HALT 1
   #define IF_HALT(...) __VA_ARGS__
   #define IF_NOT_HALT(...)
#else
   #define ENABLE_HALT 0
   #define IF_NOT_HALT(...) __VA_ARGS__
   #define IF_HALT(...)
#endif

#ifdef CONFIG_FEATURE_CALL_TELINIT
   #define ENABLE_FEATURE_CALL_TELINIT 1
   #define IF_FEATURE_CALL_TELINIT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_CALL_TELINIT(...)
#else
   #define ENABLE_FEATURE_CALL_TELINIT 0
   #define IF_NOT_FEATURE_CALL_TELINIT(...) __VA_ARGS__
   #define IF_FEATURE_CALL_TELINIT(...)
#endif

#ifdef CONFIG_TELINIT_PATH
   #define ENABLE_TELINIT_PATH 1
   #define IF_TELINIT_PATH(...) __VA_ARGS__
   #define IF_NOT_TELINIT_PATH(...)
#else
   #define ENABLE_TELINIT_PATH 0
   #define IF_NOT_TELINIT_PATH(...) __VA_ARGS__
   #define IF_TELINIT_PATH(...)
#endif

#ifdef CONFIG_MESG
   #define ENABLE_MESG 1
   #define IF_MESG(...) __VA_ARGS__
   #define IF_NOT_MESG(...)
#else
   #define ENABLE_MESG 0
   #define IF_NOT_MESG(...) __VA_ARGS__
   #define IF_MESG(...)
#endif

#ifdef CONFIG_FEATURE_SHADOWPASSWDS
   #define ENABLE_FEATURE_SHADOWPASSWDS 1
   #define IF_FEATURE_SHADOWPASSWDS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SHADOWPASSWDS(...)
#else
   #define ENABLE_FEATURE_SHADOWPASSWDS 0
   #define IF_NOT_FEATURE_SHADOWPASSWDS(...) __VA_ARGS__
   #define IF_FEATURE_SHADOWPASSWDS(...)
#endif

#ifdef CONFIG_USE_BB_PWD_GRP
   #define ENABLE_USE_BB_PWD_GRP 1
   #define IF_USE_BB_PWD_GRP(...) __VA_ARGS__
   #define IF_NOT_USE_BB_PWD_GRP(...)
#else
   #define ENABLE_USE_BB_PWD_GRP 0
   #define IF_NOT_USE_BB_PWD_GRP(...) __VA_ARGS__
   #define IF_USE_BB_PWD_GRP(...)
#endif

#ifdef CONFIG_USE_BB_SHADOW
   #define ENABLE_USE_BB_SHADOW 1
   #define IF_USE_BB_SHADOW(...) __VA_ARGS__
   #define IF_NOT_USE_BB_SHADOW(...)
#else
   #define ENABLE_USE_BB_SHADOW 0
   #define IF_NOT_USE_BB_SHADOW(...) __VA_ARGS__
   #define IF_USE_BB_SHADOW(...)
#endif

#ifdef CONFIG_USE_BB_CRYPT
   #define ENABLE_USE_BB_CRYPT 1
   #define IF_USE_BB_CRYPT(...) __VA_ARGS__
   #define IF_NOT_USE_BB_CRYPT(...)
#else
   #define ENABLE_USE_BB_CRYPT 0
   #define IF_NOT_USE_BB_CRYPT(...) __VA_ARGS__
   #define IF_USE_BB_CRYPT(...)
#endif

#ifdef CONFIG_USE_BB_CRYPT_SHA
   #define ENABLE_USE_BB_CRYPT_SHA 1
   #define IF_USE_BB_CRYPT_SHA(...) __VA_ARGS__
   #define IF_NOT_USE_BB_CRYPT_SHA(...)
#else
   #define ENABLE_USE_BB_CRYPT_SHA 0
   #define IF_NOT_USE_BB_CRYPT_SHA(...) __VA_ARGS__
   #define IF_USE_BB_CRYPT_SHA(...)
#endif

#ifdef CONFIG_ADDUSER
   #define ENABLE_ADDUSER 1
   #define IF_ADDUSER(...) __VA_ARGS__
   #define IF_NOT_ADDUSER(...)
#else
   #define ENABLE_ADDUSER 0
   #define IF_NOT_ADDUSER(...) __VA_ARGS__
   #define IF_ADDUSER(...)
#endif

#ifdef CONFIG_FEATURE_ADDUSER_LONG_OPTIONS
   #define ENABLE_FEATURE_ADDUSER_LONG_OPTIONS 1
   #define IF_FEATURE_ADDUSER_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_ADDUSER_LONG_OPTIONS(...)
#else
   #define ENABLE_FEATURE_ADDUSER_LONG_OPTIONS 0
   #define IF_NOT_FEATURE_ADDUSER_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_FEATURE_ADDUSER_LONG_OPTIONS(...)
#endif

#ifdef CONFIG_FEATURE_CHECK_NAMES
   #define ENABLE_FEATURE_CHECK_NAMES 1
   #define IF_FEATURE_CHECK_NAMES(...) __VA_ARGS__
   #define IF_NOT_FEATURE_CHECK_NAMES(...)
#else
   #define ENABLE_FEATURE_CHECK_NAMES 0
   #define IF_NOT_FEATURE_CHECK_NAMES(...) __VA_ARGS__
   #define IF_FEATURE_CHECK_NAMES(...)
#endif

#ifdef CONFIG_FIRST_SYSTEM_ID
   #define ENABLE_FIRST_SYSTEM_ID 1
   #define IF_FIRST_SYSTEM_ID(...) __VA_ARGS__
   #define IF_NOT_FIRST_SYSTEM_ID(...)
#else
   #define ENABLE_FIRST_SYSTEM_ID 0
   #define IF_NOT_FIRST_SYSTEM_ID(...) __VA_ARGS__
   #define IF_FIRST_SYSTEM_ID(...)
#endif

#ifdef CONFIG_LAST_SYSTEM_ID
   #define ENABLE_LAST_SYSTEM_ID 1
   #define IF_LAST_SYSTEM_ID(...) __VA_ARGS__
   #define IF_NOT_LAST_SYSTEM_ID(...)
#else
   #define ENABLE_LAST_SYSTEM_ID 0
   #define IF_NOT_LAST_SYSTEM_ID(...) __VA_ARGS__
   #define IF_LAST_SYSTEM_ID(...)
#endif

#ifdef CONFIG_ADDGROUP
   #define ENABLE_ADDGROUP 1
   #define IF_ADDGROUP(...) __VA_ARGS__
   #define IF_NOT_ADDGROUP(...)
#else
   #define ENABLE_ADDGROUP 0
   #define IF_NOT_ADDGROUP(...) __VA_ARGS__
   #define IF_ADDGROUP(...)
#endif

#ifdef CONFIG_FEATURE_ADDGROUP_LONG_OPTIONS
   #define ENABLE_FEATURE_ADDGROUP_LONG_OPTIONS 1
   #define IF_FEATURE_ADDGROUP_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_ADDGROUP_LONG_OPTIONS(...)
#else
   #define ENABLE_FEATURE_ADDGROUP_LONG_OPTIONS 0
   #define IF_NOT_FEATURE_ADDGROUP_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_FEATURE_ADDGROUP_LONG_OPTIONS(...)
#endif

#ifdef CONFIG_FEATURE_ADDUSER_TO_GROUP
   #define ENABLE_FEATURE_ADDUSER_TO_GROUP 1
   #define IF_FEATURE_ADDUSER_TO_GROUP(...) __VA_ARGS__
   #define IF_NOT_FEATURE_ADDUSER_TO_GROUP(...)
#else
   #define ENABLE_FEATURE_ADDUSER_TO_GROUP 0
   #define IF_NOT_FEATURE_ADDUSER_TO_GROUP(...) __VA_ARGS__
   #define IF_FEATURE_ADDUSER_TO_GROUP(...)
#endif

#ifdef CONFIG_DELUSER
   #define ENABLE_DELUSER 1
   #define IF_DELUSER(...) __VA_ARGS__
   #define IF_NOT_DELUSER(...)
#else
   #define ENABLE_DELUSER 0
   #define IF_NOT_DELUSER(...) __VA_ARGS__
   #define IF_DELUSER(...)
#endif

#ifdef CONFIG_DELGROUP
   #define ENABLE_DELGROUP 1
   #define IF_DELGROUP(...) __VA_ARGS__
   #define IF_NOT_DELGROUP(...)
#else
   #define ENABLE_DELGROUP 0
   #define IF_NOT_DELGROUP(...) __VA_ARGS__
   #define IF_DELGROUP(...)
#endif

#ifdef CONFIG_FEATURE_DEL_USER_FROM_GROUP
   #define ENABLE_FEATURE_DEL_USER_FROM_GROUP 1
   #define IF_FEATURE_DEL_USER_FROM_GROUP(...) __VA_ARGS__
   #define IF_NOT_FEATURE_DEL_USER_FROM_GROUP(...)
#else
   #define ENABLE_FEATURE_DEL_USER_FROM_GROUP 0
   #define IF_NOT_FEATURE_DEL_USER_FROM_GROUP(...) __VA_ARGS__
   #define IF_FEATURE_DEL_USER_FROM_GROUP(...)
#endif

#ifdef CONFIG_GETTY
   #define ENABLE_GETTY 1
   #define IF_GETTY(...) __VA_ARGS__
   #define IF_NOT_GETTY(...)
#else
   #define ENABLE_GETTY 0
   #define IF_NOT_GETTY(...) __VA_ARGS__
   #define IF_GETTY(...)
#endif

#ifdef CONFIG_LOGIN
   #define ENABLE_LOGIN 1
   #define IF_LOGIN(...) __VA_ARGS__
   #define IF_NOT_LOGIN(...)
#else
   #define ENABLE_LOGIN 0
   #define IF_NOT_LOGIN(...) __VA_ARGS__
   #define IF_LOGIN(...)
#endif

#ifdef CONFIG_PAM
   #define ENABLE_PAM 1
   #define IF_PAM(...) __VA_ARGS__
   #define IF_NOT_PAM(...)
#else
   #define ENABLE_PAM 0
   #define IF_NOT_PAM(...) __VA_ARGS__
   #define IF_PAM(...)
#endif

#ifdef CONFIG_LOGIN_SCRIPTS
   #define ENABLE_LOGIN_SCRIPTS 1
   #define IF_LOGIN_SCRIPTS(...) __VA_ARGS__
   #define IF_NOT_LOGIN_SCRIPTS(...)
#else
   #define ENABLE_LOGIN_SCRIPTS 0
   #define IF_NOT_LOGIN_SCRIPTS(...) __VA_ARGS__
   #define IF_LOGIN_SCRIPTS(...)
#endif

#ifdef CONFIG_FEATURE_NOLOGIN
   #define ENABLE_FEATURE_NOLOGIN 1
   #define IF_FEATURE_NOLOGIN(...) __VA_ARGS__
   #define IF_NOT_FEATURE_NOLOGIN(...)
#else
   #define ENABLE_FEATURE_NOLOGIN 0
   #define IF_NOT_FEATURE_NOLOGIN(...) __VA_ARGS__
   #define IF_FEATURE_NOLOGIN(...)
#endif

#ifdef CONFIG_FEATURE_SECURETTY
   #define ENABLE_FEATURE_SECURETTY 1
   #define IF_FEATURE_SECURETTY(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SECURETTY(...)
#else
   #define ENABLE_FEATURE_SECURETTY 0
   #define IF_NOT_FEATURE_SECURETTY(...) __VA_ARGS__
   #define IF_FEATURE_SECURETTY(...)
#endif

#ifdef CONFIG_PASSWD
   #define ENABLE_PASSWD 1
   #define IF_PASSWD(...) __VA_ARGS__
   #define IF_NOT_PASSWD(...)
#else
   #define ENABLE_PASSWD 0
   #define IF_NOT_PASSWD(...) __VA_ARGS__
   #define IF_PASSWD(...)
#endif

#ifdef CONFIG_FEATURE_PASSWD_WEAK_CHECK
   #define ENABLE_FEATURE_PASSWD_WEAK_CHECK 1
   #define IF_FEATURE_PASSWD_WEAK_CHECK(...) __VA_ARGS__
   #define IF_NOT_FEATURE_PASSWD_WEAK_CHECK(...)
#else
   #define ENABLE_FEATURE_PASSWD_WEAK_CHECK 0
   #define IF_NOT_FEATURE_PASSWD_WEAK_CHECK(...) __VA_ARGS__
   #define IF_FEATURE_PASSWD_WEAK_CHECK(...)
#endif

#ifdef CONFIG_CRYPTPW
   #define ENABLE_CRYPTPW 1
   #define IF_CRYPTPW(...) __VA_ARGS__
   #define IF_NOT_CRYPTPW(...)
#else
   #define ENABLE_CRYPTPW 0
   #define IF_NOT_CRYPTPW(...) __VA_ARGS__
   #define IF_CRYPTPW(...)
#endif

#ifdef CONFIG_CHPASSWD
   #define ENABLE_CHPASSWD 1
   #define IF_CHPASSWD(...) __VA_ARGS__
   #define IF_NOT_CHPASSWD(...)
#else
   #define ENABLE_CHPASSWD 0
   #define IF_NOT_CHPASSWD(...) __VA_ARGS__
   #define IF_CHPASSWD(...)
#endif

#ifdef CONFIG_SU
   #define ENABLE_SU 1
   #define IF_SU(...) __VA_ARGS__
   #define IF_NOT_SU(...)
#else
   #define ENABLE_SU 0
   #define IF_NOT_SU(...) __VA_ARGS__
   #define IF_SU(...)
#endif

#ifdef CONFIG_FEATURE_SU_SYSLOG
   #define ENABLE_FEATURE_SU_SYSLOG 1
   #define IF_FEATURE_SU_SYSLOG(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SU_SYSLOG(...)
#else
   #define ENABLE_FEATURE_SU_SYSLOG 0
   #define IF_NOT_FEATURE_SU_SYSLOG(...) __VA_ARGS__
   #define IF_FEATURE_SU_SYSLOG(...)
#endif

#ifdef CONFIG_FEATURE_SU_CHECKS_SHELLS
   #define ENABLE_FEATURE_SU_CHECKS_SHELLS 1
   #define IF_FEATURE_SU_CHECKS_SHELLS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SU_CHECKS_SHELLS(...)
#else
   #define ENABLE_FEATURE_SU_CHECKS_SHELLS 0
   #define IF_NOT_FEATURE_SU_CHECKS_SHELLS(...) __VA_ARGS__
   #define IF_FEATURE_SU_CHECKS_SHELLS(...)
#endif

#ifdef CONFIG_SULOGIN
   #define ENABLE_SULOGIN 1
   #define IF_SULOGIN(...) __VA_ARGS__
   #define IF_NOT_SULOGIN(...)
#else
   #define ENABLE_SULOGIN 0
   #define IF_NOT_SULOGIN(...) __VA_ARGS__
   #define IF_SULOGIN(...)
#endif

#ifdef CONFIG_VLOCK
   #define ENABLE_VLOCK 1
   #define IF_VLOCK(...) __VA_ARGS__
   #define IF_NOT_VLOCK(...)
#else
   #define ENABLE_VLOCK 0
   #define IF_NOT_VLOCK(...) __VA_ARGS__
   #define IF_VLOCK(...)
#endif

#ifdef CONFIG_CHATTR
   #define ENABLE_CHATTR 1
   #define IF_CHATTR(...) __VA_ARGS__
   #define IF_NOT_CHATTR(...)
#else
   #define ENABLE_CHATTR 0
   #define IF_NOT_CHATTR(...) __VA_ARGS__
   #define IF_CHATTR(...)
#endif

#ifdef CONFIG_FSCK
   #define ENABLE_FSCK 1
   #define IF_FSCK(...) __VA_ARGS__
   #define IF_NOT_FSCK(...)
#else
   #define ENABLE_FSCK 0
   #define IF_NOT_FSCK(...) __VA_ARGS__
   #define IF_FSCK(...)
#endif

#ifdef CONFIG_LSATTR
   #define ENABLE_LSATTR 1
   #define IF_LSATTR(...) __VA_ARGS__
   #define IF_NOT_LSATTR(...)
#else
   #define ENABLE_LSATTR 0
   #define IF_NOT_LSATTR(...) __VA_ARGS__
   #define IF_LSATTR(...)
#endif

#ifdef CONFIG_TUNE2FS
   #define ENABLE_TUNE2FS 1
   #define IF_TUNE2FS(...) __VA_ARGS__
   #define IF_NOT_TUNE2FS(...)
#else
   #define ENABLE_TUNE2FS 0
   #define IF_NOT_TUNE2FS(...) __VA_ARGS__
   #define IF_TUNE2FS(...)
#endif

#ifdef CONFIG_MODINFO
   #define ENABLE_MODINFO 1
   #define IF_MODINFO(...) __VA_ARGS__
   #define IF_NOT_MODINFO(...)
#else
   #define ENABLE_MODINFO 0
   #define IF_NOT_MODINFO(...) __VA_ARGS__
   #define IF_MODINFO(...)
#endif

#ifdef CONFIG_MODPROBE_SMALL
   #define ENABLE_MODPROBE_SMALL 1
   #define IF_MODPROBE_SMALL(...) __VA_ARGS__
   #define IF_NOT_MODPROBE_SMALL(...)
#else
   #define ENABLE_MODPROBE_SMALL 0
   #define IF_NOT_MODPROBE_SMALL(...) __VA_ARGS__
   #define IF_MODPROBE_SMALL(...)
#endif

#ifdef CONFIG_FEATURE_MODPROBE_SMALL_OPTIONS_ON_CMDLINE
   #define ENABLE_FEATURE_MODPROBE_SMALL_OPTIONS_ON_CMDLINE 1
   #define IF_FEATURE_MODPROBE_SMALL_OPTIONS_ON_CMDLINE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MODPROBE_SMALL_OPTIONS_ON_CMDLINE(...)
#else
   #define ENABLE_FEATURE_MODPROBE_SMALL_OPTIONS_ON_CMDLINE 0
   #define IF_NOT_FEATURE_MODPROBE_SMALL_OPTIONS_ON_CMDLINE(...) __VA_ARGS__
   #define IF_FEATURE_MODPROBE_SMALL_OPTIONS_ON_CMDLINE(...)
#endif

#ifdef CONFIG_FEATURE_MODPROBE_SMALL_CHECK_ALREADY_LOADED
   #define ENABLE_FEATURE_MODPROBE_SMALL_CHECK_ALREADY_LOADED 1
   #define IF_FEATURE_MODPROBE_SMALL_CHECK_ALREADY_LOADED(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MODPROBE_SMALL_CHECK_ALREADY_LOADED(...)
#else
   #define ENABLE_FEATURE_MODPROBE_SMALL_CHECK_ALREADY_LOADED 0
   #define IF_NOT_FEATURE_MODPROBE_SMALL_CHECK_ALREADY_LOADED(...) __VA_ARGS__
   #define IF_FEATURE_MODPROBE_SMALL_CHECK_ALREADY_LOADED(...)
#endif

#ifdef CONFIG_INSMOD
   #define ENABLE_INSMOD 1
   #define IF_INSMOD(...) __VA_ARGS__
   #define IF_NOT_INSMOD(...)
#else
   #define ENABLE_INSMOD 0
   #define IF_NOT_INSMOD(...) __VA_ARGS__
   #define IF_INSMOD(...)
#endif

#ifdef CONFIG_RMMOD
   #define ENABLE_RMMOD 1
   #define IF_RMMOD(...) __VA_ARGS__
   #define IF_NOT_RMMOD(...)
#else
   #define ENABLE_RMMOD 0
   #define IF_NOT_RMMOD(...) __VA_ARGS__
   #define IF_RMMOD(...)
#endif

#ifdef CONFIG_LSMOD
   #define ENABLE_LSMOD 1
   #define IF_LSMOD(...) __VA_ARGS__
   #define IF_NOT_LSMOD(...)
#else
   #define ENABLE_LSMOD 0
   #define IF_NOT_LSMOD(...) __VA_ARGS__
   #define IF_LSMOD(...)
#endif

#ifdef CONFIG_FEATURE_LSMOD_PRETTY_2_6_OUTPUT
   #define ENABLE_FEATURE_LSMOD_PRETTY_2_6_OUTPUT 1
   #define IF_FEATURE_LSMOD_PRETTY_2_6_OUTPUT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_LSMOD_PRETTY_2_6_OUTPUT(...)
#else
   #define ENABLE_FEATURE_LSMOD_PRETTY_2_6_OUTPUT 0
   #define IF_NOT_FEATURE_LSMOD_PRETTY_2_6_OUTPUT(...) __VA_ARGS__
   #define IF_FEATURE_LSMOD_PRETTY_2_6_OUTPUT(...)
#endif

#ifdef CONFIG_MODPROBE
   #define ENABLE_MODPROBE 1
   #define IF_MODPROBE(...) __VA_ARGS__
   #define IF_NOT_MODPROBE(...)
#else
   #define ENABLE_MODPROBE 0
   #define IF_NOT_MODPROBE(...) __VA_ARGS__
   #define IF_MODPROBE(...)
#endif

#ifdef CONFIG_FEATURE_MODPROBE_BLACKLIST
   #define ENABLE_FEATURE_MODPROBE_BLACKLIST 1
   #define IF_FEATURE_MODPROBE_BLACKLIST(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MODPROBE_BLACKLIST(...)
#else
   #define ENABLE_FEATURE_MODPROBE_BLACKLIST 0
   #define IF_NOT_FEATURE_MODPROBE_BLACKLIST(...) __VA_ARGS__
   #define IF_FEATURE_MODPROBE_BLACKLIST(...)
#endif

#ifdef CONFIG_DEPMOD
   #define ENABLE_DEPMOD 1
   #define IF_DEPMOD(...) __VA_ARGS__
   #define IF_NOT_DEPMOD(...)
#else
   #define ENABLE_DEPMOD 0
   #define IF_NOT_DEPMOD(...) __VA_ARGS__
   #define IF_DEPMOD(...)
#endif

#ifdef CONFIG_FEATURE_2_4_MODULES
   #define ENABLE_FEATURE_2_4_MODULES 1
   #define IF_FEATURE_2_4_MODULES(...) __VA_ARGS__
   #define IF_NOT_FEATURE_2_4_MODULES(...)
#else
   #define ENABLE_FEATURE_2_4_MODULES 0
   #define IF_NOT_FEATURE_2_4_MODULES(...) __VA_ARGS__
   #define IF_FEATURE_2_4_MODULES(...)
#endif

#ifdef CONFIG_FEATURE_INSMOD_TRY_MMAP
   #define ENABLE_FEATURE_INSMOD_TRY_MMAP 1
   #define IF_FEATURE_INSMOD_TRY_MMAP(...) __VA_ARGS__
   #define IF_NOT_FEATURE_INSMOD_TRY_MMAP(...)
#else
   #define ENABLE_FEATURE_INSMOD_TRY_MMAP 0
   #define IF_NOT_FEATURE_INSMOD_TRY_MMAP(...) __VA_ARGS__
   #define IF_FEATURE_INSMOD_TRY_MMAP(...)
#endif

#ifdef CONFIG_FEATURE_INSMOD_VERSION_CHECKING
   #define ENABLE_FEATURE_INSMOD_VERSION_CHECKING 1
   #define IF_FEATURE_INSMOD_VERSION_CHECKING(...) __VA_ARGS__
   #define IF_NOT_FEATURE_INSMOD_VERSION_CHECKING(...)
#else
   #define ENABLE_FEATURE_INSMOD_VERSION_CHECKING 0
   #define IF_NOT_FEATURE_INSMOD_VERSION_CHECKING(...) __VA_ARGS__
   #define IF_FEATURE_INSMOD_VERSION_CHECKING(...)
#endif

#ifdef CONFIG_FEATURE_INSMOD_KSYMOOPS_SYMBOLS
   #define ENABLE_FEATURE_INSMOD_KSYMOOPS_SYMBOLS 1
   #define IF_FEATURE_INSMOD_KSYMOOPS_SYMBOLS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_INSMOD_KSYMOOPS_SYMBOLS(...)
#else
   #define ENABLE_FEATURE_INSMOD_KSYMOOPS_SYMBOLS 0
   #define IF_NOT_FEATURE_INSMOD_KSYMOOPS_SYMBOLS(...) __VA_ARGS__
   #define IF_FEATURE_INSMOD_KSYMOOPS_SYMBOLS(...)
#endif

#ifdef CONFIG_FEATURE_INSMOD_LOADINKMEM
   #define ENABLE_FEATURE_INSMOD_LOADINKMEM 1
   #define IF_FEATURE_INSMOD_LOADINKMEM(...) __VA_ARGS__
   #define IF_NOT_FEATURE_INSMOD_LOADINKMEM(...)
#else
   #define ENABLE_FEATURE_INSMOD_LOADINKMEM 0
   #define IF_NOT_FEATURE_INSMOD_LOADINKMEM(...) __VA_ARGS__
   #define IF_FEATURE_INSMOD_LOADINKMEM(...)
#endif

#ifdef CONFIG_FEATURE_INSMOD_LOAD_MAP
   #define ENABLE_FEATURE_INSMOD_LOAD_MAP 1
   #define IF_FEATURE_INSMOD_LOAD_MAP(...) __VA_ARGS__
   #define IF_NOT_FEATURE_INSMOD_LOAD_MAP(...)
#else
   #define ENABLE_FEATURE_INSMOD_LOAD_MAP 0
   #define IF_NOT_FEATURE_INSMOD_LOAD_MAP(...) __VA_ARGS__
   #define IF_FEATURE_INSMOD_LOAD_MAP(...)
#endif

#ifdef CONFIG_FEATURE_INSMOD_LOAD_MAP_FULL
   #define ENABLE_FEATURE_INSMOD_LOAD_MAP_FULL 1
   #define IF_FEATURE_INSMOD_LOAD_MAP_FULL(...) __VA_ARGS__
   #define IF_NOT_FEATURE_INSMOD_LOAD_MAP_FULL(...)
#else
   #define ENABLE_FEATURE_INSMOD_LOAD_MAP_FULL 0
   #define IF_NOT_FEATURE_INSMOD_LOAD_MAP_FULL(...) __VA_ARGS__
   #define IF_FEATURE_INSMOD_LOAD_MAP_FULL(...)
#endif

#ifdef CONFIG_FEATURE_CHECK_TAINTED_MODULE
   #define ENABLE_FEATURE_CHECK_TAINTED_MODULE 1
   #define IF_FEATURE_CHECK_TAINTED_MODULE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_CHECK_TAINTED_MODULE(...)
#else
   #define ENABLE_FEATURE_CHECK_TAINTED_MODULE 0
   #define IF_NOT_FEATURE_CHECK_TAINTED_MODULE(...) __VA_ARGS__
   #define IF_FEATURE_CHECK_TAINTED_MODULE(...)
#endif

#ifdef CONFIG_FEATURE_MODUTILS_ALIAS
   #define ENABLE_FEATURE_MODUTILS_ALIAS 1
   #define IF_FEATURE_MODUTILS_ALIAS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MODUTILS_ALIAS(...)
#else
   #define ENABLE_FEATURE_MODUTILS_ALIAS 0
   #define IF_NOT_FEATURE_MODUTILS_ALIAS(...) __VA_ARGS__
   #define IF_FEATURE_MODUTILS_ALIAS(...)
#endif

#ifdef CONFIG_FEATURE_MODUTILS_SYMBOLS
   #define ENABLE_FEATURE_MODUTILS_SYMBOLS 1
   #define IF_FEATURE_MODUTILS_SYMBOLS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MODUTILS_SYMBOLS(...)
#else
   #define ENABLE_FEATURE_MODUTILS_SYMBOLS 0
   #define IF_NOT_FEATURE_MODUTILS_SYMBOLS(...) __VA_ARGS__
   #define IF_FEATURE_MODUTILS_SYMBOLS(...)
#endif

#ifdef CONFIG_DEFAULT_MODULES_DIR
   #define ENABLE_DEFAULT_MODULES_DIR 1
   #define IF_DEFAULT_MODULES_DIR(...) __VA_ARGS__
   #define IF_NOT_DEFAULT_MODULES_DIR(...)
#else
   #define ENABLE_DEFAULT_MODULES_DIR 0
   #define IF_NOT_DEFAULT_MODULES_DIR(...) __VA_ARGS__
   #define IF_DEFAULT_MODULES_DIR(...)
#endif

#ifdef CONFIG_DEFAULT_DEPMOD_FILE
   #define ENABLE_DEFAULT_DEPMOD_FILE 1
   #define IF_DEFAULT_DEPMOD_FILE(...) __VA_ARGS__
   #define IF_NOT_DEFAULT_DEPMOD_FILE(...)
#else
   #define ENABLE_DEFAULT_DEPMOD_FILE 0
   #define IF_NOT_DEFAULT_DEPMOD_FILE(...) __VA_ARGS__
   #define IF_DEFAULT_DEPMOD_FILE(...)
#endif

#ifdef CONFIG_BLOCKDEV
   #define ENABLE_BLOCKDEV 1
   #define IF_BLOCKDEV(...) __VA_ARGS__
   #define IF_NOT_BLOCKDEV(...)
#else
   #define ENABLE_BLOCKDEV 0
   #define IF_NOT_BLOCKDEV(...) __VA_ARGS__
   #define IF_BLOCKDEV(...)
#endif

#ifdef CONFIG_REV
   #define ENABLE_REV 1
   #define IF_REV(...) __VA_ARGS__
   #define IF_NOT_REV(...)
#else
   #define ENABLE_REV 0
   #define IF_NOT_REV(...) __VA_ARGS__
   #define IF_REV(...)
#endif

#ifdef CONFIG_ACPID
   #define ENABLE_ACPID 1
   #define IF_ACPID(...) __VA_ARGS__
   #define IF_NOT_ACPID(...)
#else
   #define ENABLE_ACPID 0
   #define IF_NOT_ACPID(...) __VA_ARGS__
   #define IF_ACPID(...)
#endif

#ifdef CONFIG_FEATURE_ACPID_COMPAT
   #define ENABLE_FEATURE_ACPID_COMPAT 1
   #define IF_FEATURE_ACPID_COMPAT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_ACPID_COMPAT(...)
#else
   #define ENABLE_FEATURE_ACPID_COMPAT 0
   #define IF_NOT_FEATURE_ACPID_COMPAT(...) __VA_ARGS__
   #define IF_FEATURE_ACPID_COMPAT(...)
#endif

#ifdef CONFIG_BLKID
   #define ENABLE_BLKID 1
   #define IF_BLKID(...) __VA_ARGS__
   #define IF_NOT_BLKID(...)
#else
   #define ENABLE_BLKID 0
   #define IF_NOT_BLKID(...) __VA_ARGS__
   #define IF_BLKID(...)
#endif

#ifdef CONFIG_DMESG
   #define ENABLE_DMESG 1
   #define IF_DMESG(...) __VA_ARGS__
   #define IF_NOT_DMESG(...)
#else
   #define ENABLE_DMESG 0
   #define IF_NOT_DMESG(...) __VA_ARGS__
   #define IF_DMESG(...)
#endif

#ifdef CONFIG_FEATURE_DMESG_PRETTY
   #define ENABLE_FEATURE_DMESG_PRETTY 1
   #define IF_FEATURE_DMESG_PRETTY(...) __VA_ARGS__
   #define IF_NOT_FEATURE_DMESG_PRETTY(...)
#else
   #define ENABLE_FEATURE_DMESG_PRETTY 0
   #define IF_NOT_FEATURE_DMESG_PRETTY(...) __VA_ARGS__
   #define IF_FEATURE_DMESG_PRETTY(...)
#endif

#ifdef CONFIG_FBSET
   #define ENABLE_FBSET 1
   #define IF_FBSET(...) __VA_ARGS__
   #define IF_NOT_FBSET(...)
#else
   #define ENABLE_FBSET 0
   #define IF_NOT_FBSET(...) __VA_ARGS__
   #define IF_FBSET(...)
#endif

#ifdef CONFIG_FEATURE_FBSET_FANCY
   #define ENABLE_FEATURE_FBSET_FANCY 1
   #define IF_FEATURE_FBSET_FANCY(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FBSET_FANCY(...)
#else
   #define ENABLE_FEATURE_FBSET_FANCY 0
   #define IF_NOT_FEATURE_FBSET_FANCY(...) __VA_ARGS__
   #define IF_FEATURE_FBSET_FANCY(...)
#endif

#ifdef CONFIG_FEATURE_FBSET_READMODE
   #define ENABLE_FEATURE_FBSET_READMODE 1
   #define IF_FEATURE_FBSET_READMODE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FBSET_READMODE(...)
#else
   #define ENABLE_FEATURE_FBSET_READMODE 0
   #define IF_NOT_FEATURE_FBSET_READMODE(...) __VA_ARGS__
   #define IF_FEATURE_FBSET_READMODE(...)
#endif

#ifdef CONFIG_FDFLUSH
   #define ENABLE_FDFLUSH 1
   #define IF_FDFLUSH(...) __VA_ARGS__
   #define IF_NOT_FDFLUSH(...)
#else
   #define ENABLE_FDFLUSH 0
   #define IF_NOT_FDFLUSH(...) __VA_ARGS__
   #define IF_FDFLUSH(...)
#endif

#ifdef CONFIG_FDFORMAT
   #define ENABLE_FDFORMAT 1
   #define IF_FDFORMAT(...) __VA_ARGS__
   #define IF_NOT_FDFORMAT(...)
#else
   #define ENABLE_FDFORMAT 0
   #define IF_NOT_FDFORMAT(...) __VA_ARGS__
   #define IF_FDFORMAT(...)
#endif

#ifdef CONFIG_FDISK
   #define ENABLE_FDISK 1
   #define IF_FDISK(...) __VA_ARGS__
   #define IF_NOT_FDISK(...)
#else
   #define ENABLE_FDISK 0
   #define IF_NOT_FDISK(...) __VA_ARGS__
   #define IF_FDISK(...)
#endif

#ifdef CONFIG_FDISK_SUPPORT_LARGE_DISKS
   #define ENABLE_FDISK_SUPPORT_LARGE_DISKS 1
   #define IF_FDISK_SUPPORT_LARGE_DISKS(...) __VA_ARGS__
   #define IF_NOT_FDISK_SUPPORT_LARGE_DISKS(...)
#else
   #define ENABLE_FDISK_SUPPORT_LARGE_DISKS 0
   #define IF_NOT_FDISK_SUPPORT_LARGE_DISKS(...) __VA_ARGS__
   #define IF_FDISK_SUPPORT_LARGE_DISKS(...)
#endif

#ifdef CONFIG_FEATURE_FDISK_WRITABLE
   #define ENABLE_FEATURE_FDISK_WRITABLE 1
   #define IF_FEATURE_FDISK_WRITABLE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FDISK_WRITABLE(...)
#else
   #define ENABLE_FEATURE_FDISK_WRITABLE 0
   #define IF_NOT_FEATURE_FDISK_WRITABLE(...) __VA_ARGS__
   #define IF_FEATURE_FDISK_WRITABLE(...)
#endif

#ifdef CONFIG_FEATURE_AIX_LABEL
   #define ENABLE_FEATURE_AIX_LABEL 1
   #define IF_FEATURE_AIX_LABEL(...) __VA_ARGS__
   #define IF_NOT_FEATURE_AIX_LABEL(...)
#else
   #define ENABLE_FEATURE_AIX_LABEL 0
   #define IF_NOT_FEATURE_AIX_LABEL(...) __VA_ARGS__
   #define IF_FEATURE_AIX_LABEL(...)
#endif

#ifdef CONFIG_FEATURE_SGI_LABEL
   #define ENABLE_FEATURE_SGI_LABEL 1
   #define IF_FEATURE_SGI_LABEL(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SGI_LABEL(...)
#else
   #define ENABLE_FEATURE_SGI_LABEL 0
   #define IF_NOT_FEATURE_SGI_LABEL(...) __VA_ARGS__
   #define IF_FEATURE_SGI_LABEL(...)
#endif

#ifdef CONFIG_FEATURE_SUN_LABEL
   #define ENABLE_FEATURE_SUN_LABEL 1
   #define IF_FEATURE_SUN_LABEL(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SUN_LABEL(...)
#else
   #define ENABLE_FEATURE_SUN_LABEL 0
   #define IF_NOT_FEATURE_SUN_LABEL(...) __VA_ARGS__
   #define IF_FEATURE_SUN_LABEL(...)
#endif

#ifdef CONFIG_FEATURE_OSF_LABEL
   #define ENABLE_FEATURE_OSF_LABEL 1
   #define IF_FEATURE_OSF_LABEL(...) __VA_ARGS__
   #define IF_NOT_FEATURE_OSF_LABEL(...)
#else
   #define ENABLE_FEATURE_OSF_LABEL 0
   #define IF_NOT_FEATURE_OSF_LABEL(...) __VA_ARGS__
   #define IF_FEATURE_OSF_LABEL(...)
#endif

#ifdef CONFIG_FEATURE_FDISK_ADVANCED
   #define ENABLE_FEATURE_FDISK_ADVANCED 1
   #define IF_FEATURE_FDISK_ADVANCED(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FDISK_ADVANCED(...)
#else
   #define ENABLE_FEATURE_FDISK_ADVANCED 0
   #define IF_NOT_FEATURE_FDISK_ADVANCED(...) __VA_ARGS__
   #define IF_FEATURE_FDISK_ADVANCED(...)
#endif

#ifdef CONFIG_FINDFS
   #define ENABLE_FINDFS 1
   #define IF_FINDFS(...) __VA_ARGS__
   #define IF_NOT_FINDFS(...)
#else
   #define ENABLE_FINDFS 0
   #define IF_NOT_FINDFS(...) __VA_ARGS__
   #define IF_FINDFS(...)
#endif

#ifdef CONFIG_FLOCK
   #define ENABLE_FLOCK 1
   #define IF_FLOCK(...) __VA_ARGS__
   #define IF_NOT_FLOCK(...)
#else
   #define ENABLE_FLOCK 0
   #define IF_NOT_FLOCK(...) __VA_ARGS__
   #define IF_FLOCK(...)
#endif

#ifdef CONFIG_FREERAMDISK
   #define ENABLE_FREERAMDISK 1
   #define IF_FREERAMDISK(...) __VA_ARGS__
   #define IF_NOT_FREERAMDISK(...)
#else
   #define ENABLE_FREERAMDISK 0
   #define IF_NOT_FREERAMDISK(...) __VA_ARGS__
   #define IF_FREERAMDISK(...)
#endif

#ifdef CONFIG_FSCK_MINIX
   #define ENABLE_FSCK_MINIX 1
   #define IF_FSCK_MINIX(...) __VA_ARGS__
   #define IF_NOT_FSCK_MINIX(...)
#else
   #define ENABLE_FSCK_MINIX 0
   #define IF_NOT_FSCK_MINIX(...) __VA_ARGS__
   #define IF_FSCK_MINIX(...)
#endif

#ifdef CONFIG_MKFS_EXT2
   #define ENABLE_MKFS_EXT2 1
   #define IF_MKFS_EXT2(...) __VA_ARGS__
   #define IF_NOT_MKFS_EXT2(...)
#else
   #define ENABLE_MKFS_EXT2 0
   #define IF_NOT_MKFS_EXT2(...) __VA_ARGS__
   #define IF_MKFS_EXT2(...)
#endif

#ifdef CONFIG_MKFS_MINIX
   #define ENABLE_MKFS_MINIX 1
   #define IF_MKFS_MINIX(...) __VA_ARGS__
   #define IF_NOT_MKFS_MINIX(...)
#else
   #define ENABLE_MKFS_MINIX 0
   #define IF_NOT_MKFS_MINIX(...) __VA_ARGS__
   #define IF_MKFS_MINIX(...)
#endif

#ifdef CONFIG_FEATURE_MINIX2
   #define ENABLE_FEATURE_MINIX2 1
   #define IF_FEATURE_MINIX2(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MINIX2(...)
#else
   #define ENABLE_FEATURE_MINIX2 0
   #define IF_NOT_FEATURE_MINIX2(...) __VA_ARGS__
   #define IF_FEATURE_MINIX2(...)
#endif

#ifdef CONFIG_MKFS_REISER
   #define ENABLE_MKFS_REISER 1
   #define IF_MKFS_REISER(...) __VA_ARGS__
   #define IF_NOT_MKFS_REISER(...)
#else
   #define ENABLE_MKFS_REISER 0
   #define IF_NOT_MKFS_REISER(...) __VA_ARGS__
   #define IF_MKFS_REISER(...)
#endif

#ifdef CONFIG_MKFS_VFAT
   #define ENABLE_MKFS_VFAT 1
   #define IF_MKFS_VFAT(...) __VA_ARGS__
   #define IF_NOT_MKFS_VFAT(...)
#else
   #define ENABLE_MKFS_VFAT 0
   #define IF_NOT_MKFS_VFAT(...) __VA_ARGS__
   #define IF_MKFS_VFAT(...)
#endif

#ifdef CONFIG_GETOPT
   #define ENABLE_GETOPT 1
   #define IF_GETOPT(...) __VA_ARGS__
   #define IF_NOT_GETOPT(...)
#else
   #define ENABLE_GETOPT 0
   #define IF_NOT_GETOPT(...) __VA_ARGS__
   #define IF_GETOPT(...)
#endif

#ifdef CONFIG_FEATURE_GETOPT_LONG
   #define ENABLE_FEATURE_GETOPT_LONG 1
   #define IF_FEATURE_GETOPT_LONG(...) __VA_ARGS__
   #define IF_NOT_FEATURE_GETOPT_LONG(...)
#else
   #define ENABLE_FEATURE_GETOPT_LONG 0
   #define IF_NOT_FEATURE_GETOPT_LONG(...) __VA_ARGS__
   #define IF_FEATURE_GETOPT_LONG(...)
#endif

#ifdef CONFIG_HEXDUMP
   #define ENABLE_HEXDUMP 1
   #define IF_HEXDUMP(...) __VA_ARGS__
   #define IF_NOT_HEXDUMP(...)
#else
   #define ENABLE_HEXDUMP 0
   #define IF_NOT_HEXDUMP(...) __VA_ARGS__
   #define IF_HEXDUMP(...)
#endif

#ifdef CONFIG_FEATURE_HEXDUMP_REVERSE
   #define ENABLE_FEATURE_HEXDUMP_REVERSE 1
   #define IF_FEATURE_HEXDUMP_REVERSE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_HEXDUMP_REVERSE(...)
#else
   #define ENABLE_FEATURE_HEXDUMP_REVERSE 0
   #define IF_NOT_FEATURE_HEXDUMP_REVERSE(...) __VA_ARGS__
   #define IF_FEATURE_HEXDUMP_REVERSE(...)
#endif

#ifdef CONFIG_HD
   #define ENABLE_HD 1
   #define IF_HD(...) __VA_ARGS__
   #define IF_NOT_HD(...)
#else
   #define ENABLE_HD 0
   #define IF_NOT_HD(...) __VA_ARGS__
   #define IF_HD(...)
#endif

#ifdef CONFIG_HWCLOCK
   #define ENABLE_HWCLOCK 1
   #define IF_HWCLOCK(...) __VA_ARGS__
   #define IF_NOT_HWCLOCK(...)
#else
   #define ENABLE_HWCLOCK 0
   #define IF_NOT_HWCLOCK(...) __VA_ARGS__
   #define IF_HWCLOCK(...)
#endif

#ifdef CONFIG_FEATURE_HWCLOCK_LONG_OPTIONS
   #define ENABLE_FEATURE_HWCLOCK_LONG_OPTIONS 1
   #define IF_FEATURE_HWCLOCK_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_HWCLOCK_LONG_OPTIONS(...)
#else
   #define ENABLE_FEATURE_HWCLOCK_LONG_OPTIONS 0
   #define IF_NOT_FEATURE_HWCLOCK_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_FEATURE_HWCLOCK_LONG_OPTIONS(...)
#endif

#ifdef CONFIG_FEATURE_HWCLOCK_ADJTIME_FHS
   #define ENABLE_FEATURE_HWCLOCK_ADJTIME_FHS 1
   #define IF_FEATURE_HWCLOCK_ADJTIME_FHS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_HWCLOCK_ADJTIME_FHS(...)
#else
   #define ENABLE_FEATURE_HWCLOCK_ADJTIME_FHS 0
   #define IF_NOT_FEATURE_HWCLOCK_ADJTIME_FHS(...) __VA_ARGS__
   #define IF_FEATURE_HWCLOCK_ADJTIME_FHS(...)
#endif

#ifdef CONFIG_IPCRM
   #define ENABLE_IPCRM 1
   #define IF_IPCRM(...) __VA_ARGS__
   #define IF_NOT_IPCRM(...)
#else
   #define ENABLE_IPCRM 0
   #define IF_NOT_IPCRM(...) __VA_ARGS__
   #define IF_IPCRM(...)
#endif

#ifdef CONFIG_IPCS
   #define ENABLE_IPCS 1
   #define IF_IPCS(...) __VA_ARGS__
   #define IF_NOT_IPCS(...)
#else
   #define ENABLE_IPCS 0
   #define IF_NOT_IPCS(...) __VA_ARGS__
   #define IF_IPCS(...)
#endif

#ifdef CONFIG_LOSETUP
   #define ENABLE_LOSETUP 1
   #define IF_LOSETUP(...) __VA_ARGS__
   #define IF_NOT_LOSETUP(...)
#else
   #define ENABLE_LOSETUP 0
   #define IF_NOT_LOSETUP(...) __VA_ARGS__
   #define IF_LOSETUP(...)
#endif

#ifdef CONFIG_LSPCI
   #define ENABLE_LSPCI 1
   #define IF_LSPCI(...) __VA_ARGS__
   #define IF_NOT_LSPCI(...)
#else
   #define ENABLE_LSPCI 0
   #define IF_NOT_LSPCI(...) __VA_ARGS__
   #define IF_LSPCI(...)
#endif

#ifdef CONFIG_LSUSB
   #define ENABLE_LSUSB 1
   #define IF_LSUSB(...) __VA_ARGS__
   #define IF_NOT_LSUSB(...)
#else
   #define ENABLE_LSUSB 0
   #define IF_NOT_LSUSB(...) __VA_ARGS__
   #define IF_LSUSB(...)
#endif

#ifdef CONFIG_MDEV
   #define ENABLE_MDEV 1
   #define IF_MDEV(...) __VA_ARGS__
   #define IF_NOT_MDEV(...)
#else
   #define ENABLE_MDEV 0
   #define IF_NOT_MDEV(...) __VA_ARGS__
   #define IF_MDEV(...)
#endif

#ifdef CONFIG_FEATURE_MDEV_CONF
   #define ENABLE_FEATURE_MDEV_CONF 1
   #define IF_FEATURE_MDEV_CONF(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MDEV_CONF(...)
#else
   #define ENABLE_FEATURE_MDEV_CONF 0
   #define IF_NOT_FEATURE_MDEV_CONF(...) __VA_ARGS__
   #define IF_FEATURE_MDEV_CONF(...)
#endif

#ifdef CONFIG_FEATURE_MDEV_RENAME
   #define ENABLE_FEATURE_MDEV_RENAME 1
   #define IF_FEATURE_MDEV_RENAME(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MDEV_RENAME(...)
#else
   #define ENABLE_FEATURE_MDEV_RENAME 0
   #define IF_NOT_FEATURE_MDEV_RENAME(...) __VA_ARGS__
   #define IF_FEATURE_MDEV_RENAME(...)
#endif

#ifdef CONFIG_FEATURE_MDEV_RENAME_REGEXP
   #define ENABLE_FEATURE_MDEV_RENAME_REGEXP 1
   #define IF_FEATURE_MDEV_RENAME_REGEXP(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MDEV_RENAME_REGEXP(...)
#else
   #define ENABLE_FEATURE_MDEV_RENAME_REGEXP 0
   #define IF_NOT_FEATURE_MDEV_RENAME_REGEXP(...) __VA_ARGS__
   #define IF_FEATURE_MDEV_RENAME_REGEXP(...)
#endif

#ifdef CONFIG_FEATURE_MDEV_EXEC
   #define ENABLE_FEATURE_MDEV_EXEC 1
   #define IF_FEATURE_MDEV_EXEC(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MDEV_EXEC(...)
#else
   #define ENABLE_FEATURE_MDEV_EXEC 0
   #define IF_NOT_FEATURE_MDEV_EXEC(...) __VA_ARGS__
   #define IF_FEATURE_MDEV_EXEC(...)
#endif

#ifdef CONFIG_FEATURE_MDEV_LOAD_FIRMWARE
   #define ENABLE_FEATURE_MDEV_LOAD_FIRMWARE 1
   #define IF_FEATURE_MDEV_LOAD_FIRMWARE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MDEV_LOAD_FIRMWARE(...)
#else
   #define ENABLE_FEATURE_MDEV_LOAD_FIRMWARE 0
   #define IF_NOT_FEATURE_MDEV_LOAD_FIRMWARE(...) __VA_ARGS__
   #define IF_FEATURE_MDEV_LOAD_FIRMWARE(...)
#endif

#ifdef CONFIG_MKSWAP
   #define ENABLE_MKSWAP 1
   #define IF_MKSWAP(...) __VA_ARGS__
   #define IF_NOT_MKSWAP(...)
#else
   #define ENABLE_MKSWAP 0
   #define IF_NOT_MKSWAP(...) __VA_ARGS__
   #define IF_MKSWAP(...)
#endif

#ifdef CONFIG_FEATURE_MKSWAP_UUID
   #define ENABLE_FEATURE_MKSWAP_UUID 1
   #define IF_FEATURE_MKSWAP_UUID(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MKSWAP_UUID(...)
#else
   #define ENABLE_FEATURE_MKSWAP_UUID 0
   #define IF_NOT_FEATURE_MKSWAP_UUID(...) __VA_ARGS__
   #define IF_FEATURE_MKSWAP_UUID(...)
#endif

#ifdef CONFIG_MORE
   #define ENABLE_MORE 1
   #define IF_MORE(...) __VA_ARGS__
   #define IF_NOT_MORE(...)
#else
   #define ENABLE_MORE 0
   #define IF_NOT_MORE(...) __VA_ARGS__
   #define IF_MORE(...)
#endif

#ifdef CONFIG_FEATURE_USE_TERMIOS
   #define ENABLE_FEATURE_USE_TERMIOS 1
   #define IF_FEATURE_USE_TERMIOS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_USE_TERMIOS(...)
#else
   #define ENABLE_FEATURE_USE_TERMIOS 0
   #define IF_NOT_FEATURE_USE_TERMIOS(...) __VA_ARGS__
   #define IF_FEATURE_USE_TERMIOS(...)
#endif

#ifdef CONFIG_MOUNT
   #define ENABLE_MOUNT 1
   #define IF_MOUNT(...) __VA_ARGS__
   #define IF_NOT_MOUNT(...)
#else
   #define ENABLE_MOUNT 0
   #define IF_NOT_MOUNT(...) __VA_ARGS__
   #define IF_MOUNT(...)
#endif

#ifdef CONFIG_FEATURE_MOUNT_FAKE
   #define ENABLE_FEATURE_MOUNT_FAKE 1
   #define IF_FEATURE_MOUNT_FAKE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MOUNT_FAKE(...)
#else
   #define ENABLE_FEATURE_MOUNT_FAKE 0
   #define IF_NOT_FEATURE_MOUNT_FAKE(...) __VA_ARGS__
   #define IF_FEATURE_MOUNT_FAKE(...)
#endif

#ifdef CONFIG_FEATURE_MOUNT_VERBOSE
   #define ENABLE_FEATURE_MOUNT_VERBOSE 1
   #define IF_FEATURE_MOUNT_VERBOSE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MOUNT_VERBOSE(...)
#else
   #define ENABLE_FEATURE_MOUNT_VERBOSE 0
   #define IF_NOT_FEATURE_MOUNT_VERBOSE(...) __VA_ARGS__
   #define IF_FEATURE_MOUNT_VERBOSE(...)
#endif

#ifdef CONFIG_FEATURE_MOUNT_HELPERS
   #define ENABLE_FEATURE_MOUNT_HELPERS 1
   #define IF_FEATURE_MOUNT_HELPERS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MOUNT_HELPERS(...)
#else
   #define ENABLE_FEATURE_MOUNT_HELPERS 0
   #define IF_NOT_FEATURE_MOUNT_HELPERS(...) __VA_ARGS__
   #define IF_FEATURE_MOUNT_HELPERS(...)
#endif

#ifdef CONFIG_FEATURE_MOUNT_LABEL
   #define ENABLE_FEATURE_MOUNT_LABEL 1
   #define IF_FEATURE_MOUNT_LABEL(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MOUNT_LABEL(...)
#else
   #define ENABLE_FEATURE_MOUNT_LABEL 0
   #define IF_NOT_FEATURE_MOUNT_LABEL(...) __VA_ARGS__
   #define IF_FEATURE_MOUNT_LABEL(...)
#endif

#ifdef CONFIG_FEATURE_MOUNT_NFS
   #define ENABLE_FEATURE_MOUNT_NFS 1
   #define IF_FEATURE_MOUNT_NFS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MOUNT_NFS(...)
#else
   #define ENABLE_FEATURE_MOUNT_NFS 0
   #define IF_NOT_FEATURE_MOUNT_NFS(...) __VA_ARGS__
   #define IF_FEATURE_MOUNT_NFS(...)
#endif

#ifdef CONFIG_FEATURE_MOUNT_CIFS
   #define ENABLE_FEATURE_MOUNT_CIFS 1
   #define IF_FEATURE_MOUNT_CIFS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MOUNT_CIFS(...)
#else
   #define ENABLE_FEATURE_MOUNT_CIFS 0
   #define IF_NOT_FEATURE_MOUNT_CIFS(...) __VA_ARGS__
   #define IF_FEATURE_MOUNT_CIFS(...)
#endif

#ifdef CONFIG_FEATURE_MOUNT_FLAGS
   #define ENABLE_FEATURE_MOUNT_FLAGS 1
   #define IF_FEATURE_MOUNT_FLAGS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MOUNT_FLAGS(...)
#else
   #define ENABLE_FEATURE_MOUNT_FLAGS 0
   #define IF_NOT_FEATURE_MOUNT_FLAGS(...) __VA_ARGS__
   #define IF_FEATURE_MOUNT_FLAGS(...)
#endif

#ifdef CONFIG_FEATURE_MOUNT_FSTAB
   #define ENABLE_FEATURE_MOUNT_FSTAB 1
   #define IF_FEATURE_MOUNT_FSTAB(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MOUNT_FSTAB(...)
#else
   #define ENABLE_FEATURE_MOUNT_FSTAB 0
   #define IF_NOT_FEATURE_MOUNT_FSTAB(...) __VA_ARGS__
   #define IF_FEATURE_MOUNT_FSTAB(...)
#endif

#ifdef CONFIG_PIVOT_ROOT
   #define ENABLE_PIVOT_ROOT 1
   #define IF_PIVOT_ROOT(...) __VA_ARGS__
   #define IF_NOT_PIVOT_ROOT(...)
#else
   #define ENABLE_PIVOT_ROOT 0
   #define IF_NOT_PIVOT_ROOT(...) __VA_ARGS__
   #define IF_PIVOT_ROOT(...)
#endif

#ifdef CONFIG_RDATE
   #define ENABLE_RDATE 1
   #define IF_RDATE(...) __VA_ARGS__
   #define IF_NOT_RDATE(...)
#else
   #define ENABLE_RDATE 0
   #define IF_NOT_RDATE(...) __VA_ARGS__
   #define IF_RDATE(...)
#endif

#ifdef CONFIG_RDEV
   #define ENABLE_RDEV 1
   #define IF_RDEV(...) __VA_ARGS__
   #define IF_NOT_RDEV(...)
#else
   #define ENABLE_RDEV 0
   #define IF_NOT_RDEV(...) __VA_ARGS__
   #define IF_RDEV(...)
#endif

#ifdef CONFIG_READPROFILE
   #define ENABLE_READPROFILE 1
   #define IF_READPROFILE(...) __VA_ARGS__
   #define IF_NOT_READPROFILE(...)
#else
   #define ENABLE_READPROFILE 0
   #define IF_NOT_READPROFILE(...) __VA_ARGS__
   #define IF_READPROFILE(...)
#endif

#ifdef CONFIG_RTCWAKE
   #define ENABLE_RTCWAKE 1
   #define IF_RTCWAKE(...) __VA_ARGS__
   #define IF_NOT_RTCWAKE(...)
#else
   #define ENABLE_RTCWAKE 0
   #define IF_NOT_RTCWAKE(...) __VA_ARGS__
   #define IF_RTCWAKE(...)
#endif

#ifdef CONFIG_SCRIPT
   #define ENABLE_SCRIPT 1
   #define IF_SCRIPT(...) __VA_ARGS__
   #define IF_NOT_SCRIPT(...)
#else
   #define ENABLE_SCRIPT 0
   #define IF_NOT_SCRIPT(...) __VA_ARGS__
   #define IF_SCRIPT(...)
#endif

#ifdef CONFIG_SCRIPTREPLAY
   #define ENABLE_SCRIPTREPLAY 1
   #define IF_SCRIPTREPLAY(...) __VA_ARGS__
   #define IF_NOT_SCRIPTREPLAY(...)
#else
   #define ENABLE_SCRIPTREPLAY 0
   #define IF_NOT_SCRIPTREPLAY(...) __VA_ARGS__
   #define IF_SCRIPTREPLAY(...)
#endif

#ifdef CONFIG_SETARCH
   #define ENABLE_SETARCH 1
   #define IF_SETARCH(...) __VA_ARGS__
   #define IF_NOT_SETARCH(...)
#else
   #define ENABLE_SETARCH 0
   #define IF_NOT_SETARCH(...) __VA_ARGS__
   #define IF_SETARCH(...)
#endif

#ifdef CONFIG_SWAPONOFF
   #define ENABLE_SWAPONOFF 1
   #define IF_SWAPONOFF(...) __VA_ARGS__
   #define IF_NOT_SWAPONOFF(...)
#else
   #define ENABLE_SWAPONOFF 0
   #define IF_NOT_SWAPONOFF(...) __VA_ARGS__
   #define IF_SWAPONOFF(...)
#endif

#ifdef CONFIG_FEATURE_SWAPON_PRI
   #define ENABLE_FEATURE_SWAPON_PRI 1
   #define IF_FEATURE_SWAPON_PRI(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SWAPON_PRI(...)
#else
   #define ENABLE_FEATURE_SWAPON_PRI 0
   #define IF_NOT_FEATURE_SWAPON_PRI(...) __VA_ARGS__
   #define IF_FEATURE_SWAPON_PRI(...)
#endif

#ifdef CONFIG_SWITCH_ROOT
   #define ENABLE_SWITCH_ROOT 1
   #define IF_SWITCH_ROOT(...) __VA_ARGS__
   #define IF_NOT_SWITCH_ROOT(...)
#else
   #define ENABLE_SWITCH_ROOT 0
   #define IF_NOT_SWITCH_ROOT(...) __VA_ARGS__
   #define IF_SWITCH_ROOT(...)
#endif

#ifdef CONFIG_UMOUNT
   #define ENABLE_UMOUNT 1
   #define IF_UMOUNT(...) __VA_ARGS__
   #define IF_NOT_UMOUNT(...)
#else
   #define ENABLE_UMOUNT 0
   #define IF_NOT_UMOUNT(...) __VA_ARGS__
   #define IF_UMOUNT(...)
#endif

#ifdef CONFIG_FEATURE_UMOUNT_ALL
   #define ENABLE_FEATURE_UMOUNT_ALL 1
   #define IF_FEATURE_UMOUNT_ALL(...) __VA_ARGS__
   #define IF_NOT_FEATURE_UMOUNT_ALL(...)
#else
   #define ENABLE_FEATURE_UMOUNT_ALL 0
   #define IF_NOT_FEATURE_UMOUNT_ALL(...) __VA_ARGS__
   #define IF_FEATURE_UMOUNT_ALL(...)
#endif

#ifdef CONFIG_FEATURE_MOUNT_LOOP
   #define ENABLE_FEATURE_MOUNT_LOOP 1
   #define IF_FEATURE_MOUNT_LOOP(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MOUNT_LOOP(...)
#else
   #define ENABLE_FEATURE_MOUNT_LOOP 0
   #define IF_NOT_FEATURE_MOUNT_LOOP(...) __VA_ARGS__
   #define IF_FEATURE_MOUNT_LOOP(...)
#endif

#ifdef CONFIG_FEATURE_MOUNT_LOOP_CREATE
   #define ENABLE_FEATURE_MOUNT_LOOP_CREATE 1
   #define IF_FEATURE_MOUNT_LOOP_CREATE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MOUNT_LOOP_CREATE(...)
#else
   #define ENABLE_FEATURE_MOUNT_LOOP_CREATE 0
   #define IF_NOT_FEATURE_MOUNT_LOOP_CREATE(...) __VA_ARGS__
   #define IF_FEATURE_MOUNT_LOOP_CREATE(...)
#endif

#ifdef CONFIG_FEATURE_MTAB_SUPPORT
   #define ENABLE_FEATURE_MTAB_SUPPORT 1
   #define IF_FEATURE_MTAB_SUPPORT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MTAB_SUPPORT(...)
#else
   #define ENABLE_FEATURE_MTAB_SUPPORT 0
   #define IF_NOT_FEATURE_MTAB_SUPPORT(...) __VA_ARGS__
   #define IF_FEATURE_MTAB_SUPPORT(...)
#endif

#ifdef CONFIG_VOLUMEID
   #define ENABLE_VOLUMEID 1
   #define IF_VOLUMEID(...) __VA_ARGS__
   #define IF_NOT_VOLUMEID(...)
#else
   #define ENABLE_VOLUMEID 0
   #define IF_NOT_VOLUMEID(...) __VA_ARGS__
   #define IF_VOLUMEID(...)
#endif

#ifdef CONFIG_FEATURE_VOLUMEID_EXT
   #define ENABLE_FEATURE_VOLUMEID_EXT 1
   #define IF_FEATURE_VOLUMEID_EXT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VOLUMEID_EXT(...)
#else
   #define ENABLE_FEATURE_VOLUMEID_EXT 0
   #define IF_NOT_FEATURE_VOLUMEID_EXT(...) __VA_ARGS__
   #define IF_FEATURE_VOLUMEID_EXT(...)
#endif

#ifdef CONFIG_FEATURE_VOLUMEID_BTRFS
   #define ENABLE_FEATURE_VOLUMEID_BTRFS 1
   #define IF_FEATURE_VOLUMEID_BTRFS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VOLUMEID_BTRFS(...)
#else
   #define ENABLE_FEATURE_VOLUMEID_BTRFS 0
   #define IF_NOT_FEATURE_VOLUMEID_BTRFS(...) __VA_ARGS__
   #define IF_FEATURE_VOLUMEID_BTRFS(...)
#endif

#ifdef CONFIG_FEATURE_VOLUMEID_REISERFS
   #define ENABLE_FEATURE_VOLUMEID_REISERFS 1
   #define IF_FEATURE_VOLUMEID_REISERFS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VOLUMEID_REISERFS(...)
#else
   #define ENABLE_FEATURE_VOLUMEID_REISERFS 0
   #define IF_NOT_FEATURE_VOLUMEID_REISERFS(...) __VA_ARGS__
   #define IF_FEATURE_VOLUMEID_REISERFS(...)
#endif

#ifdef CONFIG_FEATURE_VOLUMEID_FAT
   #define ENABLE_FEATURE_VOLUMEID_FAT 1
   #define IF_FEATURE_VOLUMEID_FAT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VOLUMEID_FAT(...)
#else
   #define ENABLE_FEATURE_VOLUMEID_FAT 0
   #define IF_NOT_FEATURE_VOLUMEID_FAT(...) __VA_ARGS__
   #define IF_FEATURE_VOLUMEID_FAT(...)
#endif

#ifdef CONFIG_FEATURE_VOLUMEID_HFS
   #define ENABLE_FEATURE_VOLUMEID_HFS 1
   #define IF_FEATURE_VOLUMEID_HFS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VOLUMEID_HFS(...)
#else
   #define ENABLE_FEATURE_VOLUMEID_HFS 0
   #define IF_NOT_FEATURE_VOLUMEID_HFS(...) __VA_ARGS__
   #define IF_FEATURE_VOLUMEID_HFS(...)
#endif

#ifdef CONFIG_FEATURE_VOLUMEID_JFS
   #define ENABLE_FEATURE_VOLUMEID_JFS 1
   #define IF_FEATURE_VOLUMEID_JFS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VOLUMEID_JFS(...)
#else
   #define ENABLE_FEATURE_VOLUMEID_JFS 0
   #define IF_NOT_FEATURE_VOLUMEID_JFS(...) __VA_ARGS__
   #define IF_FEATURE_VOLUMEID_JFS(...)
#endif

#ifdef CONFIG_FEATURE_VOLUMEID_XFS
   #define ENABLE_FEATURE_VOLUMEID_XFS 1
   #define IF_FEATURE_VOLUMEID_XFS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VOLUMEID_XFS(...)
#else
   #define ENABLE_FEATURE_VOLUMEID_XFS 0
   #define IF_NOT_FEATURE_VOLUMEID_XFS(...) __VA_ARGS__
   #define IF_FEATURE_VOLUMEID_XFS(...)
#endif

#ifdef CONFIG_FEATURE_VOLUMEID_NTFS
   #define ENABLE_FEATURE_VOLUMEID_NTFS 1
   #define IF_FEATURE_VOLUMEID_NTFS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VOLUMEID_NTFS(...)
#else
   #define ENABLE_FEATURE_VOLUMEID_NTFS 0
   #define IF_NOT_FEATURE_VOLUMEID_NTFS(...) __VA_ARGS__
   #define IF_FEATURE_VOLUMEID_NTFS(...)
#endif

#ifdef CONFIG_FEATURE_VOLUMEID_ISO9660
   #define ENABLE_FEATURE_VOLUMEID_ISO9660 1
   #define IF_FEATURE_VOLUMEID_ISO9660(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VOLUMEID_ISO9660(...)
#else
   #define ENABLE_FEATURE_VOLUMEID_ISO9660 0
   #define IF_NOT_FEATURE_VOLUMEID_ISO9660(...) __VA_ARGS__
   #define IF_FEATURE_VOLUMEID_ISO9660(...)
#endif

#ifdef CONFIG_FEATURE_VOLUMEID_UDF
   #define ENABLE_FEATURE_VOLUMEID_UDF 1
   #define IF_FEATURE_VOLUMEID_UDF(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VOLUMEID_UDF(...)
#else
   #define ENABLE_FEATURE_VOLUMEID_UDF 0
   #define IF_NOT_FEATURE_VOLUMEID_UDF(...) __VA_ARGS__
   #define IF_FEATURE_VOLUMEID_UDF(...)
#endif

#ifdef CONFIG_FEATURE_VOLUMEID_LUKS
   #define ENABLE_FEATURE_VOLUMEID_LUKS 1
   #define IF_FEATURE_VOLUMEID_LUKS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VOLUMEID_LUKS(...)
#else
   #define ENABLE_FEATURE_VOLUMEID_LUKS 0
   #define IF_NOT_FEATURE_VOLUMEID_LUKS(...) __VA_ARGS__
   #define IF_FEATURE_VOLUMEID_LUKS(...)
#endif

#ifdef CONFIG_FEATURE_VOLUMEID_LINUXSWAP
   #define ENABLE_FEATURE_VOLUMEID_LINUXSWAP 1
   #define IF_FEATURE_VOLUMEID_LINUXSWAP(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VOLUMEID_LINUXSWAP(...)
#else
   #define ENABLE_FEATURE_VOLUMEID_LINUXSWAP 0
   #define IF_NOT_FEATURE_VOLUMEID_LINUXSWAP(...) __VA_ARGS__
   #define IF_FEATURE_VOLUMEID_LINUXSWAP(...)
#endif

#ifdef CONFIG_FEATURE_VOLUMEID_CRAMFS
   #define ENABLE_FEATURE_VOLUMEID_CRAMFS 1
   #define IF_FEATURE_VOLUMEID_CRAMFS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VOLUMEID_CRAMFS(...)
#else
   #define ENABLE_FEATURE_VOLUMEID_CRAMFS 0
   #define IF_NOT_FEATURE_VOLUMEID_CRAMFS(...) __VA_ARGS__
   #define IF_FEATURE_VOLUMEID_CRAMFS(...)
#endif

#ifdef CONFIG_FEATURE_VOLUMEID_ROMFS
   #define ENABLE_FEATURE_VOLUMEID_ROMFS 1
   #define IF_FEATURE_VOLUMEID_ROMFS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VOLUMEID_ROMFS(...)
#else
   #define ENABLE_FEATURE_VOLUMEID_ROMFS 0
   #define IF_NOT_FEATURE_VOLUMEID_ROMFS(...) __VA_ARGS__
   #define IF_FEATURE_VOLUMEID_ROMFS(...)
#endif

#ifdef CONFIG_FEATURE_VOLUMEID_SYSV
   #define ENABLE_FEATURE_VOLUMEID_SYSV 1
   #define IF_FEATURE_VOLUMEID_SYSV(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VOLUMEID_SYSV(...)
#else
   #define ENABLE_FEATURE_VOLUMEID_SYSV 0
   #define IF_NOT_FEATURE_VOLUMEID_SYSV(...) __VA_ARGS__
   #define IF_FEATURE_VOLUMEID_SYSV(...)
#endif

#ifdef CONFIG_FEATURE_VOLUMEID_OCFS2
   #define ENABLE_FEATURE_VOLUMEID_OCFS2 1
   #define IF_FEATURE_VOLUMEID_OCFS2(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VOLUMEID_OCFS2(...)
#else
   #define ENABLE_FEATURE_VOLUMEID_OCFS2 0
   #define IF_NOT_FEATURE_VOLUMEID_OCFS2(...) __VA_ARGS__
   #define IF_FEATURE_VOLUMEID_OCFS2(...)
#endif

#ifdef CONFIG_FEATURE_VOLUMEID_LINUXRAID
   #define ENABLE_FEATURE_VOLUMEID_LINUXRAID 1
   #define IF_FEATURE_VOLUMEID_LINUXRAID(...) __VA_ARGS__
   #define IF_NOT_FEATURE_VOLUMEID_LINUXRAID(...)
#else
   #define ENABLE_FEATURE_VOLUMEID_LINUXRAID 0
   #define IF_NOT_FEATURE_VOLUMEID_LINUXRAID(...) __VA_ARGS__
   #define IF_FEATURE_VOLUMEID_LINUXRAID(...)
#endif

#ifdef CONFIG_CONSPY
   #define ENABLE_CONSPY 1
   #define IF_CONSPY(...) __VA_ARGS__
   #define IF_NOT_CONSPY(...)
#else
   #define ENABLE_CONSPY 0
   #define IF_NOT_CONSPY(...) __VA_ARGS__
   #define IF_CONSPY(...)
#endif

#ifdef CONFIG_NANDWRITE
   #define ENABLE_NANDWRITE 1
   #define IF_NANDWRITE(...) __VA_ARGS__
   #define IF_NOT_NANDWRITE(...)
#else
   #define ENABLE_NANDWRITE 0
   #define IF_NOT_NANDWRITE(...) __VA_ARGS__
   #define IF_NANDWRITE(...)
#endif

#ifdef CONFIG_UBIATTACH
   #define ENABLE_UBIATTACH 1
   #define IF_UBIATTACH(...) __VA_ARGS__
   #define IF_NOT_UBIATTACH(...)
#else
   #define ENABLE_UBIATTACH 0
   #define IF_NOT_UBIATTACH(...) __VA_ARGS__
   #define IF_UBIATTACH(...)
#endif

#ifdef CONFIG_UBIDETACH
   #define ENABLE_UBIDETACH 1
   #define IF_UBIDETACH(...) __VA_ARGS__
   #define IF_NOT_UBIDETACH(...)
#else
   #define ENABLE_UBIDETACH 0
   #define IF_NOT_UBIDETACH(...) __VA_ARGS__
   #define IF_UBIDETACH(...)
#endif

#ifdef CONFIG_ADJTIMEX
   #define ENABLE_ADJTIMEX 1
   #define IF_ADJTIMEX(...) __VA_ARGS__
   #define IF_NOT_ADJTIMEX(...)
#else
   #define ENABLE_ADJTIMEX 0
   #define IF_NOT_ADJTIMEX(...) __VA_ARGS__
   #define IF_ADJTIMEX(...)
#endif

#ifdef CONFIG_BBCONFIG
   #define ENABLE_BBCONFIG 1
   #define IF_BBCONFIG(...) __VA_ARGS__
   #define IF_NOT_BBCONFIG(...)
#else
   #define ENABLE_BBCONFIG 0
   #define IF_NOT_BBCONFIG(...) __VA_ARGS__
   #define IF_BBCONFIG(...)
#endif

#ifdef CONFIG_FEATURE_COMPRESS_BBCONFIG
   #define ENABLE_FEATURE_COMPRESS_BBCONFIG 1
   #define IF_FEATURE_COMPRESS_BBCONFIG(...) __VA_ARGS__
   #define IF_NOT_FEATURE_COMPRESS_BBCONFIG(...)
#else
   #define ENABLE_FEATURE_COMPRESS_BBCONFIG 0
   #define IF_NOT_FEATURE_COMPRESS_BBCONFIG(...) __VA_ARGS__
   #define IF_FEATURE_COMPRESS_BBCONFIG(...)
#endif

#ifdef CONFIG_BEEP
   #define ENABLE_BEEP 1
   #define IF_BEEP(...) __VA_ARGS__
   #define IF_NOT_BEEP(...)
#else
   #define ENABLE_BEEP 0
   #define IF_NOT_BEEP(...) __VA_ARGS__
   #define IF_BEEP(...)
#endif

#ifdef CONFIG_FEATURE_BEEP_FREQ
   #define ENABLE_FEATURE_BEEP_FREQ 1
   #define IF_FEATURE_BEEP_FREQ(...) __VA_ARGS__
   #define IF_NOT_FEATURE_BEEP_FREQ(...)
#else
   #define ENABLE_FEATURE_BEEP_FREQ 0
   #define IF_NOT_FEATURE_BEEP_FREQ(...) __VA_ARGS__
   #define IF_FEATURE_BEEP_FREQ(...)
#endif

#ifdef CONFIG_FEATURE_BEEP_LENGTH_MS
   #define ENABLE_FEATURE_BEEP_LENGTH_MS 1
   #define IF_FEATURE_BEEP_LENGTH_MS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_BEEP_LENGTH_MS(...)
#else
   #define ENABLE_FEATURE_BEEP_LENGTH_MS 0
   #define IF_NOT_FEATURE_BEEP_LENGTH_MS(...) __VA_ARGS__
   #define IF_FEATURE_BEEP_LENGTH_MS(...)
#endif

#ifdef CONFIG_CHAT
   #define ENABLE_CHAT 1
   #define IF_CHAT(...) __VA_ARGS__
   #define IF_NOT_CHAT(...)
#else
   #define ENABLE_CHAT 0
   #define IF_NOT_CHAT(...) __VA_ARGS__
   #define IF_CHAT(...)
#endif

#ifdef CONFIG_FEATURE_CHAT_NOFAIL
   #define ENABLE_FEATURE_CHAT_NOFAIL 1
   #define IF_FEATURE_CHAT_NOFAIL(...) __VA_ARGS__
   #define IF_NOT_FEATURE_CHAT_NOFAIL(...)
#else
   #define ENABLE_FEATURE_CHAT_NOFAIL 0
   #define IF_NOT_FEATURE_CHAT_NOFAIL(...) __VA_ARGS__
   #define IF_FEATURE_CHAT_NOFAIL(...)
#endif

#ifdef CONFIG_FEATURE_CHAT_TTY_HIFI
   #define ENABLE_FEATURE_CHAT_TTY_HIFI 1
   #define IF_FEATURE_CHAT_TTY_HIFI(...) __VA_ARGS__
   #define IF_NOT_FEATURE_CHAT_TTY_HIFI(...)
#else
   #define ENABLE_FEATURE_CHAT_TTY_HIFI 0
   #define IF_NOT_FEATURE_CHAT_TTY_HIFI(...) __VA_ARGS__
   #define IF_FEATURE_CHAT_TTY_HIFI(...)
#endif

#ifdef CONFIG_FEATURE_CHAT_IMPLICIT_CR
   #define ENABLE_FEATURE_CHAT_IMPLICIT_CR 1
   #define IF_FEATURE_CHAT_IMPLICIT_CR(...) __VA_ARGS__
   #define IF_NOT_FEATURE_CHAT_IMPLICIT_CR(...)
#else
   #define ENABLE_FEATURE_CHAT_IMPLICIT_CR 0
   #define IF_NOT_FEATURE_CHAT_IMPLICIT_CR(...) __VA_ARGS__
   #define IF_FEATURE_CHAT_IMPLICIT_CR(...)
#endif

#ifdef CONFIG_FEATURE_CHAT_SWALLOW_OPTS
   #define ENABLE_FEATURE_CHAT_SWALLOW_OPTS 1
   #define IF_FEATURE_CHAT_SWALLOW_OPTS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_CHAT_SWALLOW_OPTS(...)
#else
   #define ENABLE_FEATURE_CHAT_SWALLOW_OPTS 0
   #define IF_NOT_FEATURE_CHAT_SWALLOW_OPTS(...) __VA_ARGS__
   #define IF_FEATURE_CHAT_SWALLOW_OPTS(...)
#endif

#ifdef CONFIG_FEATURE_CHAT_SEND_ESCAPES
   #define ENABLE_FEATURE_CHAT_SEND_ESCAPES 1
   #define IF_FEATURE_CHAT_SEND_ESCAPES(...) __VA_ARGS__
   #define IF_NOT_FEATURE_CHAT_SEND_ESCAPES(...)
#else
   #define ENABLE_FEATURE_CHAT_SEND_ESCAPES 0
   #define IF_NOT_FEATURE_CHAT_SEND_ESCAPES(...) __VA_ARGS__
   #define IF_FEATURE_CHAT_SEND_ESCAPES(...)
#endif

#ifdef CONFIG_FEATURE_CHAT_VAR_ABORT_LEN
   #define ENABLE_FEATURE_CHAT_VAR_ABORT_LEN 1
   #define IF_FEATURE_CHAT_VAR_ABORT_LEN(...) __VA_ARGS__
   #define IF_NOT_FEATURE_CHAT_VAR_ABORT_LEN(...)
#else
   #define ENABLE_FEATURE_CHAT_VAR_ABORT_LEN 0
   #define IF_NOT_FEATURE_CHAT_VAR_ABORT_LEN(...) __VA_ARGS__
   #define IF_FEATURE_CHAT_VAR_ABORT_LEN(...)
#endif

#ifdef CONFIG_FEATURE_CHAT_CLR_ABORT
   #define ENABLE_FEATURE_CHAT_CLR_ABORT 1
   #define IF_FEATURE_CHAT_CLR_ABORT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_CHAT_CLR_ABORT(...)
#else
   #define ENABLE_FEATURE_CHAT_CLR_ABORT 0
   #define IF_NOT_FEATURE_CHAT_CLR_ABORT(...) __VA_ARGS__
   #define IF_FEATURE_CHAT_CLR_ABORT(...)
#endif

#ifdef CONFIG_CHRT
   #define ENABLE_CHRT 1
   #define IF_CHRT(...) __VA_ARGS__
   #define IF_NOT_CHRT(...)
#else
   #define ENABLE_CHRT 0
   #define IF_NOT_CHRT(...) __VA_ARGS__
   #define IF_CHRT(...)
#endif

#ifdef CONFIG_CROND
   #define ENABLE_CROND 1
   #define IF_CROND(...) __VA_ARGS__
   #define IF_NOT_CROND(...)
#else
   #define ENABLE_CROND 0
   #define IF_NOT_CROND(...) __VA_ARGS__
   #define IF_CROND(...)
#endif

#ifdef CONFIG_FEATURE_CROND_D
   #define ENABLE_FEATURE_CROND_D 1
   #define IF_FEATURE_CROND_D(...) __VA_ARGS__
   #define IF_NOT_FEATURE_CROND_D(...)
#else
   #define ENABLE_FEATURE_CROND_D 0
   #define IF_NOT_FEATURE_CROND_D(...) __VA_ARGS__
   #define IF_FEATURE_CROND_D(...)
#endif

#ifdef CONFIG_FEATURE_CROND_CALL_SENDMAIL
   #define ENABLE_FEATURE_CROND_CALL_SENDMAIL 1
   #define IF_FEATURE_CROND_CALL_SENDMAIL(...) __VA_ARGS__
   #define IF_NOT_FEATURE_CROND_CALL_SENDMAIL(...)
#else
   #define ENABLE_FEATURE_CROND_CALL_SENDMAIL 0
   #define IF_NOT_FEATURE_CROND_CALL_SENDMAIL(...) __VA_ARGS__
   #define IF_FEATURE_CROND_CALL_SENDMAIL(...)
#endif

#ifdef CONFIG_FEATURE_CROND_DIR
   #define ENABLE_FEATURE_CROND_DIR 1
   #define IF_FEATURE_CROND_DIR(...) __VA_ARGS__
   #define IF_NOT_FEATURE_CROND_DIR(...)
#else
   #define ENABLE_FEATURE_CROND_DIR 0
   #define IF_NOT_FEATURE_CROND_DIR(...) __VA_ARGS__
   #define IF_FEATURE_CROND_DIR(...)
#endif

#ifdef CONFIG_CRONTAB
   #define ENABLE_CRONTAB 1
   #define IF_CRONTAB(...) __VA_ARGS__
   #define IF_NOT_CRONTAB(...)
#else
   #define ENABLE_CRONTAB 0
   #define IF_NOT_CRONTAB(...) __VA_ARGS__
   #define IF_CRONTAB(...)
#endif

#ifdef CONFIG_DC
   #define ENABLE_DC 1
   #define IF_DC(...) __VA_ARGS__
   #define IF_NOT_DC(...)
#else
   #define ENABLE_DC 0
   #define IF_NOT_DC(...) __VA_ARGS__
   #define IF_DC(...)
#endif

#ifdef CONFIG_FEATURE_DC_LIBM
   #define ENABLE_FEATURE_DC_LIBM 1
   #define IF_FEATURE_DC_LIBM(...) __VA_ARGS__
   #define IF_NOT_FEATURE_DC_LIBM(...)
#else
   #define ENABLE_FEATURE_DC_LIBM 0
   #define IF_NOT_FEATURE_DC_LIBM(...) __VA_ARGS__
   #define IF_FEATURE_DC_LIBM(...)
#endif

#ifdef CONFIG_DEVFSD
   #define ENABLE_DEVFSD 1
   #define IF_DEVFSD(...) __VA_ARGS__
   #define IF_NOT_DEVFSD(...)
#else
   #define ENABLE_DEVFSD 0
   #define IF_NOT_DEVFSD(...) __VA_ARGS__
   #define IF_DEVFSD(...)
#endif

#ifdef CONFIG_DEVFSD_MODLOAD
   #define ENABLE_DEVFSD_MODLOAD 1
   #define IF_DEVFSD_MODLOAD(...) __VA_ARGS__
   #define IF_NOT_DEVFSD_MODLOAD(...)
#else
   #define ENABLE_DEVFSD_MODLOAD 0
   #define IF_NOT_DEVFSD_MODLOAD(...) __VA_ARGS__
   #define IF_DEVFSD_MODLOAD(...)
#endif

#ifdef CONFIG_DEVFSD_FG_NP
   #define ENABLE_DEVFSD_FG_NP 1
   #define IF_DEVFSD_FG_NP(...) __VA_ARGS__
   #define IF_NOT_DEVFSD_FG_NP(...)
#else
   #define ENABLE_DEVFSD_FG_NP 0
   #define IF_NOT_DEVFSD_FG_NP(...) __VA_ARGS__
   #define IF_DEVFSD_FG_NP(...)
#endif

#ifdef CONFIG_DEVFSD_VERBOSE
   #define ENABLE_DEVFSD_VERBOSE 1
   #define IF_DEVFSD_VERBOSE(...) __VA_ARGS__
   #define IF_NOT_DEVFSD_VERBOSE(...)
#else
   #define ENABLE_DEVFSD_VERBOSE 0
   #define IF_NOT_DEVFSD_VERBOSE(...) __VA_ARGS__
   #define IF_DEVFSD_VERBOSE(...)
#endif

#ifdef CONFIG_FEATURE_DEVFS
   #define ENABLE_FEATURE_DEVFS 1
   #define IF_FEATURE_DEVFS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_DEVFS(...)
#else
   #define ENABLE_FEATURE_DEVFS 0
   #define IF_NOT_FEATURE_DEVFS(...) __VA_ARGS__
   #define IF_FEATURE_DEVFS(...)
#endif

#ifdef CONFIG_DEVMEM
   #define ENABLE_DEVMEM 1
   #define IF_DEVMEM(...) __VA_ARGS__
   #define IF_NOT_DEVMEM(...)
#else
   #define ENABLE_DEVMEM 0
   #define IF_NOT_DEVMEM(...) __VA_ARGS__
   #define IF_DEVMEM(...)
#endif

#ifdef CONFIG_EJECT
   #define ENABLE_EJECT 1
   #define IF_EJECT(...) __VA_ARGS__
   #define IF_NOT_EJECT(...)
#else
   #define ENABLE_EJECT 0
   #define IF_NOT_EJECT(...) __VA_ARGS__
   #define IF_EJECT(...)
#endif

#ifdef CONFIG_FEATURE_EJECT_SCSI
   #define ENABLE_FEATURE_EJECT_SCSI 1
   #define IF_FEATURE_EJECT_SCSI(...) __VA_ARGS__
   #define IF_NOT_FEATURE_EJECT_SCSI(...)
#else
   #define ENABLE_FEATURE_EJECT_SCSI 0
   #define IF_NOT_FEATURE_EJECT_SCSI(...) __VA_ARGS__
   #define IF_FEATURE_EJECT_SCSI(...)
#endif

#ifdef CONFIG_FBSPLASH
   #define ENABLE_FBSPLASH 1
   #define IF_FBSPLASH(...) __VA_ARGS__
   #define IF_NOT_FBSPLASH(...)
#else
   #define ENABLE_FBSPLASH 0
   #define IF_NOT_FBSPLASH(...) __VA_ARGS__
   #define IF_FBSPLASH(...)
#endif

#ifdef CONFIG_FLASHCP
   #define ENABLE_FLASHCP 1
   #define IF_FLASHCP(...) __VA_ARGS__
   #define IF_NOT_FLASHCP(...)
#else
   #define ENABLE_FLASHCP 0
   #define IF_NOT_FLASHCP(...) __VA_ARGS__
   #define IF_FLASHCP(...)
#endif

#ifdef CONFIG_FLASH_LOCK
   #define ENABLE_FLASH_LOCK 1
   #define IF_FLASH_LOCK(...) __VA_ARGS__
   #define IF_NOT_FLASH_LOCK(...)
#else
   #define ENABLE_FLASH_LOCK 0
   #define IF_NOT_FLASH_LOCK(...) __VA_ARGS__
   #define IF_FLASH_LOCK(...)
#endif

#ifdef CONFIG_FLASH_UNLOCK
   #define ENABLE_FLASH_UNLOCK 1
   #define IF_FLASH_UNLOCK(...) __VA_ARGS__
   #define IF_NOT_FLASH_UNLOCK(...)
#else
   #define ENABLE_FLASH_UNLOCK 0
   #define IF_NOT_FLASH_UNLOCK(...) __VA_ARGS__
   #define IF_FLASH_UNLOCK(...)
#endif

#ifdef CONFIG_FLASH_ERASEALL
   #define ENABLE_FLASH_ERASEALL 1
   #define IF_FLASH_ERASEALL(...) __VA_ARGS__
   #define IF_NOT_FLASH_ERASEALL(...)
#else
   #define ENABLE_FLASH_ERASEALL 0
   #define IF_NOT_FLASH_ERASEALL(...) __VA_ARGS__
   #define IF_FLASH_ERASEALL(...)
#endif

#ifdef CONFIG_IONICE
   #define ENABLE_IONICE 1
   #define IF_IONICE(...) __VA_ARGS__
   #define IF_NOT_IONICE(...)
#else
   #define ENABLE_IONICE 0
   #define IF_NOT_IONICE(...) __VA_ARGS__
   #define IF_IONICE(...)
#endif

#ifdef CONFIG_INOTIFYD
   #define ENABLE_INOTIFYD 1
   #define IF_INOTIFYD(...) __VA_ARGS__
   #define IF_NOT_INOTIFYD(...)
#else
   #define ENABLE_INOTIFYD 0
   #define IF_NOT_INOTIFYD(...) __VA_ARGS__
   #define IF_INOTIFYD(...)
#endif

#ifdef CONFIG_LAST
   #define ENABLE_LAST 1
   #define IF_LAST(...) __VA_ARGS__
   #define IF_NOT_LAST(...)
#else
   #define ENABLE_LAST 0
   #define IF_NOT_LAST(...) __VA_ARGS__
   #define IF_LAST(...)
#endif

#ifdef CONFIG_FEATURE_LAST_SMALL
   #define ENABLE_FEATURE_LAST_SMALL 1
   #define IF_FEATURE_LAST_SMALL(...) __VA_ARGS__
   #define IF_NOT_FEATURE_LAST_SMALL(...)
#else
   #define ENABLE_FEATURE_LAST_SMALL 0
   #define IF_NOT_FEATURE_LAST_SMALL(...) __VA_ARGS__
   #define IF_FEATURE_LAST_SMALL(...)
#endif

#ifdef CONFIG_FEATURE_LAST_FANCY
   #define ENABLE_FEATURE_LAST_FANCY 1
   #define IF_FEATURE_LAST_FANCY(...) __VA_ARGS__
   #define IF_NOT_FEATURE_LAST_FANCY(...)
#else
   #define ENABLE_FEATURE_LAST_FANCY 0
   #define IF_NOT_FEATURE_LAST_FANCY(...) __VA_ARGS__
   #define IF_FEATURE_LAST_FANCY(...)
#endif

#ifdef CONFIG_LESS
   #define ENABLE_LESS 1
   #define IF_LESS(...) __VA_ARGS__
   #define IF_NOT_LESS(...)
#else
   #define ENABLE_LESS 0
   #define IF_NOT_LESS(...) __VA_ARGS__
   #define IF_LESS(...)
#endif

#ifdef CONFIG_FEATURE_LESS_MAXLINES
   #define ENABLE_FEATURE_LESS_MAXLINES 1
   #define IF_FEATURE_LESS_MAXLINES(...) __VA_ARGS__
   #define IF_NOT_FEATURE_LESS_MAXLINES(...)
#else
   #define ENABLE_FEATURE_LESS_MAXLINES 0
   #define IF_NOT_FEATURE_LESS_MAXLINES(...) __VA_ARGS__
   #define IF_FEATURE_LESS_MAXLINES(...)
#endif

#ifdef CONFIG_FEATURE_LESS_BRACKETS
   #define ENABLE_FEATURE_LESS_BRACKETS 1
   #define IF_FEATURE_LESS_BRACKETS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_LESS_BRACKETS(...)
#else
   #define ENABLE_FEATURE_LESS_BRACKETS 0
   #define IF_NOT_FEATURE_LESS_BRACKETS(...) __VA_ARGS__
   #define IF_FEATURE_LESS_BRACKETS(...)
#endif

#ifdef CONFIG_FEATURE_LESS_FLAGS
   #define ENABLE_FEATURE_LESS_FLAGS 1
   #define IF_FEATURE_LESS_FLAGS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_LESS_FLAGS(...)
#else
   #define ENABLE_FEATURE_LESS_FLAGS 0
   #define IF_NOT_FEATURE_LESS_FLAGS(...) __VA_ARGS__
   #define IF_FEATURE_LESS_FLAGS(...)
#endif

#ifdef CONFIG_FEATURE_LESS_MARKS
   #define ENABLE_FEATURE_LESS_MARKS 1
   #define IF_FEATURE_LESS_MARKS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_LESS_MARKS(...)
#else
   #define ENABLE_FEATURE_LESS_MARKS 0
   #define IF_NOT_FEATURE_LESS_MARKS(...) __VA_ARGS__
   #define IF_FEATURE_LESS_MARKS(...)
#endif

#ifdef CONFIG_FEATURE_LESS_REGEXP
   #define ENABLE_FEATURE_LESS_REGEXP 1
   #define IF_FEATURE_LESS_REGEXP(...) __VA_ARGS__
   #define IF_NOT_FEATURE_LESS_REGEXP(...)
#else
   #define ENABLE_FEATURE_LESS_REGEXP 0
   #define IF_NOT_FEATURE_LESS_REGEXP(...) __VA_ARGS__
   #define IF_FEATURE_LESS_REGEXP(...)
#endif

#ifdef CONFIG_FEATURE_LESS_WINCH
   #define ENABLE_FEATURE_LESS_WINCH 1
   #define IF_FEATURE_LESS_WINCH(...) __VA_ARGS__
   #define IF_NOT_FEATURE_LESS_WINCH(...)
#else
   #define ENABLE_FEATURE_LESS_WINCH 0
   #define IF_NOT_FEATURE_LESS_WINCH(...) __VA_ARGS__
   #define IF_FEATURE_LESS_WINCH(...)
#endif

#ifdef CONFIG_FEATURE_LESS_DASHCMD
   #define ENABLE_FEATURE_LESS_DASHCMD 1
   #define IF_FEATURE_LESS_DASHCMD(...) __VA_ARGS__
   #define IF_NOT_FEATURE_LESS_DASHCMD(...)
#else
   #define ENABLE_FEATURE_LESS_DASHCMD 0
   #define IF_NOT_FEATURE_LESS_DASHCMD(...) __VA_ARGS__
   #define IF_FEATURE_LESS_DASHCMD(...)
#endif

#ifdef CONFIG_FEATURE_LESS_LINENUMS
   #define ENABLE_FEATURE_LESS_LINENUMS 1
   #define IF_FEATURE_LESS_LINENUMS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_LESS_LINENUMS(...)
#else
   #define ENABLE_FEATURE_LESS_LINENUMS 0
   #define IF_NOT_FEATURE_LESS_LINENUMS(...) __VA_ARGS__
   #define IF_FEATURE_LESS_LINENUMS(...)
#endif

#ifdef CONFIG_HDPARM
   #define ENABLE_HDPARM 1
   #define IF_HDPARM(...) __VA_ARGS__
   #define IF_NOT_HDPARM(...)
#else
   #define ENABLE_HDPARM 0
   #define IF_NOT_HDPARM(...) __VA_ARGS__
   #define IF_HDPARM(...)
#endif

#ifdef CONFIG_FEATURE_HDPARM_GET_IDENTITY
   #define ENABLE_FEATURE_HDPARM_GET_IDENTITY 1
   #define IF_FEATURE_HDPARM_GET_IDENTITY(...) __VA_ARGS__
   #define IF_NOT_FEATURE_HDPARM_GET_IDENTITY(...)
#else
   #define ENABLE_FEATURE_HDPARM_GET_IDENTITY 0
   #define IF_NOT_FEATURE_HDPARM_GET_IDENTITY(...) __VA_ARGS__
   #define IF_FEATURE_HDPARM_GET_IDENTITY(...)
#endif

#ifdef CONFIG_FEATURE_HDPARM_HDIO_SCAN_HWIF
   #define ENABLE_FEATURE_HDPARM_HDIO_SCAN_HWIF 1
   #define IF_FEATURE_HDPARM_HDIO_SCAN_HWIF(...) __VA_ARGS__
   #define IF_NOT_FEATURE_HDPARM_HDIO_SCAN_HWIF(...)
#else
   #define ENABLE_FEATURE_HDPARM_HDIO_SCAN_HWIF 0
   #define IF_NOT_FEATURE_HDPARM_HDIO_SCAN_HWIF(...) __VA_ARGS__
   #define IF_FEATURE_HDPARM_HDIO_SCAN_HWIF(...)
#endif

#ifdef CONFIG_FEATURE_HDPARM_HDIO_UNREGISTER_HWIF
   #define ENABLE_FEATURE_HDPARM_HDIO_UNREGISTER_HWIF 1
   #define IF_FEATURE_HDPARM_HDIO_UNREGISTER_HWIF(...) __VA_ARGS__
   #define IF_NOT_FEATURE_HDPARM_HDIO_UNREGISTER_HWIF(...)
#else
   #define ENABLE_FEATURE_HDPARM_HDIO_UNREGISTER_HWIF 0
   #define IF_NOT_FEATURE_HDPARM_HDIO_UNREGISTER_HWIF(...) __VA_ARGS__
   #define IF_FEATURE_HDPARM_HDIO_UNREGISTER_HWIF(...)
#endif

#ifdef CONFIG_FEATURE_HDPARM_HDIO_DRIVE_RESET
   #define ENABLE_FEATURE_HDPARM_HDIO_DRIVE_RESET 1
   #define IF_FEATURE_HDPARM_HDIO_DRIVE_RESET(...) __VA_ARGS__
   #define IF_NOT_FEATURE_HDPARM_HDIO_DRIVE_RESET(...)
#else
   #define ENABLE_FEATURE_HDPARM_HDIO_DRIVE_RESET 0
   #define IF_NOT_FEATURE_HDPARM_HDIO_DRIVE_RESET(...) __VA_ARGS__
   #define IF_FEATURE_HDPARM_HDIO_DRIVE_RESET(...)
#endif

#ifdef CONFIG_FEATURE_HDPARM_HDIO_TRISTATE_HWIF
   #define ENABLE_FEATURE_HDPARM_HDIO_TRISTATE_HWIF 1
   #define IF_FEATURE_HDPARM_HDIO_TRISTATE_HWIF(...) __VA_ARGS__
   #define IF_NOT_FEATURE_HDPARM_HDIO_TRISTATE_HWIF(...)
#else
   #define ENABLE_FEATURE_HDPARM_HDIO_TRISTATE_HWIF 0
   #define IF_NOT_FEATURE_HDPARM_HDIO_TRISTATE_HWIF(...) __VA_ARGS__
   #define IF_FEATURE_HDPARM_HDIO_TRISTATE_HWIF(...)
#endif

#ifdef CONFIG_FEATURE_HDPARM_HDIO_GETSET_DMA
   #define ENABLE_FEATURE_HDPARM_HDIO_GETSET_DMA 1
   #define IF_FEATURE_HDPARM_HDIO_GETSET_DMA(...) __VA_ARGS__
   #define IF_NOT_FEATURE_HDPARM_HDIO_GETSET_DMA(...)
#else
   #define ENABLE_FEATURE_HDPARM_HDIO_GETSET_DMA 0
   #define IF_NOT_FEATURE_HDPARM_HDIO_GETSET_DMA(...) __VA_ARGS__
   #define IF_FEATURE_HDPARM_HDIO_GETSET_DMA(...)
#endif

#ifdef CONFIG_MAKEDEVS
   #define ENABLE_MAKEDEVS 1
   #define IF_MAKEDEVS(...) __VA_ARGS__
   #define IF_NOT_MAKEDEVS(...)
#else
   #define ENABLE_MAKEDEVS 0
   #define IF_NOT_MAKEDEVS(...) __VA_ARGS__
   #define IF_MAKEDEVS(...)
#endif

#ifdef CONFIG_FEATURE_MAKEDEVS_LEAF
   #define ENABLE_FEATURE_MAKEDEVS_LEAF 1
   #define IF_FEATURE_MAKEDEVS_LEAF(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MAKEDEVS_LEAF(...)
#else
   #define ENABLE_FEATURE_MAKEDEVS_LEAF 0
   #define IF_NOT_FEATURE_MAKEDEVS_LEAF(...) __VA_ARGS__
   #define IF_FEATURE_MAKEDEVS_LEAF(...)
#endif

#ifdef CONFIG_FEATURE_MAKEDEVS_TABLE
   #define ENABLE_FEATURE_MAKEDEVS_TABLE 1
   #define IF_FEATURE_MAKEDEVS_TABLE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MAKEDEVS_TABLE(...)
#else
   #define ENABLE_FEATURE_MAKEDEVS_TABLE 0
   #define IF_NOT_FEATURE_MAKEDEVS_TABLE(...) __VA_ARGS__
   #define IF_FEATURE_MAKEDEVS_TABLE(...)
#endif

#ifdef CONFIG_MAN
   #define ENABLE_MAN 1
   #define IF_MAN(...) __VA_ARGS__
   #define IF_NOT_MAN(...)
#else
   #define ENABLE_MAN 0
   #define IF_NOT_MAN(...) __VA_ARGS__
   #define IF_MAN(...)
#endif

#ifdef CONFIG_MICROCOM
   #define ENABLE_MICROCOM 1
   #define IF_MICROCOM(...) __VA_ARGS__
   #define IF_NOT_MICROCOM(...)
#else
   #define ENABLE_MICROCOM 0
   #define IF_NOT_MICROCOM(...) __VA_ARGS__
   #define IF_MICROCOM(...)
#endif

#ifdef CONFIG_MOUNTPOINT
   #define ENABLE_MOUNTPOINT 1
   #define IF_MOUNTPOINT(...) __VA_ARGS__
   #define IF_NOT_MOUNTPOINT(...)
#else
   #define ENABLE_MOUNTPOINT 0
   #define IF_NOT_MOUNTPOINT(...) __VA_ARGS__
   #define IF_MOUNTPOINT(...)
#endif

#ifdef CONFIG_MT
   #define ENABLE_MT 1
   #define IF_MT(...) __VA_ARGS__
   #define IF_NOT_MT(...)
#else
   #define ENABLE_MT 0
   #define IF_NOT_MT(...) __VA_ARGS__
   #define IF_MT(...)
#endif

#ifdef CONFIG_RAIDAUTORUN
   #define ENABLE_RAIDAUTORUN 1
   #define IF_RAIDAUTORUN(...) __VA_ARGS__
   #define IF_NOT_RAIDAUTORUN(...)
#else
   #define ENABLE_RAIDAUTORUN 0
   #define IF_NOT_RAIDAUTORUN(...) __VA_ARGS__
   #define IF_RAIDAUTORUN(...)
#endif

#ifdef CONFIG_READAHEAD
   #define ENABLE_READAHEAD 1
   #define IF_READAHEAD(...) __VA_ARGS__
   #define IF_NOT_READAHEAD(...)
#else
   #define ENABLE_READAHEAD 0
   #define IF_NOT_READAHEAD(...) __VA_ARGS__
   #define IF_READAHEAD(...)
#endif

#ifdef CONFIG_RFKILL
   #define ENABLE_RFKILL 1
   #define IF_RFKILL(...) __VA_ARGS__
   #define IF_NOT_RFKILL(...)
#else
   #define ENABLE_RFKILL 0
   #define IF_NOT_RFKILL(...) __VA_ARGS__
   #define IF_RFKILL(...)
#endif

#ifdef CONFIG_RUNLEVEL
   #define ENABLE_RUNLEVEL 1
   #define IF_RUNLEVEL(...) __VA_ARGS__
   #define IF_NOT_RUNLEVEL(...)
#else
   #define ENABLE_RUNLEVEL 0
   #define IF_NOT_RUNLEVEL(...) __VA_ARGS__
   #define IF_RUNLEVEL(...)
#endif

#ifdef CONFIG_RX
   #define ENABLE_RX 1
   #define IF_RX(...) __VA_ARGS__
   #define IF_NOT_RX(...)
#else
   #define ENABLE_RX 0
   #define IF_NOT_RX(...) __VA_ARGS__
   #define IF_RX(...)
#endif

#ifdef CONFIG_SETSID
   #define ENABLE_SETSID 1
   #define IF_SETSID(...) __VA_ARGS__
   #define IF_NOT_SETSID(...)
#else
   #define ENABLE_SETSID 0
   #define IF_NOT_SETSID(...) __VA_ARGS__
   #define IF_SETSID(...)
#endif

#ifdef CONFIG_STRINGS
   #define ENABLE_STRINGS 1
   #define IF_STRINGS(...) __VA_ARGS__
   #define IF_NOT_STRINGS(...)
#else
   #define ENABLE_STRINGS 0
   #define IF_NOT_STRINGS(...) __VA_ARGS__
   #define IF_STRINGS(...)
#endif

#ifdef CONFIG_TASKSET
   #define ENABLE_TASKSET 1
   #define IF_TASKSET(...) __VA_ARGS__
   #define IF_NOT_TASKSET(...)
#else
   #define ENABLE_TASKSET 0
   #define IF_NOT_TASKSET(...) __VA_ARGS__
   #define IF_TASKSET(...)
#endif

#ifdef CONFIG_FEATURE_TASKSET_FANCY
   #define ENABLE_FEATURE_TASKSET_FANCY 1
   #define IF_FEATURE_TASKSET_FANCY(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TASKSET_FANCY(...)
#else
   #define ENABLE_FEATURE_TASKSET_FANCY 0
   #define IF_NOT_FEATURE_TASKSET_FANCY(...) __VA_ARGS__
   #define IF_FEATURE_TASKSET_FANCY(...)
#endif

#ifdef CONFIG_TIME
   #define ENABLE_TIME 1
   #define IF_TIME(...) __VA_ARGS__
   #define IF_NOT_TIME(...)
#else
   #define ENABLE_TIME 0
   #define IF_NOT_TIME(...) __VA_ARGS__
   #define IF_TIME(...)
#endif

#ifdef CONFIG_TIMEOUT
   #define ENABLE_TIMEOUT 1
   #define IF_TIMEOUT(...) __VA_ARGS__
   #define IF_NOT_TIMEOUT(...)
#else
   #define ENABLE_TIMEOUT 0
   #define IF_NOT_TIMEOUT(...) __VA_ARGS__
   #define IF_TIMEOUT(...)
#endif

#ifdef CONFIG_TTYSIZE
   #define ENABLE_TTYSIZE 1
   #define IF_TTYSIZE(...) __VA_ARGS__
   #define IF_NOT_TTYSIZE(...)
#else
   #define ENABLE_TTYSIZE 0
   #define IF_NOT_TTYSIZE(...) __VA_ARGS__
   #define IF_TTYSIZE(...)
#endif

#ifdef CONFIG_VOLNAME
   #define ENABLE_VOLNAME 1
   #define IF_VOLNAME(...) __VA_ARGS__
   #define IF_NOT_VOLNAME(...)
#else
   #define ENABLE_VOLNAME 0
   #define IF_NOT_VOLNAME(...) __VA_ARGS__
   #define IF_VOLNAME(...)
#endif

#ifdef CONFIG_WALL
   #define ENABLE_WALL 1
   #define IF_WALL(...) __VA_ARGS__
   #define IF_NOT_WALL(...)
#else
   #define ENABLE_WALL 0
   #define IF_NOT_WALL(...) __VA_ARGS__
   #define IF_WALL(...)
#endif

#ifdef CONFIG_WATCHDOG
   #define ENABLE_WATCHDOG 1
   #define IF_WATCHDOG(...) __VA_ARGS__
   #define IF_NOT_WATCHDOG(...)
#else
   #define ENABLE_WATCHDOG 0
   #define IF_NOT_WATCHDOG(...) __VA_ARGS__
   #define IF_WATCHDOG(...)
#endif

#ifdef CONFIG_NBDCLIENT
   #define ENABLE_NBDCLIENT 1
   #define IF_NBDCLIENT(...) __VA_ARGS__
   #define IF_NOT_NBDCLIENT(...)
#else
   #define ENABLE_NBDCLIENT 0
   #define IF_NOT_NBDCLIENT(...) __VA_ARGS__
   #define IF_NBDCLIENT(...)
#endif

#ifdef CONFIG_NC
   #define ENABLE_NC 1
   #define IF_NC(...) __VA_ARGS__
   #define IF_NOT_NC(...)
#else
   #define ENABLE_NC 0
   #define IF_NOT_NC(...) __VA_ARGS__
   #define IF_NC(...)
#endif

#ifdef CONFIG_NC_SERVER
   #define ENABLE_NC_SERVER 1
   #define IF_NC_SERVER(...) __VA_ARGS__
   #define IF_NOT_NC_SERVER(...)
#else
   #define ENABLE_NC_SERVER 0
   #define IF_NOT_NC_SERVER(...) __VA_ARGS__
   #define IF_NC_SERVER(...)
#endif

#ifdef CONFIG_NC_EXTRA
   #define ENABLE_NC_EXTRA 1
   #define IF_NC_EXTRA(...) __VA_ARGS__
   #define IF_NOT_NC_EXTRA(...)
#else
   #define ENABLE_NC_EXTRA 0
   #define IF_NOT_NC_EXTRA(...) __VA_ARGS__
   #define IF_NC_EXTRA(...)
#endif

#ifdef CONFIG_NC_110_COMPAT
   #define ENABLE_NC_110_COMPAT 1
   #define IF_NC_110_COMPAT(...) __VA_ARGS__
   #define IF_NOT_NC_110_COMPAT(...)
#else
   #define ENABLE_NC_110_COMPAT 0
   #define IF_NOT_NC_110_COMPAT(...) __VA_ARGS__
   #define IF_NC_110_COMPAT(...)
#endif

#ifdef CONFIG_FEATURE_IPV6
   #define ENABLE_FEATURE_IPV6 1
   #define IF_FEATURE_IPV6(...) __VA_ARGS__
   #define IF_NOT_FEATURE_IPV6(...)
#else
   #define ENABLE_FEATURE_IPV6 0
   #define IF_NOT_FEATURE_IPV6(...) __VA_ARGS__
   #define IF_FEATURE_IPV6(...)
#endif

#ifdef CONFIG_FEATURE_UNIX_LOCAL
   #define ENABLE_FEATURE_UNIX_LOCAL 1
   #define IF_FEATURE_UNIX_LOCAL(...) __VA_ARGS__
   #define IF_NOT_FEATURE_UNIX_LOCAL(...)
#else
   #define ENABLE_FEATURE_UNIX_LOCAL 0
   #define IF_NOT_FEATURE_UNIX_LOCAL(...) __VA_ARGS__
   #define IF_FEATURE_UNIX_LOCAL(...)
#endif

#ifdef CONFIG_FEATURE_PREFER_IPV4_ADDRESS
   #define ENABLE_FEATURE_PREFER_IPV4_ADDRESS 1
   #define IF_FEATURE_PREFER_IPV4_ADDRESS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_PREFER_IPV4_ADDRESS(...)
#else
   #define ENABLE_FEATURE_PREFER_IPV4_ADDRESS 0
   #define IF_NOT_FEATURE_PREFER_IPV4_ADDRESS(...) __VA_ARGS__
   #define IF_FEATURE_PREFER_IPV4_ADDRESS(...)
#endif

#ifdef CONFIG_VERBOSE_RESOLUTION_ERRORS
   #define ENABLE_VERBOSE_RESOLUTION_ERRORS 1
   #define IF_VERBOSE_RESOLUTION_ERRORS(...) __VA_ARGS__
   #define IF_NOT_VERBOSE_RESOLUTION_ERRORS(...)
#else
   #define ENABLE_VERBOSE_RESOLUTION_ERRORS 0
   #define IF_NOT_VERBOSE_RESOLUTION_ERRORS(...) __VA_ARGS__
   #define IF_VERBOSE_RESOLUTION_ERRORS(...)
#endif

#ifdef CONFIG_ARP
   #define ENABLE_ARP 1
   #define IF_ARP(...) __VA_ARGS__
   #define IF_NOT_ARP(...)
#else
   #define ENABLE_ARP 0
   #define IF_NOT_ARP(...) __VA_ARGS__
   #define IF_ARP(...)
#endif

#ifdef CONFIG_ARPING
   #define ENABLE_ARPING 1
   #define IF_ARPING(...) __VA_ARGS__
   #define IF_NOT_ARPING(...)
#else
   #define ENABLE_ARPING 0
   #define IF_NOT_ARPING(...) __VA_ARGS__
   #define IF_ARPING(...)
#endif

#ifdef CONFIG_BRCTL
   #define ENABLE_BRCTL 1
   #define IF_BRCTL(...) __VA_ARGS__
   #define IF_NOT_BRCTL(...)
#else
   #define ENABLE_BRCTL 0
   #define IF_NOT_BRCTL(...) __VA_ARGS__
   #define IF_BRCTL(...)
#endif

#ifdef CONFIG_FEATURE_BRCTL_FANCY
   #define ENABLE_FEATURE_BRCTL_FANCY 1
   #define IF_FEATURE_BRCTL_FANCY(...) __VA_ARGS__
   #define IF_NOT_FEATURE_BRCTL_FANCY(...)
#else
   #define ENABLE_FEATURE_BRCTL_FANCY 0
   #define IF_NOT_FEATURE_BRCTL_FANCY(...) __VA_ARGS__
   #define IF_FEATURE_BRCTL_FANCY(...)
#endif

#ifdef CONFIG_FEATURE_BRCTL_SHOW
   #define ENABLE_FEATURE_BRCTL_SHOW 1
   #define IF_FEATURE_BRCTL_SHOW(...) __VA_ARGS__
   #define IF_NOT_FEATURE_BRCTL_SHOW(...)
#else
   #define ENABLE_FEATURE_BRCTL_SHOW 0
   #define IF_NOT_FEATURE_BRCTL_SHOW(...) __VA_ARGS__
   #define IF_FEATURE_BRCTL_SHOW(...)
#endif

#ifdef CONFIG_DNSD
   #define ENABLE_DNSD 1
   #define IF_DNSD(...) __VA_ARGS__
   #define IF_NOT_DNSD(...)
#else
   #define ENABLE_DNSD 0
   #define IF_NOT_DNSD(...) __VA_ARGS__
   #define IF_DNSD(...)
#endif

#ifdef CONFIG_ETHER_WAKE
   #define ENABLE_ETHER_WAKE 1
   #define IF_ETHER_WAKE(...) __VA_ARGS__
   #define IF_NOT_ETHER_WAKE(...)
#else
   #define ENABLE_ETHER_WAKE 0
   #define IF_NOT_ETHER_WAKE(...) __VA_ARGS__
   #define IF_ETHER_WAKE(...)
#endif

#ifdef CONFIG_FAKEIDENTD
   #define ENABLE_FAKEIDENTD 1
   #define IF_FAKEIDENTD(...) __VA_ARGS__
   #define IF_NOT_FAKEIDENTD(...)
#else
   #define ENABLE_FAKEIDENTD 0
   #define IF_NOT_FAKEIDENTD(...) __VA_ARGS__
   #define IF_FAKEIDENTD(...)
#endif

#ifdef CONFIG_FTPD
   #define ENABLE_FTPD 1
   #define IF_FTPD(...) __VA_ARGS__
   #define IF_NOT_FTPD(...)
#else
   #define ENABLE_FTPD 0
   #define IF_NOT_FTPD(...) __VA_ARGS__
   #define IF_FTPD(...)
#endif

#ifdef CONFIG_FEATURE_FTP_WRITE
   #define ENABLE_FEATURE_FTP_WRITE 1
   #define IF_FEATURE_FTP_WRITE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FTP_WRITE(...)
#else
   #define ENABLE_FEATURE_FTP_WRITE 0
   #define IF_NOT_FEATURE_FTP_WRITE(...) __VA_ARGS__
   #define IF_FEATURE_FTP_WRITE(...)
#endif

#ifdef CONFIG_FEATURE_FTPD_ACCEPT_BROKEN_LIST
   #define ENABLE_FEATURE_FTPD_ACCEPT_BROKEN_LIST 1
   #define IF_FEATURE_FTPD_ACCEPT_BROKEN_LIST(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FTPD_ACCEPT_BROKEN_LIST(...)
#else
   #define ENABLE_FEATURE_FTPD_ACCEPT_BROKEN_LIST 0
   #define IF_NOT_FEATURE_FTPD_ACCEPT_BROKEN_LIST(...) __VA_ARGS__
   #define IF_FEATURE_FTPD_ACCEPT_BROKEN_LIST(...)
#endif

#ifdef CONFIG_FTPGET
   #define ENABLE_FTPGET 1
   #define IF_FTPGET(...) __VA_ARGS__
   #define IF_NOT_FTPGET(...)
#else
   #define ENABLE_FTPGET 0
   #define IF_NOT_FTPGET(...) __VA_ARGS__
   #define IF_FTPGET(...)
#endif

#ifdef CONFIG_FTPPUT
   #define ENABLE_FTPPUT 1
   #define IF_FTPPUT(...) __VA_ARGS__
   #define IF_NOT_FTPPUT(...)
#else
   #define ENABLE_FTPPUT 0
   #define IF_NOT_FTPPUT(...) __VA_ARGS__
   #define IF_FTPPUT(...)
#endif

#ifdef CONFIG_FEATURE_FTPGETPUT_LONG_OPTIONS
   #define ENABLE_FEATURE_FTPGETPUT_LONG_OPTIONS 1
   #define IF_FEATURE_FTPGETPUT_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FTPGETPUT_LONG_OPTIONS(...)
#else
   #define ENABLE_FEATURE_FTPGETPUT_LONG_OPTIONS 0
   #define IF_NOT_FEATURE_FTPGETPUT_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_FEATURE_FTPGETPUT_LONG_OPTIONS(...)
#endif

#ifdef CONFIG_HOSTNAME
   #define ENABLE_HOSTNAME 1
   #define IF_HOSTNAME(...) __VA_ARGS__
   #define IF_NOT_HOSTNAME(...)
#else
   #define ENABLE_HOSTNAME 0
   #define IF_NOT_HOSTNAME(...) __VA_ARGS__
   #define IF_HOSTNAME(...)
#endif

#ifdef CONFIG_HTTPD
   #define ENABLE_HTTPD 1
   #define IF_HTTPD(...) __VA_ARGS__
   #define IF_NOT_HTTPD(...)
#else
   #define ENABLE_HTTPD 0
   #define IF_NOT_HTTPD(...) __VA_ARGS__
   #define IF_HTTPD(...)
#endif

#ifdef CONFIG_FEATURE_HTTPD_RANGES
   #define ENABLE_FEATURE_HTTPD_RANGES 1
   #define IF_FEATURE_HTTPD_RANGES(...) __VA_ARGS__
   #define IF_NOT_FEATURE_HTTPD_RANGES(...)
#else
   #define ENABLE_FEATURE_HTTPD_RANGES 0
   #define IF_NOT_FEATURE_HTTPD_RANGES(...) __VA_ARGS__
   #define IF_FEATURE_HTTPD_RANGES(...)
#endif

#ifdef CONFIG_FEATURE_HTTPD_USE_SENDFILE
   #define ENABLE_FEATURE_HTTPD_USE_SENDFILE 1
   #define IF_FEATURE_HTTPD_USE_SENDFILE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_HTTPD_USE_SENDFILE(...)
#else
   #define ENABLE_FEATURE_HTTPD_USE_SENDFILE 0
   #define IF_NOT_FEATURE_HTTPD_USE_SENDFILE(...) __VA_ARGS__
   #define IF_FEATURE_HTTPD_USE_SENDFILE(...)
#endif

#ifdef CONFIG_FEATURE_HTTPD_SETUID
   #define ENABLE_FEATURE_HTTPD_SETUID 1
   #define IF_FEATURE_HTTPD_SETUID(...) __VA_ARGS__
   #define IF_NOT_FEATURE_HTTPD_SETUID(...)
#else
   #define ENABLE_FEATURE_HTTPD_SETUID 0
   #define IF_NOT_FEATURE_HTTPD_SETUID(...) __VA_ARGS__
   #define IF_FEATURE_HTTPD_SETUID(...)
#endif

#ifdef CONFIG_FEATURE_HTTPD_BASIC_AUTH
   #define ENABLE_FEATURE_HTTPD_BASIC_AUTH 1
   #define IF_FEATURE_HTTPD_BASIC_AUTH(...) __VA_ARGS__
   #define IF_NOT_FEATURE_HTTPD_BASIC_AUTH(...)
#else
   #define ENABLE_FEATURE_HTTPD_BASIC_AUTH 0
   #define IF_NOT_FEATURE_HTTPD_BASIC_AUTH(...) __VA_ARGS__
   #define IF_FEATURE_HTTPD_BASIC_AUTH(...)
#endif

#ifdef CONFIG_FEATURE_HTTPD_AUTH_MD5
   #define ENABLE_FEATURE_HTTPD_AUTH_MD5 1
   #define IF_FEATURE_HTTPD_AUTH_MD5(...) __VA_ARGS__
   #define IF_NOT_FEATURE_HTTPD_AUTH_MD5(...)
#else
   #define ENABLE_FEATURE_HTTPD_AUTH_MD5 0
   #define IF_NOT_FEATURE_HTTPD_AUTH_MD5(...) __VA_ARGS__
   #define IF_FEATURE_HTTPD_AUTH_MD5(...)
#endif

#ifdef CONFIG_FEATURE_HTTPD_CGI
   #define ENABLE_FEATURE_HTTPD_CGI 1
   #define IF_FEATURE_HTTPD_CGI(...) __VA_ARGS__
   #define IF_NOT_FEATURE_HTTPD_CGI(...)
#else
   #define ENABLE_FEATURE_HTTPD_CGI 0
   #define IF_NOT_FEATURE_HTTPD_CGI(...) __VA_ARGS__
   #define IF_FEATURE_HTTPD_CGI(...)
#endif

#ifdef CONFIG_FEATURE_HTTPD_CONFIG_WITH_SCRIPT_INTERPR
   #define ENABLE_FEATURE_HTTPD_CONFIG_WITH_SCRIPT_INTERPR 1
   #define IF_FEATURE_HTTPD_CONFIG_WITH_SCRIPT_INTERPR(...) __VA_ARGS__
   #define IF_NOT_FEATURE_HTTPD_CONFIG_WITH_SCRIPT_INTERPR(...)
#else
   #define ENABLE_FEATURE_HTTPD_CONFIG_WITH_SCRIPT_INTERPR 0
   #define IF_NOT_FEATURE_HTTPD_CONFIG_WITH_SCRIPT_INTERPR(...) __VA_ARGS__
   #define IF_FEATURE_HTTPD_CONFIG_WITH_SCRIPT_INTERPR(...)
#endif

#ifdef CONFIG_FEATURE_HTTPD_SET_REMOTE_PORT_TO_ENV
   #define ENABLE_FEATURE_HTTPD_SET_REMOTE_PORT_TO_ENV 1
   #define IF_FEATURE_HTTPD_SET_REMOTE_PORT_TO_ENV(...) __VA_ARGS__
   #define IF_NOT_FEATURE_HTTPD_SET_REMOTE_PORT_TO_ENV(...)
#else
   #define ENABLE_FEATURE_HTTPD_SET_REMOTE_PORT_TO_ENV 0
   #define IF_NOT_FEATURE_HTTPD_SET_REMOTE_PORT_TO_ENV(...) __VA_ARGS__
   #define IF_FEATURE_HTTPD_SET_REMOTE_PORT_TO_ENV(...)
#endif

#ifdef CONFIG_FEATURE_HTTPD_ENCODE_URL_STR
   #define ENABLE_FEATURE_HTTPD_ENCODE_URL_STR 1
   #define IF_FEATURE_HTTPD_ENCODE_URL_STR(...) __VA_ARGS__
   #define IF_NOT_FEATURE_HTTPD_ENCODE_URL_STR(...)
#else
   #define ENABLE_FEATURE_HTTPD_ENCODE_URL_STR 0
   #define IF_NOT_FEATURE_HTTPD_ENCODE_URL_STR(...) __VA_ARGS__
   #define IF_FEATURE_HTTPD_ENCODE_URL_STR(...)
#endif

#ifdef CONFIG_FEATURE_HTTPD_ERROR_PAGES
   #define ENABLE_FEATURE_HTTPD_ERROR_PAGES 1
   #define IF_FEATURE_HTTPD_ERROR_PAGES(...) __VA_ARGS__
   #define IF_NOT_FEATURE_HTTPD_ERROR_PAGES(...)
#else
   #define ENABLE_FEATURE_HTTPD_ERROR_PAGES 0
   #define IF_NOT_FEATURE_HTTPD_ERROR_PAGES(...) __VA_ARGS__
   #define IF_FEATURE_HTTPD_ERROR_PAGES(...)
#endif

#ifdef CONFIG_FEATURE_HTTPD_PROXY
   #define ENABLE_FEATURE_HTTPD_PROXY 1
   #define IF_FEATURE_HTTPD_PROXY(...) __VA_ARGS__
   #define IF_NOT_FEATURE_HTTPD_PROXY(...)
#else
   #define ENABLE_FEATURE_HTTPD_PROXY 0
   #define IF_NOT_FEATURE_HTTPD_PROXY(...) __VA_ARGS__
   #define IF_FEATURE_HTTPD_PROXY(...)
#endif

#ifdef CONFIG_FEATURE_HTTPD_GZIP
   #define ENABLE_FEATURE_HTTPD_GZIP 1
   #define IF_FEATURE_HTTPD_GZIP(...) __VA_ARGS__
   #define IF_NOT_FEATURE_HTTPD_GZIP(...)
#else
   #define ENABLE_FEATURE_HTTPD_GZIP 0
   #define IF_NOT_FEATURE_HTTPD_GZIP(...) __VA_ARGS__
   #define IF_FEATURE_HTTPD_GZIP(...)
#endif

#ifdef CONFIG_IFCONFIG
   #define ENABLE_IFCONFIG 1
   #define IF_IFCONFIG(...) __VA_ARGS__
   #define IF_NOT_IFCONFIG(...)
#else
   #define ENABLE_IFCONFIG 0
   #define IF_NOT_IFCONFIG(...) __VA_ARGS__
   #define IF_IFCONFIG(...)
#endif

#ifdef CONFIG_FEATURE_IFCONFIG_STATUS
   #define ENABLE_FEATURE_IFCONFIG_STATUS 1
   #define IF_FEATURE_IFCONFIG_STATUS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_IFCONFIG_STATUS(...)
#else
   #define ENABLE_FEATURE_IFCONFIG_STATUS 0
   #define IF_NOT_FEATURE_IFCONFIG_STATUS(...) __VA_ARGS__
   #define IF_FEATURE_IFCONFIG_STATUS(...)
#endif

#ifdef CONFIG_FEATURE_IFCONFIG_SLIP
   #define ENABLE_FEATURE_IFCONFIG_SLIP 1
   #define IF_FEATURE_IFCONFIG_SLIP(...) __VA_ARGS__
   #define IF_NOT_FEATURE_IFCONFIG_SLIP(...)
#else
   #define ENABLE_FEATURE_IFCONFIG_SLIP 0
   #define IF_NOT_FEATURE_IFCONFIG_SLIP(...) __VA_ARGS__
   #define IF_FEATURE_IFCONFIG_SLIP(...)
#endif

#ifdef CONFIG_FEATURE_IFCONFIG_MEMSTART_IOADDR_IRQ
   #define ENABLE_FEATURE_IFCONFIG_MEMSTART_IOADDR_IRQ 1
   #define IF_FEATURE_IFCONFIG_MEMSTART_IOADDR_IRQ(...) __VA_ARGS__
   #define IF_NOT_FEATURE_IFCONFIG_MEMSTART_IOADDR_IRQ(...)
#else
   #define ENABLE_FEATURE_IFCONFIG_MEMSTART_IOADDR_IRQ 0
   #define IF_NOT_FEATURE_IFCONFIG_MEMSTART_IOADDR_IRQ(...) __VA_ARGS__
   #define IF_FEATURE_IFCONFIG_MEMSTART_IOADDR_IRQ(...)
#endif

#ifdef CONFIG_FEATURE_IFCONFIG_HW
   #define ENABLE_FEATURE_IFCONFIG_HW 1
   #define IF_FEATURE_IFCONFIG_HW(...) __VA_ARGS__
   #define IF_NOT_FEATURE_IFCONFIG_HW(...)
#else
   #define ENABLE_FEATURE_IFCONFIG_HW 0
   #define IF_NOT_FEATURE_IFCONFIG_HW(...) __VA_ARGS__
   #define IF_FEATURE_IFCONFIG_HW(...)
#endif

#ifdef CONFIG_FEATURE_IFCONFIG_BROADCAST_PLUS
   #define ENABLE_FEATURE_IFCONFIG_BROADCAST_PLUS 1
   #define IF_FEATURE_IFCONFIG_BROADCAST_PLUS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_IFCONFIG_BROADCAST_PLUS(...)
#else
   #define ENABLE_FEATURE_IFCONFIG_BROADCAST_PLUS 0
   #define IF_NOT_FEATURE_IFCONFIG_BROADCAST_PLUS(...) __VA_ARGS__
   #define IF_FEATURE_IFCONFIG_BROADCAST_PLUS(...)
#endif

#ifdef CONFIG_IFENSLAVE
   #define ENABLE_IFENSLAVE 1
   #define IF_IFENSLAVE(...) __VA_ARGS__
   #define IF_NOT_IFENSLAVE(...)
#else
   #define ENABLE_IFENSLAVE 0
   #define IF_NOT_IFENSLAVE(...) __VA_ARGS__
   #define IF_IFENSLAVE(...)
#endif

#ifdef CONFIG_IFPLUGD
   #define ENABLE_IFPLUGD 1
   #define IF_IFPLUGD(...) __VA_ARGS__
   #define IF_NOT_IFPLUGD(...)
#else
   #define ENABLE_IFPLUGD 0
   #define IF_NOT_IFPLUGD(...) __VA_ARGS__
   #define IF_IFPLUGD(...)
#endif

#ifdef CONFIG_IFUPDOWN
   #define ENABLE_IFUPDOWN 1
   #define IF_IFUPDOWN(...) __VA_ARGS__
   #define IF_NOT_IFUPDOWN(...)
#else
   #define ENABLE_IFUPDOWN 0
   #define IF_NOT_IFUPDOWN(...) __VA_ARGS__
   #define IF_IFUPDOWN(...)
#endif

#ifdef CONFIG_IFUPDOWN_IFSTATE_PATH
   #define ENABLE_IFUPDOWN_IFSTATE_PATH 1
   #define IF_IFUPDOWN_IFSTATE_PATH(...) __VA_ARGS__
   #define IF_NOT_IFUPDOWN_IFSTATE_PATH(...)
#else
   #define ENABLE_IFUPDOWN_IFSTATE_PATH 0
   #define IF_NOT_IFUPDOWN_IFSTATE_PATH(...) __VA_ARGS__
   #define IF_IFUPDOWN_IFSTATE_PATH(...)
#endif

#ifdef CONFIG_FEATURE_IFUPDOWN_IP
   #define ENABLE_FEATURE_IFUPDOWN_IP 1
   #define IF_FEATURE_IFUPDOWN_IP(...) __VA_ARGS__
   #define IF_NOT_FEATURE_IFUPDOWN_IP(...)
#else
   #define ENABLE_FEATURE_IFUPDOWN_IP 0
   #define IF_NOT_FEATURE_IFUPDOWN_IP(...) __VA_ARGS__
   #define IF_FEATURE_IFUPDOWN_IP(...)
#endif

#ifdef CONFIG_FEATURE_IFUPDOWN_IP_BUILTIN
   #define ENABLE_FEATURE_IFUPDOWN_IP_BUILTIN 1
   #define IF_FEATURE_IFUPDOWN_IP_BUILTIN(...) __VA_ARGS__
   #define IF_NOT_FEATURE_IFUPDOWN_IP_BUILTIN(...)
#else
   #define ENABLE_FEATURE_IFUPDOWN_IP_BUILTIN 0
   #define IF_NOT_FEATURE_IFUPDOWN_IP_BUILTIN(...) __VA_ARGS__
   #define IF_FEATURE_IFUPDOWN_IP_BUILTIN(...)
#endif

#ifdef CONFIG_FEATURE_IFUPDOWN_IFCONFIG_BUILTIN
   #define ENABLE_FEATURE_IFUPDOWN_IFCONFIG_BUILTIN 1
   #define IF_FEATURE_IFUPDOWN_IFCONFIG_BUILTIN(...) __VA_ARGS__
   #define IF_NOT_FEATURE_IFUPDOWN_IFCONFIG_BUILTIN(...)
#else
   #define ENABLE_FEATURE_IFUPDOWN_IFCONFIG_BUILTIN 0
   #define IF_NOT_FEATURE_IFUPDOWN_IFCONFIG_BUILTIN(...) __VA_ARGS__
   #define IF_FEATURE_IFUPDOWN_IFCONFIG_BUILTIN(...)
#endif

#ifdef CONFIG_FEATURE_IFUPDOWN_IPV4
   #define ENABLE_FEATURE_IFUPDOWN_IPV4 1
   #define IF_FEATURE_IFUPDOWN_IPV4(...) __VA_ARGS__
   #define IF_NOT_FEATURE_IFUPDOWN_IPV4(...)
#else
   #define ENABLE_FEATURE_IFUPDOWN_IPV4 0
   #define IF_NOT_FEATURE_IFUPDOWN_IPV4(...) __VA_ARGS__
   #define IF_FEATURE_IFUPDOWN_IPV4(...)
#endif

#ifdef CONFIG_FEATURE_IFUPDOWN_IPV6
   #define ENABLE_FEATURE_IFUPDOWN_IPV6 1
   #define IF_FEATURE_IFUPDOWN_IPV6(...) __VA_ARGS__
   #define IF_NOT_FEATURE_IFUPDOWN_IPV6(...)
#else
   #define ENABLE_FEATURE_IFUPDOWN_IPV6 0
   #define IF_NOT_FEATURE_IFUPDOWN_IPV6(...) __VA_ARGS__
   #define IF_FEATURE_IFUPDOWN_IPV6(...)
#endif

#ifdef CONFIG_FEATURE_IFUPDOWN_MAPPING
   #define ENABLE_FEATURE_IFUPDOWN_MAPPING 1
   #define IF_FEATURE_IFUPDOWN_MAPPING(...) __VA_ARGS__
   #define IF_NOT_FEATURE_IFUPDOWN_MAPPING(...)
#else
   #define ENABLE_FEATURE_IFUPDOWN_MAPPING 0
   #define IF_NOT_FEATURE_IFUPDOWN_MAPPING(...) __VA_ARGS__
   #define IF_FEATURE_IFUPDOWN_MAPPING(...)
#endif

#ifdef CONFIG_FEATURE_IFUPDOWN_EXTERNAL_DHCP
   #define ENABLE_FEATURE_IFUPDOWN_EXTERNAL_DHCP 1
   #define IF_FEATURE_IFUPDOWN_EXTERNAL_DHCP(...) __VA_ARGS__
   #define IF_NOT_FEATURE_IFUPDOWN_EXTERNAL_DHCP(...)
#else
   #define ENABLE_FEATURE_IFUPDOWN_EXTERNAL_DHCP 0
   #define IF_NOT_FEATURE_IFUPDOWN_EXTERNAL_DHCP(...) __VA_ARGS__
   #define IF_FEATURE_IFUPDOWN_EXTERNAL_DHCP(...)
#endif

#ifdef CONFIG_INETD
   #define ENABLE_INETD 1
   #define IF_INETD(...) __VA_ARGS__
   #define IF_NOT_INETD(...)
#else
   #define ENABLE_INETD 0
   #define IF_NOT_INETD(...) __VA_ARGS__
   #define IF_INETD(...)
#endif

#ifdef CONFIG_FEATURE_INETD_SUPPORT_BUILTIN_ECHO
   #define ENABLE_FEATURE_INETD_SUPPORT_BUILTIN_ECHO 1
   #define IF_FEATURE_INETD_SUPPORT_BUILTIN_ECHO(...) __VA_ARGS__
   #define IF_NOT_FEATURE_INETD_SUPPORT_BUILTIN_ECHO(...)
#else
   #define ENABLE_FEATURE_INETD_SUPPORT_BUILTIN_ECHO 0
   #define IF_NOT_FEATURE_INETD_SUPPORT_BUILTIN_ECHO(...) __VA_ARGS__
   #define IF_FEATURE_INETD_SUPPORT_BUILTIN_ECHO(...)
#endif

#ifdef CONFIG_FEATURE_INETD_SUPPORT_BUILTIN_DISCARD
   #define ENABLE_FEATURE_INETD_SUPPORT_BUILTIN_DISCARD 1
   #define IF_FEATURE_INETD_SUPPORT_BUILTIN_DISCARD(...) __VA_ARGS__
   #define IF_NOT_FEATURE_INETD_SUPPORT_BUILTIN_DISCARD(...)
#else
   #define ENABLE_FEATURE_INETD_SUPPORT_BUILTIN_DISCARD 0
   #define IF_NOT_FEATURE_INETD_SUPPORT_BUILTIN_DISCARD(...) __VA_ARGS__
   #define IF_FEATURE_INETD_SUPPORT_BUILTIN_DISCARD(...)
#endif

#ifdef CONFIG_FEATURE_INETD_SUPPORT_BUILTIN_TIME
   #define ENABLE_FEATURE_INETD_SUPPORT_BUILTIN_TIME 1
   #define IF_FEATURE_INETD_SUPPORT_BUILTIN_TIME(...) __VA_ARGS__
   #define IF_NOT_FEATURE_INETD_SUPPORT_BUILTIN_TIME(...)
#else
   #define ENABLE_FEATURE_INETD_SUPPORT_BUILTIN_TIME 0
   #define IF_NOT_FEATURE_INETD_SUPPORT_BUILTIN_TIME(...) __VA_ARGS__
   #define IF_FEATURE_INETD_SUPPORT_BUILTIN_TIME(...)
#endif

#ifdef CONFIG_FEATURE_INETD_SUPPORT_BUILTIN_DAYTIME
   #define ENABLE_FEATURE_INETD_SUPPORT_BUILTIN_DAYTIME 1
   #define IF_FEATURE_INETD_SUPPORT_BUILTIN_DAYTIME(...) __VA_ARGS__
   #define IF_NOT_FEATURE_INETD_SUPPORT_BUILTIN_DAYTIME(...)
#else
   #define ENABLE_FEATURE_INETD_SUPPORT_BUILTIN_DAYTIME 0
   #define IF_NOT_FEATURE_INETD_SUPPORT_BUILTIN_DAYTIME(...) __VA_ARGS__
   #define IF_FEATURE_INETD_SUPPORT_BUILTIN_DAYTIME(...)
#endif

#ifdef CONFIG_FEATURE_INETD_SUPPORT_BUILTIN_CHARGEN
   #define ENABLE_FEATURE_INETD_SUPPORT_BUILTIN_CHARGEN 1
   #define IF_FEATURE_INETD_SUPPORT_BUILTIN_CHARGEN(...) __VA_ARGS__
   #define IF_NOT_FEATURE_INETD_SUPPORT_BUILTIN_CHARGEN(...)
#else
   #define ENABLE_FEATURE_INETD_SUPPORT_BUILTIN_CHARGEN 0
   #define IF_NOT_FEATURE_INETD_SUPPORT_BUILTIN_CHARGEN(...) __VA_ARGS__
   #define IF_FEATURE_INETD_SUPPORT_BUILTIN_CHARGEN(...)
#endif

#ifdef CONFIG_FEATURE_INETD_RPC
   #define ENABLE_FEATURE_INETD_RPC 1
   #define IF_FEATURE_INETD_RPC(...) __VA_ARGS__
   #define IF_NOT_FEATURE_INETD_RPC(...)
#else
   #define ENABLE_FEATURE_INETD_RPC 0
   #define IF_NOT_FEATURE_INETD_RPC(...) __VA_ARGS__
   #define IF_FEATURE_INETD_RPC(...)
#endif

#ifdef CONFIG_IP
   #define ENABLE_IP 1
   #define IF_IP(...) __VA_ARGS__
   #define IF_NOT_IP(...)
#else
   #define ENABLE_IP 0
   #define IF_NOT_IP(...) __VA_ARGS__
   #define IF_IP(...)
#endif

#ifdef CONFIG_FEATURE_IP_ADDRESS
   #define ENABLE_FEATURE_IP_ADDRESS 1
   #define IF_FEATURE_IP_ADDRESS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_IP_ADDRESS(...)
#else
   #define ENABLE_FEATURE_IP_ADDRESS 0
   #define IF_NOT_FEATURE_IP_ADDRESS(...) __VA_ARGS__
   #define IF_FEATURE_IP_ADDRESS(...)
#endif

#ifdef CONFIG_FEATURE_IP_LINK
   #define ENABLE_FEATURE_IP_LINK 1
   #define IF_FEATURE_IP_LINK(...) __VA_ARGS__
   #define IF_NOT_FEATURE_IP_LINK(...)
#else
   #define ENABLE_FEATURE_IP_LINK 0
   #define IF_NOT_FEATURE_IP_LINK(...) __VA_ARGS__
   #define IF_FEATURE_IP_LINK(...)
#endif

#ifdef CONFIG_FEATURE_IP_ROUTE
   #define ENABLE_FEATURE_IP_ROUTE 1
   #define IF_FEATURE_IP_ROUTE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_IP_ROUTE(...)
#else
   #define ENABLE_FEATURE_IP_ROUTE 0
   #define IF_NOT_FEATURE_IP_ROUTE(...) __VA_ARGS__
   #define IF_FEATURE_IP_ROUTE(...)
#endif

#ifdef CONFIG_FEATURE_IP_TUNNEL
   #define ENABLE_FEATURE_IP_TUNNEL 1
   #define IF_FEATURE_IP_TUNNEL(...) __VA_ARGS__
   #define IF_NOT_FEATURE_IP_TUNNEL(...)
#else
   #define ENABLE_FEATURE_IP_TUNNEL 0
   #define IF_NOT_FEATURE_IP_TUNNEL(...) __VA_ARGS__
   #define IF_FEATURE_IP_TUNNEL(...)
#endif

#ifdef CONFIG_FEATURE_IP_RULE
   #define ENABLE_FEATURE_IP_RULE 1
   #define IF_FEATURE_IP_RULE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_IP_RULE(...)
#else
   #define ENABLE_FEATURE_IP_RULE 0
   #define IF_NOT_FEATURE_IP_RULE(...) __VA_ARGS__
   #define IF_FEATURE_IP_RULE(...)
#endif

#ifdef CONFIG_FEATURE_IP_SHORT_FORMS
   #define ENABLE_FEATURE_IP_SHORT_FORMS 1
   #define IF_FEATURE_IP_SHORT_FORMS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_IP_SHORT_FORMS(...)
#else
   #define ENABLE_FEATURE_IP_SHORT_FORMS 0
   #define IF_NOT_FEATURE_IP_SHORT_FORMS(...) __VA_ARGS__
   #define IF_FEATURE_IP_SHORT_FORMS(...)
#endif

#ifdef CONFIG_FEATURE_IP_RARE_PROTOCOLS
   #define ENABLE_FEATURE_IP_RARE_PROTOCOLS 1
   #define IF_FEATURE_IP_RARE_PROTOCOLS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_IP_RARE_PROTOCOLS(...)
#else
   #define ENABLE_FEATURE_IP_RARE_PROTOCOLS 0
   #define IF_NOT_FEATURE_IP_RARE_PROTOCOLS(...) __VA_ARGS__
   #define IF_FEATURE_IP_RARE_PROTOCOLS(...)
#endif

#ifdef CONFIG_IPADDR
   #define ENABLE_IPADDR 1
   #define IF_IPADDR(...) __VA_ARGS__
   #define IF_NOT_IPADDR(...)
#else
   #define ENABLE_IPADDR 0
   #define IF_NOT_IPADDR(...) __VA_ARGS__
   #define IF_IPADDR(...)
#endif

#ifdef CONFIG_IPLINK
   #define ENABLE_IPLINK 1
   #define IF_IPLINK(...) __VA_ARGS__
   #define IF_NOT_IPLINK(...)
#else
   #define ENABLE_IPLINK 0
   #define IF_NOT_IPLINK(...) __VA_ARGS__
   #define IF_IPLINK(...)
#endif

#ifdef CONFIG_IPROUTE
   #define ENABLE_IPROUTE 1
   #define IF_IPROUTE(...) __VA_ARGS__
   #define IF_NOT_IPROUTE(...)
#else
   #define ENABLE_IPROUTE 0
   #define IF_NOT_IPROUTE(...) __VA_ARGS__
   #define IF_IPROUTE(...)
#endif

#ifdef CONFIG_IPTUNNEL
   #define ENABLE_IPTUNNEL 1
   #define IF_IPTUNNEL(...) __VA_ARGS__
   #define IF_NOT_IPTUNNEL(...)
#else
   #define ENABLE_IPTUNNEL 0
   #define IF_NOT_IPTUNNEL(...) __VA_ARGS__
   #define IF_IPTUNNEL(...)
#endif

#ifdef CONFIG_IPRULE
   #define ENABLE_IPRULE 1
   #define IF_IPRULE(...) __VA_ARGS__
   #define IF_NOT_IPRULE(...)
#else
   #define ENABLE_IPRULE 0
   #define IF_NOT_IPRULE(...) __VA_ARGS__
   #define IF_IPRULE(...)
#endif

#ifdef CONFIG_IPCALC
   #define ENABLE_IPCALC 1
   #define IF_IPCALC(...) __VA_ARGS__
   #define IF_NOT_IPCALC(...)
#else
   #define ENABLE_IPCALC 0
   #define IF_NOT_IPCALC(...) __VA_ARGS__
   #define IF_IPCALC(...)
#endif

#ifdef CONFIG_FEATURE_IPCALC_FANCY
   #define ENABLE_FEATURE_IPCALC_FANCY 1
   #define IF_FEATURE_IPCALC_FANCY(...) __VA_ARGS__
   #define IF_NOT_FEATURE_IPCALC_FANCY(...)
#else
   #define ENABLE_FEATURE_IPCALC_FANCY 0
   #define IF_NOT_FEATURE_IPCALC_FANCY(...) __VA_ARGS__
   #define IF_FEATURE_IPCALC_FANCY(...)
#endif

#ifdef CONFIG_FEATURE_IPCALC_LONG_OPTIONS
   #define ENABLE_FEATURE_IPCALC_LONG_OPTIONS 1
   #define IF_FEATURE_IPCALC_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_IPCALC_LONG_OPTIONS(...)
#else
   #define ENABLE_FEATURE_IPCALC_LONG_OPTIONS 0
   #define IF_NOT_FEATURE_IPCALC_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_FEATURE_IPCALC_LONG_OPTIONS(...)
#endif

#ifdef CONFIG_NAMEIF
   #define ENABLE_NAMEIF 1
   #define IF_NAMEIF(...) __VA_ARGS__
   #define IF_NOT_NAMEIF(...)
#else
   #define ENABLE_NAMEIF 0
   #define IF_NOT_NAMEIF(...) __VA_ARGS__
   #define IF_NAMEIF(...)
#endif

#ifdef CONFIG_FEATURE_NAMEIF_EXTENDED
   #define ENABLE_FEATURE_NAMEIF_EXTENDED 1
   #define IF_FEATURE_NAMEIF_EXTENDED(...) __VA_ARGS__
   #define IF_NOT_FEATURE_NAMEIF_EXTENDED(...)
#else
   #define ENABLE_FEATURE_NAMEIF_EXTENDED 0
   #define IF_NOT_FEATURE_NAMEIF_EXTENDED(...) __VA_ARGS__
   #define IF_FEATURE_NAMEIF_EXTENDED(...)
#endif

#ifdef CONFIG_NETSTAT
   #define ENABLE_NETSTAT 1
   #define IF_NETSTAT(...) __VA_ARGS__
   #define IF_NOT_NETSTAT(...)
#else
   #define ENABLE_NETSTAT 0
   #define IF_NOT_NETSTAT(...) __VA_ARGS__
   #define IF_NETSTAT(...)
#endif

#ifdef CONFIG_FEATURE_NETSTAT_WIDE
   #define ENABLE_FEATURE_NETSTAT_WIDE 1
   #define IF_FEATURE_NETSTAT_WIDE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_NETSTAT_WIDE(...)
#else
   #define ENABLE_FEATURE_NETSTAT_WIDE 0
   #define IF_NOT_FEATURE_NETSTAT_WIDE(...) __VA_ARGS__
   #define IF_FEATURE_NETSTAT_WIDE(...)
#endif

#ifdef CONFIG_FEATURE_NETSTAT_PRG
   #define ENABLE_FEATURE_NETSTAT_PRG 1
   #define IF_FEATURE_NETSTAT_PRG(...) __VA_ARGS__
   #define IF_NOT_FEATURE_NETSTAT_PRG(...)
#else
   #define ENABLE_FEATURE_NETSTAT_PRG 0
   #define IF_NOT_FEATURE_NETSTAT_PRG(...) __VA_ARGS__
   #define IF_FEATURE_NETSTAT_PRG(...)
#endif

#ifdef CONFIG_NSLOOKUP
   #define ENABLE_NSLOOKUP 1
   #define IF_NSLOOKUP(...) __VA_ARGS__
   #define IF_NOT_NSLOOKUP(...)
#else
   #define ENABLE_NSLOOKUP 0
   #define IF_NOT_NSLOOKUP(...) __VA_ARGS__
   #define IF_NSLOOKUP(...)
#endif

#ifdef CONFIG_NTPD
   #define ENABLE_NTPD 1
   #define IF_NTPD(...) __VA_ARGS__
   #define IF_NOT_NTPD(...)
#else
   #define ENABLE_NTPD 0
   #define IF_NOT_NTPD(...) __VA_ARGS__
   #define IF_NTPD(...)
#endif

#ifdef CONFIG_FEATURE_NTPD_SERVER
   #define ENABLE_FEATURE_NTPD_SERVER 1
   #define IF_FEATURE_NTPD_SERVER(...) __VA_ARGS__
   #define IF_NOT_FEATURE_NTPD_SERVER(...)
#else
   #define ENABLE_FEATURE_NTPD_SERVER 0
   #define IF_NOT_FEATURE_NTPD_SERVER(...) __VA_ARGS__
   #define IF_FEATURE_NTPD_SERVER(...)
#endif

#ifdef CONFIG_PING
   #define ENABLE_PING 1
   #define IF_PING(...) __VA_ARGS__
   #define IF_NOT_PING(...)
#else
   #define ENABLE_PING 0
   #define IF_NOT_PING(...) __VA_ARGS__
   #define IF_PING(...)
#endif

#ifdef CONFIG_PING6
   #define ENABLE_PING6 1
   #define IF_PING6(...) __VA_ARGS__
   #define IF_NOT_PING6(...)
#else
   #define ENABLE_PING6 0
   #define IF_NOT_PING6(...) __VA_ARGS__
   #define IF_PING6(...)
#endif

#ifdef CONFIG_FEATURE_FANCY_PING
   #define ENABLE_FEATURE_FANCY_PING 1
   #define IF_FEATURE_FANCY_PING(...) __VA_ARGS__
   #define IF_NOT_FEATURE_FANCY_PING(...)
#else
   #define ENABLE_FEATURE_FANCY_PING 0
   #define IF_NOT_FEATURE_FANCY_PING(...) __VA_ARGS__
   #define IF_FEATURE_FANCY_PING(...)
#endif

#ifdef CONFIG_PSCAN
   #define ENABLE_PSCAN 1
   #define IF_PSCAN(...) __VA_ARGS__
   #define IF_NOT_PSCAN(...)
#else
   #define ENABLE_PSCAN 0
   #define IF_NOT_PSCAN(...) __VA_ARGS__
   #define IF_PSCAN(...)
#endif

#ifdef CONFIG_ROUTE
   #define ENABLE_ROUTE 1
   #define IF_ROUTE(...) __VA_ARGS__
   #define IF_NOT_ROUTE(...)
#else
   #define ENABLE_ROUTE 0
   #define IF_NOT_ROUTE(...) __VA_ARGS__
   #define IF_ROUTE(...)
#endif

#ifdef CONFIG_SLATTACH
   #define ENABLE_SLATTACH 1
   #define IF_SLATTACH(...) __VA_ARGS__
   #define IF_NOT_SLATTACH(...)
#else
   #define ENABLE_SLATTACH 0
   #define IF_NOT_SLATTACH(...) __VA_ARGS__
   #define IF_SLATTACH(...)
#endif

#ifdef CONFIG_TCPSVD
   #define ENABLE_TCPSVD 1
   #define IF_TCPSVD(...) __VA_ARGS__
   #define IF_NOT_TCPSVD(...)
#else
   #define ENABLE_TCPSVD 0
   #define IF_NOT_TCPSVD(...) __VA_ARGS__
   #define IF_TCPSVD(...)
#endif

#ifdef CONFIG_TELNET
   #define ENABLE_TELNET 1
   #define IF_TELNET(...) __VA_ARGS__
   #define IF_NOT_TELNET(...)
#else
   #define ENABLE_TELNET 0
   #define IF_NOT_TELNET(...) __VA_ARGS__
   #define IF_TELNET(...)
#endif

#ifdef CONFIG_FEATURE_TELNET_TTYPE
   #define ENABLE_FEATURE_TELNET_TTYPE 1
   #define IF_FEATURE_TELNET_TTYPE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TELNET_TTYPE(...)
#else
   #define ENABLE_FEATURE_TELNET_TTYPE 0
   #define IF_NOT_FEATURE_TELNET_TTYPE(...) __VA_ARGS__
   #define IF_FEATURE_TELNET_TTYPE(...)
#endif

#ifdef CONFIG_FEATURE_TELNET_AUTOLOGIN
   #define ENABLE_FEATURE_TELNET_AUTOLOGIN 1
   #define IF_FEATURE_TELNET_AUTOLOGIN(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TELNET_AUTOLOGIN(...)
#else
   #define ENABLE_FEATURE_TELNET_AUTOLOGIN 0
   #define IF_NOT_FEATURE_TELNET_AUTOLOGIN(...) __VA_ARGS__
   #define IF_FEATURE_TELNET_AUTOLOGIN(...)
#endif

#ifdef CONFIG_TELNETD
   #define ENABLE_TELNETD 1
   #define IF_TELNETD(...) __VA_ARGS__
   #define IF_NOT_TELNETD(...)
#else
   #define ENABLE_TELNETD 0
   #define IF_NOT_TELNETD(...) __VA_ARGS__
   #define IF_TELNETD(...)
#endif

#ifdef CONFIG_FEATURE_TELNETD_STANDALONE
   #define ENABLE_FEATURE_TELNETD_STANDALONE 1
   #define IF_FEATURE_TELNETD_STANDALONE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TELNETD_STANDALONE(...)
#else
   #define ENABLE_FEATURE_TELNETD_STANDALONE 0
   #define IF_NOT_FEATURE_TELNETD_STANDALONE(...) __VA_ARGS__
   #define IF_FEATURE_TELNETD_STANDALONE(...)
#endif

#ifdef CONFIG_FEATURE_TELNETD_INETD_WAIT
   #define ENABLE_FEATURE_TELNETD_INETD_WAIT 1
   #define IF_FEATURE_TELNETD_INETD_WAIT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TELNETD_INETD_WAIT(...)
#else
   #define ENABLE_FEATURE_TELNETD_INETD_WAIT 0
   #define IF_NOT_FEATURE_TELNETD_INETD_WAIT(...) __VA_ARGS__
   #define IF_FEATURE_TELNETD_INETD_WAIT(...)
#endif

#ifdef CONFIG_TFTP
   #define ENABLE_TFTP 1
   #define IF_TFTP(...) __VA_ARGS__
   #define IF_NOT_TFTP(...)
#else
   #define ENABLE_TFTP 0
   #define IF_NOT_TFTP(...) __VA_ARGS__
   #define IF_TFTP(...)
#endif

#ifdef CONFIG_TFTPD
   #define ENABLE_TFTPD 1
   #define IF_TFTPD(...) __VA_ARGS__
   #define IF_NOT_TFTPD(...)
#else
   #define ENABLE_TFTPD 0
   #define IF_NOT_TFTPD(...) __VA_ARGS__
   #define IF_TFTPD(...)
#endif

#ifdef CONFIG_FEATURE_TFTP_GET
   #define ENABLE_FEATURE_TFTP_GET 1
   #define IF_FEATURE_TFTP_GET(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TFTP_GET(...)
#else
   #define ENABLE_FEATURE_TFTP_GET 0
   #define IF_NOT_FEATURE_TFTP_GET(...) __VA_ARGS__
   #define IF_FEATURE_TFTP_GET(...)
#endif

#ifdef CONFIG_FEATURE_TFTP_PUT
   #define ENABLE_FEATURE_TFTP_PUT 1
   #define IF_FEATURE_TFTP_PUT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TFTP_PUT(...)
#else
   #define ENABLE_FEATURE_TFTP_PUT 0
   #define IF_NOT_FEATURE_TFTP_PUT(...) __VA_ARGS__
   #define IF_FEATURE_TFTP_PUT(...)
#endif

#ifdef CONFIG_FEATURE_TFTP_BLOCKSIZE
   #define ENABLE_FEATURE_TFTP_BLOCKSIZE 1
   #define IF_FEATURE_TFTP_BLOCKSIZE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TFTP_BLOCKSIZE(...)
#else
   #define ENABLE_FEATURE_TFTP_BLOCKSIZE 0
   #define IF_NOT_FEATURE_TFTP_BLOCKSIZE(...) __VA_ARGS__
   #define IF_FEATURE_TFTP_BLOCKSIZE(...)
#endif

#ifdef CONFIG_FEATURE_TFTP_PROGRESS_BAR
   #define ENABLE_FEATURE_TFTP_PROGRESS_BAR 1
   #define IF_FEATURE_TFTP_PROGRESS_BAR(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TFTP_PROGRESS_BAR(...)
#else
   #define ENABLE_FEATURE_TFTP_PROGRESS_BAR 0
   #define IF_NOT_FEATURE_TFTP_PROGRESS_BAR(...) __VA_ARGS__
   #define IF_FEATURE_TFTP_PROGRESS_BAR(...)
#endif

#ifdef CONFIG_TFTP_DEBUG
   #define ENABLE_TFTP_DEBUG 1
   #define IF_TFTP_DEBUG(...) __VA_ARGS__
   #define IF_NOT_TFTP_DEBUG(...)
#else
   #define ENABLE_TFTP_DEBUG 0
   #define IF_NOT_TFTP_DEBUG(...) __VA_ARGS__
   #define IF_TFTP_DEBUG(...)
#endif

#ifdef CONFIG_TRACEROUTE
   #define ENABLE_TRACEROUTE 1
   #define IF_TRACEROUTE(...) __VA_ARGS__
   #define IF_NOT_TRACEROUTE(...)
#else
   #define ENABLE_TRACEROUTE 0
   #define IF_NOT_TRACEROUTE(...) __VA_ARGS__
   #define IF_TRACEROUTE(...)
#endif

#ifdef CONFIG_TRACEROUTE6
   #define ENABLE_TRACEROUTE6 1
   #define IF_TRACEROUTE6(...) __VA_ARGS__
   #define IF_NOT_TRACEROUTE6(...)
#else
   #define ENABLE_TRACEROUTE6 0
   #define IF_NOT_TRACEROUTE6(...) __VA_ARGS__
   #define IF_TRACEROUTE6(...)
#endif

#ifdef CONFIG_FEATURE_TRACEROUTE_VERBOSE
   #define ENABLE_FEATURE_TRACEROUTE_VERBOSE 1
   #define IF_FEATURE_TRACEROUTE_VERBOSE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TRACEROUTE_VERBOSE(...)
#else
   #define ENABLE_FEATURE_TRACEROUTE_VERBOSE 0
   #define IF_NOT_FEATURE_TRACEROUTE_VERBOSE(...) __VA_ARGS__
   #define IF_FEATURE_TRACEROUTE_VERBOSE(...)
#endif

#ifdef CONFIG_FEATURE_TRACEROUTE_SOURCE_ROUTE
   #define ENABLE_FEATURE_TRACEROUTE_SOURCE_ROUTE 1
   #define IF_FEATURE_TRACEROUTE_SOURCE_ROUTE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TRACEROUTE_SOURCE_ROUTE(...)
#else
   #define ENABLE_FEATURE_TRACEROUTE_SOURCE_ROUTE 0
   #define IF_NOT_FEATURE_TRACEROUTE_SOURCE_ROUTE(...) __VA_ARGS__
   #define IF_FEATURE_TRACEROUTE_SOURCE_ROUTE(...)
#endif

#ifdef CONFIG_FEATURE_TRACEROUTE_USE_ICMP
   #define ENABLE_FEATURE_TRACEROUTE_USE_ICMP 1
   #define IF_FEATURE_TRACEROUTE_USE_ICMP(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TRACEROUTE_USE_ICMP(...)
#else
   #define ENABLE_FEATURE_TRACEROUTE_USE_ICMP 0
   #define IF_NOT_FEATURE_TRACEROUTE_USE_ICMP(...) __VA_ARGS__
   #define IF_FEATURE_TRACEROUTE_USE_ICMP(...)
#endif

#ifdef CONFIG_TUNCTL
   #define ENABLE_TUNCTL 1
   #define IF_TUNCTL(...) __VA_ARGS__
   #define IF_NOT_TUNCTL(...)
#else
   #define ENABLE_TUNCTL 0
   #define IF_NOT_TUNCTL(...) __VA_ARGS__
   #define IF_TUNCTL(...)
#endif

#ifdef CONFIG_FEATURE_TUNCTL_UG
   #define ENABLE_FEATURE_TUNCTL_UG 1
   #define IF_FEATURE_TUNCTL_UG(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TUNCTL_UG(...)
#else
   #define ENABLE_FEATURE_TUNCTL_UG 0
   #define IF_NOT_FEATURE_TUNCTL_UG(...) __VA_ARGS__
   #define IF_FEATURE_TUNCTL_UG(...)
#endif

#ifdef CONFIG_UDHCPD
   #define ENABLE_UDHCPD 1
   #define IF_UDHCPD(...) __VA_ARGS__
   #define IF_NOT_UDHCPD(...)
#else
   #define ENABLE_UDHCPD 0
   #define IF_NOT_UDHCPD(...) __VA_ARGS__
   #define IF_UDHCPD(...)
#endif

#ifdef CONFIG_DHCPRELAY
   #define ENABLE_DHCPRELAY 1
   #define IF_DHCPRELAY(...) __VA_ARGS__
   #define IF_NOT_DHCPRELAY(...)
#else
   #define ENABLE_DHCPRELAY 0
   #define IF_NOT_DHCPRELAY(...) __VA_ARGS__
   #define IF_DHCPRELAY(...)
#endif

#ifdef CONFIG_DUMPLEASES
   #define ENABLE_DUMPLEASES 1
   #define IF_DUMPLEASES(...) __VA_ARGS__
   #define IF_NOT_DUMPLEASES(...)
#else
   #define ENABLE_DUMPLEASES 0
   #define IF_NOT_DUMPLEASES(...) __VA_ARGS__
   #define IF_DUMPLEASES(...)
#endif

#ifdef CONFIG_FEATURE_UDHCPD_WRITE_LEASES_EARLY
   #define ENABLE_FEATURE_UDHCPD_WRITE_LEASES_EARLY 1
   #define IF_FEATURE_UDHCPD_WRITE_LEASES_EARLY(...) __VA_ARGS__
   #define IF_NOT_FEATURE_UDHCPD_WRITE_LEASES_EARLY(...)
#else
   #define ENABLE_FEATURE_UDHCPD_WRITE_LEASES_EARLY 0
   #define IF_NOT_FEATURE_UDHCPD_WRITE_LEASES_EARLY(...) __VA_ARGS__
   #define IF_FEATURE_UDHCPD_WRITE_LEASES_EARLY(...)
#endif

#ifdef CONFIG_DHCPD_LEASES_FILE
   #define ENABLE_DHCPD_LEASES_FILE 1
   #define IF_DHCPD_LEASES_FILE(...) __VA_ARGS__
   #define IF_NOT_DHCPD_LEASES_FILE(...)
#else
   #define ENABLE_DHCPD_LEASES_FILE 0
   #define IF_NOT_DHCPD_LEASES_FILE(...) __VA_ARGS__
   #define IF_DHCPD_LEASES_FILE(...)
#endif

#ifdef CONFIG_UDHCPC
   #define ENABLE_UDHCPC 1
   #define IF_UDHCPC(...) __VA_ARGS__
   #define IF_NOT_UDHCPC(...)
#else
   #define ENABLE_UDHCPC 0
   #define IF_NOT_UDHCPC(...) __VA_ARGS__
   #define IF_UDHCPC(...)
#endif

#ifdef CONFIG_FEATURE_UDHCPC_ARPING
   #define ENABLE_FEATURE_UDHCPC_ARPING 1
   #define IF_FEATURE_UDHCPC_ARPING(...) __VA_ARGS__
   #define IF_NOT_FEATURE_UDHCPC_ARPING(...)
#else
   #define ENABLE_FEATURE_UDHCPC_ARPING 0
   #define IF_NOT_FEATURE_UDHCPC_ARPING(...) __VA_ARGS__
   #define IF_FEATURE_UDHCPC_ARPING(...)
#endif

#ifdef CONFIG_FEATURE_UDHCP_PORT
   #define ENABLE_FEATURE_UDHCP_PORT 1
   #define IF_FEATURE_UDHCP_PORT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_UDHCP_PORT(...)
#else
   #define ENABLE_FEATURE_UDHCP_PORT 0
   #define IF_NOT_FEATURE_UDHCP_PORT(...) __VA_ARGS__
   #define IF_FEATURE_UDHCP_PORT(...)
#endif

#ifdef CONFIG_UDHCP_DEBUG
   #define ENABLE_UDHCP_DEBUG 1
   #define IF_UDHCP_DEBUG(...) __VA_ARGS__
   #define IF_NOT_UDHCP_DEBUG(...)
#else
   #define ENABLE_UDHCP_DEBUG 0
   #define IF_NOT_UDHCP_DEBUG(...) __VA_ARGS__
   #define IF_UDHCP_DEBUG(...)
#endif

#ifdef CONFIG_FEATURE_UDHCP_RFC3397
   #define ENABLE_FEATURE_UDHCP_RFC3397 1
   #define IF_FEATURE_UDHCP_RFC3397(...) __VA_ARGS__
   #define IF_NOT_FEATURE_UDHCP_RFC3397(...)
#else
   #define ENABLE_FEATURE_UDHCP_RFC3397 0
   #define IF_NOT_FEATURE_UDHCP_RFC3397(...) __VA_ARGS__
   #define IF_FEATURE_UDHCP_RFC3397(...)
#endif

#ifdef CONFIG_UDHCPC_DEFAULT_SCRIPT
   #define ENABLE_UDHCPC_DEFAULT_SCRIPT 1
   #define IF_UDHCPC_DEFAULT_SCRIPT(...) __VA_ARGS__
   #define IF_NOT_UDHCPC_DEFAULT_SCRIPT(...)
#else
   #define ENABLE_UDHCPC_DEFAULT_SCRIPT 0
   #define IF_NOT_UDHCPC_DEFAULT_SCRIPT(...) __VA_ARGS__
   #define IF_UDHCPC_DEFAULT_SCRIPT(...)
#endif

#ifdef CONFIG_UDHCPC_SLACK_FOR_BUGGY_SERVERS
   #define ENABLE_UDHCPC_SLACK_FOR_BUGGY_SERVERS 1
   #define IF_UDHCPC_SLACK_FOR_BUGGY_SERVERS(...) __VA_ARGS__
   #define IF_NOT_UDHCPC_SLACK_FOR_BUGGY_SERVERS(...)
#else
   #define ENABLE_UDHCPC_SLACK_FOR_BUGGY_SERVERS 0
   #define IF_NOT_UDHCPC_SLACK_FOR_BUGGY_SERVERS(...) __VA_ARGS__
   #define IF_UDHCPC_SLACK_FOR_BUGGY_SERVERS(...)
#endif

#ifdef CONFIG_IFUPDOWN_UDHCPC_CMD_OPTIONS
   #define ENABLE_IFUPDOWN_UDHCPC_CMD_OPTIONS 1
   #define IF_IFUPDOWN_UDHCPC_CMD_OPTIONS(...) __VA_ARGS__
   #define IF_NOT_IFUPDOWN_UDHCPC_CMD_OPTIONS(...)
#else
   #define ENABLE_IFUPDOWN_UDHCPC_CMD_OPTIONS 0
   #define IF_NOT_IFUPDOWN_UDHCPC_CMD_OPTIONS(...) __VA_ARGS__
   #define IF_IFUPDOWN_UDHCPC_CMD_OPTIONS(...)
#endif

#ifdef CONFIG_UDPSVD
   #define ENABLE_UDPSVD 1
   #define IF_UDPSVD(...) __VA_ARGS__
   #define IF_NOT_UDPSVD(...)
#else
   #define ENABLE_UDPSVD 0
   #define IF_NOT_UDPSVD(...) __VA_ARGS__
   #define IF_UDPSVD(...)
#endif

#ifdef CONFIG_VCONFIG
   #define ENABLE_VCONFIG 1
   #define IF_VCONFIG(...) __VA_ARGS__
   #define IF_NOT_VCONFIG(...)
#else
   #define ENABLE_VCONFIG 0
   #define IF_NOT_VCONFIG(...) __VA_ARGS__
   #define IF_VCONFIG(...)
#endif

#ifdef CONFIG_WGET
   #define ENABLE_WGET 1
   #define IF_WGET(...) __VA_ARGS__
   #define IF_NOT_WGET(...)
#else
   #define ENABLE_WGET 0
   #define IF_NOT_WGET(...) __VA_ARGS__
   #define IF_WGET(...)
#endif

#ifdef CONFIG_FEATURE_WGET_STATUSBAR
   #define ENABLE_FEATURE_WGET_STATUSBAR 1
   #define IF_FEATURE_WGET_STATUSBAR(...) __VA_ARGS__
   #define IF_NOT_FEATURE_WGET_STATUSBAR(...)
#else
   #define ENABLE_FEATURE_WGET_STATUSBAR 0
   #define IF_NOT_FEATURE_WGET_STATUSBAR(...) __VA_ARGS__
   #define IF_FEATURE_WGET_STATUSBAR(...)
#endif

#ifdef CONFIG_FEATURE_WGET_AUTHENTICATION
   #define ENABLE_FEATURE_WGET_AUTHENTICATION 1
   #define IF_FEATURE_WGET_AUTHENTICATION(...) __VA_ARGS__
   #define IF_NOT_FEATURE_WGET_AUTHENTICATION(...)
#else
   #define ENABLE_FEATURE_WGET_AUTHENTICATION 0
   #define IF_NOT_FEATURE_WGET_AUTHENTICATION(...) __VA_ARGS__
   #define IF_FEATURE_WGET_AUTHENTICATION(...)
#endif

#ifdef CONFIG_FEATURE_WGET_LONG_OPTIONS
   #define ENABLE_FEATURE_WGET_LONG_OPTIONS 1
   #define IF_FEATURE_WGET_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_WGET_LONG_OPTIONS(...)
#else
   #define ENABLE_FEATURE_WGET_LONG_OPTIONS 0
   #define IF_NOT_FEATURE_WGET_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_FEATURE_WGET_LONG_OPTIONS(...)
#endif

#ifdef CONFIG_FEATURE_WGET_TIMEOUT
   #define ENABLE_FEATURE_WGET_TIMEOUT 1
   #define IF_FEATURE_WGET_TIMEOUT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_WGET_TIMEOUT(...)
#else
   #define ENABLE_FEATURE_WGET_TIMEOUT 0
   #define IF_NOT_FEATURE_WGET_TIMEOUT(...) __VA_ARGS__
   #define IF_FEATURE_WGET_TIMEOUT(...)
#endif

#ifdef CONFIG_ZCIP
   #define ENABLE_ZCIP 1
   #define IF_ZCIP(...) __VA_ARGS__
   #define IF_NOT_ZCIP(...)
#else
   #define ENABLE_ZCIP 0
   #define IF_NOT_ZCIP(...) __VA_ARGS__
   #define IF_ZCIP(...)
#endif

#ifdef CONFIG_LPD
   #define ENABLE_LPD 1
   #define IF_LPD(...) __VA_ARGS__
   #define IF_NOT_LPD(...)
#else
   #define ENABLE_LPD 0
   #define IF_NOT_LPD(...) __VA_ARGS__
   #define IF_LPD(...)
#endif

#ifdef CONFIG_LPR
   #define ENABLE_LPR 1
   #define IF_LPR(...) __VA_ARGS__
   #define IF_NOT_LPR(...)
#else
   #define ENABLE_LPR 0
   #define IF_NOT_LPR(...) __VA_ARGS__
   #define IF_LPR(...)
#endif

#ifdef CONFIG_LPQ
   #define ENABLE_LPQ 1
   #define IF_LPQ(...) __VA_ARGS__
   #define IF_NOT_LPQ(...)
#else
   #define ENABLE_LPQ 0
   #define IF_NOT_LPQ(...) __VA_ARGS__
   #define IF_LPQ(...)
#endif

#ifdef CONFIG_MAKEMIME
   #define ENABLE_MAKEMIME 1
   #define IF_MAKEMIME(...) __VA_ARGS__
   #define IF_NOT_MAKEMIME(...)
#else
   #define ENABLE_MAKEMIME 0
   #define IF_NOT_MAKEMIME(...) __VA_ARGS__
   #define IF_MAKEMIME(...)
#endif

#ifdef CONFIG_FEATURE_MIME_CHARSET
   #define ENABLE_FEATURE_MIME_CHARSET 1
   #define IF_FEATURE_MIME_CHARSET(...) __VA_ARGS__
   #define IF_NOT_FEATURE_MIME_CHARSET(...)
#else
   #define ENABLE_FEATURE_MIME_CHARSET 0
   #define IF_NOT_FEATURE_MIME_CHARSET(...) __VA_ARGS__
   #define IF_FEATURE_MIME_CHARSET(...)
#endif

#ifdef CONFIG_POPMAILDIR
   #define ENABLE_POPMAILDIR 1
   #define IF_POPMAILDIR(...) __VA_ARGS__
   #define IF_NOT_POPMAILDIR(...)
#else
   #define ENABLE_POPMAILDIR 0
   #define IF_NOT_POPMAILDIR(...) __VA_ARGS__
   #define IF_POPMAILDIR(...)
#endif

#ifdef CONFIG_FEATURE_POPMAILDIR_DELIVERY
   #define ENABLE_FEATURE_POPMAILDIR_DELIVERY 1
   #define IF_FEATURE_POPMAILDIR_DELIVERY(...) __VA_ARGS__
   #define IF_NOT_FEATURE_POPMAILDIR_DELIVERY(...)
#else
   #define ENABLE_FEATURE_POPMAILDIR_DELIVERY 0
   #define IF_NOT_FEATURE_POPMAILDIR_DELIVERY(...) __VA_ARGS__
   #define IF_FEATURE_POPMAILDIR_DELIVERY(...)
#endif

#ifdef CONFIG_REFORMIME
   #define ENABLE_REFORMIME 1
   #define IF_REFORMIME(...) __VA_ARGS__
   #define IF_NOT_REFORMIME(...)
#else
   #define ENABLE_REFORMIME 0
   #define IF_NOT_REFORMIME(...) __VA_ARGS__
   #define IF_REFORMIME(...)
#endif

#ifdef CONFIG_FEATURE_REFORMIME_COMPAT
   #define ENABLE_FEATURE_REFORMIME_COMPAT 1
   #define IF_FEATURE_REFORMIME_COMPAT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_REFORMIME_COMPAT(...)
#else
   #define ENABLE_FEATURE_REFORMIME_COMPAT 0
   #define IF_NOT_FEATURE_REFORMIME_COMPAT(...) __VA_ARGS__
   #define IF_FEATURE_REFORMIME_COMPAT(...)
#endif

#ifdef CONFIG_SENDMAIL
   #define ENABLE_SENDMAIL 1
   #define IF_SENDMAIL(...) __VA_ARGS__
   #define IF_NOT_SENDMAIL(...)
#else
   #define ENABLE_SENDMAIL 0
   #define IF_NOT_SENDMAIL(...) __VA_ARGS__
   #define IF_SENDMAIL(...)
#endif

#ifdef CONFIG_IOSTAT
   #define ENABLE_IOSTAT 1
   #define IF_IOSTAT(...) __VA_ARGS__
   #define IF_NOT_IOSTAT(...)
#else
   #define ENABLE_IOSTAT 0
   #define IF_NOT_IOSTAT(...) __VA_ARGS__
   #define IF_IOSTAT(...)
#endif

#ifdef CONFIG_MPSTAT
   #define ENABLE_MPSTAT 1
   #define IF_MPSTAT(...) __VA_ARGS__
   #define IF_NOT_MPSTAT(...)
#else
   #define ENABLE_MPSTAT 0
   #define IF_NOT_MPSTAT(...) __VA_ARGS__
   #define IF_MPSTAT(...)
#endif

#ifdef CONFIG_PMAP
   #define ENABLE_PMAP 1
   #define IF_PMAP(...) __VA_ARGS__
   #define IF_NOT_PMAP(...)
#else
   #define ENABLE_PMAP 0
   #define IF_NOT_PMAP(...) __VA_ARGS__
   #define IF_PMAP(...)
#endif

#ifdef CONFIG_SMEMCAP
   #define ENABLE_SMEMCAP 1
   #define IF_SMEMCAP(...) __VA_ARGS__
   #define IF_NOT_SMEMCAP(...)
#else
   #define ENABLE_SMEMCAP 0
   #define IF_NOT_SMEMCAP(...) __VA_ARGS__
   #define IF_SMEMCAP(...)
#endif

#ifdef CONFIG_FREE
   #define ENABLE_FREE 1
   #define IF_FREE(...) __VA_ARGS__
   #define IF_NOT_FREE(...)
#else
   #define ENABLE_FREE 0
   #define IF_NOT_FREE(...) __VA_ARGS__
   #define IF_FREE(...)
#endif

#ifdef CONFIG_FUSER
   #define ENABLE_FUSER 1
   #define IF_FUSER(...) __VA_ARGS__
   #define IF_NOT_FUSER(...)
#else
   #define ENABLE_FUSER 0
   #define IF_NOT_FUSER(...) __VA_ARGS__
   #define IF_FUSER(...)
#endif

#ifdef CONFIG_KILL
   #define ENABLE_KILL 1
   #define IF_KILL(...) __VA_ARGS__
   #define IF_NOT_KILL(...)
#else
   #define ENABLE_KILL 0
   #define IF_NOT_KILL(...) __VA_ARGS__
   #define IF_KILL(...)
#endif

#ifdef CONFIG_KILLALL
   #define ENABLE_KILLALL 1
   #define IF_KILLALL(...) __VA_ARGS__
   #define IF_NOT_KILLALL(...)
#else
   #define ENABLE_KILLALL 0
   #define IF_NOT_KILLALL(...) __VA_ARGS__
   #define IF_KILLALL(...)
#endif

#ifdef CONFIG_KILLALL5
   #define ENABLE_KILLALL5 1
   #define IF_KILLALL5(...) __VA_ARGS__
   #define IF_NOT_KILLALL5(...)
#else
   #define ENABLE_KILLALL5 0
   #define IF_NOT_KILLALL5(...) __VA_ARGS__
   #define IF_KILLALL5(...)
#endif

#ifdef CONFIG_NMETER
   #define ENABLE_NMETER 1
   #define IF_NMETER(...) __VA_ARGS__
   #define IF_NOT_NMETER(...)
#else
   #define ENABLE_NMETER 0
   #define IF_NOT_NMETER(...) __VA_ARGS__
   #define IF_NMETER(...)
#endif

#ifdef CONFIG_PGREP
   #define ENABLE_PGREP 1
   #define IF_PGREP(...) __VA_ARGS__
   #define IF_NOT_PGREP(...)
#else
   #define ENABLE_PGREP 0
   #define IF_NOT_PGREP(...) __VA_ARGS__
   #define IF_PGREP(...)
#endif

#ifdef CONFIG_PIDOF
   #define ENABLE_PIDOF 1
   #define IF_PIDOF(...) __VA_ARGS__
   #define IF_NOT_PIDOF(...)
#else
   #define ENABLE_PIDOF 0
   #define IF_NOT_PIDOF(...) __VA_ARGS__
   #define IF_PIDOF(...)
#endif

#ifdef CONFIG_FEATURE_PIDOF_SINGLE
   #define ENABLE_FEATURE_PIDOF_SINGLE 1
   #define IF_FEATURE_PIDOF_SINGLE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_PIDOF_SINGLE(...)
#else
   #define ENABLE_FEATURE_PIDOF_SINGLE 0
   #define IF_NOT_FEATURE_PIDOF_SINGLE(...) __VA_ARGS__
   #define IF_FEATURE_PIDOF_SINGLE(...)
#endif

#ifdef CONFIG_FEATURE_PIDOF_OMIT
   #define ENABLE_FEATURE_PIDOF_OMIT 1
   #define IF_FEATURE_PIDOF_OMIT(...) __VA_ARGS__
   #define IF_NOT_FEATURE_PIDOF_OMIT(...)
#else
   #define ENABLE_FEATURE_PIDOF_OMIT 0
   #define IF_NOT_FEATURE_PIDOF_OMIT(...) __VA_ARGS__
   #define IF_FEATURE_PIDOF_OMIT(...)
#endif

#ifdef CONFIG_PKILL
   #define ENABLE_PKILL 1
   #define IF_PKILL(...) __VA_ARGS__
   #define IF_NOT_PKILL(...)
#else
   #define ENABLE_PKILL 0
   #define IF_NOT_PKILL(...) __VA_ARGS__
   #define IF_PKILL(...)
#endif

#ifdef CONFIG_PS
   #define ENABLE_PS 1
   #define IF_PS(...) __VA_ARGS__
   #define IF_NOT_PS(...)
#else
   #define ENABLE_PS 0
   #define IF_NOT_PS(...) __VA_ARGS__
   #define IF_PS(...)
#endif

#ifdef CONFIG_FEATURE_PS_WIDE
   #define ENABLE_FEATURE_PS_WIDE 1
   #define IF_FEATURE_PS_WIDE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_PS_WIDE(...)
#else
   #define ENABLE_FEATURE_PS_WIDE 0
   #define IF_NOT_FEATURE_PS_WIDE(...) __VA_ARGS__
   #define IF_FEATURE_PS_WIDE(...)
#endif

#ifdef CONFIG_FEATURE_PS_TIME
   #define ENABLE_FEATURE_PS_TIME 1
   #define IF_FEATURE_PS_TIME(...) __VA_ARGS__
   #define IF_NOT_FEATURE_PS_TIME(...)
#else
   #define ENABLE_FEATURE_PS_TIME 0
   #define IF_NOT_FEATURE_PS_TIME(...) __VA_ARGS__
   #define IF_FEATURE_PS_TIME(...)
#endif

#ifdef CONFIG_FEATURE_PS_ADDITIONAL_COLUMNS
   #define ENABLE_FEATURE_PS_ADDITIONAL_COLUMNS 1
   #define IF_FEATURE_PS_ADDITIONAL_COLUMNS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_PS_ADDITIONAL_COLUMNS(...)
#else
   #define ENABLE_FEATURE_PS_ADDITIONAL_COLUMNS 0
   #define IF_NOT_FEATURE_PS_ADDITIONAL_COLUMNS(...) __VA_ARGS__
   #define IF_FEATURE_PS_ADDITIONAL_COLUMNS(...)
#endif

#ifdef CONFIG_FEATURE_PS_UNUSUAL_SYSTEMS
   #define ENABLE_FEATURE_PS_UNUSUAL_SYSTEMS 1
   #define IF_FEATURE_PS_UNUSUAL_SYSTEMS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_PS_UNUSUAL_SYSTEMS(...)
#else
   #define ENABLE_FEATURE_PS_UNUSUAL_SYSTEMS 0
   #define IF_NOT_FEATURE_PS_UNUSUAL_SYSTEMS(...) __VA_ARGS__
   #define IF_FEATURE_PS_UNUSUAL_SYSTEMS(...)
#endif

#ifdef CONFIG_RENICE
   #define ENABLE_RENICE 1
   #define IF_RENICE(...) __VA_ARGS__
   #define IF_NOT_RENICE(...)
#else
   #define ENABLE_RENICE 0
   #define IF_NOT_RENICE(...) __VA_ARGS__
   #define IF_RENICE(...)
#endif

#ifdef CONFIG_BB_SYSCTL
   #define ENABLE_BB_SYSCTL 1
   #define IF_BB_SYSCTL(...) __VA_ARGS__
   #define IF_NOT_BB_SYSCTL(...)
#else
   #define ENABLE_BB_SYSCTL 0
   #define IF_NOT_BB_SYSCTL(...) __VA_ARGS__
   #define IF_BB_SYSCTL(...)
#endif

#ifdef CONFIG_TOP
   #define ENABLE_TOP 1
   #define IF_TOP(...) __VA_ARGS__
   #define IF_NOT_TOP(...)
#else
   #define ENABLE_TOP 0
   #define IF_NOT_TOP(...) __VA_ARGS__
   #define IF_TOP(...)
#endif

#ifdef CONFIG_FEATURE_TOP_CPU_USAGE_PERCENTAGE
   #define ENABLE_FEATURE_TOP_CPU_USAGE_PERCENTAGE 1
   #define IF_FEATURE_TOP_CPU_USAGE_PERCENTAGE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TOP_CPU_USAGE_PERCENTAGE(...)
#else
   #define ENABLE_FEATURE_TOP_CPU_USAGE_PERCENTAGE 0
   #define IF_NOT_FEATURE_TOP_CPU_USAGE_PERCENTAGE(...) __VA_ARGS__
   #define IF_FEATURE_TOP_CPU_USAGE_PERCENTAGE(...)
#endif

#ifdef CONFIG_FEATURE_TOP_CPU_GLOBAL_PERCENTS
   #define ENABLE_FEATURE_TOP_CPU_GLOBAL_PERCENTS 1
   #define IF_FEATURE_TOP_CPU_GLOBAL_PERCENTS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TOP_CPU_GLOBAL_PERCENTS(...)
#else
   #define ENABLE_FEATURE_TOP_CPU_GLOBAL_PERCENTS 0
   #define IF_NOT_FEATURE_TOP_CPU_GLOBAL_PERCENTS(...) __VA_ARGS__
   #define IF_FEATURE_TOP_CPU_GLOBAL_PERCENTS(...)
#endif

#ifdef CONFIG_FEATURE_TOP_SMP_CPU
   #define ENABLE_FEATURE_TOP_SMP_CPU 1
   #define IF_FEATURE_TOP_SMP_CPU(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TOP_SMP_CPU(...)
#else
   #define ENABLE_FEATURE_TOP_SMP_CPU 0
   #define IF_NOT_FEATURE_TOP_SMP_CPU(...) __VA_ARGS__
   #define IF_FEATURE_TOP_SMP_CPU(...)
#endif

#ifdef CONFIG_FEATURE_TOP_DECIMALS
   #define ENABLE_FEATURE_TOP_DECIMALS 1
   #define IF_FEATURE_TOP_DECIMALS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TOP_DECIMALS(...)
#else
   #define ENABLE_FEATURE_TOP_DECIMALS 0
   #define IF_NOT_FEATURE_TOP_DECIMALS(...) __VA_ARGS__
   #define IF_FEATURE_TOP_DECIMALS(...)
#endif

#ifdef CONFIG_FEATURE_TOP_SMP_PROCESS
   #define ENABLE_FEATURE_TOP_SMP_PROCESS 1
   #define IF_FEATURE_TOP_SMP_PROCESS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TOP_SMP_PROCESS(...)
#else
   #define ENABLE_FEATURE_TOP_SMP_PROCESS 0
   #define IF_NOT_FEATURE_TOP_SMP_PROCESS(...) __VA_ARGS__
   #define IF_FEATURE_TOP_SMP_PROCESS(...)
#endif

#ifdef CONFIG_FEATURE_TOPMEM
   #define ENABLE_FEATURE_TOPMEM 1
   #define IF_FEATURE_TOPMEM(...) __VA_ARGS__
   #define IF_NOT_FEATURE_TOPMEM(...)
#else
   #define ENABLE_FEATURE_TOPMEM 0
   #define IF_NOT_FEATURE_TOPMEM(...) __VA_ARGS__
   #define IF_FEATURE_TOPMEM(...)
#endif

#ifdef CONFIG_FEATURE_SHOW_THREADS
   #define ENABLE_FEATURE_SHOW_THREADS 1
   #define IF_FEATURE_SHOW_THREADS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SHOW_THREADS(...)
#else
   #define ENABLE_FEATURE_SHOW_THREADS 0
   #define IF_NOT_FEATURE_SHOW_THREADS(...) __VA_ARGS__
   #define IF_FEATURE_SHOW_THREADS(...)
#endif

#ifdef CONFIG_UPTIME
   #define ENABLE_UPTIME 1
   #define IF_UPTIME(...) __VA_ARGS__
   #define IF_NOT_UPTIME(...)
#else
   #define ENABLE_UPTIME 0
   #define IF_NOT_UPTIME(...) __VA_ARGS__
   #define IF_UPTIME(...)
#endif

#ifdef CONFIG_WATCH
   #define ENABLE_WATCH 1
   #define IF_WATCH(...) __VA_ARGS__
   #define IF_NOT_WATCH(...)
#else
   #define ENABLE_WATCH 0
   #define IF_NOT_WATCH(...) __VA_ARGS__
   #define IF_WATCH(...)
#endif

#ifdef CONFIG_RUNSV
   #define ENABLE_RUNSV 1
   #define IF_RUNSV(...) __VA_ARGS__
   #define IF_NOT_RUNSV(...)
#else
   #define ENABLE_RUNSV 0
   #define IF_NOT_RUNSV(...) __VA_ARGS__
   #define IF_RUNSV(...)
#endif

#ifdef CONFIG_RUNSVDIR
   #define ENABLE_RUNSVDIR 1
   #define IF_RUNSVDIR(...) __VA_ARGS__
   #define IF_NOT_RUNSVDIR(...)
#else
   #define ENABLE_RUNSVDIR 0
   #define IF_NOT_RUNSVDIR(...) __VA_ARGS__
   #define IF_RUNSVDIR(...)
#endif

#ifdef CONFIG_FEATURE_RUNSVDIR_LOG
   #define ENABLE_FEATURE_RUNSVDIR_LOG 1
   #define IF_FEATURE_RUNSVDIR_LOG(...) __VA_ARGS__
   #define IF_NOT_FEATURE_RUNSVDIR_LOG(...)
#else
   #define ENABLE_FEATURE_RUNSVDIR_LOG 0
   #define IF_NOT_FEATURE_RUNSVDIR_LOG(...) __VA_ARGS__
   #define IF_FEATURE_RUNSVDIR_LOG(...)
#endif

#ifdef CONFIG_SV
   #define ENABLE_SV 1
   #define IF_SV(...) __VA_ARGS__
   #define IF_NOT_SV(...)
#else
   #define ENABLE_SV 0
   #define IF_NOT_SV(...) __VA_ARGS__
   #define IF_SV(...)
#endif

#ifdef CONFIG_SV_DEFAULT_SERVICE_DIR
   #define ENABLE_SV_DEFAULT_SERVICE_DIR 1
   #define IF_SV_DEFAULT_SERVICE_DIR(...) __VA_ARGS__
   #define IF_NOT_SV_DEFAULT_SERVICE_DIR(...)
#else
   #define ENABLE_SV_DEFAULT_SERVICE_DIR 0
   #define IF_NOT_SV_DEFAULT_SERVICE_DIR(...) __VA_ARGS__
   #define IF_SV_DEFAULT_SERVICE_DIR(...)
#endif

#ifdef CONFIG_SVLOGD
   #define ENABLE_SVLOGD 1
   #define IF_SVLOGD(...) __VA_ARGS__
   #define IF_NOT_SVLOGD(...)
#else
   #define ENABLE_SVLOGD 0
   #define IF_NOT_SVLOGD(...) __VA_ARGS__
   #define IF_SVLOGD(...)
#endif

#ifdef CONFIG_CHPST
   #define ENABLE_CHPST 1
   #define IF_CHPST(...) __VA_ARGS__
   #define IF_NOT_CHPST(...)
#else
   #define ENABLE_CHPST 0
   #define IF_NOT_CHPST(...) __VA_ARGS__
   #define IF_CHPST(...)
#endif

#ifdef CONFIG_SETUIDGID
   #define ENABLE_SETUIDGID 1
   #define IF_SETUIDGID(...) __VA_ARGS__
   #define IF_NOT_SETUIDGID(...)
#else
   #define ENABLE_SETUIDGID 0
   #define IF_NOT_SETUIDGID(...) __VA_ARGS__
   #define IF_SETUIDGID(...)
#endif

#ifdef CONFIG_ENVUIDGID
   #define ENABLE_ENVUIDGID 1
   #define IF_ENVUIDGID(...) __VA_ARGS__
   #define IF_NOT_ENVUIDGID(...)
#else
   #define ENABLE_ENVUIDGID 0
   #define IF_NOT_ENVUIDGID(...) __VA_ARGS__
   #define IF_ENVUIDGID(...)
#endif

#ifdef CONFIG_ENVDIR
   #define ENABLE_ENVDIR 1
   #define IF_ENVDIR(...) __VA_ARGS__
   #define IF_NOT_ENVDIR(...)
#else
   #define ENABLE_ENVDIR 0
   #define IF_NOT_ENVDIR(...) __VA_ARGS__
   #define IF_ENVDIR(...)
#endif

#ifdef CONFIG_SOFTLIMIT
   #define ENABLE_SOFTLIMIT 1
   #define IF_SOFTLIMIT(...) __VA_ARGS__
   #define IF_NOT_SOFTLIMIT(...)
#else
   #define ENABLE_SOFTLIMIT 0
   #define IF_NOT_SOFTLIMIT(...) __VA_ARGS__
   #define IF_SOFTLIMIT(...)
#endif

#ifdef CONFIG_CHCON
   #define ENABLE_CHCON 1
   #define IF_CHCON(...) __VA_ARGS__
   #define IF_NOT_CHCON(...)
#else
   #define ENABLE_CHCON 0
   #define IF_NOT_CHCON(...) __VA_ARGS__
   #define IF_CHCON(...)
#endif

#ifdef CONFIG_FEATURE_CHCON_LONG_OPTIONS
   #define ENABLE_FEATURE_CHCON_LONG_OPTIONS 1
   #define IF_FEATURE_CHCON_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_CHCON_LONG_OPTIONS(...)
#else
   #define ENABLE_FEATURE_CHCON_LONG_OPTIONS 0
   #define IF_NOT_FEATURE_CHCON_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_FEATURE_CHCON_LONG_OPTIONS(...)
#endif

#ifdef CONFIG_GETENFORCE
   #define ENABLE_GETENFORCE 1
   #define IF_GETENFORCE(...) __VA_ARGS__
   #define IF_NOT_GETENFORCE(...)
#else
   #define ENABLE_GETENFORCE 0
   #define IF_NOT_GETENFORCE(...) __VA_ARGS__
   #define IF_GETENFORCE(...)
#endif

#ifdef CONFIG_GETSEBOOL
   #define ENABLE_GETSEBOOL 1
   #define IF_GETSEBOOL(...) __VA_ARGS__
   #define IF_NOT_GETSEBOOL(...)
#else
   #define ENABLE_GETSEBOOL 0
   #define IF_NOT_GETSEBOOL(...) __VA_ARGS__
   #define IF_GETSEBOOL(...)
#endif

#ifdef CONFIG_LOAD_POLICY
   #define ENABLE_LOAD_POLICY 1
   #define IF_LOAD_POLICY(...) __VA_ARGS__
   #define IF_NOT_LOAD_POLICY(...)
#else
   #define ENABLE_LOAD_POLICY 0
   #define IF_NOT_LOAD_POLICY(...) __VA_ARGS__
   #define IF_LOAD_POLICY(...)
#endif

#ifdef CONFIG_MATCHPATHCON
   #define ENABLE_MATCHPATHCON 1
   #define IF_MATCHPATHCON(...) __VA_ARGS__
   #define IF_NOT_MATCHPATHCON(...)
#else
   #define ENABLE_MATCHPATHCON 0
   #define IF_NOT_MATCHPATHCON(...) __VA_ARGS__
   #define IF_MATCHPATHCON(...)
#endif

#ifdef CONFIG_RESTORECON
   #define ENABLE_RESTORECON 1
   #define IF_RESTORECON(...) __VA_ARGS__
   #define IF_NOT_RESTORECON(...)
#else
   #define ENABLE_RESTORECON 0
   #define IF_NOT_RESTORECON(...) __VA_ARGS__
   #define IF_RESTORECON(...)
#endif

#ifdef CONFIG_RUNCON
   #define ENABLE_RUNCON 1
   #define IF_RUNCON(...) __VA_ARGS__
   #define IF_NOT_RUNCON(...)
#else
   #define ENABLE_RUNCON 0
   #define IF_NOT_RUNCON(...) __VA_ARGS__
   #define IF_RUNCON(...)
#endif

#ifdef CONFIG_FEATURE_RUNCON_LONG_OPTIONS
   #define ENABLE_FEATURE_RUNCON_LONG_OPTIONS 1
   #define IF_FEATURE_RUNCON_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_NOT_FEATURE_RUNCON_LONG_OPTIONS(...)
#else
   #define ENABLE_FEATURE_RUNCON_LONG_OPTIONS 0
   #define IF_NOT_FEATURE_RUNCON_LONG_OPTIONS(...) __VA_ARGS__
   #define IF_FEATURE_RUNCON_LONG_OPTIONS(...)
#endif

#ifdef CONFIG_SELINUXENABLED
   #define ENABLE_SELINUXENABLED 1
   #define IF_SELINUXENABLED(...) __VA_ARGS__
   #define IF_NOT_SELINUXENABLED(...)
#else
   #define ENABLE_SELINUXENABLED 0
   #define IF_NOT_SELINUXENABLED(...) __VA_ARGS__
   #define IF_SELINUXENABLED(...)
#endif

#ifdef CONFIG_SETENFORCE
   #define ENABLE_SETENFORCE 1
   #define IF_SETENFORCE(...) __VA_ARGS__
   #define IF_NOT_SETENFORCE(...)
#else
   #define ENABLE_SETENFORCE 0
   #define IF_NOT_SETENFORCE(...) __VA_ARGS__
   #define IF_SETENFORCE(...)
#endif

#ifdef CONFIG_SETFILES
   #define ENABLE_SETFILES 1
   #define IF_SETFILES(...) __VA_ARGS__
   #define IF_NOT_SETFILES(...)
#else
   #define ENABLE_SETFILES 0
   #define IF_NOT_SETFILES(...) __VA_ARGS__
   #define IF_SETFILES(...)
#endif

#ifdef CONFIG_FEATURE_SETFILES_CHECK_OPTION
   #define ENABLE_FEATURE_SETFILES_CHECK_OPTION 1
   #define IF_FEATURE_SETFILES_CHECK_OPTION(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SETFILES_CHECK_OPTION(...)
#else
   #define ENABLE_FEATURE_SETFILES_CHECK_OPTION 0
   #define IF_NOT_FEATURE_SETFILES_CHECK_OPTION(...) __VA_ARGS__
   #define IF_FEATURE_SETFILES_CHECK_OPTION(...)
#endif

#ifdef CONFIG_SETSEBOOL
   #define ENABLE_SETSEBOOL 1
   #define IF_SETSEBOOL(...) __VA_ARGS__
   #define IF_NOT_SETSEBOOL(...)
#else
   #define ENABLE_SETSEBOOL 0
   #define IF_NOT_SETSEBOOL(...) __VA_ARGS__
   #define IF_SETSEBOOL(...)
#endif

#ifdef CONFIG_SESTATUS
   #define ENABLE_SESTATUS 1
   #define IF_SESTATUS(...) __VA_ARGS__
   #define IF_NOT_SESTATUS(...)
#else
   #define ENABLE_SESTATUS 0
   #define IF_NOT_SESTATUS(...) __VA_ARGS__
   #define IF_SESTATUS(...)
#endif

#ifdef CONFIG_ASH
   #define ENABLE_ASH 1
   #define IF_ASH(...) __VA_ARGS__
   #define IF_NOT_ASH(...)
#else
   #define ENABLE_ASH 0
   #define IF_NOT_ASH(...) __VA_ARGS__
   #define IF_ASH(...)
#endif

#ifdef CONFIG_ASH_BASH_COMPAT
   #define ENABLE_ASH_BASH_COMPAT 1
   #define IF_ASH_BASH_COMPAT(...) __VA_ARGS__
   #define IF_NOT_ASH_BASH_COMPAT(...)
#else
   #define ENABLE_ASH_BASH_COMPAT 0
   #define IF_NOT_ASH_BASH_COMPAT(...) __VA_ARGS__
   #define IF_ASH_BASH_COMPAT(...)
#endif

#ifdef CONFIG_ASH_JOB_CONTROL
   #define ENABLE_ASH_JOB_CONTROL 1
   #define IF_ASH_JOB_CONTROL(...) __VA_ARGS__
   #define IF_NOT_ASH_JOB_CONTROL(...)
#else
   #define ENABLE_ASH_JOB_CONTROL 0
   #define IF_NOT_ASH_JOB_CONTROL(...) __VA_ARGS__
   #define IF_ASH_JOB_CONTROL(...)
#endif

#ifdef CONFIG_ASH_ALIAS
   #define ENABLE_ASH_ALIAS 1
   #define IF_ASH_ALIAS(...) __VA_ARGS__
   #define IF_NOT_ASH_ALIAS(...)
#else
   #define ENABLE_ASH_ALIAS 0
   #define IF_NOT_ASH_ALIAS(...) __VA_ARGS__
   #define IF_ASH_ALIAS(...)
#endif

#ifdef CONFIG_ASH_GETOPTS
   #define ENABLE_ASH_GETOPTS 1
   #define IF_ASH_GETOPTS(...) __VA_ARGS__
   #define IF_NOT_ASH_GETOPTS(...)
#else
   #define ENABLE_ASH_GETOPTS 0
   #define IF_NOT_ASH_GETOPTS(...) __VA_ARGS__
   #define IF_ASH_GETOPTS(...)
#endif

#ifdef CONFIG_ASH_BUILTIN_ECHO
   #define ENABLE_ASH_BUILTIN_ECHO 1
   #define IF_ASH_BUILTIN_ECHO(...) __VA_ARGS__
   #define IF_NOT_ASH_BUILTIN_ECHO(...)
#else
   #define ENABLE_ASH_BUILTIN_ECHO 0
   #define IF_NOT_ASH_BUILTIN_ECHO(...) __VA_ARGS__
   #define IF_ASH_BUILTIN_ECHO(...)
#endif

#ifdef CONFIG_ASH_BUILTIN_PRINTF
   #define ENABLE_ASH_BUILTIN_PRINTF 1
   #define IF_ASH_BUILTIN_PRINTF(...) __VA_ARGS__
   #define IF_NOT_ASH_BUILTIN_PRINTF(...)
#else
   #define ENABLE_ASH_BUILTIN_PRINTF 0
   #define IF_NOT_ASH_BUILTIN_PRINTF(...) __VA_ARGS__
   #define IF_ASH_BUILTIN_PRINTF(...)
#endif

#ifdef CONFIG_ASH_BUILTIN_TEST
   #define ENABLE_ASH_BUILTIN_TEST 1
   #define IF_ASH_BUILTIN_TEST(...) __VA_ARGS__
   #define IF_NOT_ASH_BUILTIN_TEST(...)
#else
   #define ENABLE_ASH_BUILTIN_TEST 0
   #define IF_NOT_ASH_BUILTIN_TEST(...) __VA_ARGS__
   #define IF_ASH_BUILTIN_TEST(...)
#endif

#ifdef CONFIG_ASH_CMDCMD
   #define ENABLE_ASH_CMDCMD 1
   #define IF_ASH_CMDCMD(...) __VA_ARGS__
   #define IF_NOT_ASH_CMDCMD(...)
#else
   #define ENABLE_ASH_CMDCMD 0
   #define IF_NOT_ASH_CMDCMD(...) __VA_ARGS__
   #define IF_ASH_CMDCMD(...)
#endif

#ifdef CONFIG_ASH_MAIL
   #define ENABLE_ASH_MAIL 1
   #define IF_ASH_MAIL(...) __VA_ARGS__
   #define IF_NOT_ASH_MAIL(...)
#else
   #define ENABLE_ASH_MAIL 0
   #define IF_NOT_ASH_MAIL(...) __VA_ARGS__
   #define IF_ASH_MAIL(...)
#endif

#ifdef CONFIG_ASH_OPTIMIZE_FOR_SIZE
   #define ENABLE_ASH_OPTIMIZE_FOR_SIZE 1
   #define IF_ASH_OPTIMIZE_FOR_SIZE(...) __VA_ARGS__
   #define IF_NOT_ASH_OPTIMIZE_FOR_SIZE(...)
#else
   #define ENABLE_ASH_OPTIMIZE_FOR_SIZE 0
   #define IF_NOT_ASH_OPTIMIZE_FOR_SIZE(...) __VA_ARGS__
   #define IF_ASH_OPTIMIZE_FOR_SIZE(...)
#endif

#ifdef CONFIG_ASH_RANDOM_SUPPORT
   #define ENABLE_ASH_RANDOM_SUPPORT 1
   #define IF_ASH_RANDOM_SUPPORT(...) __VA_ARGS__
   #define IF_NOT_ASH_RANDOM_SUPPORT(...)
#else
   #define ENABLE_ASH_RANDOM_SUPPORT 0
   #define IF_NOT_ASH_RANDOM_SUPPORT(...) __VA_ARGS__
   #define IF_ASH_RANDOM_SUPPORT(...)
#endif

#ifdef CONFIG_ASH_EXPAND_PRMT
   #define ENABLE_ASH_EXPAND_PRMT 1
   #define IF_ASH_EXPAND_PRMT(...) __VA_ARGS__
   #define IF_NOT_ASH_EXPAND_PRMT(...)
#else
   #define ENABLE_ASH_EXPAND_PRMT 0
   #define IF_NOT_ASH_EXPAND_PRMT(...) __VA_ARGS__
   #define IF_ASH_EXPAND_PRMT(...)
#endif

#ifdef CONFIG_CTTYHACK
   #define ENABLE_CTTYHACK 1
   #define IF_CTTYHACK(...) __VA_ARGS__
   #define IF_NOT_CTTYHACK(...)
#else
   #define ENABLE_CTTYHACK 0
   #define IF_NOT_CTTYHACK(...) __VA_ARGS__
   #define IF_CTTYHACK(...)
#endif

#ifdef CONFIG_HUSH
   #define ENABLE_HUSH 1
   #define IF_HUSH(...) __VA_ARGS__
   #define IF_NOT_HUSH(...)
#else
   #define ENABLE_HUSH 0
   #define IF_NOT_HUSH(...) __VA_ARGS__
   #define IF_HUSH(...)
#endif

#ifdef CONFIG_HUSH_BASH_COMPAT
   #define ENABLE_HUSH_BASH_COMPAT 1
   #define IF_HUSH_BASH_COMPAT(...) __VA_ARGS__
   #define IF_NOT_HUSH_BASH_COMPAT(...)
#else
   #define ENABLE_HUSH_BASH_COMPAT 0
   #define IF_NOT_HUSH_BASH_COMPAT(...) __VA_ARGS__
   #define IF_HUSH_BASH_COMPAT(...)
#endif

#ifdef CONFIG_HUSH_HELP
   #define ENABLE_HUSH_HELP 1
   #define IF_HUSH_HELP(...) __VA_ARGS__
   #define IF_NOT_HUSH_HELP(...)
#else
   #define ENABLE_HUSH_HELP 0
   #define IF_NOT_HUSH_HELP(...) __VA_ARGS__
   #define IF_HUSH_HELP(...)
#endif

#ifdef CONFIG_HUSH_INTERACTIVE
   #define ENABLE_HUSH_INTERACTIVE 1
   #define IF_HUSH_INTERACTIVE(...) __VA_ARGS__
   #define IF_NOT_HUSH_INTERACTIVE(...)
#else
   #define ENABLE_HUSH_INTERACTIVE 0
   #define IF_NOT_HUSH_INTERACTIVE(...) __VA_ARGS__
   #define IF_HUSH_INTERACTIVE(...)
#endif

#ifdef CONFIG_HUSH_SAVEHISTORY
   #define ENABLE_HUSH_SAVEHISTORY 1
   #define IF_HUSH_SAVEHISTORY(...) __VA_ARGS__
   #define IF_NOT_HUSH_SAVEHISTORY(...)
#else
   #define ENABLE_HUSH_SAVEHISTORY 0
   #define IF_NOT_HUSH_SAVEHISTORY(...) __VA_ARGS__
   #define IF_HUSH_SAVEHISTORY(...)
#endif

#ifdef CONFIG_HUSH_JOB
   #define ENABLE_HUSH_JOB 1
   #define IF_HUSH_JOB(...) __VA_ARGS__
   #define IF_NOT_HUSH_JOB(...)
#else
   #define ENABLE_HUSH_JOB 0
   #define IF_NOT_HUSH_JOB(...) __VA_ARGS__
   #define IF_HUSH_JOB(...)
#endif

#ifdef CONFIG_HUSH_TICK
   #define ENABLE_HUSH_TICK 1
   #define IF_HUSH_TICK(...) __VA_ARGS__
   #define IF_NOT_HUSH_TICK(...)
#else
   #define ENABLE_HUSH_TICK 0
   #define IF_NOT_HUSH_TICK(...) __VA_ARGS__
   #define IF_HUSH_TICK(...)
#endif

#ifdef CONFIG_HUSH_IF
   #define ENABLE_HUSH_IF 1
   #define IF_HUSH_IF(...) __VA_ARGS__
   #define IF_NOT_HUSH_IF(...)
#else
   #define ENABLE_HUSH_IF 0
   #define IF_NOT_HUSH_IF(...) __VA_ARGS__
   #define IF_HUSH_IF(...)
#endif

#ifdef CONFIG_HUSH_LOOPS
   #define ENABLE_HUSH_LOOPS 1
   #define IF_HUSH_LOOPS(...) __VA_ARGS__
   #define IF_NOT_HUSH_LOOPS(...)
#else
   #define ENABLE_HUSH_LOOPS 0
   #define IF_NOT_HUSH_LOOPS(...) __VA_ARGS__
   #define IF_HUSH_LOOPS(...)
#endif

#ifdef CONFIG_HUSH_CASE
   #define ENABLE_HUSH_CASE 1
   #define IF_HUSH_CASE(...) __VA_ARGS__
   #define IF_NOT_HUSH_CASE(...)
#else
   #define ENABLE_HUSH_CASE 0
   #define IF_NOT_HUSH_CASE(...) __VA_ARGS__
   #define IF_HUSH_CASE(...)
#endif

#ifdef CONFIG_HUSH_FUNCTIONS
   #define ENABLE_HUSH_FUNCTIONS 1
   #define IF_HUSH_FUNCTIONS(...) __VA_ARGS__
   #define IF_NOT_HUSH_FUNCTIONS(...)
#else
   #define ENABLE_HUSH_FUNCTIONS 0
   #define IF_NOT_HUSH_FUNCTIONS(...) __VA_ARGS__
   #define IF_HUSH_FUNCTIONS(...)
#endif

#ifdef CONFIG_HUSH_LOCAL
   #define ENABLE_HUSH_LOCAL 1
   #define IF_HUSH_LOCAL(...) __VA_ARGS__
   #define IF_NOT_HUSH_LOCAL(...)
#else
   #define ENABLE_HUSH_LOCAL 0
   #define IF_NOT_HUSH_LOCAL(...) __VA_ARGS__
   #define IF_HUSH_LOCAL(...)
#endif

#ifdef CONFIG_HUSH_RANDOM_SUPPORT
   #define ENABLE_HUSH_RANDOM_SUPPORT 1
   #define IF_HUSH_RANDOM_SUPPORT(...) __VA_ARGS__
   #define IF_NOT_HUSH_RANDOM_SUPPORT(...)
#else
   #define ENABLE_HUSH_RANDOM_SUPPORT 0
   #define IF_NOT_HUSH_RANDOM_SUPPORT(...) __VA_ARGS__
   #define IF_HUSH_RANDOM_SUPPORT(...)
#endif

#ifdef CONFIG_HUSH_EXPORT_N
   #define ENABLE_HUSH_EXPORT_N 1
   #define IF_HUSH_EXPORT_N(...) __VA_ARGS__
   #define IF_NOT_HUSH_EXPORT_N(...)
#else
   #define ENABLE_HUSH_EXPORT_N 0
   #define IF_NOT_HUSH_EXPORT_N(...) __VA_ARGS__
   #define IF_HUSH_EXPORT_N(...)
#endif

#ifdef CONFIG_HUSH_MODE_X
   #define ENABLE_HUSH_MODE_X 1
   #define IF_HUSH_MODE_X(...) __VA_ARGS__
   #define IF_NOT_HUSH_MODE_X(...)
#else
   #define ENABLE_HUSH_MODE_X 0
   #define IF_NOT_HUSH_MODE_X(...) __VA_ARGS__
   #define IF_HUSH_MODE_X(...)
#endif

#ifdef CONFIG_MSH
   #define ENABLE_MSH 1
   #define IF_MSH(...) __VA_ARGS__
   #define IF_NOT_MSH(...)
#else
   #define ENABLE_MSH 0
   #define IF_NOT_MSH(...) __VA_ARGS__
   #define IF_MSH(...)
#endif

#ifdef CONFIG_FEATURE_SH_IS_ASH
   #define ENABLE_FEATURE_SH_IS_ASH 1
   #define IF_FEATURE_SH_IS_ASH(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SH_IS_ASH(...)
#else
   #define ENABLE_FEATURE_SH_IS_ASH 0
   #define IF_NOT_FEATURE_SH_IS_ASH(...) __VA_ARGS__
   #define IF_FEATURE_SH_IS_ASH(...)
#endif

#ifdef CONFIG_FEATURE_SH_IS_HUSH
   #define ENABLE_FEATURE_SH_IS_HUSH 1
   #define IF_FEATURE_SH_IS_HUSH(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SH_IS_HUSH(...)
#else
   #define ENABLE_FEATURE_SH_IS_HUSH 0
   #define IF_NOT_FEATURE_SH_IS_HUSH(...) __VA_ARGS__
   #define IF_FEATURE_SH_IS_HUSH(...)
#endif

#ifdef CONFIG_FEATURE_SH_IS_NONE
   #define ENABLE_FEATURE_SH_IS_NONE 1
   #define IF_FEATURE_SH_IS_NONE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SH_IS_NONE(...)
#else
   #define ENABLE_FEATURE_SH_IS_NONE 0
   #define IF_NOT_FEATURE_SH_IS_NONE(...) __VA_ARGS__
   #define IF_FEATURE_SH_IS_NONE(...)
#endif

#ifdef CONFIG_FEATURE_BASH_IS_ASH
   #define ENABLE_FEATURE_BASH_IS_ASH 1
   #define IF_FEATURE_BASH_IS_ASH(...) __VA_ARGS__
   #define IF_NOT_FEATURE_BASH_IS_ASH(...)
#else
   #define ENABLE_FEATURE_BASH_IS_ASH 0
   #define IF_NOT_FEATURE_BASH_IS_ASH(...) __VA_ARGS__
   #define IF_FEATURE_BASH_IS_ASH(...)
#endif

#ifdef CONFIG_FEATURE_BASH_IS_HUSH
   #define ENABLE_FEATURE_BASH_IS_HUSH 1
   #define IF_FEATURE_BASH_IS_HUSH(...) __VA_ARGS__
   #define IF_NOT_FEATURE_BASH_IS_HUSH(...)
#else
   #define ENABLE_FEATURE_BASH_IS_HUSH 0
   #define IF_NOT_FEATURE_BASH_IS_HUSH(...) __VA_ARGS__
   #define IF_FEATURE_BASH_IS_HUSH(...)
#endif

#ifdef CONFIG_FEATURE_BASH_IS_NONE
   #define ENABLE_FEATURE_BASH_IS_NONE 1
   #define IF_FEATURE_BASH_IS_NONE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_BASH_IS_NONE(...)
#else
   #define ENABLE_FEATURE_BASH_IS_NONE 0
   #define IF_NOT_FEATURE_BASH_IS_NONE(...) __VA_ARGS__
   #define IF_FEATURE_BASH_IS_NONE(...)
#endif

#ifdef CONFIG_SH_MATH_SUPPORT
   #define ENABLE_SH_MATH_SUPPORT 1
   #define IF_SH_MATH_SUPPORT(...) __VA_ARGS__
   #define IF_NOT_SH_MATH_SUPPORT(...)
#else
   #define ENABLE_SH_MATH_SUPPORT 0
   #define IF_NOT_SH_MATH_SUPPORT(...) __VA_ARGS__
   #define IF_SH_MATH_SUPPORT(...)
#endif

#ifdef CONFIG_SH_MATH_SUPPORT_64
   #define ENABLE_SH_MATH_SUPPORT_64 1
   #define IF_SH_MATH_SUPPORT_64(...) __VA_ARGS__
   #define IF_NOT_SH_MATH_SUPPORT_64(...)
#else
   #define ENABLE_SH_MATH_SUPPORT_64 0
   #define IF_NOT_SH_MATH_SUPPORT_64(...) __VA_ARGS__
   #define IF_SH_MATH_SUPPORT_64(...)
#endif

#ifdef CONFIG_FEATURE_SH_EXTRA_QUIET
   #define ENABLE_FEATURE_SH_EXTRA_QUIET 1
   #define IF_FEATURE_SH_EXTRA_QUIET(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SH_EXTRA_QUIET(...)
#else
   #define ENABLE_FEATURE_SH_EXTRA_QUIET 0
   #define IF_NOT_FEATURE_SH_EXTRA_QUIET(...) __VA_ARGS__
   #define IF_FEATURE_SH_EXTRA_QUIET(...)
#endif

#ifdef CONFIG_FEATURE_SH_STANDALONE
   #define ENABLE_FEATURE_SH_STANDALONE 1
   #define IF_FEATURE_SH_STANDALONE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SH_STANDALONE(...)
#else
   #define ENABLE_FEATURE_SH_STANDALONE 0
   #define IF_NOT_FEATURE_SH_STANDALONE(...) __VA_ARGS__
   #define IF_FEATURE_SH_STANDALONE(...)
#endif

#ifdef CONFIG_FEATURE_SH_NOFORK
   #define ENABLE_FEATURE_SH_NOFORK 1
   #define IF_FEATURE_SH_NOFORK(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SH_NOFORK(...)
#else
   #define ENABLE_FEATURE_SH_NOFORK 0
   #define IF_NOT_FEATURE_SH_NOFORK(...) __VA_ARGS__
   #define IF_FEATURE_SH_NOFORK(...)
#endif

#ifdef CONFIG_SYSLOGD
   #define ENABLE_SYSLOGD 1
   #define IF_SYSLOGD(...) __VA_ARGS__
   #define IF_NOT_SYSLOGD(...)
#else
   #define ENABLE_SYSLOGD 0
   #define IF_NOT_SYSLOGD(...) __VA_ARGS__
   #define IF_SYSLOGD(...)
#endif

#ifdef CONFIG_FEATURE_ROTATE_LOGFILE
   #define ENABLE_FEATURE_ROTATE_LOGFILE 1
   #define IF_FEATURE_ROTATE_LOGFILE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_ROTATE_LOGFILE(...)
#else
   #define ENABLE_FEATURE_ROTATE_LOGFILE 0
   #define IF_NOT_FEATURE_ROTATE_LOGFILE(...) __VA_ARGS__
   #define IF_FEATURE_ROTATE_LOGFILE(...)
#endif

#ifdef CONFIG_FEATURE_REMOTE_LOG
   #define ENABLE_FEATURE_REMOTE_LOG 1
   #define IF_FEATURE_REMOTE_LOG(...) __VA_ARGS__
   #define IF_NOT_FEATURE_REMOTE_LOG(...)
#else
   #define ENABLE_FEATURE_REMOTE_LOG 0
   #define IF_NOT_FEATURE_REMOTE_LOG(...) __VA_ARGS__
   #define IF_FEATURE_REMOTE_LOG(...)
#endif

#ifdef CONFIG_FEATURE_SYSLOGD_DUP
   #define ENABLE_FEATURE_SYSLOGD_DUP 1
   #define IF_FEATURE_SYSLOGD_DUP(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SYSLOGD_DUP(...)
#else
   #define ENABLE_FEATURE_SYSLOGD_DUP 0
   #define IF_NOT_FEATURE_SYSLOGD_DUP(...) __VA_ARGS__
   #define IF_FEATURE_SYSLOGD_DUP(...)
#endif

#ifdef CONFIG_FEATURE_SYSLOGD_READ_BUFFER_SIZE
   #define ENABLE_FEATURE_SYSLOGD_READ_BUFFER_SIZE 1
   #define IF_FEATURE_SYSLOGD_READ_BUFFER_SIZE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_SYSLOGD_READ_BUFFER_SIZE(...)
#else
   #define ENABLE_FEATURE_SYSLOGD_READ_BUFFER_SIZE 0
   #define IF_NOT_FEATURE_SYSLOGD_READ_BUFFER_SIZE(...) __VA_ARGS__
   #define IF_FEATURE_SYSLOGD_READ_BUFFER_SIZE(...)
#endif

#ifdef CONFIG_FEATURE_IPC_SYSLOG
   #define ENABLE_FEATURE_IPC_SYSLOG 1
   #define IF_FEATURE_IPC_SYSLOG(...) __VA_ARGS__
   #define IF_NOT_FEATURE_IPC_SYSLOG(...)
#else
   #define ENABLE_FEATURE_IPC_SYSLOG 0
   #define IF_NOT_FEATURE_IPC_SYSLOG(...) __VA_ARGS__
   #define IF_FEATURE_IPC_SYSLOG(...)
#endif

#ifdef CONFIG_FEATURE_IPC_SYSLOG_BUFFER_SIZE
   #define ENABLE_FEATURE_IPC_SYSLOG_BUFFER_SIZE 1
   #define IF_FEATURE_IPC_SYSLOG_BUFFER_SIZE(...) __VA_ARGS__
   #define IF_NOT_FEATURE_IPC_SYSLOG_BUFFER_SIZE(...)
#else
   #define ENABLE_FEATURE_IPC_SYSLOG_BUFFER_SIZE 0
   #define IF_NOT_FEATURE_IPC_SYSLOG_BUFFER_SIZE(...) __VA_ARGS__
   #define IF_FEATURE_IPC_SYSLOG_BUFFER_SIZE(...)
#endif

#ifdef CONFIG_LOGREAD
   #define ENABLE_LOGREAD 1
   #define IF_LOGREAD(...) __VA_ARGS__
   #define IF_NOT_LOGREAD(...)
#else
   #define ENABLE_LOGREAD 0
   #define IF_NOT_LOGREAD(...) __VA_ARGS__
   #define IF_LOGREAD(...)
#endif

#ifdef CONFIG_FEATURE_LOGREAD_REDUCED_LOCKING
   #define ENABLE_FEATURE_LOGREAD_REDUCED_LOCKING 1
   #define IF_FEATURE_LOGREAD_REDUCED_LOCKING(...) __VA_ARGS__
   #define IF_NOT_FEATURE_LOGREAD_REDUCED_LOCKING(...)
#else
   #define ENABLE_FEATURE_LOGREAD_REDUCED_LOCKING 0
   #define IF_NOT_FEATURE_LOGREAD_REDUCED_LOCKING(...) __VA_ARGS__
   #define IF_FEATURE_LOGREAD_REDUCED_LOCKING(...)
#endif

#ifdef CONFIG_KLOGD
   #define ENABLE_KLOGD 1
   #define IF_KLOGD(...) __VA_ARGS__
   #define IF_NOT_KLOGD(...)
#else
   #define ENABLE_KLOGD 0
   #define IF_NOT_KLOGD(...) __VA_ARGS__
   #define IF_KLOGD(...)
#endif

#ifdef CONFIG_FEATURE_KLOGD_KLOGCTL
   #define ENABLE_FEATURE_KLOGD_KLOGCTL 1
   #define IF_FEATURE_KLOGD_KLOGCTL(...) __VA_ARGS__
   #define IF_NOT_FEATURE_KLOGD_KLOGCTL(...)
#else
   #define ENABLE_FEATURE_KLOGD_KLOGCTL 0
   #define IF_NOT_FEATURE_KLOGD_KLOGCTL(...) __VA_ARGS__
   #define IF_FEATURE_KLOGD_KLOGCTL(...)
#endif

#ifdef CONFIG_LOGGER
   #define ENABLE_LOGGER 1
   #define IF_LOGGER(...) __VA_ARGS__
   #define IF_NOT_LOGGER(...)
#else
   #define ENABLE_LOGGER 0
   #define IF_NOT_LOGGER(...) __VA_ARGS__
   #define IF_LOGGER(...)
#endif

