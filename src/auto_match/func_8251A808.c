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
extern unsigned char fn_828ACC40(unsigned);
extern void fn_828AE818(unsigned, int);
typedef struct { int pad0; int *ctx; unsigned char flag; char pad1[7]; unsigned state; char pad2[0x3c]; unsigned a50; unsigned st54; unsigned a58; unsigned char b5c; } O_8251A808;

void fn_8251A808(O_8251A808 *p)
{
  unsigned v;
  if (p->a58 == p->a50 && p->b5c != 0) {
    p->flag = 0;
    return;
  }
  if (p->flag == 0) return;
  switch (p->state) {
  case 0: case 1: case 3:
    fn_828AE818(p->ctx[2], 0x1e);
    if (fn_828ACC40(p->ctx[2]) == 0) return;
    switch (p->state) {
    case 0: v = 3; break;
    case 1: v = 4; break;
    case 3: v = 5; break;
    default: return;
    }
    p->st54 = v;
    return;
  case 2:
    p->st54 = 3;
    return;
  default:
    return;
  }
}
