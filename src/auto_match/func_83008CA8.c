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


typedef struct VT_83008CA8 { int pad[0x26]; void (*f98)(void *, int); } VT_83008CA8;
typedef struct I_83008CA8 { VT_83008CA8 *vt; } I_83008CA8;
typedef struct S_83008CA8 { int pad[1]; I_83008CA8 *f4; } S_83008CA8;
typedef struct O_83008CA8 { int pad[5]; I_83008CA8 *f14; unsigned short pad2; unsigned short f1a; int pad3[0x44/4-7]; S_83008CA8 *f44; } O_83008CA8;
void fn_83008CA8(O_83008CA8 *o)
{
  I_83008CA8 *p = o->f14;
  o->f1a = o->f1a - 1;
  if (p != 0) p->vt->f98(p, 3);
  if (o->f44 != 0 && o->f44->f4 != 0) {
    o->f44->f4->vt->f98(o->f44->f4, 3);
  }
}
