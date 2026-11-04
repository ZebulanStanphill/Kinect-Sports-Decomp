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
extern int fn_8236D498(void *);
extern int fn_8240D930(void *);
extern int fn_828C3A00();


typedef struct { char b[0x34]; } Elem_828DC918;
typedef struct { char pad[0x6c]; int f6c; char pad2[0x10]; int f80; int f84; Elem_828DC918 *b; Elem_828DC918 *e; } Obj_828DC918;
int fn_828DC918(Obj_828DC918 *o)
{
  Elem_828DC918 *p = o->b;
  if (p != o->e) do {
      int a = o->f6c;
      int c = fn_8236D498(p);
      int d = o->f84;
      fn_828C3A00(a,o->f80,fn_8240D930(p),d,c,1);
      p++;
  } while (p != o->e);
  return 1;
}
