typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
typedef struct Str_82681728 {
  int pad[2];
  int refs;
} Str_82681728;
extern unsigned int strlen(const char *);
extern Str_82681728 *fn_82694548(int, const char *, unsigned int, int);

Str_82681728 **fn_82681728(Str_82681728 **out, int a, const char *s)
{
  Str_82681728 *p = fn_82694548(a, s, strlen(s), 0);
  *out = p;
  p->refs = p->refs + 1;
  return out;
}
