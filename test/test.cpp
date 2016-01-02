#ifndef __OBJC2__
#define __OBJC2__
#endif
struct objc_selector; struct objc_class;
struct __rw_objc_super { 
	struct objc_object *object; 
	struct objc_object *superClass; 
	__rw_objc_super(struct objc_object *o, struct objc_object *s) : object(o), superClass(s) {} 
};
#ifndef _REWRITER_typedef_Protocol
typedef struct objc_object Protocol;
#define _REWRITER_typedef_Protocol
#endif
#define __OBJC_RW_DLLIMPORT extern
__OBJC_RW_DLLIMPORT void objc_msgSend(void);
__OBJC_RW_DLLIMPORT void objc_msgSendSuper(void);
__OBJC_RW_DLLIMPORT void objc_msgSend_stret(void);
__OBJC_RW_DLLIMPORT void objc_msgSendSuper_stret(void);
__OBJC_RW_DLLIMPORT void objc_msgSend_fpret(void);
__OBJC_RW_DLLIMPORT struct objc_class *objc_getClass(const char *);
__OBJC_RW_DLLIMPORT struct objc_class *class_getSuperclass(struct objc_class *);
__OBJC_RW_DLLIMPORT struct objc_class *objc_getMetaClass(const char *);
__OBJC_RW_DLLIMPORT void objc_exception_throw( struct objc_object *);
__OBJC_RW_DLLIMPORT int objc_sync_enter( struct objc_object *);
__OBJC_RW_DLLIMPORT int objc_sync_exit( struct objc_object *);
__OBJC_RW_DLLIMPORT Protocol *objc_getProtocol(const char *);
#ifdef _WIN64
typedef unsigned long long  _WIN_NSUInteger;
#else
typedef unsigned int _WIN_NSUInteger;
#endif
#ifndef __FASTENUMERATIONSTATE
struct __objcFastEnumerationState {
	unsigned long state;
	void **itemsPtr;
	unsigned long *mutationsPtr;
	unsigned long extra[5];
};
__OBJC_RW_DLLIMPORT void objc_enumerationMutation(struct objc_object *);
#define __FASTENUMERATIONSTATE
#endif
#ifndef __NSCONSTANTSTRINGIMPL
struct __NSConstantStringImpl {
  int *isa;
  int flags;
  char *str;
#if _WIN64
  long long length;
#else
  long length;
#endif
};
#ifdef CF_EXPORT_CONSTANT_STRING
extern "C" __declspec(dllexport) int __CFConstantStringClassReference[];
#else
__OBJC_RW_DLLIMPORT int __CFConstantStringClassReference[];
#endif
#define __NSCONSTANTSTRINGIMPL
#endif
#ifndef BLOCK_IMPL
#define BLOCK_IMPL
struct __block_impl {
  void *isa;
  int Flags;
  int Reserved;
  void *FuncPtr;
};
// Runtime copy/destroy helper functions (from Block_private.h)
#ifdef __OBJC_EXPORT_BLOCKS
extern "C" __declspec(dllexport) void _Block_object_assign(void *, const void *, const int);
extern "C" __declspec(dllexport) void _Block_object_dispose(const void *, const int);
extern "C" __declspec(dllexport) void *_NSConcreteGlobalBlock[32];
extern "C" __declspec(dllexport) void *_NSConcreteStackBlock[32];
#else
__OBJC_RW_DLLIMPORT void _Block_object_assign(void *, const void *, const int);
__OBJC_RW_DLLIMPORT void _Block_object_dispose(const void *, const int);
__OBJC_RW_DLLIMPORT void *_NSConcreteGlobalBlock[32];
__OBJC_RW_DLLIMPORT void *_NSConcreteStackBlock[32];
#endif
#endif
#define __block
#define __weak

#include <stdarg.h>
struct __NSContainer_literal {
  void * *arr;
  __NSContainer_literal (unsigned int count, ...) {
	va_list marker;
	va_start(marker, count);
	arr = new void *[count];
	for (unsigned i = 0; i < count; i++)
	  arr[i] = va_arg(marker, void *);
	va_end( marker );
  };
  ~__NSContainer_literal() {
	delete[] arr;
  }
};
extern "C" __declspec(dllimport) void * objc_autoreleasePoolPush(void);
extern "C" __declspec(dllimport) void objc_autoreleasePoolPop(void *);

struct __AtAutoreleasePool {
  __AtAutoreleasePool() {atautoreleasepoolobj = objc_autoreleasePoolPush();}
  ~__AtAutoreleasePool() {objc_autoreleasePoolPop(atautoreleasepoolobj);}
  void * atautoreleasepoolobj;
};

#define __OFFSETOFIVAR__(TYPE, MEMBER) ((long long) &((TYPE *)0)->MEMBER)
# 1 "test.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 323 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "test.c" 2

# 1 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdio.h" 1
# 29 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdio.h"
# 1 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/_ansi.h" 1
# 15 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/_ansi.h"
# 1 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/newlib.h" 1
# 16 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/_ansi.h" 2
# 1 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/config.h" 1



# 1 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/machine/ieeefp.h" 1
# 5 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/config.h" 2
# 1 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/features.h" 1
# 25 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/features.h"
extern "C" {
# 233 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/features.h"
}
# 6 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/config.h" 2
# 17 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/_ansi.h" 2
# 30 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdio.h" 2





# 1 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/cdefs.h" 1
# 43 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/cdefs.h"
# 1 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/machine/_default_types.h" 1
# 23 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/machine/_default_types.h"
extern "C" {



typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 41 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/machine/_default_types.h"
typedef short __int16_t;

typedef unsigned short __uint16_t;
# 63 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/machine/_default_types.h"
typedef int __int32_t;

typedef unsigned int __uint32_t;
# 89 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/machine/_default_types.h"
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;
# 120 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/machine/_default_types.h"
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 146 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/machine/_default_types.h"
typedef short __int_least16_t;

typedef unsigned short __uint_least16_t;
# 168 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/machine/_default_types.h"
typedef int __int_least32_t;

typedef unsigned int __uint_least32_t;
# 186 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/machine/_default_types.h"
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;
# 200 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/machine/_default_types.h"
typedef long int __intptr_t;

typedef long unsigned int __uintptr_t;
# 217 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/machine/_default_types.h"
}
# 44 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/cdefs.h" 2

# 1 "/Users/creed/projects/_third_party/llvm/build/bin/../lib/clang/3.8.0/include/stddef.h" 1 3 4
# 62 "/Users/creed/projects/_third_party/llvm/build/bin/../lib/clang/3.8.0/include/stddef.h" 3 4
typedef unsigned int size_t;
# 46 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/cdefs.h" 2
# 36 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdio.h" 2
# 1 "/Users/creed/projects/_third_party/llvm/build/bin/../lib/clang/3.8.0/include/stddef.h" 1 3 4
# 51 "/Users/creed/projects/_third_party/llvm/build/bin/../lib/clang/3.8.0/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 37 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdio.h" 2


# 1 "/Users/creed/projects/_third_party/llvm/build/bin/../lib/clang/3.8.0/include/stdarg.h" 1 3 4
# 30 "/Users/creed/projects/_third_party/llvm/build/bin/../lib/clang/3.8.0/include/stdarg.h" 3 4
typedef __builtin_va_list va_list;
# 50 "/Users/creed/projects/_third_party/llvm/build/bin/../lib/clang/3.8.0/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 40 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdio.h" 2







# 1 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/reent.h" 1








extern "C" {





# 1 "/Users/creed/projects/_third_party/llvm/build/bin/../lib/clang/3.8.0/include/stddef.h" 1 3 4
# 15 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/reent.h" 2
# 1 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/_types.h" 1
# 12 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/_types.h"
# 1 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/machine/_types.h" 1
# 13 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/_types.h" 2
# 1 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/lock.h" 1





typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
# 14 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/_types.h" 2


typedef long _off_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



__extension__ typedef long long _off64_t;







typedef long _fpos_t;
# 55 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/_types.h"
typedef signed int _ssize_t;
# 67 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/_types.h"
# 1 "/Users/creed/projects/_third_party/llvm/build/bin/../lib/clang/3.8.0/include/stddef.h" 1 3 4
# 132 "/Users/creed/projects/_third_party/llvm/build/bin/../lib/clang/3.8.0/include/stddef.h" 3 4
typedef int wint_t;
# 68 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/_types.h" 2



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;



typedef _LOCK_RECURSIVE_T _flock_t;




typedef void *_iconv_t;
# 16 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/reent.h" 2






typedef unsigned long __ULong;
# 38 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/reent.h"
struct _reent;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 91 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/reent.h"
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
# 115 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/reent.h"
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 179 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/reent.h"
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  int (* _read) (struct _reent *, void *, char *, int);

  int (* _write) (struct _reent *, void *, const char *, int);


  _fpos_t (* _seek) (struct _reent *, void *, _fpos_t, int);
  int (* _close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 285 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/reent.h"
typedef struct __sFILE __FILE;



struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
# 317 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/reent.h"
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};
# 569 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/reent.h"
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];

  int _current_category;
  const char *_current_locale;

  int __sdidinit;

  void (* __cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;



      struct
        {

          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;



  struct _atexit *_atexit;
  struct _atexit _atexit0;



  void (**(_sig_func))(int);




  struct _glue __sglue;
  __FILE __sf[3];
};
# 762 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/reent.h"
extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);
# 788 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/reent.h"
}
# 48 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdio.h" 2
# 1 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/types.h" 1
# 63 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/types.h"
# 1 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/_stdint.h" 1
# 15 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/_stdint.h"
extern "C" {



typedef __int8_t int8_t ;
typedef __uint8_t uint8_t ;




typedef __int16_t int16_t ;
typedef __uint16_t uint16_t ;




typedef __int32_t int32_t ;
typedef __uint32_t uint32_t ;




typedef __int64_t int64_t ;
typedef __uint64_t uint64_t ;



typedef __intptr_t intptr_t;
typedef __uintptr_t uintptr_t;


}
# 64 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/types.h" 2







# 1 "/Users/creed/projects/_third_party/llvm/build/bin/../lib/clang/3.8.0/include/stddef.h" 1 3 4
# 72 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/types.h" 2
# 1 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/machine/types.h" 1
# 19 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/machine/types.h"
typedef long int __off_t;
typedef int __pid_t;

__extension__ typedef long long int __loff_t;





typedef long __suseconds_t;
# 73 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/types.h" 2
# 95 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/types.h"
typedef unsigned char u_char;



typedef unsigned short u_short;



typedef unsigned int u_int;



typedef unsigned long u_long;





typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;



typedef unsigned long clock_t;




typedef long time_t;




typedef long daddr_t;



typedef char * caddr_t;
# 142 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/types.h"
typedef unsigned short ino_t;
# 171 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/types.h"
typedef _off_t off_t;
typedef __dev_t dev_t;
typedef __uid_t uid_t;
typedef __gid_t gid_t;





typedef int pid_t;







typedef long key_t;

typedef _ssize_t ssize_t;
# 204 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/types.h"
typedef unsigned int mode_t __attribute__ ((__mode__ (__SI__)));




typedef unsigned short nlink_t;
# 231 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/types.h"
typedef long fd_mask;







typedef struct _types_fd_set {
 fd_mask fds_bits[(((64)+(((sizeof (fd_mask) * 8))-1))/((sizeof (fd_mask) * 8)))];
} _types_fd_set;
# 262 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/types.h"
typedef unsigned long clockid_t;




typedef unsigned long timer_t;



typedef unsigned long useconds_t;


typedef __suseconds_t suseconds_t;



typedef __int64_t sbintime_t;
# 49 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdio.h" 2

extern "C" {


typedef __FILE FILE;






typedef _fpos_t fpos_t;






# 1 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/sys/stdio.h" 1
# 67 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdio.h" 2
# 167 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdio.h"
FILE * tmpfile (void);
char * tmpnam (char *);

char * tempnam (const char *, const char *);

int fclose (FILE *);
int fflush (FILE *);
FILE * freopen (const char *, const char *, FILE *);
void setbuf (FILE *, char *);
int setvbuf (FILE *, char *, int, size_t);
int fprintf (FILE *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)));

int fscanf (FILE *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)));

int printf (const char *, ...) __attribute__ ((__format__ (__printf__, 1, 2)));

int scanf (const char *, ...) __attribute__ ((__format__ (__scanf__, 1, 2)));

int sscanf (const char *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)));

int vfprintf (FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)));

int vprintf (const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 1, 0)));

int vsprintf (char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)));

int fgetc (FILE *);
char * fgets (char *, int, FILE *);
int fputc (int, FILE *);
int fputs (const char *, FILE *);
int getc (FILE *);
int getchar (void);
char * gets (char *);
int putc (int, FILE *);
int putchar (int);
int puts (const char *);
int ungetc (int, FILE *);
size_t fread (void * , size_t _size, size_t _n, FILE *);
size_t fwrite (const void * , size_t _size, size_t _n, FILE *);



int fgetpos (FILE *, fpos_t *);

int fseek (FILE *, long, int);



int fsetpos (FILE *, const fpos_t *);

long ftell ( FILE *);
void rewind (FILE *);
void clearerr (FILE *);
int feof (FILE *);
int ferror (FILE *);
void perror (const char *);

FILE * fopen (const char * _name, const char * _type);
int sprintf (char *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)));

int remove (const char *);
int rename (const char *, const char *);
# 238 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdio.h"
int fseeko (FILE *, off_t, int);
off_t ftello ( FILE *);







int asiprintf (char **, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)));

char * asniprintf (char *, size_t *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)));

char * asnprintf (char *, size_t *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)));

int asprintf (char **, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)));


int diprintf (int, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)));


int fiprintf (FILE *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)));

int fiscanf (FILE *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)));

int iprintf (const char *, ...) __attribute__ ((__format__ (__printf__, 1, 2)));

int iscanf (const char *, ...) __attribute__ ((__format__ (__scanf__, 1, 2)));

int siprintf (char *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)));

int siscanf (const char *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)));

int snprintf (char *, size_t, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)));

int sniprintf (char *, size_t, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)));

int vasiprintf (char **, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)));

char * vasniprintf (char *, size_t *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)));

char * vasnprintf (char *, size_t *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)));

int vasprintf (char **, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)));

int vdiprintf (int, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)));

int vfiprintf (FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)));

int vfiscanf (FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)));

int vfscanf (FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)));

int viprintf (const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 1, 0)));

int viscanf (const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 1, 0)));

int vscanf (const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 1, 0)));

int vsiprintf (char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)));

int vsiscanf (const char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)));

int vsniprintf (char *, size_t, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)));

int vsnprintf (char *, size_t, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)));

int vsscanf (const char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 316 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdio.h"
FILE * fdopen (int, const char *);

int fileno (FILE *);
int getw (FILE *);
int pclose (FILE *);
FILE * popen (const char *, const char *);
int putw (int, FILE *);
void setbuffer (FILE *, char *, int);
int setlinebuf (FILE *);
int getc_unlocked (FILE *);
int getchar_unlocked (void);
void flockfile (FILE *);
int ftrylockfile (FILE *);
void funlockfile (FILE *);
int putc_unlocked (int, FILE *);
int putchar_unlocked (int);
# 341 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdio.h"
int dprintf (int, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)));


FILE * fmemopen (void *, size_t, const char *);


FILE * open_memstream (char **, size_t *);

int renameat (int, const char *, int, const char *);

int vdprintf (int, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)));
# 360 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdio.h"
int _asiprintf_r (struct _reent *, char **, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)));

char * _asniprintf_r (struct _reent *, char *, size_t *, const char *, ...) __attribute__ ((__format__ (__printf__, 4, 5)));

char * _asnprintf_r (struct _reent *, char *, size_t *, const char *, ...) __attribute__ ((__format__ (__printf__, 4, 5)));

int _asprintf_r (struct _reent *, char **, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)));

int _diprintf_r (struct _reent *, int, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)));

int _dprintf_r (struct _reent *, int, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)));

int _fclose_r (struct _reent *, FILE *);
int _fcloseall_r (struct _reent *);
FILE * _fdopen_r (struct _reent *, int, const char *);
int _fflush_r (struct _reent *, FILE *);
int _fgetc_r (struct _reent *, FILE *);
int _fgetc_unlocked_r (struct _reent *, FILE *);
char * _fgets_r (struct _reent *, char *, int, FILE *);
char * _fgets_unlocked_r (struct _reent *, char *, int, FILE *);




int _fgetpos_r (struct _reent *, FILE *, fpos_t *);
int _fsetpos_r (struct _reent *, FILE *, const fpos_t *);

int _fiprintf_r (struct _reent *, FILE *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)));

int _fiscanf_r (struct _reent *, FILE *, const char *, ...) __attribute__ ((__format__ (__scanf__, 3, 4)));

FILE * _fmemopen_r (struct _reent *, void *, size_t, const char *);
FILE * _fopen_r (struct _reent *, const char *, const char *);
FILE * _freopen_r (struct _reent *, const char *, const char *, FILE *);
int _fprintf_r (struct _reent *, FILE *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)));

int _fpurge_r (struct _reent *, FILE *);
int _fputc_r (struct _reent *, int, FILE *);
int _fputc_unlocked_r (struct _reent *, int, FILE *);
int _fputs_r (struct _reent *, const char *, FILE *);
int _fputs_unlocked_r (struct _reent *, const char *, FILE *);
size_t _fread_r (struct _reent *, void * , size_t _size, size_t _n, FILE *);
size_t _fread_unlocked_r (struct _reent *, void * , size_t _size, size_t _n, FILE *);
int _fscanf_r (struct _reent *, FILE *, const char *, ...) __attribute__ ((__format__ (__scanf__, 3, 4)));

int _fseek_r (struct _reent *, FILE *, long, int);
int _fseeko_r (struct _reent *, FILE *, _off_t, int);
long _ftell_r (struct _reent *, FILE *);
_off_t _ftello_r (struct _reent *, FILE *);
void _rewind_r (struct _reent *, FILE *);
size_t _fwrite_r (struct _reent *, const void * , size_t _size, size_t _n, FILE *);
size_t _fwrite_unlocked_r (struct _reent *, const void * , size_t _size, size_t _n, FILE *);
int _getc_r (struct _reent *, FILE *);
int _getc_unlocked_r (struct _reent *, FILE *);
int _getchar_r (struct _reent *);
int _getchar_unlocked_r (struct _reent *);
char * _gets_r (struct _reent *, char *);
int _iprintf_r (struct _reent *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)));

int _iscanf_r (struct _reent *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)));

FILE * _open_memstream_r (struct _reent *, char **, size_t *);
void _perror_r (struct _reent *, const char *);
int _printf_r (struct _reent *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)));

int _putc_r (struct _reent *, int, FILE *);
int _putc_unlocked_r (struct _reent *, int, FILE *);
int _putchar_unlocked_r (struct _reent *, int);
int _putchar_r (struct _reent *, int);
int _puts_r (struct _reent *, const char *);
int _remove_r (struct _reent *, const char *);
int _rename_r (struct _reent *, const char *_old, const char *_new);

int _scanf_r (struct _reent *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)));

int _siprintf_r (struct _reent *, char *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)));

int _siscanf_r (struct _reent *, const char *, const char *, ...) __attribute__ ((__format__ (__scanf__, 3, 4)));

int _sniprintf_r (struct _reent *, char *, size_t, const char *, ...) __attribute__ ((__format__ (__printf__, 4, 5)));

int _snprintf_r (struct _reent *, char *, size_t, const char *, ...) __attribute__ ((__format__ (__printf__, 4, 5)));

int _sprintf_r (struct _reent *, char *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)));

int _sscanf_r (struct _reent *, const char *, const char *, ...) __attribute__ ((__format__ (__scanf__, 3, 4)));

char * _tempnam_r (struct _reent *, const char *, const char *);
FILE * _tmpfile_r (struct _reent *);
char * _tmpnam_r (struct _reent *, char *);
int _ungetc_r (struct _reent *, int, FILE *);
int _vasiprintf_r (struct _reent *, char **, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)));

char * _vasniprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 4, 0)));

char * _vasnprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 4, 0)));

int _vasprintf_r (struct _reent *, char **, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)));

int _vdiprintf_r (struct _reent *, int, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)));

int _vdprintf_r (struct _reent *, int, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)));

int _vfiprintf_r (struct _reent *, FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)));

int _vfiscanf_r (struct _reent *, FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 3, 0)));

int _vfprintf_r (struct _reent *, FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)));

int _vfscanf_r (struct _reent *, FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 3, 0)));

int _viprintf_r (struct _reent *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)));

int _viscanf_r (struct _reent *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)));

int _vprintf_r (struct _reent *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)));

int _vscanf_r (struct _reent *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)));

int _vsiprintf_r (struct _reent *, char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)));

int _vsiscanf_r (struct _reent *, const char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 3, 0)));

int _vsniprintf_r (struct _reent *, char *, size_t, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 4, 0)));

int _vsnprintf_r (struct _reent *, char *, size_t, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 4, 0)));

int _vsprintf_r (struct _reent *, char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)));

int _vsscanf_r (struct _reent *, const char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 3, 0)));




int fpurge (FILE *);
ssize_t __getdelim (char **, size_t *, int, FILE *);
ssize_t __getline (char **, size_t *, FILE *);


void clearerr_unlocked (FILE *);
int feof_unlocked (FILE *);
int ferror_unlocked (FILE *);
int fileno_unlocked (FILE *);
int fflush_unlocked (FILE *);
int fgetc_unlocked (FILE *);
int fputc_unlocked (int, FILE *);
size_t fread_unlocked (void * , size_t _size, size_t _n, FILE *);
size_t fwrite_unlocked (const void * , size_t _size, size_t _n, FILE *);
# 541 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdio.h"
int __srget_r (struct _reent *, FILE *);
int __swbuf_r (struct _reent *, int, FILE *);
# 565 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdio.h"
FILE *funopen (const void * __cookie, int (*__readfn)(void * __cookie, char *__buf, int __n), int (*__writefn)(void * __cookie, const char *__buf, int __n), fpos_t (*__seekfn)(void * __cookie, fpos_t __off, int __whence), int (*__closefn)(void * __cookie));






FILE *_funopen_r (struct _reent *, const void * __cookie, int (*__readfn)(void * __cookie, char *__buf, int __n), int (*__writefn)(void * __cookie, const char *__buf, int __n), fpos_t (*__seekfn)(void * __cookie, fpos_t __off, int __whence), int (*__closefn)(void * __cookie));
# 586 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdio.h"
typedef ssize_t cookie_read_function_t(void *__cookie, char *__buf, size_t __n);
typedef ssize_t cookie_write_function_t(void *__cookie, const char *__buf,
     size_t __n);




typedef int cookie_seek_function_t(void *__cookie, off_t *__off, int __whence);

typedef int cookie_close_function_t(void *__cookie);
typedef struct
{


  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
FILE *fopencookie (void *__cookie, const char *__mode, cookie_io_functions_t __functions);

FILE *_fopencookie_r (struct _reent *, void *__cookie, const char *__mode, cookie_io_functions_t __functions);
# 728 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdio.h"
}
# 3 "test.c" 2
# 1 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdlib.h" 1
# 16 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdlib.h"
# 1 "/Users/creed/projects/_third_party/llvm/build/bin/../lib/clang/3.8.0/include/stddef.h" 1 3 4
# 17 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdlib.h" 2



# 1 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/machine/stdlib.h" 1
# 21 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdlib.h" 2

# 1 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/alloca.h" 1
# 23 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdlib.h" 2






extern "C" {

typedef struct
{
  int quot;
  int rem;
} div_t;

typedef struct
{
  long quot;
  long rem;
} ldiv_t;




typedef struct
{
  long long int quot;
  long long int rem;
} lldiv_t;




typedef int (*__compar_fn_t) (const void *, const void *);







int __locale_mb_cur_max (void);



void abort (void) __attribute__ ((__noreturn__));
int abs (int);
int atexit (void (*__func)(void));
double atof (const char *__nptr);

float atoff (const char *__nptr);

int atoi (const char *__nptr);
int _atoi_r (struct _reent *, const char *__nptr);
long atol (const char *__nptr);
long _atol_r (struct _reent *, const char *__nptr);
void * bsearch (const void * __key, const void * __base, size_t __nmemb, size_t __size, __compar_fn_t _compar);




void * calloc (size_t __nmemb, size_t __size) __attribute__ ((__nothrow__));
div_t div (int __numer, int __denom);
void exit (int __status) __attribute__ ((__noreturn__));
void free (void *) __attribute__ ((__nothrow__));
char * getenv (const char *__string);
char * _getenv_r (struct _reent *, const char *__string);
char * _findenv (const char *, int *);
char * _findenv_r (struct _reent *, const char *, int *);

extern char *suboptarg;
int getsubopt (char **, char * const *, char **);

long labs (long);
ldiv_t ldiv (long __numer, long __denom);
void * malloc (size_t __size) __attribute__ ((__nothrow__));
int mblen (const char *, size_t);
int _mblen_r (struct _reent *, const char *, size_t, _mbstate_t *);
int mbtowc (wchar_t *, const char *, size_t);
int _mbtowc_r (struct _reent *, wchar_t *, const char *, size_t, _mbstate_t *);
int wctomb (char *, wchar_t);
int _wctomb_r (struct _reent *, char *, wchar_t, _mbstate_t *);
size_t mbstowcs (wchar_t *, const char *, size_t);
size_t _mbstowcs_r (struct _reent *, wchar_t *, const char *, size_t, _mbstate_t *);
size_t wcstombs (char *, const wchar_t *, size_t);
size_t _wcstombs_r (struct _reent *, char *, const wchar_t *, size_t, _mbstate_t *);


char * mkdtemp (char *);
int mkostemp (char *, int);
int mkostemps (char *, int, int);
int mkstemp (char *);
int mkstemps (char *, int);
char * mktemp (char *) __attribute__ ((__warning__ ("the use of `mktemp' is dangerous; use `mkstemp' instead")));

char * _mkdtemp_r (struct _reent *, char *);
int _mkostemp_r (struct _reent *, char *, int);
int _mkostemps_r (struct _reent *, char *, int, int);
int _mkstemp_r (struct _reent *, char *);
int _mkstemps_r (struct _reent *, char *, int);
char * _mktemp_r (struct _reent *, char *) __attribute__ ((__warning__ ("the use of `mktemp' is dangerous; use `mkstemp' instead")));

void qsort (void * __base, size_t __nmemb, size_t __size, __compar_fn_t _compar);
int rand (void);
void * realloc (void * __r, size_t __size) __attribute__ ((__nothrow__));

void * reallocf (void * __r, size_t __size);
char * realpath (const char * path, char * resolved_path);

void srand (unsigned __seed);
double strtod (const char * __n, char ** __end_PTR);
double _strtod_r (struct _reent *,const char * __n, char ** __end_PTR);



float strtof (const char * __n, char ** __end_PTR);







long strtol (const char * __n, char ** __end_PTR, int __base);
long _strtol_r (struct _reent *,const char * __n, char ** __end_PTR, int __base);
unsigned long strtoul (const char * __n, char ** __end_PTR, int __base);
unsigned long _strtoul_r (struct _reent *,const char * __n, char ** __end_PTR, int __base);

int system (const char *__string);


long a64l (const char *__input);
char * l64a (long __input);
char * _l64a_r (struct _reent *,long __input);
int on_exit (void (*__func)(int, void *),void * __arg);




void _Exit (int __status) __attribute__ ((__noreturn__));


int putenv (char *__string);
int _putenv_r (struct _reent *, char *__string);
void * _reallocf_r (struct _reent *, void *, size_t);
int setenv (const char *__string, const char *__value, int __overwrite);
int _setenv_r (struct _reent *, const char *__string, const char *__value, int __overwrite);

char * gcvt (double,int,char *);
char * gcvtf (float,int,char *);
char * fcvt (double,int,int *,int *);
char * fcvtf (float,int,int *,int *);
char * ecvt (double,int,int *,int *);
char * ecvtbuf (double, int, int*, int*, char *);
char * fcvtbuf (double, int, int*, int*, char *);
char * ecvtf (float,int,int *,int *);
char * dtoa (double, int, int, int *, int*, char**);

char * __itoa (int, char *, int);
char * __utoa (unsigned, char *, int);

char * itoa (int, char *, int);
char * utoa (unsigned, char *, int);
int rand_r (unsigned *__seed);

double drand48 (void);
double _drand48_r (struct _reent *);
double erand48 (unsigned short [3]);
double _erand48_r (struct _reent *, unsigned short [3]);
long jrand48 (unsigned short [3]);
long _jrand48_r (struct _reent *, unsigned short [3]);
void lcong48 (unsigned short [7]);
void _lcong48_r (struct _reent *, unsigned short [7]);
long lrand48 (void);
long _lrand48_r (struct _reent *);
long mrand48 (void);
long _mrand48_r (struct _reent *);
long nrand48 (unsigned short [3]);
long _nrand48_r (struct _reent *, unsigned short [3]);
unsigned short *
       seed48 (unsigned short [3]);
unsigned short *
       _seed48_r (struct _reent *, unsigned short [3]);
void srand48 (long);
void _srand48_r (struct _reent *, long);




long long atoll (const char *__nptr);


long long _atoll_r (struct _reent *, const char *__nptr);




long long llabs (long long);
lldiv_t lldiv (long long __numer, long long __denom);
long long strtoll (const char * __n, char ** __end_PTR, int __base);


long long _strtoll_r (struct _reent *, const char * __n, char ** __end_PTR, int __base);




unsigned long long strtoull (const char * __n, char ** __end_PTR, int __base);


unsigned long long _strtoull_r (struct _reent *, const char * __n, char ** __end_PTR, int __base);


void cfree (void *);
int unsetenv (const char *__string);
int _unsetenv_r (struct _reent *, const char *__string);
# 246 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdlib.h"
char * _dtoa_r (struct _reent *, double, int, int, int *, int*, char**);

void * _malloc_r (struct _reent *, size_t) __attribute__ ((__nothrow__));
void * _calloc_r (struct _reent *, size_t, size_t) __attribute__ ((__nothrow__));
void _free_r (struct _reent *, void *) __attribute__ ((__nothrow__));
void * _realloc_r (struct _reent *, void *, size_t) __attribute__ ((__nothrow__));
void _mstats_r (struct _reent *, char *);

int _system_r (struct _reent *, const char *);

void __eprintf (const char *, const char *, unsigned int, const char *);
# 279 "/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include/stdlib.h"
extern long double strtold (const char *, char **);



}
# 4 "test.c" 2
# 1 "../libclosure/Block.h" 1
# 27 "../libclosure/Block.h"
extern "C" {





extern "C" void *_Block_copy(const void *aBlock)
                                                      ;


extern "C" void _Block_release(const void *aBlock)
                                                      ;



extern "C" void _Block_object_assign(void *, const void *, const int)
                                                      ;


extern "C" void _Block_object_dispose(const void *, const int)
                                                      ;


extern "C" void * _NSConcreteGlobalBlock[32]
                                                      ;
extern "C" void * _NSConcreteStackBlock[32]
                                                      ;



}
# 5 "test.c" 2

typedef void (*myblock_t)(int x);

int g = 0;


struct __genblock_block_impl_0 {
  struct __block_impl impl;
  struct __genblock_block_desc_0* Desc;
  int a;
  int b;
  __genblock_block_impl_0(void *fp, struct __genblock_block_desc_0 *desc, int _a, int _b, int flags=0) : a(_a), b(_b) {
    impl.isa = &_NSConcreteStackBlock;
    impl.Flags = flags;
    impl.FuncPtr = fp;
    Desc = desc;
  }
};

#line 12 "test.c"
static void __genblock_block_func_0(struct __genblock_block_impl_0 *__cself, int x) {
  int a = __cself->a; // bound by copy
  int b = __cself->b; // bound by copy

        g += a * b + x;
    }

static struct __genblock_block_desc_0 {
  size_t reserved;
  size_t Block_size;
} __genblock_block_desc_0_DATA = { 0, sizeof(struct __genblock_block_impl_0)};

#line 10 "test.c"
myblock_t genblock(int a, int b)
{
    myblock_t blk = ((void (*)(int))&__genblock_block_impl_0((void *)__genblock_block_func_0, &__genblock_block_desc_0_DATA, a, b));

    return ((myblock_t)_Block_copy((const void *)(blk)));
}

typedef struct foo {
    myblock_t blk;
} foo_t;


#line 23 "test.c"
foo_t * init_foo(myblock_t b)
{
    foo_t * f = (foo_t *)malloc(sizeof(foo_t));
    f->blk = ((myblock_t)_Block_copy((const void *)(b)));
    return f;
}


#line 30 "test.c"
void handle_foo(foo_t * f)
{
    ((void (*)(__block_impl *, int))((__block_impl *)f->blk)->FuncPtr)((__block_impl *)f->blk, 10);
}


#line 35 "test.c"
void free_foo(foo_t * f)
{
    _Block_release((const void *)(f->blk));
    free(f);
}

struct __Block_byref_i_0 {
  void *__isa;
__Block_byref_i_0 *__forwarding;
 int __flags;
 int __size;
 int i;
};
struct __Block_byref_z_1 {
  void *__isa;
__Block_byref_z_1 *__forwarding;
 int __flags;
 int __size;
 int z;
};

struct __main_block_impl_0 {
  struct __block_impl impl;
  struct __main_block_desc_0* Desc;
  __Block_byref_i_0 *i; // by ref
  __main_block_impl_0(void *fp, struct __main_block_desc_0 *desc, __Block_byref_i_0 *_i, int flags=0) : i(_i->__forwarding) {
    impl.isa = &_NSConcreteStackBlock;
    impl.Flags = flags;
    impl.FuncPtr = fp;
    Desc = desc;
  }
};

#line 45 "test.c"
static void __main_block_func_0(struct __main_block_impl_0 *__cself, int x) {
  __Block_byref_i_0 *i = __cself->i; // bound by ref

     (i->__forwarding->i) += x;
 }
static void __main_block_copy_0(struct __main_block_impl_0*dst, struct __main_block_impl_0*src) {_Block_object_assign((void*)&dst->i, (void*)src->i, 8/*BLOCK_FIELD_IS_BYREF*/);}

static void __main_block_dispose_0(struct __main_block_impl_0*src) {_Block_object_dispose((void*)src->i, 8/*BLOCK_FIELD_IS_BYREF*/);}

static struct __main_block_desc_0 {
  size_t reserved;
  size_t Block_size;
  void (*copy)(struct __main_block_impl_0*, struct __main_block_impl_0*);
  void (*dispose)(struct __main_block_impl_0*);
} __main_block_desc_0_DATA = { 0, sizeof(struct __main_block_impl_0), __main_block_copy_0, __main_block_dispose_0};

struct __main_block_impl_1 {
  struct __block_impl impl;
  struct __main_block_desc_1* Desc;
  __Block_byref_z_1 *z; // by ref
  __main_block_impl_1(void *fp, struct __main_block_desc_1 *desc, __Block_byref_z_1 *_z, int flags=0) : z(_z->__forwarding) {
    impl.isa = &_NSConcreteStackBlock;
    impl.Flags = flags;
    impl.FuncPtr = fp;
    Desc = desc;
  }
};

#line 60 "test.c"
static void __main_block_func_1(struct __main_block_impl_1 *__cself, int x) {
  __Block_byref_z_1 *z = __cself->z; // bound by ref

     (z->__forwarding->z) += x;
 }
static void __main_block_copy_1(struct __main_block_impl_1*dst, struct __main_block_impl_1*src) {_Block_object_assign((void*)&dst->z, (void*)src->z, 8/*BLOCK_FIELD_IS_BYREF*/);}

static void __main_block_dispose_1(struct __main_block_impl_1*src) {_Block_object_dispose((void*)src->z, 8/*BLOCK_FIELD_IS_BYREF*/);}

static struct __main_block_desc_1 {
  size_t reserved;
  size_t Block_size;
  void (*copy)(struct __main_block_impl_1*, struct __main_block_impl_1*);
  void (*dispose)(struct __main_block_impl_1*);
} __main_block_desc_1_DATA = { 0, sizeof(struct __main_block_impl_1), __main_block_copy_1, __main_block_dispose_1};

#line 41 "test.c"
int main() {
 __attribute__((__blocks__(byref))) __Block_byref_i_0 i = {(void*)0,(__Block_byref_i_0 *)&i, 0, sizeof(__Block_byref_i_0), 0};
 void (*myBlock)(int x);

 myBlock = ((void (*)(int))&__main_block_impl_0((void *)__main_block_func_0, &__main_block_desc_0_DATA, (__Block_byref_i_0 *)&i, 570425344));

 for (; (i.__forwarding->i)<1000; ++(i.__forwarding->i)) {
     ((void (*)(__block_impl *, int))((__block_impl *)myBlock)->FuncPtr)((__block_impl *)myBlock, (i.__forwarding->i));
 }
 printf("i=%d\n", (i.__forwarding->i));

 myblock_t t = genblock(1, 2);
 t = ((myblock_t)_Block_copy((const void *)(t)));
 ((void (*)(__block_impl *, int))((__block_impl *)t)->FuncPtr)((__block_impl *)t, 3);
 printf("g=%d\n", g);

 __attribute__((__blocks__(byref))) __Block_byref_z_1 z = {(void*)0,(__Block_byref_z_1 *)&z, 0, sizeof(__Block_byref_z_1), 0};
 foo_t * f = init_foo(((void (*)(int))&__main_block_impl_1((void *)__main_block_func_1, &__main_block_desc_1_DATA, (__Block_byref_z_1 *)&z, 570425344)));
 handle_foo(f);
 printf("z=%d\n", (z.__forwarding->z));
 free_foo(f);

 while (1) {}

 return 0;
}
static struct IMAGE_INFO { unsigned version; unsigned flag; } _OBJC_IMAGE_INFO = { 0, 2 };
