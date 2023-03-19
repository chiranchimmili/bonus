









typedef long unsigned int size_t;
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));





extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));




struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;

typedef __locale_t locale_t;


extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));



extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strerror (int __errnum) __attribute__ ((__nothrow__ ));
extern int strerror_r (int __errnum, char *__buf, size_t __buflen)  __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ ));




extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern int ffs (int __i) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));





extern int ffsl (long int __l) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));



extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ ));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;




;
;
;
;
typedef float float_t;
typedef double double_t;
extern int __fpclassify (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));



extern int __isinf (double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int __isnan (double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int __iseqsig (double __x, double __y) __attribute__ ((__nothrow__ ));


extern int __issignaling (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern double acos (double __x) __attribute__ ((__nothrow__ )); extern double __acos (double __x) __attribute__ ((__nothrow__ ));

extern double asin (double __x) __attribute__ ((__nothrow__ )); extern double __asin (double __x) __attribute__ ((__nothrow__ ));

extern double atan (double __x) __attribute__ ((__nothrow__ )); extern double __atan (double __x) __attribute__ ((__nothrow__ ));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ )); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ ));


 extern double cos (double __x) __attribute__ ((__nothrow__ )); extern double __cos (double __x) __attribute__ ((__nothrow__ ));

 extern double sin (double __x) __attribute__ ((__nothrow__ )); extern double __sin (double __x) __attribute__ ((__nothrow__ ));

extern double tan (double __x) __attribute__ ((__nothrow__ )); extern double __tan (double __x) __attribute__ ((__nothrow__ ));




extern double cosh (double __x) __attribute__ ((__nothrow__ )); extern double __cosh (double __x) __attribute__ ((__nothrow__ ));

extern double sinh (double __x) __attribute__ ((__nothrow__ )); extern double __sinh (double __x) __attribute__ ((__nothrow__ ));

extern double tanh (double __x) __attribute__ ((__nothrow__ )); extern double __tanh (double __x) __attribute__ ((__nothrow__ ));
extern double acosh (double __x) __attribute__ ((__nothrow__ )); extern double __acosh (double __x) __attribute__ ((__nothrow__ ));

extern double asinh (double __x) __attribute__ ((__nothrow__ )); extern double __asinh (double __x) __attribute__ ((__nothrow__ ));

extern double atanh (double __x) __attribute__ ((__nothrow__ )); extern double __atanh (double __x) __attribute__ ((__nothrow__ ));





 extern double exp (double __x) __attribute__ ((__nothrow__ )); extern double __exp (double __x) __attribute__ ((__nothrow__ ));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ )); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ ));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ )); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ ));


 extern double log (double __x) __attribute__ ((__nothrow__ )); extern double __log (double __x) __attribute__ ((__nothrow__ ));


extern double log10 (double __x) __attribute__ ((__nothrow__ )); extern double __log10 (double __x) __attribute__ ((__nothrow__ ));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ )); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
extern double expm1 (double __x) __attribute__ ((__nothrow__ )); extern double __expm1 (double __x) __attribute__ ((__nothrow__ ));


extern double log1p (double __x) __attribute__ ((__nothrow__ )); extern double __log1p (double __x) __attribute__ ((__nothrow__ ));


extern double logb (double __x) __attribute__ ((__nothrow__ )); extern double __logb (double __x) __attribute__ ((__nothrow__ ));




extern double exp2 (double __x) __attribute__ ((__nothrow__ )); extern double __exp2 (double __x) __attribute__ ((__nothrow__ ));


extern double log2 (double __x) __attribute__ ((__nothrow__ )); extern double __log2 (double __x) __attribute__ ((__nothrow__ ));






 extern double pow (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ ));


extern double sqrt (double __x) __attribute__ ((__nothrow__ )); extern double __sqrt (double __x) __attribute__ ((__nothrow__ ));



extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ ));




extern double cbrt (double __x) __attribute__ ((__nothrow__ )); extern double __cbrt (double __x) __attribute__ ((__nothrow__ ));






extern double ceil (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ ));
extern int isinf (double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern int finite (double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ ));



extern double significand (double __x) __attribute__ ((__nothrow__ )); extern double __significand (double __x) __attribute__ ((__nothrow__ ));






extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern double nan (const char *__tagb) __attribute__ ((__nothrow__ )); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ ));
extern int isnan (double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));





extern double j0 (double) __attribute__ ((__nothrow__ )); extern double __j0 (double) __attribute__ ((__nothrow__ ));
extern double j1 (double) __attribute__ ((__nothrow__ )); extern double __j1 (double) __attribute__ ((__nothrow__ ));
extern double jn (int, double) __attribute__ ((__nothrow__ )); extern double __jn (int, double) __attribute__ ((__nothrow__ ));
extern double y0 (double) __attribute__ ((__nothrow__ )); extern double __y0 (double) __attribute__ ((__nothrow__ ));
extern double y1 (double) __attribute__ ((__nothrow__ )); extern double __y1 (double) __attribute__ ((__nothrow__ ));
extern double yn (int, double) __attribute__ ((__nothrow__ )); extern double __yn (int, double) __attribute__ ((__nothrow__ ));





extern double erf (double) __attribute__ ((__nothrow__ )); extern double __erf (double) __attribute__ ((__nothrow__ ));
extern double erfc (double) __attribute__ ((__nothrow__ )); extern double __erfc (double) __attribute__ ((__nothrow__ ));
extern double lgamma (double) __attribute__ ((__nothrow__ )); extern double __lgamma (double) __attribute__ ((__nothrow__ ));




extern double tgamma (double) __attribute__ ((__nothrow__ )); extern double __tgamma (double) __attribute__ ((__nothrow__ ));





extern double gamma (double) __attribute__ ((__nothrow__ )); extern double __gamma (double) __attribute__ ((__nothrow__ ));







extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ )); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ ));






extern double rint (double __x) __attribute__ ((__nothrow__ )); extern double __rint (double __x) __attribute__ ((__nothrow__ ));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ ));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ )); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ ));
extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ ));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ )); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ ));



extern int ilogb (double __x) __attribute__ ((__nothrow__ )); extern int __ilogb (double __x) __attribute__ ((__nothrow__ ));
extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ )); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ ));



extern double nearbyint (double __x) __attribute__ ((__nothrow__ )); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ ));



extern double round (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ )); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ ));






extern long int lrint (double __x) __attribute__ ((__nothrow__ )); extern long int __lrint (double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ )); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ ));



extern long int lround (double __x) __attribute__ ((__nothrow__ )); extern long int __lround (double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ )); extern long long int __llround (double __x) __attribute__ ((__nothrow__ ));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ ));


extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ )); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ ));
extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ )); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ ));
extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));



extern int __isinff (float __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int __isnanf (float __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int __iseqsigf (float __x, float __y) __attribute__ ((__nothrow__ ));


extern int __issignalingf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern float acosf (float __x) __attribute__ ((__nothrow__ )); extern float __acosf (float __x) __attribute__ ((__nothrow__ ));

extern float asinf (float __x) __attribute__ ((__nothrow__ )); extern float __asinf (float __x) __attribute__ ((__nothrow__ ));

extern float atanf (float __x) __attribute__ ((__nothrow__ )); extern float __atanf (float __x) __attribute__ ((__nothrow__ ));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ )); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ ));


 extern float cosf (float __x) __attribute__ ((__nothrow__ )); extern float __cosf (float __x) __attribute__ ((__nothrow__ ));

 extern float sinf (float __x) __attribute__ ((__nothrow__ )); extern float __sinf (float __x) __attribute__ ((__nothrow__ ));

extern float tanf (float __x) __attribute__ ((__nothrow__ )); extern float __tanf (float __x) __attribute__ ((__nothrow__ ));




extern float coshf (float __x) __attribute__ ((__nothrow__ )); extern float __coshf (float __x) __attribute__ ((__nothrow__ ));

extern float sinhf (float __x) __attribute__ ((__nothrow__ )); extern float __sinhf (float __x) __attribute__ ((__nothrow__ ));

extern float tanhf (float __x) __attribute__ ((__nothrow__ )); extern float __tanhf (float __x) __attribute__ ((__nothrow__ ));
extern float acoshf (float __x) __attribute__ ((__nothrow__ )); extern float __acoshf (float __x) __attribute__ ((__nothrow__ ));

extern float asinhf (float __x) __attribute__ ((__nothrow__ )); extern float __asinhf (float __x) __attribute__ ((__nothrow__ ));

extern float atanhf (float __x) __attribute__ ((__nothrow__ )); extern float __atanhf (float __x) __attribute__ ((__nothrow__ ));





 extern float expf (float __x) __attribute__ ((__nothrow__ )); extern float __expf (float __x) __attribute__ ((__nothrow__ ));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ )); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ ));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ )); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ ));


 extern float logf (float __x) __attribute__ ((__nothrow__ )); extern float __logf (float __x) __attribute__ ((__nothrow__ ));


extern float log10f (float __x) __attribute__ ((__nothrow__ )); extern float __log10f (float __x) __attribute__ ((__nothrow__ ));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ )); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
extern float expm1f (float __x) __attribute__ ((__nothrow__ )); extern float __expm1f (float __x) __attribute__ ((__nothrow__ ));


extern float log1pf (float __x) __attribute__ ((__nothrow__ )); extern float __log1pf (float __x) __attribute__ ((__nothrow__ ));


extern float logbf (float __x) __attribute__ ((__nothrow__ )); extern float __logbf (float __x) __attribute__ ((__nothrow__ ));




extern float exp2f (float __x) __attribute__ ((__nothrow__ )); extern float __exp2f (float __x) __attribute__ ((__nothrow__ ));


extern float log2f (float __x) __attribute__ ((__nothrow__ )); extern float __log2f (float __x) __attribute__ ((__nothrow__ ));






 extern float powf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ ));


extern float sqrtf (float __x) __attribute__ ((__nothrow__ )); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ ));



extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ ));




extern float cbrtf (float __x) __attribute__ ((__nothrow__ )); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ ));






extern float ceilf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ ));
extern int isinff (float __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern int finitef (float __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ ));



extern float significandf (float __x) __attribute__ ((__nothrow__ )); extern float __significandf (float __x) __attribute__ ((__nothrow__ ));






extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ )); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ ));
extern int isnanf (float __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));





extern float j0f (float) __attribute__ ((__nothrow__ )); extern float __j0f (float) __attribute__ ((__nothrow__ ));
extern float j1f (float) __attribute__ ((__nothrow__ )); extern float __j1f (float) __attribute__ ((__nothrow__ ));
extern float jnf (int, float) __attribute__ ((__nothrow__ )); extern float __jnf (int, float) __attribute__ ((__nothrow__ ));
extern float y0f (float) __attribute__ ((__nothrow__ )); extern float __y0f (float) __attribute__ ((__nothrow__ ));
extern float y1f (float) __attribute__ ((__nothrow__ )); extern float __y1f (float) __attribute__ ((__nothrow__ ));
extern float ynf (int, float) __attribute__ ((__nothrow__ )); extern float __ynf (int, float) __attribute__ ((__nothrow__ ));





extern float erff (float) __attribute__ ((__nothrow__ )); extern float __erff (float) __attribute__ ((__nothrow__ ));
extern float erfcf (float) __attribute__ ((__nothrow__ )); extern float __erfcf (float) __attribute__ ((__nothrow__ ));
extern float lgammaf (float) __attribute__ ((__nothrow__ )); extern float __lgammaf (float) __attribute__ ((__nothrow__ ));




extern float tgammaf (float) __attribute__ ((__nothrow__ )); extern float __tgammaf (float) __attribute__ ((__nothrow__ ));





extern float gammaf (float) __attribute__ ((__nothrow__ )); extern float __gammaf (float) __attribute__ ((__nothrow__ ));







extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ )); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ ));






extern float rintf (float __x) __attribute__ ((__nothrow__ )); extern float __rintf (float __x) __attribute__ ((__nothrow__ ));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ ));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ )); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ ));
extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ ));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ )); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ ));



extern int ilogbf (float __x) __attribute__ ((__nothrow__ )); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ ));
extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ )); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ ));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__ )); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ ));



extern float roundf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ )); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ ));






extern long int lrintf (float __x) __attribute__ ((__nothrow__ )); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ )); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ ));



extern long int lroundf (float __x) __attribute__ ((__nothrow__ )); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ )); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ ));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ ));


extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ )); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ ));
extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ )); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ ));
extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));



extern int __isinfl (long double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int __isnanl (long double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int __iseqsigl (long double __x, long double __y) __attribute__ ((__nothrow__ ));


extern int __issignalingl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));
extern long double acosl (long double __x) __attribute__ ((__nothrow__ )); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ ));

extern long double asinl (long double __x) __attribute__ ((__nothrow__ )); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ ));

extern long double atanl (long double __x) __attribute__ ((__nothrow__ )); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ ));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ )); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ ));


 extern long double cosl (long double __x) __attribute__ ((__nothrow__ )); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ ));

 extern long double sinl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ ));

extern long double tanl (long double __x) __attribute__ ((__nothrow__ )); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ ));




extern long double coshl (long double __x) __attribute__ ((__nothrow__ )); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ ));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ ));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ ));
extern long double acoshl (long double __x) __attribute__ ((__nothrow__ )); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ ));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ ));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ ));





 extern long double expl (long double __x) __attribute__ ((__nothrow__ )); extern long double __expl (long double __x) __attribute__ ((__nothrow__ ));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ )); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ ));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ )); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ ));


 extern long double logl (long double __x) __attribute__ ((__nothrow__ )); extern long double __logl (long double __x) __attribute__ ((__nothrow__ ));


extern long double log10l (long double __x) __attribute__ ((__nothrow__ )); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ ));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ )); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
extern long double expm1l (long double __x) __attribute__ ((__nothrow__ )); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ ));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__ )); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ ));


extern long double logbl (long double __x) __attribute__ ((__nothrow__ )); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ ));




extern long double exp2l (long double __x) __attribute__ ((__nothrow__ )); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ ));


extern long double log2l (long double __x) __attribute__ ((__nothrow__ )); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ ));






 extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ ));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ ));



extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ ));




extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ )); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ ));






extern long double ceill (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern int isinfl (long double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern int finitel (long double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ ));



extern long double significandl (long double __x) __attribute__ ((__nothrow__ )); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ ));






extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ )); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ ));
extern int isnanl (long double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));





extern long double j0l (long double) __attribute__ ((__nothrow__ )); extern long double __j0l (long double) __attribute__ ((__nothrow__ ));
extern long double j1l (long double) __attribute__ ((__nothrow__ )); extern long double __j1l (long double) __attribute__ ((__nothrow__ ));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ )); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ ));
extern long double y0l (long double) __attribute__ ((__nothrow__ )); extern long double __y0l (long double) __attribute__ ((__nothrow__ ));
extern long double y1l (long double) __attribute__ ((__nothrow__ )); extern long double __y1l (long double) __attribute__ ((__nothrow__ ));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ )); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ ));





extern long double erfl (long double) __attribute__ ((__nothrow__ )); extern long double __erfl (long double) __attribute__ ((__nothrow__ ));
extern long double erfcl (long double) __attribute__ ((__nothrow__ )); extern long double __erfcl (long double) __attribute__ ((__nothrow__ ));
extern long double lgammal (long double) __attribute__ ((__nothrow__ )); extern long double __lgammal (long double) __attribute__ ((__nothrow__ ));




extern long double tgammal (long double) __attribute__ ((__nothrow__ )); extern long double __tgammal (long double) __attribute__ ((__nothrow__ ));





extern long double gammal (long double) __attribute__ ((__nothrow__ )); extern long double __gammal (long double) __attribute__ ((__nothrow__ ));







extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ )); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ ));






extern long double rintl (long double __x) __attribute__ ((__nothrow__ )); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ ));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ ));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ ));
extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ ));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ )); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ ));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__ )); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ ));
extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ )); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ ));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ )); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ ));



extern long double roundl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ )); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ ));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__ )); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ )); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ ));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__ )); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ )); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ ));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ ));


extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ )); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ ));
extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ )); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ ));
extern int signgam;
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };













typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;


typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;





typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;


typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;





typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;



extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));







typedef __builtin_va_list va_list;
typedef __builtin_va_list __gnuc_va_list;






typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;



struct _IO_FILE;
typedef struct _IO_FILE __FILE;



struct _IO_FILE;


typedef struct _IO_FILE FILE;
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





struct _IO_FILE
{
  int _flags;


  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;


  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};








typedef __gnuc_va_list va_list;
typedef __off_t off_t;
typedef __ssize_t ssize_t;






typedef __fpos_t fpos_t;



extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ ));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ ));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ ));
extern FILE *tmpfile (void) ;
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ )) ;




extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ )) ;
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
extern int fflush_unlocked (FILE *__stream);
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ )) ;
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ )) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ )) ;





extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ ));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ ));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ ));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ ));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ ));






extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...)  ;


extern int scanf (const char *__restrict __format, ...)  ;

extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...)  __attribute__ ((__nothrow__ ));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format__ (__scanf__, 2, 0)));




extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) 



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) 

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg)  __attribute__ ((__nothrow__ ))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);






extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (FILE *__stream);
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
          ;
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) ;







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ ));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ )) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ )) ;



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;







extern void perror (const char *__s);






extern int sys_nerr;
extern const char *const sys_errlist[];




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ )) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ ));
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ ));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ )) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);


static void
platform_main_begin(void)
{

}

static void
platform_main_end(uint32_t crc, int flag)
{





 printf ("checksum = %X\n", crc);
}
static int8_t
(safe_unary_minus_func_int8_t_s)(int8_t si )
{

  return






    -si;
}

static int8_t
(safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{

  return






    (si1 + si2);
}

static int8_t
(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{

  return






    (si1 - si2);
}

static int8_t
(safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{

  return






    si1 * si2;
}

static int8_t
(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{

  return

    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static int8_t
(safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{

  return

    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static int8_t
(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static int8_t
(safe_rshift_func_int8_t_s_s)(int8_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static int8_t
(safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static int16_t
(safe_unary_minus_func_int16_t_s)(int16_t si )
{

  return






    -si;
}

static int16_t
(safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{

  return






    (si1 + si2);
}

static int16_t
(safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{

  return






    (si1 - si2);
}

static int16_t
(safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{

  return






    si1 * si2;
}

static int16_t
(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{

  return

    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static int16_t
(safe_div_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{

  return

    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static int16_t
(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static int16_t
(safe_rshift_func_int16_t_s_s)(int16_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static int32_t
(safe_unary_minus_func_int32_t_s)(int32_t si )
{

  return


    (si==(-2147483647-1)) ?
    ((si)) :


    -si;
}

static int32_t
(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{

  return


    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static int32_t
(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{

  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static int32_t
(safe_mul_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{

  return


    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static int32_t
(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{

  return

    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static int32_t
(safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{

  return

    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static int32_t
(safe_lshift_func_int32_t_s_s)(int32_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static int32_t
(safe_lshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static int32_t
(safe_rshift_func_int32_t_s_s)(int32_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static int32_t
(safe_rshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}
static uint8_t
(safe_unary_minus_func_uint8_t_u)(uint8_t ui )
{

  return -ui;
}

static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{

  return ui1 + ui2;
}

static uint8_t
(safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{

  return ui1 - ui2;
}

static uint8_t
(safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{

  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static uint8_t
(safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static uint8_t
(safe_div_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static uint8_t
(safe_lshift_func_uint8_t_u_s)(uint8_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static uint8_t
(safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{

  return

    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static uint8_t
(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static uint8_t
(safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{

  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static uint16_t
(safe_unary_minus_func_uint16_t_u)(uint16_t ui )
{

  return -ui;
}

static uint16_t
(safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{

  return ui1 + ui2;
}

static uint16_t
(safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{

  return ui1 - ui2;
}

static uint16_t
(safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{

  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static uint16_t
(safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static uint16_t
(safe_div_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static uint16_t
(safe_lshift_func_uint16_t_u_s)(uint16_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{

  return

    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static uint16_t
(safe_rshift_func_uint16_t_u_s)(uint16_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static uint16_t
(safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{

  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static uint32_t
(safe_unary_minus_func_uint32_t_u)(uint32_t ui )
{

  return -ui;
}

static uint32_t
(safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{

  return ui1 + ui2;
}

static uint32_t
(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{

  return ui1 - ui2;
}

static uint32_t
(safe_mul_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{

  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static uint32_t
(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static uint32_t
(safe_div_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static uint32_t
(safe_lshift_func_uint32_t_u_s)(uint32_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static uint32_t
(safe_lshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{

  return

    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static uint32_t
(safe_rshift_func_uint32_t_u_s)(uint32_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static uint32_t
(safe_rshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{

  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}
float fabsf(float);
double fabs(double);


static float
(safe_add_func_float_f_f)(float sf1, float sf2 )
{

  return

    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * 3.40282347e+38F)) ?
    (sf1) :

    (sf1 + sf2);
}

static float
(safe_sub_func_float_f_f)(float sf1, float sf2 )
{

  return

    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * 3.40282347e+38F)) ?
    (sf1) :

    (sf1 - sf2);
}

static float
(safe_mul_func_float_f_f)(float sf1, float sf2 )
{

  return


    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * 3.40282347e+38F))) ?



    (sf1) :

    (sf1 * sf2);
}

static float
(safe_div_func_float_f_f)(float sf1, float sf2 )
{

  return


    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * 3.40282347e+38F))))) ?



    (sf1) :

    (sf1 / sf2);
}




static double
(safe_add_func_double_f_f)(double sf1, double sf2 )
{

  return

    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * 1.7976931348623157e+308)) ?
    (sf1) :

    (sf1 + sf2);
}

static double
(safe_sub_func_double_f_f)(double sf1, double sf2 )
{

  return

    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * 1.7976931348623157e+308)) ?
    (sf1) :

    (sf1 - sf2);
}

static double
(safe_mul_func_double_f_f)(double sf1, double sf2 )
{

  return


    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * 1.7976931348623157e+308))) ?



    (sf1) :

    (sf1 * sf2);
}

static double
(safe_div_func_double_f_f)(double sf1, double sf2 )
{

  return


    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * 1.7976931348623157e+308))))) ?



    (sf1) :

    (sf1 / sf2);
}
static int32_t
(safe_convert_func_float_to_int32_t)(float sf1 )
{

  return

    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :

    ((int32_t)(sf1));
}

static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;

static void
crc32_gentab (void)
{
 uint32_t crc;
 const uint32_t poly = 0xEDB88320UL;
 int i, j;

 for (i = 0; i < 256; i++) {
  crc = i;
  for (j = 8; j > 0; j--) {
   if (crc & 1) {
    crc = (crc >> 1) ^ poly;
   } else {
    crc >>= 1;
   }
  }
  crc32_tab[i] = crc;
 }
}

static void
crc32_byte (uint8_t b) {
 crc32_context =
  ((crc32_context >> 8) & 0x00FFFFFF) ^
  crc32_tab[(crc32_context ^ b) & 0xFF];
}


static void
crc32_8bytes (uint32_t val)
{
 crc32_byte ((val>>0) & 0xff);
 crc32_byte ((val>>8) & 0xff);
 crc32_byte ((val>>16) & 0xff);
 crc32_byte ((val>>24) & 0xff);
}

static void
transparent_crc (uint32_t val, char* vname, int flag)
{
 crc32_8bytes(val);
 if (flag) {
    printf("...checksum after hashing %s : %X\n", vname, crc32_context ^ 0xFFFFFFFFU);
 }
}
static void
transparent_crc_bytes (char *ptr, int nbytes, char* vname, int flag)
{
    int i;
    for (i=0; i<nbytes; i++) {
        crc32_byte(ptr[i]);
    }
 if (flag) {
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
 }
}


static long __undefined;



static int32_t g_32 = 0x912530A9;
static int32_t *g_59[1][1] = {{&g_32}};
static int32_t g_95 = 0x706C0A8D;
static int32_t **g_113 = &g_59[0][0];
static int32_t ***g_112 = &g_113;
static int16_t g_217[9] = {0xF993, (-1), 0xF993, (-1), 0xF993, (-1), 0xF993, (-1), 0xF993};
static int32_t g_219 = 1;
static int8_t g_231 = 0x84;
static int32_t ****g_272 = &g_112;
static int32_t *****g_271 = &g_272;
static int32_t g_415 = 0x6DA102ED;
static int32_t ***g_421 = &g_113;
static int32_t *g_442[2][7] = {{&g_95, &g_95, &g_415, &g_95, &g_95, (void*)0, &g_95}, {&g_95, &g_95, &g_415, &g_95, &g_95, (void*)0, &g_95}};
static uint32_t g_444[7] = {0x73EE0B14, 0x73EE0B14, 0x73EE0B14, 0x73EE0B14, 0x73EE0B14, 0x73EE0B14, 0x73EE0B14};
static int16_t g_494 = (-1);
static int32_t ***g_536 = &g_113;
static int32_t g_562 = (-1);
static int16_t g_613[10] = {1, (-8), 1, (-8), 1, (-8), 1, (-8), 1, (-8)};
static int32_t g_627 = 0;
static int32_t ***g_743 = &g_113;
static uint8_t g_1101 = 0x30;
static int32_t *g_1148 = &g_415;
static int32_t *****g_1373 = &g_272;
static uint8_t g_1532 = 252U;
static uint32_t g_1617 = 1U;
static uint32_t g_1637 = 2U;
static int32_t g_1821[7][7] = {{4, 0x42FDA99A, 0, 0x15A2D6B6, (-1), 1, 0x0F6CE1AB}, {4, 0x42FDA99A, 0, 0x15A2D6B6, (-1), 1, 0x0F6CE1AB}, {4, 0x42FDA99A, 0, 0x15A2D6B6, (-1), 1, 0x0F6CE1AB}, {4, 0x42FDA99A, 0, 0x15A2D6B6, (-1), 1, 0x0F6CE1AB}, {4, 0x42FDA99A, 0, 0x15A2D6B6, (-1), 1, 0x0F6CE1AB}, {4, 0x42FDA99A, 0, 0x15A2D6B6, (-1), 1, 0x0F6CE1AB}, {4, 0x42FDA99A, 0, 0x15A2D6B6, (-1), 1, 0x0F6CE1AB}};
static int32_t ****g_1839 = &g_112;
static uint16_t g_1915 = 65528U;
static int32_t *g_1919 = (void*)0;
static int32_t *g_1958 = &g_95;
static int32_t *g_2001 = &g_219;
static uint8_t g_2059 = 0x90;
static int16_t g_2270 = 0x4108;
static int32_t *g_2336[8][10] = {{(void*)0, &g_219, &g_415, (void*)0, &g_95, (void*)0, (void*)0, &g_32, &g_32, (void*)0}, {(void*)0, &g_219, &g_415, (void*)0, &g_95, (void*)0, (void*)0, &g_32, &g_32, (void*)0}, {(void*)0, &g_219, &g_415, (void*)0, &g_95, (void*)0, (void*)0, &g_32, &g_32, (void*)0}, {(void*)0, &g_219, &g_415, (void*)0, &g_95, (void*)0, (void*)0, &g_32, &g_32, (void*)0}, {(void*)0, &g_219, &g_415, (void*)0, &g_95, (void*)0, (void*)0, &g_32, &g_32, (void*)0}, {(void*)0, &g_219, &g_415, (void*)0, &g_95, (void*)0, (void*)0, &g_32, &g_32, (void*)0}, {(void*)0, &g_219, &g_415, (void*)0, &g_95, (void*)0, (void*)0, &g_32, &g_32, (void*)0}, {(void*)0, &g_219, &g_415, (void*)0, &g_95, (void*)0, (void*)0, &g_32, &g_32, (void*)0}};
static uint16_t g_2407 = 0x3EC1;
static int32_t ***g_2409 = &g_113;



static int32_t func_1(void);
static int32_t * func_3(int32_t * p_4, uint32_t p_5, int32_t * p_6);
static int32_t * func_7(int32_t * p_8, int32_t p_9);
static int32_t * func_10(uint32_t p_11, int8_t p_12, int32_t p_13);
static int32_t func_15(int32_t * p_16);
static int32_t * func_17(uint16_t p_18, int32_t * p_19);
static int32_t * func_21(uint32_t p_22, int16_t p_23, int32_t p_24, uint32_t p_25, int8_t p_26);
static uint16_t func_27(int32_t * p_28, int16_t p_29, uint32_t p_30);
static int32_t func_34(uint8_t p_35, int32_t p_36, int32_t * p_37, int32_t * p_38, uint8_t p_39);
static int32_t func_40(int32_t * p_41, int32_t * p_42, uint32_t p_43, int32_t * p_44, int32_t * p_45);




static int32_t func_1(void)
{
    int32_t l_2[6];
    uint16_t l_20 = 0xD724;
    int32_t *l_33 = &g_32;
    uint8_t l_396 = 247U;
    uint32_t l_2258 = 0x5238E059;
    uint16_t l_2386[3][7] = {{0xA30E, 4U, 0x5C6B, 4U, 0xA30E, 4U, 0x5C6B}, {0xA30E, 4U, 0x5C6B, 4U, 0xA30E, 4U, 0x5C6B}, {0xA30E, 4U, 0x5C6B, 4U, 0xA30E, 4U, 0x5C6B}};
    int32_t *****l_2397 = &g_272;
    int i, j;
    for (i = 0; i < 6; i++)
        l_2[i] = 1;
    if (l_2[1])
    {
        uint32_t l_14 = 0x2121F90E;
        int32_t *l_31 = &g_32;
        int32_t *l_397 = &g_219;
        int32_t **l_2250 = &g_1148;
        (*l_2250) = func_3(func_7(func_10(l_2[4], l_14, func_15(func_17(l_20, func_21((func_27(((((l_31 == l_33) > ((((func_34((l_33 == &g_32), (*l_33), l_31, &g_32, g_32) & l_396) , (*l_31)) > g_217[0]) == 6U)) >= 1U) , l_397), (*l_397), (*l_397)) <= l_2[1]), g_217[0], (*l_397), g_217[0], (*l_397))))), g_444[0]), g_613[9], l_33);
    }
    else
    {
        int32_t *l_2251[1];
        int32_t *****l_2303 = (void*)0;
        uint32_t l_2304 = 0xFC064AD6;
        uint32_t l_2333[8];
        int32_t *l_2354 = (void*)0;
        int32_t l_2372[7];
        int i;
        for (i = 0; i < 1; i++)
            l_2251[i] = &g_32;
        for (i = 0; i < 8; i++)
            l_2333[i] = 4294967295U;
        for (i = 0; i < 7; i++)
            l_2372[i] = (-5);
        l_2251[0] = (void*)0;
        if (((safe_add_func_int8_t_s_s(g_444[4], (safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(((l_2258 & ((+(safe_add_func_uint32_t_u_u((((*l_33) == ((safe_sub_func_int32_t_s_s(((safe_rshift_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((g_627 > 0x5B38) | (((((safe_sub_func_uint16_t_u_u(g_444[0], (((g_627 == (*l_33)) >= (g_32 , g_1101)) == 0x66))) <= g_2270) , 0x56FA) & (*l_33)) < g_613[1])), 12)), g_1532)) != g_1915), g_219)) , g_1637)) | 249U), (***g_536)))) && g_1532)) > (-1)), (-3))), 0x30778E34)))) || 0x62B6))
        {
            uint32_t l_2275 = 0xEF8AB317;
            int8_t l_2276[6];
            uint16_t l_2302 = 0U;
            int32_t l_2335 = 0x8E603840;
            int32_t ***l_2337[7][8] = {{&g_113, (void*)0, &g_113, &g_113, &g_113, &g_113, &g_113, &g_113}, {&g_113, (void*)0, &g_113, &g_113, &g_113, &g_113, &g_113, &g_113}, {&g_113, (void*)0, &g_113, &g_113, &g_113, &g_113, &g_113, &g_113}, {&g_113, (void*)0, &g_113, &g_113, &g_113, &g_113, &g_113, &g_113}, {&g_113, (void*)0, &g_113, &g_113, &g_113, &g_113, &g_113, &g_113}, {&g_113, (void*)0, &g_113, &g_113, &g_113, &g_113, &g_113, &g_113}, {&g_113, (void*)0, &g_113, &g_113, &g_113, &g_113, &g_113, &g_113}};
            int32_t *****l_2361 = (void*)0;
            int i, j;
            for (i = 0; i < 6; i++)
                l_2276[i] = 0xAF;
            (**g_113) = (g_231 == (safe_lshift_func_uint8_t_u_u((*l_33), 5)));
            (***g_421) = (((safe_mul_func_int32_t_s_s(0xF5BB0BE7, l_2275)) > l_2276[1]) , (safe_rshift_func_uint8_t_u_s(((((-7) | g_1915) , (safe_add_func_int16_t_s_s((((**g_1373) == (*g_272)) >= l_2276[1]), ((+0xB709D262) < 0xC8)))) <= l_2276[1]), 1)));
            if ((****g_272))
            {
                uint32_t l_2289[5][2] = {{4294967292U, 0xF71E07B4}, {4294967292U, 0xF71E07B4}, {4294967292U, 0xF71E07B4}, {4294967292U, 0xF71E07B4}, {4294967292U, 0xF71E07B4}};
                int32_t ***l_2322 = (void*)0;
                int32_t l_2347 = (-1);
                int i, j;
                (**g_113) = ((&g_272 != (((+0xF631) || (((((((g_1637 , (*g_743)) != (*g_743)) , l_2275) , (safe_add_func_uint16_t_u_u((safe_mul_func_uint32_t_u_u((0x66BEFF7C != (*l_33)), (safe_mul_func_int8_t_s_s(g_95, l_2289[2][1])))), g_627))) ^ 0x75) & 0x787E) >= g_2270)) , &g_1839)) , l_2275);
                (**g_113) = (-5);
                for (g_32 = 8; (g_32 >= 2); g_32 -= 1)
                {
                    uint16_t l_2305 = 1U;
                    int8_t l_2306 = 0;
                    int32_t ***l_2323 = &g_113;
                    uint32_t l_2332 = 0U;
                    int16_t l_2334 = 0x2F05;
                    int i;
                }
            }
            else
            {
                for (g_562 = 5; (g_562 >= 0); g_562 -= 1)
                {
                    (*g_1839) = (*g_1839);
                }
            }
        }
        else
        {
            int32_t *****l_2396 = (void*)0;
            int32_t l_2408 = 0x23BB4B9C;
            (*g_1148) = (~(safe_sub_func_uint16_t_u_u(0x8FF3, ((((safe_mod_func_uint32_t_u_u((1U & (safe_mul_func_uint32_t_u_u((0 || (-1)), ((safe_sub_func_int8_t_s_s(((((((l_2396 == l_2397) < (**g_113)) , (safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s(((safe_unary_minus_func_uint32_t_u(g_2059)) & (safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((*****l_2397), 0x22)), g_2270))), 251U)), g_1637))) == 0xEF0751DC) <= 0xB3) != (*l_33)), g_32)) && 0x6A3CE64A)))), g_2407)) > l_2408) , g_231) != g_1532))));
        }
    }
    (*g_1839) = g_2409;
    for (g_95 = 24; (g_95 == 24); g_95 = safe_add_func_int8_t_s_s(g_95, 9))
    {
        int32_t *l_2414[5] = {&g_95, &g_219, &g_95, &g_219, &g_95};
        int32_t *l_2421[1];
        int i;
        for (i = 0; i < 1; i++)
            l_2421[i] = &g_32;
        for (l_20 = 0; (l_20 <= 46); l_20 = safe_add_func_uint16_t_u_u(l_20, 9))
        {
            int32_t **l_2417 = &g_59[0][0];
            int32_t *l_2418[9][10] = {{&g_32, (void*)0, &g_415, &g_219, &g_219, (void*)0, &g_219, &g_415, &g_219, (void*)0}, {&g_32, (void*)0, &g_415, &g_219, &g_219, (void*)0, &g_219, &g_415, &g_219, (void*)0}, {&g_32, (void*)0, &g_415, &g_219, &g_219, (void*)0, &g_219, &g_415, &g_219, (void*)0}, {&g_32, (void*)0, &g_415, &g_219, &g_219, (void*)0, &g_219, &g_415, &g_219, (void*)0}, {&g_32, (void*)0, &g_415, &g_219, &g_219, (void*)0, &g_219, &g_415, &g_219, (void*)0}, {&g_32, (void*)0, &g_415, &g_219, &g_219, (void*)0, &g_219, &g_415, &g_219, (void*)0}, {&g_32, (void*)0, &g_415, &g_219, &g_219, (void*)0, &g_219, &g_415, &g_219, (void*)0}, {&g_32, (void*)0, &g_415, &g_219, &g_219, (void*)0, &g_219, &g_415, &g_219, (void*)0}, {&g_32, (void*)0, &g_415, &g_219, &g_219, (void*)0, &g_219, &g_415, &g_219, (void*)0}};
            int i, j;
            l_33 = l_2414[2];
            if (((l_2414[0] == (void*)0) > ((((safe_lshift_func_int8_t_s_s(g_219, ((((*l_33) ^ 8U) , l_2417) != l_2417))) != (g_1821[3][3] == g_95)) >= g_613[4]) < g_1101)))
            {
                l_2414[2] = func_17(g_1101, l_2418[2][3]);
            }
            else
            {
                int32_t *l_2422[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_2422[i] = &g_95;
                for (l_2258 = 0; (l_2258 >= 36); l_2258 = safe_add_func_uint16_t_u_u(l_2258, 4))
                {
                    uint32_t l_2423 = 0x67BF4946;
                    (*l_2417) = l_2421[0];
                    (*l_2417) = l_2422[0];
                    (*g_743) = &l_2418[2][3];
                    return l_2423;
                }
                (*g_2001) = (*g_1148);
            }
        }
        g_1373 = ((*g_1148) , &g_272);
    }
    return (*l_33);
}



static int32_t * func_3(int32_t * p_4, uint32_t p_5, int32_t * p_6)
{
    int32_t l_2209 = 0x8CFEF325;
    int32_t ****l_2218[7][1];
    uint16_t l_2249[5][3] = {{65528U, 65528U, 1U}, {65528U, 65528U, 1U}, {65528U, 65528U, 1U}, {65528U, 65528U, 1U}, {65528U, 65528U, 1U}};
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_2218[i][j] = &g_536;
    }
    l_2209 = (*p_6);
    p_4 = func_10(g_627, l_2209, ((((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((0xC14E008D < (((safe_mul_func_uint32_t_u_u((l_2218[4][0] != (void*)0), (safe_sub_func_int16_t_s_s(g_217[6], p_5)))) < (safe_rshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s((p_5 && (p_5 ^ g_613[1])), g_627)) < g_231), 14))) && 0xE60406DB)), g_32)), p_5)), 0x9B)) , &p_4) != &p_6) == p_5));
    (*g_1958) = (((safe_lshift_func_int8_t_s_u((((((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((void*)0 == p_4) > (safe_add_func_uint8_t_u_u((!(safe_mod_func_uint8_t_u_u((~p_5), (safe_mul_func_int8_t_s_s(((+((((!(((safe_mul_func_int8_t_s_s((~g_1821[4][5]), (0x8B >= ((1U || p_5) >= (g_444[4] , (!((safe_add_func_int16_t_s_s((((safe_rshift_func_uint32_t_u_s((0 < 0x8F55), 31)) & g_444[3]) , p_5), 0xDCB8)) & 4294967295U))))))) , (-1)) < p_5)) >= (*g_2001)) & g_494) < g_1101)) >= 0x92), p_5))))), g_231))), g_231)), g_1821[3][3])) , l_2218[4][0]) != l_2218[0][0]) , 255U) | g_219), g_231)) ^ p_5) < l_2249[3][0]);
    p_4 = p_6;
    return p_4;
}



static int32_t * func_7(int32_t * p_8, int32_t p_9)
{
    uint8_t l_2027[4] = {0x8D, 0xF2, 0x8D, 0xF2};
    int32_t ***l_2028 = &g_113;
    int32_t *****l_2040 = &g_1839;
    int32_t **l_2167 = &g_1148;
    int16_t l_2198 = (-5);
    int i;
    (*p_8) = (*p_8);
    for (p_9 = 2; (p_9 <= 6); p_9 += 1)
    {
        uint32_t l_2024[2][8] = {{0x0987532E, 2U, 0x653FA3D7, 2U, 0x0987532E, 2U, 0x653FA3D7, 2U}, {0x0987532E, 2U, 0x653FA3D7, 2U, 0x0987532E, 2U, 0x653FA3D7, 2U}};
        int32_t *l_2029 = &g_95;
        int32_t *****l_2046[1];
        int32_t l_2098[9] = {0xFF63D53B, 0xFF63D53B, 0, 0xFF63D53B, 0xFF63D53B, 0, 0xFF63D53B, 0xFF63D53B, 0};
        uint32_t l_2129 = 4294967295U;
        int16_t l_2148 = 0x00DD;
        int32_t *l_2156 = &g_219;
        int32_t *****l_2158 = &g_1839;
volatile int32_t l_2181 = (-1);
        int16_t l_2182[5][9][1] = {{{0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}}, {{0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}}, {{0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}}, {{0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}}, {{0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}, {0xE518}}};
        int8_t l_2203[9][2] = {{0xCE, 2}, {0xCE, 2}, {0xCE, 2}, {0xCE, 2}, {0xCE, 2}, {0xCE, 2}, {0xCE, 2}, {0xCE, 2}, {0xCE, 2}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_2046[i] = &g_272;
        if (((safe_lshift_func_uint32_t_u_s((safe_add_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((safe_mul_func_uint32_t_u_u(((void*)0 == p_8), (&p_8 != ((0x70B86147 ^ (safe_mul_func_uint8_t_u_u((((((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint32_t_u_u(((((safe_rshift_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(((0xCF9CA406 & ((safe_sub_func_uint16_t_u_u(l_2024[0][2], ((safe_mod_func_int32_t_s_s((p_8 != (((g_231 > (p_9 , 3)) , g_613[1]) , (void*)0)), 4294967295U)) >= l_2027[2]))) , g_613[7])) >= g_1821[1][4]), l_2027[2])) ^ 0), l_2024[1][6])) >= p_9) ^ 0x10) || (-7)), 18)), l_2024[0][6])) , 0xC0F71704) , (void*)0) != l_2028) < g_444[1]), 0x9A))) , (void*)0)))), (*p_8))) , g_627), p_9)), (*p_8))) <= p_9))
        {
            p_8 = l_2029;
        }
        else
        {
            int32_t l_2045 = (-2);
            int16_t l_2061 = 0x1194;
            uint32_t l_2063 = 0x47D0D36E;
            int32_t *l_2065 = &g_219;
            uint8_t l_2119 = 254U;
            int32_t l_2120 = 0xE56CAA84;
            int32_t ***l_2146[2][2];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    l_2146[i][j] = &g_113;
            }
            if ((safe_sub_func_uint32_t_u_u((l_2029 != (((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(g_217[0], (&g_1839 == l_2040))), (safe_mod_func_uint16_t_u_u(g_1915, ((p_9 | (safe_mul_func_uint16_t_u_u(l_2045, 65530U))) , (((*p_8) < 0U) , p_9)))))), 1)), 10)) == l_2045) , p_8)), (*p_8))))
            {
                uint32_t l_2060 = 0x3E048985;
                int8_t l_2062 = 0x83;
                int16_t l_2105 = 1;
                uint8_t l_2114 = 6U;
                for (g_1637 = 0; (g_1637 <= 8); g_1637 += 1)
                {
                    uint16_t l_2055 = 0U;
                    if ((*p_8))
                    {
                        int32_t *****l_2047 = &g_1839;
                        if ((*p_8))
                            break;
                        l_2063 = ((p_9 ^ ((l_2046[0] != l_2047) == p_9)) & ((safe_unary_minus_func_int16_t_s((safe_mod_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_s((((((l_2055 , l_2045) >= g_231) & ((((0xFA ^ (safe_mod_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s(0xAD)), 0x0555))) || p_9) <= (*p_8)) || p_9)) , g_2059) >= l_2060), g_1821[5][3])) && p_9) == (*p_8)), l_2061)) || l_2062), (-6))))) != p_9));
                    }
                    else
                    {
                        int32_t *l_2064 = &g_95;
                        l_2065 = l_2064;
                        (*l_2065) = ((safe_lshift_func_uint32_t_u_u((((safe_add_func_int8_t_s_s((*l_2064), (&p_8 == ((safe_unary_minus_func_uint32_t_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((2U <= (((+g_1101) >= (safe_lshift_func_int32_t_s_u((1 & (safe_mod_func_int32_t_s_s((safe_mul_func_int32_t_s_s((((((248U ^ g_32) != (((p_9 || (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((safe_mul_func_uint32_t_u_u(g_562, 0xD6D93069)), 10)), 0xEB4C73C4))) , 0xBD8F5905) < 8)) , 0x84) && (-2)) < p_9), (*p_8))), (-1)))), (*l_2064)))) < (-1))), g_231)), 14)), 3)))) , &l_2064)))) , &p_8) != &l_2065), g_627)) , (*p_8));
                        p_8 = func_10(((safe_mul_func_int32_t_s_s((g_1637 <= p_9), (safe_add_func_int16_t_s_s(0x511D, ((l_2060 && (safe_rshift_func_int8_t_s_u((-1), (((safe_mul_func_uint8_t_u_u(l_2055, (g_562 >= p_9))) , (p_9 || 0x9B)) > 0x6B9E)))) & l_2098[1]))))) == g_627), p_9, (*l_2065));
                    }
                }
                if ((*p_8))
                {
                    if ((((0xE02D > ((~(safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(0x13, (+((-1) && (((l_2105 , (!(safe_add_func_uint32_t_u_u((((+(safe_add_func_uint8_t_u_u(g_562, (safe_rshift_func_int8_t_s_s(l_2114, 2))))) != (((*p_8) ^ ((safe_mod_func_int16_t_s_s((0x57 & ((safe_mod_func_uint32_t_u_u(9U, l_2119)) < g_627)), 3U)) , 0x753631BC)) , 0x1DCBAB99)) != l_2105), (*p_8))))) & g_562) , 1U))))), g_613[6]))) <= g_1821[5][6])) ^ g_1821[3][3]) , l_2120))
                    {
                        return p_8;
                    }
                    else
                    {
                        (*p_8) = 3;
                        return p_8;
                    }
                }
                else
                {
                    g_1958 = p_8;
                }
            }
            else
            {
                uint32_t l_2147 = 0x27DBC228;
                int32_t **l_2155 = (void*)0;
                int32_t *l_2157 = (void*)0;
                (*l_2029) = ((safe_sub_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((safe_mul_func_int32_t_s_s(1, (safe_add_func_int16_t_s_s(g_444[4], (((l_2129 >= ((safe_add_func_int8_t_s_s(((safe_lshift_func_uint32_t_u_u((g_1101 & ((((safe_mul_func_uint8_t_u_u((safe_mul_func_uint32_t_u_u((safe_mul_func_int32_t_s_s((((safe_add_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((((0U >= (p_9 > ((*l_2065) && ((((safe_sub_func_uint16_t_u_u((((void*)0 == l_2146[1][0]) , g_217[0]), p_9)) , 0xC3B73322) | g_217[5]) , g_219)))) , &g_1839) != l_2040), l_2147)) <= p_9), g_219)) & 6) == (*l_2029)), 0xFE5635DB)), p_9)), p_9)) && g_1821[5][5]) || 1) , p_9)), 1)) <= (*l_2065)), g_627)) == (*l_2029))) , 6U) & 0x27AB))))), (*p_8))) | p_9), g_2059)) < p_9);
                l_2157 = p_8;
                l_2046[0] = l_2158;
                l_2157 = p_8;
            }
            if ((*p_8))
                continue;
        }
        for (l_2148 = 6; (l_2148 >= 0); l_2148 -= 1)
        {
            int32_t *l_2159 = &g_95;
            int32_t l_2175 = (-4);
            l_2159 = p_8;
            for (g_1532 = 0; (g_1532 <= 1); g_1532 += 1)
            {
                int32_t *l_2160 = (void*)0;
                int32_t *l_2161 = &g_415;
                int i, j;
                for (g_1101 = 0; (g_1101 <= 3); g_1101 += 1)
                {
                    return l_2160;
                }
                g_442[g_1532][l_2148] = l_2161;
            }
            if (1)
            {
                uint32_t l_2201 = 2U;
                if ((p_8 != (void*)0))
                {
                    int32_t *l_2186[5][7] = {{&g_219, &l_2098[1], &l_2098[1], &g_219, &l_2098[1], &l_2098[1], &l_2098[1]}, {&g_219, &l_2098[1], &l_2098[1], &g_219, &l_2098[1], &l_2098[1], &l_2098[1]}, {&g_219, &l_2098[1], &l_2098[1], &g_219, &l_2098[1], &l_2098[1], &l_2098[1]}, {&g_219, &l_2098[1], &l_2098[1], &g_219, &l_2098[1], &l_2098[1], &l_2098[1]}, {&g_219, &l_2098[1], &l_2098[1], &g_219, &l_2098[1], &l_2098[1], &l_2098[1]}};
                    int i, j;
                    l_2186[1][5] = func_17((safe_rshift_func_int8_t_s_u((!9U), 5)), ((((*l_2159) < (p_9 > p_9)) != g_1532) , l_2186[2][0]));
                }
                else
                {
                    int32_t *****l_2204 = (void*)0;
                    (*g_421) = &p_8;
                    for (l_2181 = 0; (l_2181 <= 6); l_2181 += 1)
                    {
                        int32_t *l_2208[7][9] = {{&g_219, &g_95, &g_415, (void*)0, (void*)0, (void*)0, &g_415, &l_2098[5], &g_95}, {&g_219, &g_95, &g_415, (void*)0, (void*)0, (void*)0, &g_415, &l_2098[5], &g_95}, {&g_219, &g_95, &g_415, (void*)0, (void*)0, (void*)0, &g_415, &l_2098[5], &g_95}, {&g_219, &g_95, &g_415, (void*)0, (void*)0, (void*)0, &g_415, &l_2098[5], &g_95}, {&g_219, &g_95, &g_415, (void*)0, (void*)0, (void*)0, &g_415, &l_2098[5], &g_95}, {&g_219, &g_95, &g_415, (void*)0, (void*)0, (void*)0, &g_415, &l_2098[5], &g_95}, {&g_219, &g_95, &g_415, (void*)0, (void*)0, (void*)0, &g_415, &l_2098[5], &g_95}};
                        int i, j;
                        (*g_113) = (void*)0;
                        (*l_2156) = ((((safe_lshift_func_uint32_t_u_s((safe_lshift_func_int8_t_s_s((~g_219), (safe_mod_func_uint32_t_u_u(((safe_lshift_func_int32_t_s_u((safe_sub_func_int16_t_s_s(l_2198, p_9)), ((safe_rshift_func_int8_t_s_u(l_2201, 3)) < p_9))) && ((!l_2203[5][0]) , (((void*)0 != l_2204) ^ (~(safe_add_func_uint16_t_u_u((g_1915 < 0x0F4E), g_494)))))), 0xC7645D9A)))), 21)) & p_9) , g_1915) ^ p_9);
                        l_2208[1][6] = p_8;
                    }
                    (**g_421) = &l_2175;
                }
            }
            else
            {
                (*p_8) = (*g_1958);
            }
            return (*l_2167);
        }
    }
    p_8 = p_8;
    return (*l_2167);
}



static int32_t * func_10(uint32_t p_11, int8_t p_12, int32_t p_13)
{
    int32_t *l_1650 = &g_219;
    int32_t ***l_1700 = &g_113;
    int32_t *l_1732 = (void*)0;
    int16_t l_1789 = 1;
    uint32_t l_1841 = 0x9AA8FB8B;
    int32_t *****l_1863 = &g_272;
    int32_t *l_1936[2][2][6] = {{{&g_219, &g_32, &g_219, &g_95, (void*)0, (void*)0}, {&g_219, &g_32, &g_219, &g_95, (void*)0, (void*)0}}, {{&g_219, &g_32, &g_219, &g_95, (void*)0, (void*)0}, {&g_219, &g_32, &g_219, &g_95, (void*)0, (void*)0}}};
    int8_t l_1967 = (-8);
    int32_t l_1997 = 0xC15F5134;
    int32_t **l_1998[10][9][2] = {{{&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}}, {{&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}}, {{&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}}, {{&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}}, {{&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}}, {{&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}}, {{&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}}, {{&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}}, {{&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}}, {{&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}, {&g_59[0][0], &g_1148}}};
    int32_t *l_2003 = &g_415;
    int i, j, k;
    l_1650 = l_1650;
    for (g_32 = (-21); (g_32 != 22); g_32 = safe_add_func_uint8_t_u_u(g_32, 1))
    {
        uint32_t l_1663 = 0xB2EE41E5;
        int32_t ***l_1709[4];
        int16_t l_1759 = 0x1AE1;
        int32_t *****l_1781 = &g_272;
        int8_t l_1800 = (-1);
        int16_t l_1840 = 0xD634;
        uint32_t l_1984 = 4294967286U;
        int i;
        for (i = 0; i < 4; i++)
            l_1709[i] = (void*)0;
    }
    g_1148 = l_1732;
    for (l_1789 = 0; (l_1789 == (-2)); l_1789 = safe_sub_func_int8_t_s_s(l_1789, 3))
    {
        int32_t *l_2002 = &g_95;
        l_2002 = g_2001;
    }
    return l_2003;
}



static int32_t func_15(int32_t * p_16)
{
    int32_t *****l_1369 = &g_272;
    uint32_t l_1375 = 0x2CC1383C;
    uint16_t l_1394 = 0x32AC;
    int32_t *l_1482 = &g_219;
    uint8_t l_1490 = 255U;
    uint32_t l_1591 = 1U;
    int32_t ****l_1618 = &g_112;
    int32_t l_1644 = 0x1BB94945;
    int32_t l_1649[1];
    int i;
    for (i = 0; i < 1; i++)
        l_1649[i] = (-10);
    for (g_32 = 0; (g_32 >= 9); ++g_32)
    {
        int8_t l_1368[6][6] = {{0xF3, 0xE2, 0x8F, 0x0D, 0x8F, 0xE2}, {0xF3, 0xE2, 0x8F, 0x0D, 0x8F, 0xE2}, {0xF3, 0xE2, 0x8F, 0x0D, 0x8F, 0xE2}, {0xF3, 0xE2, 0x8F, 0x0D, 0x8F, 0xE2}, {0xF3, 0xE2, 0x8F, 0x0D, 0x8F, 0xE2}, {0xF3, 0xE2, 0x8F, 0x0D, 0x8F, 0xE2}};
        int32_t ****l_1372 = &g_536;
        int32_t *l_1374[4][1][6] = {{{&g_415, &g_415, &g_415, &g_415, &g_415, &g_415}}, {{&g_415, &g_415, &g_415, &g_415, &g_415, &g_415}}, {{&g_415, &g_415, &g_415, &g_415, &g_415, &g_415}}, {{&g_415, &g_415, &g_415, &g_415, &g_415, &g_415}}};
        int16_t l_1397 = (-1);
        int32_t l_1422 = 0;
        uint16_t l_1436 = 0x5274;
        uint8_t l_1474 = 0x73;
        uint32_t l_1572 = 4294967287U;
        int32_t l_1628 = 0x45D04975;
        int i, j, k;
        p_16 = func_17(l_1368[0][4], func_17(g_627, func_17(l_1368[0][4], func_17((((void*)0 == l_1369) > ((safe_lshift_func_uint32_t_u_u((&g_112 == l_1372), ((void*)0 == g_1373))) & g_415)), l_1374[1][0][4]))));
        for (g_219 = 0; (g_219 <= 5); g_219 += 1)
        {
            uint8_t l_1399 = 1U;
            int32_t ***l_1421 = &g_113;
            int32_t *l_1510 = (void*)0;
            int8_t l_1531 = 8;
            int32_t l_1537 = 0x3DFBCD90;
            uint32_t l_1552 = 0x1405C95F;
            int8_t l_1553 = 0x61;
            int i, j;
        }
        p_16 = func_17((*l_1482), func_17((safe_mod_func_uint32_t_u_u(g_444[4], ((*l_1482) ^ (((7 && l_1644) & (safe_lshift_func_int32_t_s_u((((65527U & g_613[4]) != (safe_mod_func_int16_t_s_s((g_217[0] && (l_1372 != l_1618)), g_444[4]))) & l_1649[0]), 15))) == 4294967287U)))), l_1374[1][0][4]));
        (*l_1482) = (0x77D0 <= g_494);
    }
    return g_217[0];
}



static int32_t * func_17(uint16_t p_18, int32_t * p_19)
{
    int32_t *l_1364 = &g_415;
    int32_t *l_1365[3];
    int i;
    for (i = 0; i < 3; i++)
        l_1365[i] = &g_415;
    l_1364 = l_1364;
    return l_1365[0];
}



static int32_t * func_21(uint32_t p_22, int16_t p_23, int32_t p_24, uint32_t p_25, int8_t p_26)
{
    int8_t l_402[4];
    int32_t ***l_423 = &g_113;
    int8_t l_443 = 0xD5;
    int8_t l_490[10] = {1, 0x08, 1, 0x08, 1, 0x08, 1, 0x08, 1, 0x08};
    int16_t l_512 = 0xE525;
    int32_t *l_548 = &g_95;
    uint8_t l_563 = 0xD1;
    int32_t l_612 = (-6);
    int32_t *****l_666[2][10][8] = {{{&g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0}, {&g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0}, {&g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0}, {&g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0}, {&g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0}, {&g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0}, {&g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0}, {&g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0}, {&g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0}, {&g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0}}, {{&g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0}, {&g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0}, {&g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0}, {&g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0}, {&g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0}, {&g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0}, {&g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0}, {&g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0}, {&g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0}, {&g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0, &g_272, (void*)0}}};
    int32_t ***l_687 = &g_113;
    int32_t *l_772 = &g_415;
    int32_t ****l_806 = (void*)0;
    int32_t *****l_1002 = (void*)0;
    uint32_t l_1005 = 3U;
    int32_t ***l_1009 = &g_113;
    uint32_t l_1079 = 0x3B2086A1;
    int32_t l_1090 = 0xB5496C58;
    uint32_t l_1157[4][5][4] = {{{9U, 0xFD2EADCB, 0U, 4294967293U}, {9U, 0xFD2EADCB, 0U, 4294967293U}, {9U, 0xFD2EADCB, 0U, 4294967293U}, {9U, 0xFD2EADCB, 0U, 4294967293U}, {9U, 0xFD2EADCB, 0U, 4294967293U}}, {{9U, 0xFD2EADCB, 0U, 4294967293U}, {9U, 0xFD2EADCB, 0U, 4294967293U}, {9U, 0xFD2EADCB, 0U, 4294967293U}, {9U, 0xFD2EADCB, 0U, 4294967293U}, {9U, 0xFD2EADCB, 0U, 4294967293U}}, {{9U, 0xFD2EADCB, 0U, 4294967293U}, {9U, 0xFD2EADCB, 0U, 4294967293U}, {9U, 0xFD2EADCB, 0U, 4294967293U}, {9U, 0xFD2EADCB, 0U, 4294967293U}, {9U, 0xFD2EADCB, 0U, 4294967293U}}, {{9U, 0xFD2EADCB, 0U, 4294967293U}, {9U, 0xFD2EADCB, 0U, 4294967293U}, {9U, 0xFD2EADCB, 0U, 4294967293U}, {9U, 0xFD2EADCB, 0U, 4294967293U}, {9U, 0xFD2EADCB, 0U, 4294967293U}}};
    int16_t l_1290 = 0x6771;
    int32_t ***l_1327 = &g_113;
    int32_t *l_1362 = &g_219;
    int32_t *l_1363 = (void*)0;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_402[i] = 0xA9;
    if (l_402[0])
    {
        int32_t l_404[2];
        int32_t l_466 = 0x288A3AD5;
        int32_t **l_472 = &g_59[0][0];
        int i;
        for (i = 0; i < 2; i++)
            l_404[i] = 0x162033E1;
        for (g_219 = 0; (g_219 <= 8); g_219 += 1)
        {
            int32_t **l_417 = (void*)0;
            int32_t *l_493 = (void*)0;
            int i;
            for (p_26 = 0; (p_26 <= 8); p_26 += 1)
            {
                int32_t l_441 = 0x35818E4E;
                int32_t *l_467 = &l_466;
                int32_t ****l_491 = &l_423;
                int32_t *l_492 = &l_466;
                for (g_32 = 0; (g_32 >= 0); g_32 -= 1)
                {
                    uint32_t l_403[9] = {4294967289U, 0xFEA2F73B, 4294967289U, 0xFEA2F73B, 4294967289U, 0xFEA2F73B, 4294967289U, 0xFEA2F73B, 4294967289U};
                    int32_t ***l_422 = &l_417;
                    int i;
                    for (g_95 = 0; (g_95 >= 0); g_95 -= 1)
                    {
                        int32_t *l_413 = (void*)0;
                        int32_t *l_414 = &g_415;
                        int32_t ***l_420[3];
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_420[i] = &l_417;
                        (*l_414) = (g_217[(g_95 + 5)] < (((g_217[(g_95 + 3)] < ((void*)0 != &g_59[g_32][g_95])) , 0x93E7730F) , ((((l_403[2] & (-8)) || l_404[0]) >= ((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(((safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s((p_25 & g_217[2]), p_23)), 0x1536)) & p_25), 0)) != 0x8CB1), g_32)) >= 1U)) , g_219)));
                        if (p_25)
                            break;
                        p_24 = ((safe_unary_minus_func_uint32_t_u(g_217[4])) < ((l_417 != (void*)0) , (safe_add_func_int32_t_s_s(((((l_420[1] != g_421) , (void*)0) == (((l_422 == l_423) || ((safe_rshift_func_int16_t_s_u(g_219, p_23)) ^ g_95)) , (*g_271))) | g_219), p_24))));
                        g_59[g_32][g_95] = ((((((safe_mul_func_uint8_t_u_u(0xAA, ((((((safe_lshift_func_uint16_t_u_u(((0x7C & (p_22 != (safe_add_func_int16_t_s_s((1 < (((p_23 != (+(((((safe_rshift_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((g_217[4] , (safe_mod_func_uint32_t_u_u(4294967294U, (((safe_mul_func_int8_t_s_s(l_441, (g_442[0][2] != &p_24))) || p_24) && 0xB449)))) && g_217[5]), l_441)), l_441)) , g_95) < 0x14) , p_22) > l_443))) > 0x3BAC) != 9U)), g_95)))) == p_23), 15)) == p_25) , g_444[4]) || 0xACA357E0) > 0U) , g_444[1]))) , p_23) > p_24) , p_22) >= 0xCD3F) , &p_24);
                    }
                    if (p_26)
                    {
                        uint16_t l_464 = 0xE23E;
                        int32_t **l_465 = &g_442[0][2];
                        l_466 = (safe_rshift_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s((((((l_441 ^ (safe_mul_func_uint8_t_u_u((safe_lshift_func_int32_t_s_s(((safe_add_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((safe_lshift_func_int16_t_s_u((0U || (((0U > 4294967294U) >= (safe_mul_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(l_464, p_23)) & l_464), ((p_26 , l_465) == (*l_422))))) , g_219)), 5)))), 0xF3)) > l_441), p_25)), g_95))) , p_25) <= p_24) ^ l_441) && 0xE67ACE2E), p_22)), 0x8F)) , p_26) ^ g_32), 28));
                    }
                    else
                    {
                        (**g_421) = &p_24;
                    }
                }
                if (p_26)
                {
                    int16_t l_471 = 0xBB68;
                    l_467 = (void*)0;
                    (**l_423) = ((safe_rshift_func_uint32_t_u_u(0x61FEEB75, ((((((+(((0x5A71 == 0xF109) | (p_25 || ((l_471 ^ ((g_444[4] , (((&p_24 == &p_24) , &l_466) == (void*)0)) , 65533U)) != 4294967295U))) | 0xC0B4)) >= p_25) | g_95) , (*l_423)) != l_472) > g_217[0]))) , (void*)0);
                    p_24 = (safe_add_func_uint16_t_u_u(p_23, 1U));
                }
                else
                {
                    (**l_423) = (((&l_423 == ((((((((((safe_rshift_func_uint32_t_u_s((0x0D == ((&l_423 == (p_22 , ((g_217[2] > ((safe_rshift_func_uint32_t_u_s((safe_add_func_uint32_t_u_u(4294967295U, (g_217[0] , ((safe_mul_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((((g_95 < ((+(safe_add_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u(p_24, 0x2D)) , 0xFC6D5E83) , p_22), 2))) < p_24)) == 0x2810) > p_25), p_24)), 0xE2015F3E)) >= p_22)))), 29)) , l_490[2])) , &l_423))) , p_26)), 13)) >= p_25) < 0x304D) ^ g_415) || p_26) >= p_22) , (-5)) > 0xE5) , l_404[0]) , l_491)) >= 0xCA) , &p_24);
                    (**l_423) = (void*)0;
                }
                (*l_492) = p_24;
                return l_493;
            }
            if (g_217[g_219])
                break;
        }
    }
    else
    {
        int32_t l_520 = 0x9C187901;
        int32_t *l_527 = &g_95;
        int32_t ***l_545 = &g_113;
        if (g_494)
        {
            uint32_t l_508 = 0x978D4368;
            int32_t ****l_522 = &l_423;
            int32_t l_523 = (-7);
            if (((g_217[0] || g_32) || (((((safe_mod_func_uint16_t_u_u(p_26, 0xCB75)) && (~(safe_rshift_func_int8_t_s_u(((safe_mod_func_uint32_t_u_u((((safe_mul_func_int16_t_s_s((safe_mul_func_uint32_t_u_u(l_508, (-1))), (g_231 < p_26))) && (!(safe_mul_func_int8_t_s_s((g_494 != l_508), g_217[6])))) ^ l_508), p_24)) <= g_415), 2)))) , l_512) & 0x9B) < g_231)))
            {
                int32_t *****l_519[10][1][5] = {{{&g_272, &g_272, &g_272, &g_272, &g_272}}, {{&g_272, &g_272, &g_272, &g_272, &g_272}}, {{&g_272, &g_272, &g_272, &g_272, &g_272}}, {{&g_272, &g_272, &g_272, &g_272, &g_272}}, {{&g_272, &g_272, &g_272, &g_272, &g_272}}, {{&g_272, &g_272, &g_272, &g_272, &g_272}}, {{&g_272, &g_272, &g_272, &g_272, &g_272}}, {{&g_272, &g_272, &g_272, &g_272, &g_272}}, {{&g_272, &g_272, &g_272, &g_272, &g_272}}, {{&g_272, &g_272, &g_272, &g_272, &g_272}}};
                int i, j, k;
                for (g_32 = 25; (g_32 != 21); g_32 = safe_sub_func_uint32_t_u_u(g_32, 4))
                {
                    int32_t l_521[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_521[i] = 0x5D25ACF4;
                    l_520 = (safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((g_219 , l_519[9][0][1]) != (l_520 , &g_272)), 0xD8)), (p_23 | l_521[0])));
                    if (p_25)
                        continue;
                }
                (*g_271) = l_522;
            }
            else
            {
                int32_t *l_526[4][2][5] = {{{&g_219, &l_523, &g_32, &l_523, &g_219}, {&g_219, &l_523, &g_32, &l_523, &g_219}}, {{&g_219, &l_523, &g_32, &l_523, &g_219}, {&g_219, &l_523, &g_32, &l_523, &g_219}}, {{&g_219, &l_523, &g_32, &l_523, &g_219}, {&g_219, &l_523, &g_32, &l_523, &g_219}}, {{&g_219, &l_523, &g_32, &l_523, &g_219}, {&g_219, &l_523, &g_32, &l_523, &g_219}}};
                int i, j, k;
                l_523 = 0xAE37CC1E;
                for (p_25 = 0; (p_25 != 30); ++p_25)
                {
                    for (l_512 = 4; (l_512 >= 1); l_512 -= 1)
                    {
                        (***l_522) = &p_24;
                        (*g_113) = l_526[0][0][2];
                    }
                }
                (*g_113) = &l_520;
            }
            p_24 = 1;
            return l_527;
        }
        else
        {
            int16_t l_546 = 0xDA0B;
            for (g_32 = (-24); (g_32 < 0); g_32 = safe_add_func_uint8_t_u_u(g_32, 6))
            {
                uint32_t l_547[8] = {2U, 0x1260187B, 2U, 0x1260187B, 2U, 0x1260187B, 2U, 0x1260187B};
                int i;
                if (p_24)
                    break;
                l_547[6] = (p_25 != (0x6D8EE51C && (safe_add_func_uint32_t_u_u(((safe_mul_func_uint32_t_u_u(g_494, (safe_add_func_uint16_t_u_u(((void*)0 != g_536), (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint32_t_u_u(((((0x2B & ((((((*l_527) , ((safe_add_func_int32_t_s_s((((((p_22 || (safe_add_func_int8_t_s_s(((void*)0 != l_545), l_546))) , p_23) >= 0xE2CA) , l_546) <= p_25), 4294967287U)) <= g_95)) > 0x025B2839) == 8) <= 1U) < 0x7D73)) != 249U) , 0x392BA395) <= p_26), p_22)), 0xF46E2FC3)))))) != 0x73), g_444[4]))));
            }
        }
        return l_548;
    }
    if ((*l_548))
    {
        int32_t l_553 = 0x451BF688;
        int32_t *****l_566 = &g_272;
        int32_t ***l_585[2];
        int i;
        for (i = 0; i < 2; i++)
            l_585[i] = &g_113;
        (*l_548) = p_25;
        if ((0x07 & ((safe_mul_func_int32_t_s_s((((safe_mul_func_int32_t_s_s(l_553, (g_217[7] | (((0x4740 <= (((((&l_553 == ((safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(g_444[2], ((safe_unary_minus_func_int32_t_s(((safe_unary_minus_func_int16_t_s((safe_mul_func_int32_t_s_s((g_562 | ((void*)0 == &l_553)), l_563)))) | 65526U))) , l_553))), g_444[6])) , &p_24)) <= (-7)) <= l_553) && 0x97FCE368) < (*l_548))) , p_26) > (*l_548))))) , p_23) || (-2)), p_22)) & p_26)))
        {
            uint8_t l_567[7] = {0x9E, 0xDC, 0x9E, 0xDC, 0x9E, 0xDC, 0x9E};
            uint16_t l_577 = 0x36C7;
            int i;
            p_24 = (((((((safe_mul_func_uint32_t_u_u(((void*)0 != l_566), l_567[0])) && (!((*l_548) && ((safe_mul_func_uint32_t_u_u((+((((p_26 , &p_24) != (((safe_lshift_func_uint16_t_u_u(65532U, ((p_24 > p_26) >= p_25))) ^ (*l_548)) , (void*)0)) > l_567[5]) != 4294967295U)), p_24)) || 0)))) ^ 0x8C) || 0xE89A52A5) ^ p_25) , (*l_566)) != (void*)0);
            if (p_23)
            {
                int32_t *l_576[8] = {&g_95, &g_415, &g_95, &g_415, &g_95, &g_415, &g_95, &g_415};
                int i;
                for (g_494 = 0; (g_494 <= (-30)); g_494 = safe_sub_func_uint32_t_u_u(g_494, 7))
                {
                    for (l_563 = 0; (l_563 <= 0); l_563 += 1)
                    {
                        int i, j;
                        g_59[l_563][l_563] = l_576[0];
                        g_59[l_563][l_563] = &p_24;
                        if (l_567[(l_563 + 5)])
                            continue;
                    }
                    if (l_577)
                        continue;
                }
            }
            else
            {
                uint8_t l_578 = 0U;
                int32_t ****l_581 = &g_536;
                if (l_578)
                {
                    for (g_562 = 0; (g_562 < (-20)); g_562 = safe_sub_func_uint32_t_u_u(g_562, 1))
                    {
                        (**g_421) = (void*)0;
                    }
                    return &g_95;
                }
                else
                {
                    int32_t *l_582[8];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_582[i] = &g_32;
                    (*l_566) = (*g_271);
                    (*g_271) = l_581;
                    return l_582[1];
                }
            }
            p_24 = (safe_rshift_func_uint8_t_u_s(g_217[7], 0));
        }
        else
        {
            int8_t l_586 = 0x91;
            int32_t *l_589 = &g_95;
            int32_t *****l_590 = &g_272;
            (**l_566) = l_585[1];
            l_586 = (g_562 > (-1));
            for (l_563 = 8; (l_563 <= 56); l_563 = safe_add_func_int8_t_s_s(l_563, 8))
            {
                (****l_566) = l_589;
            }
            l_590 = &g_272;
        }
        for (g_562 = 1; (g_562 >= 0); g_562 -= 1)
        {
            int32_t *l_591 = &g_415;
            int8_t l_611 = 0xD8;
            (*g_113) = l_591;
            (*l_591) = (((*l_548) , (((((g_231 , (((safe_mod_func_int8_t_s_s(g_231, (safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((+g_219), (safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(0x27, (safe_lshift_func_uint16_t_u_s(p_22, (((((((safe_add_func_int8_t_s_s(((g_219 <= ((((4U | (g_444[4] | l_611)) <= g_217[0]) , p_22) >= g_32)) > p_22), p_24)) == 0x6A) , (*l_591)) > 0x14889515) >= 255U) , (*l_548)) < (-5)))))) , g_217[0]), p_25)), p_24)))), g_444[4])), l_612)))) & g_219) | 6U)) < p_23) & g_613[1]) != 5U) <= p_23)) ^ p_26);
            if ((*l_591))
                break;
            for (p_25 = 0; p_25 < 9; p_25 += 1)
            {
                g_217[p_25] = (-3);
            }
            for (g_231 = 3; (g_231 >= 0); g_231 -= 1)
            {
                uint32_t l_625 = 0U;
                if ((safe_add_func_uint8_t_u_u(0x8E, (safe_lshift_func_int8_t_s_s(p_22, 6)))))
                {
                    int i, j;
                    if (p_25)
                        break;
                    if ((safe_add_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s((safe_rshift_func_uint32_t_u_s((0xA683 | (safe_lshift_func_int16_t_s_u(0xDAC4, 13))), 31)))) <= l_625), (&p_24 != (void*)0))))
                    {
                        int i, j;
                        g_442[g_562][(g_231 + 3)] = &p_24;
                        (**g_421) = &p_24;
                    }
                    else
                    {
                        (**g_421) = &p_24;
                    }
                    (**l_423) = &p_24;
                }
                else
                {
                    int32_t *l_626[2][2][4] = {{{&g_95, &g_219, &g_95, &g_219}, {&g_95, &g_219, &g_95, &g_219}}, {{&g_95, &g_219, &g_95, &g_219}, {&g_95, &g_219, &g_95, &g_219}}};
                    int i, j, k;
                    for (p_22 = 0; (p_22 <= 1); p_22 += 1)
                    {
                        int i, j;
                        g_442[g_562][(g_562 + 5)] = g_442[g_562][(g_562 + 4)];
                        g_442[p_22][g_562] = l_626[0][1][0];
                        if (g_627)
                            continue;
                    }
                    if (p_23)
                        break;
                }
            }
        }
        (*l_548) = ((void*)0 != (*g_271));
    }
    else
    {
        int32_t **l_630 = &l_548;
        uint32_t l_662 = 0x1D302949;
        int32_t l_715 = 0x976A806F;
        uint8_t l_752 = 0xB3;
        int32_t *****l_774 = &g_272;
        int32_t l_854[9][9][3] = {{{0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}}, {{0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}}, {{0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}}, {{0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}}, {{0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}}, {{0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}}, {{0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}}, {{0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}}, {{0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}, {0x98256512, (-1), 0xF5D5335A}}};
        int8_t l_918[3][1][7] = {{{(-5), (-1), (-5), (-1), (-5), (-1), (-5)}}, {{(-5), (-1), (-5), (-1), (-5), (-1), (-5)}}, {{(-5), (-1), (-5), (-1), (-5), (-1), (-5)}}};
        int16_t l_955 = 0x1D3A;
        int16_t l_1064 = 3;
        int32_t l_1132 = 0xC4114F7B;
        uint8_t l_1160 = 0xD4;
        int i, j, k;
        if (((((p_26 | (0U != (safe_lshift_func_uint8_t_u_u(((((&g_272 == (g_613[1] , (void*)0)) > (((void*)0 == l_630) && g_95)) <= (1 >= g_444[5])) < 9), p_22)))) != (**l_630)) < (*l_548)) <= 0xD1F98C6F))
        {
            int8_t l_648[7] = {0x0F, 0x0F, 0x3A, 0x0F, 0x0F, 0x3A, 0x0F};
            int32_t *l_651[10][6] = {{&l_612, &g_95, &g_32, &g_32, &g_95, &l_612}, {&l_612, &g_95, &g_32, &g_32, &g_95, &l_612}, {&l_612, &g_95, &g_32, &g_32, &g_95, &l_612}, {&l_612, &g_95, &g_32, &g_32, &g_95, &l_612}, {&l_612, &g_95, &g_32, &g_32, &g_95, &l_612}, {&l_612, &g_95, &g_32, &g_32, &g_95, &l_612}, {&l_612, &g_95, &g_32, &g_32, &g_95, &l_612}, {&l_612, &g_95, &g_32, &g_32, &g_95, &l_612}, {&l_612, &g_95, &g_32, &g_32, &g_95, &l_612}, {&l_612, &g_95, &g_32, &g_32, &g_95, &l_612}};
            int32_t l_762 = 0;
            int32_t ****l_783 = &g_112;
            int32_t ***l_786 = &g_113;
            int32_t l_787 = 0;
            int32_t **l_797 = &l_548;
            int32_t l_813 = 4;
            int i, j;
            if ((safe_unary_minus_func_int8_t_s((!(safe_mul_func_uint8_t_u_u(((**l_630) != (safe_lshift_func_int16_t_s_s(0x6CE7, 10))), g_219))))))
            {
                int32_t ***l_641 = &g_113;
                int32_t *****l_642 = &g_272;
                int32_t l_647[6][9][4] = {{{0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}}, {{0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}}, {{0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}}, {{0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}}, {{0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}}, {{0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}, {0x90F51C61, 0, (-7), (-3)}}};
                uint8_t l_677[5] = {0x19, 0xB8, 0x19, 0xB8, 0x19};
                int i, j, k;
                if ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((l_641 != ((l_642 == (void*)0) , l_423)), (safe_mod_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((((l_647[5][7][0] || (((**l_630) || (l_648[5] ^ (p_23 == (safe_mul_func_int32_t_s_s((g_219 <= p_26), 0x63C9E209))))) , p_24)) ^ 0xF06E) || g_219), p_22)) < 6U), g_415)))), 0)))
                {
                    int32_t l_660 = (-1);
                    int32_t ****l_661 = &g_112;
                    for (g_95 = 0; (g_95 <= 9); g_95 += 1)
                    {
                        int i;
                        if (l_490[g_95])
                            break;
                        (*l_630) = l_651[3][4];
                    }
                    (*l_641) = (*l_423);
                    (*l_548) = (safe_lshift_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(((p_25 ^ (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((**l_630), 2)), p_23))) <= (l_660 < (((p_22 ^ (p_25 , ((void*)0 != l_661))) < l_662) || p_24))), p_23)) ^ 0U), p_24));
                    (**l_630) = ((safe_mul_func_int16_t_s_s(((+p_26) < p_26), ((g_444[4] || (((void*)0 == l_666[1][1][3]) , 0x362C)) || ((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((p_24 , (safe_rshift_func_int32_t_s_s((((void*)0 == l_642) ^ l_677[4]), p_24))) ^ g_231), g_32)), p_23)), 0)), g_613[1])) & p_25)))) & (**l_630));
                }
                else
                {
                    int8_t l_684 = 1;
                    (**g_421) = &p_24;
                    (*g_272) = &l_630;
                    for (p_26 = (-4); (p_26 < (-20)); --p_26)
                    {
                        uint32_t l_694 = 0x6E7B0C3C;
                        int32_t *l_714 = &g_415;
                        (**l_642) = (**g_271);
                        (*****l_642) = (safe_mul_func_int8_t_s_s(((((p_25 , ((safe_mod_func_int32_t_s_s(l_684, ((((safe_sub_func_uint8_t_u_u((*****l_642), ((**g_271) == l_687))) ^ p_25) >= g_217[7]) ^ ((safe_rshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint32_t_u_s(((-7) == p_24), 22)) <= 1U), g_444[6])) , l_694), (**l_630))) , g_562)))) && 252U)) || 4U) > (*****l_642)) ^ (**l_630)), p_25));
                        (*****g_271) = ((safe_add_func_int8_t_s_s((safe_rshift_func_int32_t_s_u(l_694, 10)), (3U != ((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint32_t_u_u((((**l_630) || (-7)) , ((safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(((~(((0x46468805 <= (((l_684 != (safe_lshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u(4294967288U, p_26)) <= ((safe_lshift_func_uint32_t_u_u(((l_714 == l_714) < g_32), 7)) < p_23)), g_217[6]))) , l_715) , (**l_630))) >= p_26) > (*l_714))) >= g_217[4]), 0xC2C2)), p_22)) || p_23)), 21)) || p_25), 3)) , 0x15A2)))) != 0x3C);
                        (*l_630) = (p_26 , &p_24);
                    }
                    for (g_494 = 0; (g_494 >= (-12)); --g_494)
                    {
                        (***g_112) = (safe_rshift_func_int32_t_s_u((((!(-1)) , (void*)0) != (void*)0), 4));
                        if ((*****l_642))
                            continue;
                        if ((*****g_271))
                            continue;
                    }
                }
            }
            else
            {
                int32_t *****l_728 = (void*)0;
                int32_t *****l_784 = &g_272;
                for (g_627 = 0; (g_627 == 12); g_627 = safe_add_func_int16_t_s_s(g_627, 3))
                {
                    uint32_t l_727 = 0U;
                    int32_t l_757 = 3;
                    uint32_t l_771 = 1U;
                    if (p_25)
                        break;
                    (*l_630) = &p_24;
                    for (p_25 = 0; (p_25 >= 38); p_25 = safe_add_func_int16_t_s_s(p_25, 1))
                    {
                        int32_t ***l_738[3][6] = {{&g_113, &g_113, &g_113, &g_113, &g_113, &g_113}, {&g_113, &g_113, &g_113, &g_113, &g_113, &g_113}, {&g_113, &g_113, &g_113, &g_113, &g_113, &g_113}};
                        uint8_t l_747 = 250U;
                        int i, j;
                        (*l_548) = ((safe_lshift_func_int32_t_s_s((p_22 >= ((l_727 , l_728) == (((0x6B & (((p_24 , (safe_mod_func_uint8_t_u_u(((g_95 <= (((safe_rshift_func_uint8_t_u_s((~(safe_sub_func_uint8_t_u_u((safe_rshift_func_int32_t_s_u((l_738[0][1] != (((((((((g_231 | (((safe_rshift_func_int8_t_s_s((safe_rshift_func_int32_t_s_u(p_22, 31)), p_26)) , p_24) , g_217[0])) | (**l_630)) && (-1)) , (*g_271)) == (void*)0) ^ p_23) < p_26) && g_217[6]) , g_743)), (**l_630))), 0U))), p_25)) , (**l_630)) != g_95)) >= 0xDF), g_219))) , (void*)0) != (void*)0)) , g_95) , &g_272))), l_727)) < p_25);
                        (*g_113) = &p_24;
                        l_757 = ((((p_22 <= (((void*)0 == (*g_271)) == (&g_272 != &g_272))) >= (~(l_747 || ((safe_lshift_func_uint8_t_u_u(((((((safe_mul_func_int16_t_s_s(g_217[0], ((l_752 != (((((safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(p_22, 0x3826415C)), p_24)) , (-1)) & p_24) == (-4)) , p_22)) >= p_24))) , 247U) && l_727) , (*l_548)) == l_727) ^ p_23), 6)) | 65535U)))) , p_22) < p_25);
                    }
                    for (g_562 = (-4); (g_562 == (-11)); g_562 = safe_sub_func_int32_t_s_s(g_562, 1))
                    {
                        uint32_t l_763 = 4294967295U;
                        int32_t ***l_770 = &l_630;
                        (***l_770) = ((((safe_sub_func_int16_t_s_s(l_762, 0x57E9)) , ((l_763 != ((((safe_sub_func_int16_t_s_s((0x09C6 & (((((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((void*)0 != l_770), 13)), 7)) , p_25) , ((**l_630) != (((*g_536) == (*g_743)) , p_24))) , (void*)0) == (void*)0)), 0x508D)) , 0x2E) <= 0U) | 7)) && g_231)) && l_771) <= (***l_770));
                        l_651[3][4] = l_772;
                        p_24 = (((g_217[0] || (!g_444[4])) , ((((**l_630) || p_25) && g_613[1]) | g_613[1])) , (l_728 != l_774));
                        (**g_536) = &p_24;
                    }
                }
                (*l_772) = (safe_sub_func_uint8_t_u_u((((((((safe_lshift_func_uint32_t_u_s((p_23 <= (((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((void*)0 == l_783), 9)), g_415)) >= ((&g_272 == l_784) && (+g_231))) == (0x3ACBC847 != g_217[1]))), 20)) , l_786) != &l_630) | l_787) , g_444[4]) ^ 0xF8C20F21) != p_25), p_22));
                if ((((((((safe_rshift_func_uint8_t_u_s(((g_217[0] , (*l_784)) == (*g_271)), 4)) < (safe_sub_func_uint16_t_u_u(0x701C, ((safe_mod_func_uint32_t_u_u((((((((((((safe_unary_minus_func_int16_t_s(((g_217[2] >= (g_32 || (p_26 == 0xEF7D8969))) <= ((*l_786) != l_797)))) && 0U) != p_24) != g_613[6]) , (void*)0) == (void*)0) | 0x5C) < 0xF50F7904) <= p_23) && g_613[1]) || 65531U), p_25)) || (-7))))) & p_26) >= g_613[9]) || p_25) || p_24) | p_26))
                {
                    (*g_113) = (((safe_sub_func_uint16_t_u_u((((((-2) & (~((safe_sub_func_uint32_t_u_u((p_25 ^ g_95), ((p_23 , ((+(p_26 < (safe_mul_func_uint32_t_u_u((g_217[3] , (l_806 == (*g_271))), ((safe_add_func_int8_t_s_s(((g_217[0] >= 1U) && 0x54A2), p_25)) , p_26))))) , g_219)) , p_22))) , (**l_630)))) >= g_217[0]) && 250U) ^ g_32), 0x6A08)) < p_26) , &p_24);
                }
                else
                {
                    (**l_797) = (safe_rshift_func_uint32_t_u_s(((safe_lshift_func_int8_t_s_s(((l_813 , (((safe_unary_minus_func_int32_t_s(((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(g_415, (&p_24 != (void*)0))), (safe_unary_minus_func_int32_t_s(((((safe_rshift_func_uint8_t_u_u(0U, g_627)) || ((void*)0 == &p_24)) , &p_24) == &p_24))))) < p_26))) >= g_627) < g_444[6])) != (-7)), 0)) | g_444[3]), 6));
                    (**l_797) = p_22;
                }
                for (l_787 = 0; (l_787 != (-24)); --l_787)
                {
                    int32_t *l_824 = (void*)0;
                    int32_t *l_825[10] = {&l_787, &l_787, &g_415, &l_787, &l_787, &g_415, &l_787, &l_787, &g_415, &l_787};
                    int32_t ***l_831 = &g_113;
                    int i;
                    (**g_536) = (((-2) < p_23) , &p_24);
                    l_825[8] = l_824;
                    (**l_797) = ((0 != (((*l_774) != (void*)0) < p_23)) || ((safe_unary_minus_func_int32_t_s((safe_sub_func_uint8_t_u_u(((0xE6F0FD87 >= (safe_sub_func_uint32_t_u_u(1U, (l_831 == (void*)0)))) > (**l_630)), g_219)))) , 0xF1));
                }
            }
        }
        else
        {
            int32_t ****l_846 = (void*)0;
            int32_t ***l_856 = (void*)0;
            int32_t l_949[10] = {(-1), (-1), 0x1096FF50, (-1), (-1), 0x1096FF50, (-1), (-1), 0x1096FF50, (-1)};
            uint16_t l_1018 = 0xD3F9;
            uint32_t l_1042 = 0x8BF19EBF;
            int32_t *l_1046 = &l_612;
            int i;
            for (g_32 = (-13); (g_32 > 5); ++g_32)
            {
                int32_t *l_834 = (void*)0;
                return l_834;
            }
            if (((p_23 != g_95) || ((safe_mul_func_uint8_t_u_u((p_26 && ((void*)0 == l_774)), (g_562 != p_23))) , g_415)))
            {
                int8_t l_845 = 0xB3;
                int32_t ***l_855[2];
                uint32_t l_898 = 0x8B6FC5BF;
                int32_t *****l_904 = &l_806;
                int16_t l_974 = (-1);
                uint32_t l_1007 = 0x50F31B2C;
                int i;
                for (i = 0; i < 2; i++)
                    l_855[i] = (void*)0;
                p_24 = (p_23 <= (safe_mod_func_uint8_t_u_u((g_613[1] || (safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(0x5D, (((l_845 == (((l_846 != (*g_271)) & (+(1 || g_231))) | (safe_mul_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s((((((safe_lshift_func_int16_t_s_u(p_22, l_854[1][2][1])) >= p_24) < (**l_630)) > g_415) , (*l_548)), g_444[4])) , l_855[0]) == l_856), p_22)))) , p_26) && (-1)))), 1))), 251U)));
                for (l_715 = (-19); (l_715 >= 8); l_715 = safe_add_func_int32_t_s_s(l_715, 4))
                {
                    int32_t *l_863[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_863[i] = &g_32;
                    for (l_612 = 3; (l_612 > (-7)); l_612--)
                    {
                        (**g_421) = &p_24;
                        (*l_772) = (4294967295U && 0x22A5A58F);
                    }
                    for (l_612 = 0; (l_612 > (-9)); l_612 = safe_sub_func_int8_t_s_s(l_612, 4))
                    {
                        (*l_548) = 0xB73829D1;
                        return l_863[0];
                    }
                    (**l_630) = p_23;
                }
                if (((((((!0) ^ ((safe_lshift_func_uint8_t_u_s(g_415, p_26)) <= ((((safe_lshift_func_uint32_t_u_s((255U ^ (safe_lshift_func_uint8_t_u_u(g_613[1], 3))), ((safe_rshift_func_int8_t_s_u(g_444[0], 4)) & ((safe_mul_func_uint8_t_u_u(((((safe_sub_func_uint16_t_u_u(((g_613[2] || (safe_rshift_func_uint16_t_u_u(g_444[3], 0))) != ((safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s(g_217[3], 0)), 0xD9C5)) || (**l_630))), g_32)) & p_23) && p_25) <= p_25), 0x91)) > g_231)))) && 0xD251) , (-3)) >= 4))) == 0x11A360AF) & 252U) > g_217[7]) != p_23))
                {
                    uint8_t l_885 = 0U;
                    for (g_219 = 0; (g_219 > (-19)); g_219 = safe_sub_func_uint32_t_u_u(g_219, 1))
                    {
                        uint32_t l_888 = 0xE78638F1;
                        int32_t ****l_889 = &g_743;
                        if (l_885)
                            break;
                        (*l_772) = (((g_217[4] >= (safe_mod_func_int32_t_s_s(((l_888 >= ((void*)0 != l_889)) | (safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((((((((p_22 , (p_25 | ((safe_mul_func_uint16_t_u_u((((safe_lshift_func_uint32_t_u_s(p_23, 17)) || (((((&p_24 == &p_24) | 0x520A6631) , l_898) <= 3) > (*l_548))) != g_219), 0x6D8C)) | 5U))) != p_24) & p_25) , g_95) <= 4294967286U) , g_444[4]) <= g_444[4]), p_22)), 0))), p_25))) == p_26) > p_23);
                    }
                    (*l_423) = (void*)0;
                    for (p_25 = 0; (p_25 >= 54); p_25 = safe_add_func_uint32_t_u_u(p_25, 5))
                    {
                        int32_t ****l_901 = (void*)0;
                        l_855[0] = l_855[0];
                        (*l_772) = (((void*)0 != l_901) != (g_217[0] , (safe_unary_minus_func_int16_t_s((((0x01FB && (0x0D & g_95)) <= (!(g_219 , ((&p_24 == &p_24) , p_23)))) , g_217[7])))));
                        p_24 = p_25;
                        (*l_772) = ((void*)0 == l_904);
                    }
                    p_24 = (((safe_sub_func_int8_t_s_s(((0x736783D7 >= ((((void*)0 == (*g_271)) != (safe_mod_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u(((safe_lshift_func_uint16_t_u_u((g_415 >= ((safe_lshift_func_int16_t_s_s((p_23 | (**l_630)), (((0xA5 >= ((g_613[4] < (safe_rshift_func_uint8_t_u_s((((safe_add_func_int32_t_s_s(0xEE3B43D3, l_918[0][0][6])) == p_25) & p_25), 4))) || p_24)) , (void*)0) == (void*)0))) || p_23)), 13)) < g_494))), p_25))) < p_24)) | 4294967295U), g_95)) && 0xA1) , p_22);
                }
                else
                {
                    uint32_t l_939 = 0x56B7FA61;
                    int32_t l_940 = 0xF97DACD2;
                    int32_t ****l_954 = &l_855[0];
                    for (p_22 = 0; (p_22 == 11); p_22 = safe_add_func_int16_t_s_s(p_22, 5))
                    {
                        uint16_t l_929[3];
                        uint16_t l_938 = 0x570F;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_929[i] = 0x3A89;
                        l_940 = ((((safe_add_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(8, (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((p_26 > 0), 0)), (p_23 & ((l_929[0] , (0xF930 != (safe_rshift_func_uint16_t_u_s((!(!((((((((1U <= (((safe_rshift_func_int32_t_s_s((1U ^ (safe_mul_func_int16_t_s_s((((0x2C8069C3 | g_231) >= (*l_548)) < l_938), p_23))), p_24)) >= p_23) < (**l_630))) & l_939) > g_217[1]) , 0U) , &g_272) != &g_272) <= 0xE3) & g_217[8]))), g_494)))) <= 0x014A)))))) > p_26), (-1))) & p_24) != 0x83A8) , p_24);
                    }
                    (**l_630) = ((safe_mod_func_int8_t_s_s((((safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u((0x560A < ((((g_627 && (safe_rshift_func_uint32_t_u_u((g_217[0] >= (g_32 || (((g_613[0] > g_494) & l_949[1]) , ((((safe_add_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((((((g_613[9] , (*l_904)) == l_954) < g_494) || (-1)) <= l_955), g_32)) >= p_26), p_25)) , (*g_536)) != (void*)0) | g_217[0])))), 13))) == 5U) && g_494) | p_22)), p_25)), g_627)) > g_613[1]) ^ 4294967295U), 1U)) && p_24);
                    for (g_627 = 0; (g_627 <= 0); g_627 += 1)
                    {
                        (*g_421) = (*g_743);
                        (**g_743) = &p_24;
                    }
                    (*l_548) = (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int32_t_s_s((~(safe_mul_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((*g_421) != (void*)0), (5U ^ (((safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s((0x618B331B ^ p_26), (+(((l_974 ^ ((((safe_mod_func_uint16_t_u_u(p_23, (safe_mul_func_uint32_t_u_u(0xAA903095, ((0x895A ^ 65535U) == 0x05))))) , p_24) && p_24) == g_217[0])) != g_562) , p_22)))), 5)) && g_613[1]) | 0xCB)))) , 0x35), g_217[0]))), l_939)), g_613[1])) > 9U), 8)), p_24));
                }
                for (p_23 = 0; (p_23 != (-18)); p_23--)
                {
                    uint32_t l_987 = 0U;
                    int32_t *l_1008[3];
                    int32_t *l_1011 = &l_612;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1008[i] = &l_715;
                    p_24 = ((safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((p_23 > 0) >= (safe_lshift_func_int8_t_s_s((((*l_904) != (*l_904)) || l_987), (l_987 && ((l_987 , (safe_lshift_func_int16_t_s_u(((safe_sub_func_uint8_t_u_u(6U, ((void*)0 != &g_113))) , g_231), p_24))) != 248U))))), g_627)), (*l_772))) & p_22);
                    if ((l_987 & (p_23 < (-1))))
                    {
                        (*l_630) = &p_24;
                        (*l_630) = ((((safe_mul_func_int32_t_s_s((*l_772), (g_219 & (safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((l_1002 != &g_272), (safe_add_func_uint8_t_u_u(0x30, (4294967295U != (l_1005 > (safe_unary_minus_func_uint8_t_u(((0xF7 & g_219) ^ 7))))))))), 0xA1C7)), 1)), l_1007))))) <= g_415) > 6) , l_1008[2]);
                        (**g_271) = l_1009;
                    }
                    else
                    {
                        int32_t *l_1010 = &l_854[1][2][1];
                        (*l_630) = l_1008[2];
                        l_1010 = &p_24;
                        if (p_25)
                            break;
                    }
                    (*l_630) = l_1011;
                    if (p_24)
                        break;
                }
            }
            else
            {
                int32_t l_1022 = 0;
                int32_t *****l_1039 = &g_272;
                uint8_t l_1131 = 0xB3;
                int32_t **l_1133 = &l_548;
                uint32_t l_1164 = 0x83B6E7B8;
                int32_t **l_1175[4][9] = {{&g_59[0][0], &g_59[0][0], &g_59[0][0], &l_772, &l_548, (void*)0, &l_548, &l_772, &g_59[0][0]}, {&g_59[0][0], &g_59[0][0], &g_59[0][0], &l_772, &l_548, (void*)0, &l_548, &l_772, &g_59[0][0]}, {&g_59[0][0], &g_59[0][0], &g_59[0][0], &l_772, &l_548, (void*)0, &l_548, &l_772, &g_59[0][0]}, {&g_59[0][0], &g_59[0][0], &g_59[0][0], &l_772, &l_548, (void*)0, &l_548, &l_772, &g_59[0][0]}};
                int i, j;
                if ((~(((safe_sub_func_uint8_t_u_u((+p_24), (g_95 == ((+(((+(p_24 , (g_562 , p_24))) < p_23) , (0x8C7A <= (p_26 < 0xD68F)))) , g_231)))) < l_1018) , g_32)))
                {
                    int8_t l_1023 = 1;
                    int32_t l_1043 = (-1);
                    l_1043 = ((safe_lshift_func_uint8_t_u_s((!((l_1022 & ((l_1023 < (safe_add_func_uint32_t_u_u(g_562, ((~(safe_mul_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((((safe_rshift_func_uint32_t_u_u(((((((p_23 >= (safe_add_func_int32_t_s_s(l_1023, (safe_mod_func_uint32_t_u_u((((safe_sub_func_int32_t_s_s((l_1039 != l_1039), (safe_mul_func_int32_t_s_s((-1), 1)))) | p_26) ^ g_494), 0xB657F34F))))) > g_231) > l_1023) > l_1042) > p_23) , (**l_630)), 3)) == g_562) > 0x4479DBC1), 0x5E32)) ^ p_26), 0))) && g_562)))) | g_217[3])) == 0x3B)), 4)) , p_24);
                    (**g_536) = &p_24;
                }
                else
                {
                    int32_t *l_1047 = (void*)0;
                    uint32_t l_1078 = 6U;
                    for (p_22 = (-3); (p_22 > 43); ++p_22)
                    {
                        (*g_113) = &p_24;
                        if (p_22)
                            break;
                        if (p_22)
                            break;
                        return l_1047;
                    }
                    if ((!(safe_mod_func_uint32_t_u_u(0x3CF5D1C7, p_25))))
                    {
                        int8_t l_1063[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_1063[i] = 0xDE;
                        p_24 = 0xC431FA97;
                        l_1079 = ((safe_mul_func_int32_t_s_s((safe_mul_func_int8_t_s_s(g_562, (g_217[5] != ((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_mul_func_int32_t_s_s(p_24, (((p_22 <= l_1063[4]) != l_1064) | (((safe_mod_func_int32_t_s_s(0x563D9940, ((safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((g_32 | (safe_lshift_func_int8_t_s_u((~((safe_add_func_uint16_t_u_u((safe_lshift_func_uint32_t_u_s((0xD834B45D | p_26), p_24)), 65535U)) ^ p_23)), 2))) <= p_24), g_231)), 0xD5D9)) , l_1078))) , g_32) == (**l_630))))), 0x8F3E)), g_613[1])), p_25)) != p_24)))), p_26)) && p_22);
                        (*l_1046) = p_23;
                    }
                    else
                    {
                        int32_t *l_1080 = (void*)0;
                        int32_t ****l_1120[5] = {&g_421, &l_856, &g_421, &l_856, &g_421};
                        int i;
                        l_1080 = &p_24;
                        p_24 = (p_25 && ((safe_add_func_int8_t_s_s((p_25 , (safe_add_func_uint16_t_u_u(g_613[3], (~(g_217[0] , ((((safe_mod_func_uint32_t_u_u(0xBBCA6E8A, (safe_mod_func_int32_t_s_s(l_1090, (((g_627 ^ (safe_mod_func_uint8_t_u_u((l_774 != (void*)0), (*l_1080)))) , p_23) | (*l_1080)))))) ^ 255U) & (-5)) | g_95)))))), g_219)) | p_25));
                        (*l_1046) = (((((safe_mod_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((p_25 > (g_219 || (((((-7) > ((((safe_rshift_func_uint16_t_u_u(g_613[5], 8)) >= 0xD0) == (safe_lshift_func_int8_t_s_s(g_1101, ((void*)0 != (*g_743))))) > (*l_548))) <= (-10)) <= 0xDEB4A237) == g_95))), 0x82)) , p_22), g_494)) != 0xA8) , p_25) | p_25) & g_95);
                        (*l_1080) = (safe_sub_func_int16_t_s_s(p_22, (((safe_add_func_int16_t_s_s((&l_1047 != (void*)0), ((safe_rshift_func_int8_t_s_s(p_26, (safe_mul_func_uint8_t_u_u((4294967288U || ((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((1U == g_613[8]), 0x9A)), (safe_mod_func_int8_t_s_s((safe_lshift_func_int32_t_s_s((safe_mod_func_int8_t_s_s((p_25 , p_26), g_613[1])), 7)), 0x6E)))) >= 0xB8CC7440)), 255U)))) , 0U))) , (void*)0) != l_1120[3])));
                    }
                }
                (**l_630) = (safe_mul_func_int16_t_s_s((((safe_sub_func_int16_t_s_s(g_444[2], 1U)) , (((((*l_774) != (*l_1039)) != (((p_24 > (((g_217[2] , (safe_mul_func_int32_t_s_s((((((safe_sub_func_int32_t_s_s((p_22 , (((((safe_lshift_func_int8_t_s_u(g_32, 6)) | 1U) < 1U) && (*l_772)) | g_415)), p_26)) , &g_272) == (void*)0) < g_444[4]) , l_1131), (**l_630)))) <= l_1132) ^ g_444[4])) || g_217[0]) | (*l_772))) == 3U) , l_1133)) != (*g_536)), g_444[4]));
                if ((safe_sub_func_uint8_t_u_u(p_22, ((((p_26 > p_22) , &p_24) == (g_444[4] , &p_24)) ^ (safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(g_613[1], (p_22 != (((safe_sub_func_int32_t_s_s((p_23 , 0xBEF2A01C), 1)) , p_23) >= (*l_1046))))), 8))))))
                {
                    int32_t *l_1163 = &l_612;
                    int32_t ****l_1179[10] = {&g_743, &g_112, &g_743, &g_112, &g_743, &g_112, &g_743, &g_112, &g_743, &g_112};
                    int i;
                    (*l_772) = (((safe_add_func_uint8_t_u_u(((((((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((((**l_1133) > (((&p_24 != g_1148) ^ ((p_23 ^ (+(safe_rshift_func_uint16_t_u_s(((g_613[1] | (safe_rshift_func_uint32_t_u_u(g_32, 28))) | (!(safe_lshift_func_uint8_t_u_s((((g_494 , p_24) || 0) <= l_1157[0][3][3]), p_23)))), g_613[0])))) , p_25)) , p_26)) , g_219), 0xB5EB6DF8)) >= 0x3817), g_219)) != 1) , p_23) , g_613[6]) & 1) , p_23), 255U)) ^ p_23) , (**l_1133));
                    if (((l_774 == l_774) , (1 | (safe_mod_func_uint8_t_u_u(l_1160, (g_415 | (1U < ((void*)0 != l_774))))))))
                    {
                        (*g_1148) = ((-10) < (g_1101 , p_24));
                        (**l_1009) = &p_24;
                        (*l_630) = ((safe_mul_func_uint8_t_u_u(0x68, (&g_272 != &l_846))) , l_1163);
                    }
                    else
                    {
                        int32_t **l_1170 = (void*)0;
                        (**l_630) = l_1164;
                        (**g_743) = &p_24;
                        (*l_1163) = (safe_add_func_int8_t_s_s((safe_lshift_func_int32_t_s_s((*l_1046), (((((~((*l_1009) == l_1170)) & p_24) >= ((0xFAA6 || (safe_sub_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s(p_25, 0x96B9)) , &l_1163) == l_1175[1][6]), 0x15403853))) & g_217[0])) , l_774) == &g_272))), (**l_630)));
                        p_24 = (safe_sub_func_int32_t_s_s((**l_630), (!(((void*)0 == l_1179[1]) , ((safe_mod_func_int8_t_s_s(p_24, (0x12 & (safe_unary_minus_func_uint32_t_u(p_22))))) || (0x4E5C793D == (&g_272 == &g_272)))))));
                    }
                    (**g_536) = &p_24;
                    for (l_563 = 0; (l_563 > 46); l_563 = safe_add_func_uint8_t_u_u(l_563, 2))
                    {
                        uint32_t l_1190 = 0x4200AE49;
                        (**l_1133) = (safe_add_func_int16_t_s_s((*l_1163), ((0xAD41579C != 0xDC7ED291) ^ ((0x3F != (((safe_mod_func_int16_t_s_s((l_1039 == ((((((safe_unary_minus_func_uint8_t_u((g_415 >= 1U))) , (-2)) , (*g_271)) != (*l_1039)) && p_22) , &g_272)), 1U)) < l_1190) ^ g_494)) , 0x3DF0))));
                        (**g_421) = (void*)0;
                    }
                }
                else
                {
                    uint16_t l_1194 = 0x83CF;
                    (*l_1046) = (**l_630);
                    l_1194 = (+(safe_add_func_int16_t_s_s(g_562, 7U)));
                }
                for (g_231 = 0; (g_231 < (-1)); g_231 = safe_sub_func_uint16_t_u_u(g_231, 4))
                {
                    int32_t *l_1199 = &g_32;
                    int32_t l_1221[9][7][4] = {{{0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}}, {{0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}}, {{0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}}, {{0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}}, {{0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}}, {{0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}}, {{0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}}, {{0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}}, {{0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}, {0x5B6EA66D, 0xDFD18B90, 1, (-2)}}};
                    int i, j, k;
                    for (g_494 = 0; (g_494 >= 0); g_494 -= 1)
                    {
                        (*l_1046) = (safe_lshift_func_uint16_t_u_s(g_219, 11));
                        return l_1199;
                    }
                    p_24 = (((safe_lshift_func_int16_t_s_u(g_1101, 13)) , (p_22 == (safe_mod_func_int8_t_s_s(((((safe_add_func_uint8_t_u_u((*l_1199), (*l_1199))) && (*l_1199)) == ((safe_add_func_int32_t_s_s((((((safe_mod_func_uint32_t_u_u(4294967295U, (safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s((!(safe_sub_func_uint16_t_u_u(0U, (safe_sub_func_uint32_t_u_u((((safe_lshift_func_int32_t_s_u(((void*)0 != l_1039), 23)) | g_217[0]) | p_25), p_26))))), 0xBECD)), p_25)))) < g_32) < g_415) , 0U) < g_444[4]), l_1221[3][4][3])) == (*g_1148))) ^ p_26), p_22)))) , p_24);
                }
            }
            (*l_630) = &p_24;
            for (g_231 = 0; g_231 < 9; g_231 += 1)
            {
                for (l_443 = 0; l_443 < 9; l_443 += 1)
                {
                    for (p_26 = 0; p_26 < 3; p_26 += 1)
                    {
                        l_854[g_231][l_443][p_26] = 0x3D0CD7CC;
                    }
                }
            }
        }
        for (p_22 = 5; (p_22 <= 29); p_22 = safe_add_func_uint16_t_u_u(p_22, 9))
        {
            if (p_24)
                break;
        }
        (*l_772) = (-8);
        (*l_630) = (*l_630);
    }
    (*l_772) = ((safe_unary_minus_func_int8_t_s((safe_rshift_func_uint8_t_u_s(p_25, p_24)))) != ((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((*l_772), (((g_1101 > g_415) && ((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((g_95 | (safe_sub_func_uint8_t_u_u((g_444[4] <= ((*g_271) != (p_26 , (*g_271)))), 0x2A))) <= 0U), 0U)), g_415)) && 6)) < (-5)))), 0x34D86713)) <= g_217[0]));
    if ((safe_lshift_func_uint16_t_u_s(p_26, 6)))
    {
        int32_t **l_1246[9][6][3] = {{{&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}}, {{&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}}, {{&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}}, {{&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}}, {{&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}}, {{&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}}, {{&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}}, {{&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}}, {{&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}, {&g_442[0][2], &g_59[0][0], (void*)0}}};
        int8_t l_1270 = (-5);
        int32_t *****l_1272 = &l_806;
        int32_t *l_1299 = &g_95;
        uint32_t l_1302 = 4294967295U;
        int i, j, k;
        for (g_1101 = (-28); (g_1101 != 21); ++g_1101)
        {
            int32_t ***l_1249 = &l_1246[8][0][0];
            int32_t *****l_1271 = (void*)0;
            uint16_t l_1291 = 5U;
            int32_t *l_1361 = &g_219;
            (*g_1148) = ((safe_lshift_func_uint32_t_u_s((!(p_26 ^ (-3))), ((0x4A & p_23) >= ((safe_mul_func_int8_t_s_s(((*g_536) == l_1246[8][0][0]), p_23)) > ((0x6B7BA052 && (safe_lshift_func_uint8_t_u_s((((void*)0 == l_1249) ^ p_24), g_627))) != (*g_1148)))))) ^ (-1));
            (*l_772) = 0x0FBAE825;
            g_271 = &g_272;
            for (l_563 = 0; (l_563 <= 3); l_563 += 1)
            {
                uint8_t l_1256 = 255U;
                int32_t ***l_1275 = &g_113;
                int i;
                (*l_548) = ((safe_mod_func_uint32_t_u_u(((2U < (g_217[(l_563 + 3)] ^ 249U)) == (((safe_mod_func_uint16_t_u_u(p_23, (safe_lshift_func_uint8_t_u_s((l_1256 == ((((safe_sub_func_int8_t_s_s(((safe_add_func_int32_t_s_s((((safe_unary_minus_func_int32_t_s((safe_lshift_func_uint16_t_u_s(0x39A9, 9)))) > ((p_24 | ((*g_1148) == (safe_rshift_func_int8_t_s_u(((((((safe_mod_func_int8_t_s_s((0x3101 && 0U), 0x24)) , 0x25) < 0x4D) & 0x8F2BFCA6) , g_1101) ^ 0xD7), p_23)))) != 1U)) == p_22), p_23)) , (-1)), 0xDA)) < p_22) | l_1256) , p_24)), p_24)))) | 255U) >= 0x8E157485)), l_1270)) ^ 0x8058);
                (*l_423) = (*g_743);
                for (g_219 = 3; (g_219 >= 0); g_219 -= 1)
                {
                    int32_t *****l_1289 = &g_272;
                    int32_t *l_1308 = &g_415;
                    if (((&p_24 != &p_24) != ((l_1271 == l_1272) || (safe_rshift_func_int8_t_s_s(g_219, 2)))))
                    {
                        (*g_272) = l_1275;
                    }
                    else
                    {
                        int8_t l_1288 = 0x80;
                        p_24 = (p_26 >= (safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(g_219, ((-9) <= (p_24 >= g_613[3])))), ((safe_mod_func_int8_t_s_s((safe_lshift_func_uint32_t_u_s((safe_rshift_func_int16_t_s_s((p_23 || l_1288), (((g_95 || p_24) , &g_272) == l_1289))), p_22)), 0xFB)) == l_1290))), 4)));
                    }
                    if (l_1291)
                    {
                        int32_t ***l_1294 = &l_1246[8][0][0];
                        (*l_772) = (((safe_sub_func_uint8_t_u_u(p_24, (((p_26 , &g_272) != (void*)0) | (((l_1294 == l_1249) == (safe_mul_func_int32_t_s_s((*g_1148), (-1)))) ^ ((safe_rshift_func_int32_t_s_s(((g_217[0] , p_25) & g_444[4]), 20)) , 1))))) , (*g_1148)) , p_26);
                        if (p_22)
                            break;
                        return l_1299;
                    }
                    else
                    {
                        int32_t **l_1306 = &g_59[0][0];
                        int16_t l_1307 = (-3);
                        if (p_25)
                            break;
                        p_24 = ((safe_sub_func_int16_t_s_s((p_23 >= (l_1302 == (((safe_add_func_uint32_t_u_u((g_217[0] <= (-1)), 0x048CB264)) ^ (-1)) > g_1101))), (((~((void*)0 == l_1306)) | g_627) || p_26))) ^ l_1307);
                        (*l_1306) = (void*)0;
                        if ((*l_1299))
                            continue;
                    }
                    l_1308 = &p_24;
                    p_24 = (safe_mul_func_uint16_t_u_u(p_26, (p_26 , (safe_add_func_uint8_t_u_u((((safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((g_1101 == (((p_26 | g_219) == ((*l_1308) ^ (&p_24 != &p_24))) , (safe_mul_func_int32_t_s_s((safe_mul_func_int32_t_s_s((*l_1308), (*l_772))), 0x8A330B3A)))), g_444[4])), p_25)), p_24)) == p_23) || 0), p_26)))));
                    for (g_32 = 0; (g_32 <= 3); g_32 += 1)
                    {
                        int32_t **l_1334 = &g_442[0][2];
                        (*l_1308) = (safe_add_func_int8_t_s_s(((g_415 , (safe_rshift_func_int16_t_s_u(((((void*)0 != l_1327) >= (*l_1308)) || (((p_24 == p_25) <= ((p_23 >= (safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(p_26, (0 < g_444[2]))), 8))) < g_217[0])) < 1)), 10))) >= g_32), p_26));
                        (*l_1299) = ((p_26 , ((safe_rshift_func_int16_t_s_s(((l_1334 != (*l_1327)) | (((!(9U & (((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((((g_1101 != (safe_rshift_func_uint8_t_u_s((~(safe_lshift_func_int16_t_s_s((safe_rshift_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(p_22, ((safe_sub_func_int32_t_s_s(((((safe_lshift_func_uint8_t_u_u(6U, 4)) ^ (safe_sub_func_int16_t_s_s((safe_lshift_func_int32_t_s_s(p_25, 10)), (g_562 ^ 7U)))) & p_24) != g_231), 0xA03219B5)) ^ p_25))) != (-6)), (*l_1308))) | p_25), 30)), 6))), p_25))) != 0U) || p_25) < p_22), g_95)), 10)) != 246U), 6)) , (void*)0) == (void*)0))) < 65531U) ^ g_415)), p_22)) & 0x1DDE)) < (-1));
                        (*l_772) = 0xD05F4253;
                        return l_1361;
                    }
                }
            }
        }
        return l_1362;
    }
    else
    {
        g_442[0][2] = (void*)0;
    }
    return l_1363;
}



static uint16_t func_27(int32_t * p_28, int16_t p_29, uint32_t p_30)
{
    int32_t l_401 = 0;
    (*g_113) = p_28;
    for (g_32 = 0; (g_32 < 1); g_32++)
    {
        int32_t *l_400 = &g_32;
        (*g_271) = (*g_271);
        (*g_113) = l_400;
        if ((*p_28))
            break;
    }
    return l_401;
}



static int32_t func_34(uint8_t p_35, int32_t p_36, int32_t * p_37, int32_t * p_38, uint8_t p_39)
{
    int32_t *l_46[5][10] = {{&g_32, (void*)0, &g_32, (void*)0, &g_32, (void*)0, &g_32, (void*)0, &g_32, (void*)0}, {&g_32, (void*)0, &g_32, (void*)0, &g_32, (void*)0, &g_32, (void*)0, &g_32, (void*)0}, {&g_32, (void*)0, &g_32, (void*)0, &g_32, (void*)0, &g_32, (void*)0, &g_32, (void*)0}, {&g_32, (void*)0, &g_32, (void*)0, &g_32, (void*)0, &g_32, (void*)0, &g_32, (void*)0}, {&g_32, (void*)0, &g_32, (void*)0, &g_32, (void*)0, &g_32, (void*)0, &g_32, (void*)0}};
    int32_t l_52 = 0x7C914A3A;
    int32_t *l_106 = &l_52;
    int8_t l_179 = 0;
    int32_t ****l_194 = &g_112;
    int32_t l_381 = 0xC9E85ABD;
    uint32_t l_384[8];
    uint32_t l_392 = 0x3B30EF8F;
    uint32_t l_393 = 0xCBFA641B;
    int i, j;
    for (i = 0; i < 8; i++)
        l_384[i] = 0x084324CC;
    if ((func_40(l_46[3][8], l_46[3][8], ((safe_lshift_func_int32_t_s_u((safe_unary_minus_func_int8_t_s(g_32)), 31)) , (safe_rshift_func_int16_t_s_s(l_52, ((((void*)0 == &l_52) == ((safe_sub_func_int16_t_s_s(((&g_32 != &g_32) == (((((safe_sub_func_uint16_t_u_u((&g_32 == (void*)0), p_39)) | (*p_38)) == g_32) != 65533U) == 8U)), p_39)) <= g_32)) , g_32)))), &g_32, &l_52) , 1))
    {
        int32_t **l_60 = (void*)0;
        int32_t **l_61 = &l_46[3][8];
        (*l_61) = &p_36;
        (*p_38) = (*p_37);
    }
    else
    {
        int8_t l_76 = 0x61;
        int32_t l_93[5][7] = {{0x1377BC7A, 0x5739219E, (-1), 0x5739219E, 0x1377BC7A, 1, 0x1377BC7A}, {0x1377BC7A, 0x5739219E, (-1), 0x5739219E, 0x1377BC7A, 1, 0x1377BC7A}, {0x1377BC7A, 0x5739219E, (-1), 0x5739219E, 0x1377BC7A, 1, 0x1377BC7A}, {0x1377BC7A, 0x5739219E, (-1), 0x5739219E, 0x1377BC7A, 1, 0x1377BC7A}, {0x1377BC7A, 0x5739219E, (-1), 0x5739219E, 0x1377BC7A, 1, 0x1377BC7A}};
        int32_t **l_94 = &l_46[3][8];
        uint16_t l_105 = 0xE5C5;
        int16_t l_315[1][6] = {{0, 0, 1, 0, 0, 1}};
        int32_t **l_336[4][7] = {{&l_46[1][2], &l_106, (void*)0, &g_59[0][0], &l_46[2][1], &l_46[3][8], &l_46[2][1]}, {&l_46[1][2], &l_106, (void*)0, &g_59[0][0], &l_46[2][1], &l_46[3][8], &l_46[2][1]}, {&l_46[1][2], &l_106, (void*)0, &g_59[0][0], &l_46[2][1], &l_46[3][8], &l_46[2][1]}, {&l_46[1][2], &l_106, (void*)0, &g_59[0][0], &l_46[2][1], &l_46[3][8], &l_46[2][1]}};
        int i, j;
        (*p_38) = (((((safe_add_func_int8_t_s_s(0xFC, ((safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((4294967291U ^ ((((void*)0 == &g_59[0][0]) && (g_32 < 0x8F0E)) >= (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(g_32, 0xE6)), ((safe_mod_func_uint32_t_u_u(1U, (*p_38))) , g_32))))), (*p_38))), g_32)), 1)) | (*p_38)))) || l_76) != l_76) || p_35) , 0x898D4ED1);
        g_95 = (((((safe_mul_func_int16_t_s_s(0xEA9D, (((safe_mod_func_uint8_t_u_u((&l_46[3][8] == &g_59[0][0]), p_36)) & ((safe_rshift_func_uint16_t_u_s(((((p_36 , (safe_lshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(0x7402, (p_35 | l_76))) , ((void*)0 == &g_59[0][0])), g_32)), g_32)), l_76)) <= l_76), 11))) && p_39) | g_32) ^ 0x3C), p_39)) , l_93[1][4])) < 0xF7313610))) , l_94) == &l_46[3][8]) & g_32) & l_93[4][0]);
        if (((~0xC6) ^ (safe_mod_func_uint8_t_u_u(((&l_52 == (((safe_rshift_func_int32_t_s_u((g_95 && (safe_lshift_func_int32_t_s_s((1U >= (*p_38)), (0x84 || p_36)))), 3)) , (safe_lshift_func_int16_t_s_u(((void*)0 == &g_95), l_105))) , l_106)) , g_32), g_32))))
        {
            int32_t ***l_110[6][3] = {{&l_94, &l_94, &l_94}, {&l_94, &l_94, &l_94}, {&l_94, &l_94, &l_94}, {&l_94, &l_94, &l_94}, {&l_94, &l_94, &l_94}, {&l_94, &l_94, &l_94}};
            int i, j;
            (*p_37) = ((void*)0 != &p_38);
            (*p_37) = (-6);
            for (g_95 = 0; (g_95 > (-19)); g_95 = safe_sub_func_uint16_t_u_u(g_95, 9))
            {
                int32_t *l_109 = &l_52;
                int32_t ****l_111[4][4] = {{&l_110[3][2], &l_110[5][1], &l_110[5][1], &l_110[5][1]}, {&l_110[3][2], &l_110[5][1], &l_110[5][1], &l_110[5][1]}, {&l_110[3][2], &l_110[5][1], &l_110[5][1], &l_110[5][1]}, {&l_110[3][2], &l_110[5][1], &l_110[5][1], &l_110[5][1]}};
                int i, j;
                if ((*p_37))
                    break;
                (*l_94) = l_109;
                g_112 = l_110[5][1];
            }
        }
        else
        {
            int32_t l_158[6];
            int32_t *l_159 = (void*)0;
            int32_t ****l_180 = &g_112;
            int32_t l_230 = 0xBB2B5004;
            int i;
            for (i = 0; i < 6; i++)
                l_158[i] = 0x39FF1EAA;
            if ((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_rshift_func_int32_t_s_s((*p_38), 30)), 9)), 0x1D5E)))
            {
                int16_t l_137 = 0;
                if ((**g_113))
                {
                    uint8_t l_138 = 0xB9;
                    uint32_t l_139 = 1U;
                    for (p_35 = 0; (p_35 > 18); p_35 = safe_add_func_uint16_t_u_u(p_35, 3))
                    {
                        (*l_106) = 1;
                        return (*p_37);
                    }
                    for (g_32 = 0; (g_32 <= 4); g_32 += 1)
                    {
                        int32_t l_132 = 1;
                        int32_t *l_136 = &g_95;
                        (*l_136) = ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(g_32, (((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((g_32 >= (l_132 && (((-1) <= ((((((~(safe_mul_func_int16_t_s_s((((&p_36 != l_136) > ((*l_136) <= (((((g_95 , (*g_112)) == (*g_112)) != p_36) , (*g_113)) != (void*)0))) & l_137), 8))) & l_138) <= g_95) < 0xD8) <= g_95) == l_137)) < (**g_113)))), p_39)), p_35)), g_95)) | l_139) || 6U))), 0)) && p_35);
                        (*l_106) = ((safe_add_func_int8_t_s_s(g_95, (((safe_rshift_func_int16_t_s_u(0x447F, ((((g_32 , ((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((g_95 ^ g_95), (((safe_lshift_func_int16_t_s_s((p_39 < ((((safe_add_func_int8_t_s_s(8, ((safe_rshift_func_uint32_t_u_s(((((0 ^ (safe_mul_func_int8_t_s_s(1, 0xBD))) , g_95) != g_32) >= (*p_37)), 28)) || l_137))) >= g_95) ^ (*p_37)) | g_32)), l_137)) < p_35) >= p_35))), (*l_136))) && g_95)) , (***g_112)) || (-1)) > 2))) & g_95) >= l_139))) > 0xA4);
                        (*l_94) = &p_36;
                    }
                }
                else
                {
                    return (*p_38);
                }
            }
            else
            {
                uint32_t l_163 = 0x2E294E61;
                int32_t *l_167 = &g_95;
                (*p_38) = (***g_112);
                (*p_37) = (*p_37);
                if ((((g_32 & 0x7FEC2A52) && g_32) != (safe_mod_func_uint32_t_u_u(p_39, 7U))))
                {
                    int32_t *l_160 = &g_95;
                    int32_t l_161 = (-1);
                    if (l_158[2])
                    {
                        l_160 = l_159;
                        return l_161;
                    }
                    else
                    {
                        uint8_t l_162 = 0U;
                        l_163 = l_162;
                    }
                    for (p_35 = 0; (p_35 <= 0); p_35 += 1)
                    {
                        (*g_113) = (*g_113);
                    }
                    (**g_112) = &p_36;
                    for (l_163 = (-23); (l_163 > 10); l_163 = safe_add_func_int16_t_s_s(l_163, 6))
                    {
                        int32_t *l_166 = &g_32;
                        (*l_94) = &l_161;
                        (*p_37) = 1;
                        l_167 = l_166;
                    }
                }
                else
                {
                    for (l_163 = 0; l_163 < 5; l_163 += 1)
                    {
                        for (g_32 = 0; g_32 < 10; g_32 += 1)
                        {
                            l_46[l_163][g_32] = (void*)0;
                        }
                    }
                    (***g_112) = (safe_sub_func_int8_t_s_s(2, g_95));
                    (**g_112) = &p_36;
                }
                (*g_113) = (*g_113);
            }
            if ((g_32 >= (1 == ((((safe_add_func_int32_t_s_s((g_95 != (**g_113)), (safe_mod_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_s(((+(0x06BE9B9E | (safe_add_func_int8_t_s_s(0x10, (((g_95 < 0x4D) || (&l_94 == &g_113)) && g_95))))) == p_35), p_35)) && p_39) && g_95), (*p_38))))) , p_39) > g_32) < l_179))))
            {
                int16_t l_199[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_199[i] = 0x7AEB;
                (**g_113) = (((l_180 != (void*)0) , (((((((void*)0 != (*g_112)) <= (safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint32_t_u_s((safe_unary_minus_func_uint8_t_u((safe_mul_func_int32_t_s_s(((l_194 != l_194) <= p_35), (&g_113 != (((safe_rshift_func_int32_t_s_u((safe_lshift_func_int16_t_s_s(3, 2)), 5)) != l_199[1]) , (void*)0)))))), (**g_113))) , (**g_113)), p_39)), g_95)), p_36)) < (-6)), g_95))) , 0x7CD24EA2) , (void*)0) == (void*)0) && 0xAE5AED9F)) && 6U);
            }
            else
            {
                int32_t ****l_224 = &g_112;
                if ((((safe_lshift_func_uint32_t_u_s((((safe_mul_func_int32_t_s_s(0xBDEA83D7, ((****l_180) != (0xBA < ((*l_180) == &l_94))))) >= (safe_lshift_func_uint16_t_u_u(((~(safe_rshift_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s((safe_lshift_func_int32_t_s_u(((g_217[0] & (****l_194)) <= 4U), p_36)), g_32)) | (-1)), p_39)), 0U)), (*p_38)))) == 0x91A3FCEC), 9))) < g_32), 1)) ^ 0) || 1))
                {
                    uint32_t l_218 = 1U;
                    int32_t l_241 = 0;
                    if ((0U >= l_218))
                    {
                        (*l_94) = &p_36;
                        (***l_180) = ((g_219 >= (safe_mul_func_uint32_t_u_u(0x33A23EFB, (safe_lshift_func_uint16_t_u_s(g_95, g_32))))) , &p_36);
                        (*l_94) = &p_36;
                        (**g_112) = &p_36;
                    }
                    else
                    {
                        int32_t *****l_225 = &l_224;
                        (*l_225) = l_224;
                        l_241 = ((safe_sub_func_int32_t_s_s((p_39 >= ((5 != (safe_mul_func_int32_t_s_s((l_230 || g_231), ((((+(g_219 | ((((safe_lshift_func_uint32_t_u_s(0x5DD0340F, (((safe_add_func_int32_t_s_s((*p_37), ((65530U || (safe_mul_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(1, p_39)) , 0x19F9), 0x7BA8))) || (*****l_225)))) , p_35) < 9U))) , g_217[1]) < g_95) , 1))) || p_39) != g_217[0]) , (*p_38))))) <= g_217[6])), p_36)) || l_218);
                        (*p_37) = (safe_unary_minus_func_uint16_t_u(((*p_38) <= ((((g_32 , (!(g_217[0] || (0xC7 > (safe_rshift_func_uint8_t_u_u(g_231, l_241)))))) , ((safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((65528U < (((((1 || ((p_39 | 0xCE) , 0xE0)) < p_35) & 2) , (***g_112)) > 0x9471759D)), (-7))), 2)) == g_217[7])) < 1U) && 0))));
                        return (*p_37);
                    }
                    for (l_241 = 0; (l_241 > (-12)); --l_241)
                    {
                        uint32_t l_254[10][3] = {{5U, 0x9311A1F4, 0x9BD09F82}, {5U, 0x9311A1F4, 0x9BD09F82}, {5U, 0x9311A1F4, 0x9BD09F82}, {5U, 0x9311A1F4, 0x9BD09F82}, {5U, 0x9311A1F4, 0x9BD09F82}, {5U, 0x9311A1F4, 0x9BD09F82}, {5U, 0x9311A1F4, 0x9BD09F82}, {5U, 0x9311A1F4, 0x9BD09F82}, {5U, 0x9311A1F4, 0x9BD09F82}, {5U, 0x9311A1F4, 0x9BD09F82}};
                        int i, j;
                        return l_254[3][1];
                    }
                }
                else
                {
                    (*l_106) = (safe_add_func_int8_t_s_s(g_219, ((void*)0 == &g_112)));
                    (****l_194) = ((*l_106) && (safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s((+(safe_lshift_func_uint8_t_u_u(((((((safe_mod_func_uint16_t_u_u(g_219, (****l_224))) >= ((((void*)0 == (*g_112)) | ((safe_sub_func_int16_t_s_s((0x6619 < p_36), (((((0x191F || p_35) ^ 0x42) , (*p_37)) != p_36) && g_231))) , 0x6B609877)) >= 0x43)) <= 1U) < 0x77FB0FCD) > g_217[0]) ^ p_35), 2))), 0x979C)) && g_219), 0xFE)));
                }
                if ((safe_lshift_func_int32_t_s_s((****l_224), 17)))
                {
                    int32_t *l_270 = &l_52;
                    if (((****l_224) , (**g_113)))
                    {
                        (****l_180) = (****l_224);
                        (*g_113) = l_270;
                        (***l_180) = (***l_180);
                    }
                    else
                    {
                        (***g_112) = ((void*)0 != g_271);
                        (**g_113) = (*p_38);
                        (**g_113) = (((void*)0 == (*g_271)) < p_35);
                    }
                    if ((safe_rshift_func_int8_t_s_s((safe_mul_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s((**g_113), (**g_113))) , (***g_112)) || (((((((g_217[0] || (!g_219)) , p_36) < p_39) & ((~(safe_sub_func_int8_t_s_s(((((!(1U > ((safe_unary_minus_func_uint16_t_u(((((g_231 || (*l_270)) || g_95) , &g_272) != &l_224))) | (****l_224)))) == p_36) <= p_36) <= g_217[0]), p_36))) & p_39)) > g_95) <= g_32) == p_35)), 0xF6)) | (-1)), 0xFB1B3AE5)), 3)))
                    {
                        (***l_194) = &p_36;
                        (*l_94) = (****g_271);
                    }
                    else
                    {
                        int32_t l_289 = 0x31470323;
                        (*****g_271) = (safe_mul_func_int16_t_s_s(l_289, ((safe_unary_minus_func_int32_t_s(((*l_270) ^ (**g_113)))) ^ 0x937B)));
                        (****g_271) = (****g_271);
                        (***l_180) = &p_36;
                    }
                    if ((g_219 > (****l_224)))
                    {
                        int8_t l_312 = (-1);
                        (**g_113) = ((safe_lshift_func_int8_t_s_u(p_39, (****l_180))) , (0x96C7 == (safe_add_func_uint8_t_u_u(g_95, ((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s((((safe_rshift_func_uint32_t_u_u((safe_rshift_func_int32_t_s_s((*p_37), (((0x97F0C942 <= ((safe_lshift_func_uint16_t_u_s(((****l_180) < (((((~(g_32 > ((safe_mul_func_int32_t_s_s((safe_mul_func_int16_t_s_s(p_39, p_39)), (****g_272))) ^ g_32))) , (****l_224)) && (*p_38)) , (*p_38)) != l_312)), 9)) , 1U)) && 0x5A) == 0xAB))), 17)) , 0x69A2) | 3U), 3U)), (****l_224))), g_217[0])) , g_217[8])))));
                    }
                    else
                    {
                        (****l_180) = (****l_180);
                        (**g_112) = (*g_113);
                        (***l_194) = (***l_194);
                    }
                }
                else
                {
                    for (l_105 = 14; (l_105 <= 40); ++l_105)
                    {
                        (**g_112) = (***l_194);
                        (*l_106) = (l_315[0][4] && (&g_272 == &g_272));
                    }
                }
            }
            (***g_272) = (*g_113);
            for (l_76 = 0; (l_76 > 27); l_76 = safe_add_func_uint16_t_u_u(l_76, 2))
            {
                int32_t ***l_325 = &l_94;
                int32_t *l_332 = &l_93[1][4];
            }
        }
        (*p_38) = ((safe_add_func_int16_t_s_s((g_231 , g_32), (safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(65535U, (safe_lshift_func_int8_t_s_s(p_39, ((safe_add_func_int32_t_s_s(0x58D3A4A6, 5U)) ^ ((((safe_sub_func_uint16_t_u_u(65535U, (4294967295U <= ((p_36 <= (**g_113)) > (*l_106))))) && (**g_113)) ^ (*p_38)) > 0xD4)))))) < g_217[6]), g_219)), p_36)))) != g_217[1]);
    }
    for (p_39 = 10; (p_39 < 51); p_39++)
    {
        int32_t *l_378 = &g_32;
        (*g_113) = l_378;
    }
    (**g_113) = (((((((((safe_lshift_func_int16_t_s_u(((*g_271) == (*g_271)), 0)) && l_381) , (safe_rshift_func_int8_t_s_u((l_384[1] & (+((&g_272 == &l_194) , (((safe_add_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((g_217[0] != (p_35 != p_36)), g_217[0])) ^ 0x8E), g_219)) <= g_32), p_39)) > l_392) , 0x4C170778)))), g_32))) || (*l_106)) == g_32) , p_36) , &p_37) != &p_38) , l_393);
    for (g_231 = 0; (g_231 != (-24)); g_231 = safe_sub_func_uint32_t_u_u(g_231, 3))
    {
        (*g_113) = (void*)0;
    }
    return (*p_38);
}



static int32_t func_40(int32_t * p_41, int32_t * p_42, uint32_t p_43, int32_t * p_44, int32_t * p_45)
{
    int32_t *l_58 = &g_32;
    int32_t **l_57[5] = {&l_58, &l_58, &l_58, &l_58, &l_58};
    int i;
    g_59[0][0] = p_45;
    return (*l_58);
}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            g_59[i][j] = 0;
    }
    g_113 = 0;
    g_272 = 0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
            g_442[i][j] = 0;
    }
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_217[i], "g_217[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_444[i], "g_444[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_494, "g_494", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_613[i], "g_613[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_627, "g_627", print_hash_value);
    transparent_crc(g_1101, "g_1101", print_hash_value);
    transparent_crc(g_1532, "g_1532", print_hash_value);
    transparent_crc(g_1617, "g_1617", print_hash_value);
    transparent_crc(g_1637, "g_1637", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1821[i][j], "g_1821[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1915, "g_1915", print_hash_value);
    transparent_crc(g_2059, "g_2059", print_hash_value);
    transparent_crc(g_2270, "g_2270", print_hash_value);
    transparent_crc(g_2407, "g_2407", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
