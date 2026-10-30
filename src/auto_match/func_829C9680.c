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

extern void fn_829CFB48(int, void *);
extern void fn_829CFC20(int);
extern void fn_829D2868(int);
extern char lbl_83215000[];

void fn_829C9680(unsigned **p)
{
  unsigned *t;
  t = p[5]; if (t != 0) { fn_829CFB48(0, t); fn_829CFC20(0); }
  t = p[3]; if (t != 0) { fn_829CFB48(1, t); fn_829CFC20(1); }
  t = p[4]; if (t != 0) { fn_829CFB48(0, t); fn_829CFC20(0); }
  t = p[1]; if (t != 0) { fn_829CFB48(2, t); fn_829CFC20(2); }
  t = p[2]; if (t != 0) { fn_829CFB48(5, t); fn_829CFC20(5); }
  t = p[0]; if (t != 0) { fn_829CFB48(3, t); fn_829CFC20(3); }
  if (p[0xd] == 0) fn_829D2868(0);
  ((int *)(lbl_83215000 + 0x28a8))[((char *)p - (lbl_83215000 + 0x27c4)) / 0x4c] = 0;
}