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
typedef struct { unsigned char pad[0xc]; unsigned char c; unsigned char b; unsigned char a; } R_82D699A8;
extern void fn_82DD77B0(void *, int, int);

char *fn_82D699A8(char *p, R_82D699A8 *r, int a, int b)
{
  fn_82DD77B0(&r->c, a, b);
  {
    unsigned x = r->a, y = r->b, z = r->c;
    unsigned n = (x * 4 + y + z + 2) * 2;
    p[2] = 0;
    return (char *)r + ((n + 0x1b) & ~0xfu);
  }
}
