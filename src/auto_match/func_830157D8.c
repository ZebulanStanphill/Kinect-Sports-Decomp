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


typedef struct Obj_830157D8 { int pad; char sub[1]; } Obj_830157D8;
typedef struct Ent_830157D8 { char pad[0x20]; char flag; } Ent_830157D8;
extern Ent_830157D8 *fn_82FFE0F0(void *, unsigned);
extern void fn_82FEC6E0(int, int);

int fn_830157D8(Obj_830157D8 *p, unsigned a, int b)
{
  Ent_830157D8 *e = fn_82FFE0F0(p->sub, a);
  if (e != 0) {
    e->flag = (char)b;
    fn_82FEC6E0(a, b);
    return 1;
  }
  return 2;
}
