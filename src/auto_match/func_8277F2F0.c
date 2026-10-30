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
extern int fn_8277E590();


typedef struct { int a; int b; } Pair_8277F2F0;
typedef struct { char pad[0x104]; int cnt; char pad2[0xc]; int x; int y; } Obj_8277F2F0;

int fn_8277F2F0(Obj_8277F2F0 *o, float *p)
{
  if (p[1] > *(float *)&o->y || p[0] > *(float *)&o->x) {
    o->x = *(int *)&p[0];
    o->y = *(int *)&p[1];
    fn_8277E590(&o->cnt, &o->x);
  }
  return o->cnt - 1;
}
