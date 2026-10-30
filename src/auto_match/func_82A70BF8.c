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
typedef struct Obj_82A70BF8 {
  char pad[0x30]; void *f30;
  char pad1[0xc0 - 0x34]; void *fc0; void *fc4;
  char pad2[0x100 - 0xc8]; int f100; void *f104; void *f108; void **f10c; void **f110; char pad3[4]; void *f118;
  char pad4[4]; void *f120; void *f124; void *f128;
} Obj_82A70BF8;
extern void fn_82A70AF0(Obj_82A70BF8 *);
extern void fn_82C2B590(void *);

void fn_82A70BF8(Obj_82A70BF8 *o)
{
  int i;

  if (o != 0) {
    if (o->fc0 != 0) fn_82C2B590(o->fc0);
    if (o->fc4 != 0) fn_82C2B590(o->fc4);
    if (o->f128 != 0) fn_82C2B590(o->f128);
    for (i = 0; i < o->f100; i++) {
      if (o->f10c != 0) {
        if (o->f10c[i] != 0) fn_82C2B590(o->f10c[i]);
      }
      if (o->f110 != 0) {
        if (o->f110[i] != 0) fn_82C2B590(o->f110[i]);
      }
    }
    if (o->f10c != 0) fn_82C2B590(o->f10c);
    if (o->f110 != 0) fn_82C2B590(o->f110);
    if (o->f104 != 0) fn_82C2B590(o->f104);
    if (o->f108 != 0) fn_82C2B590(o->f108);
    if (o->f118 != 0) fn_82C2B590(o->f118);
    if (o->f30 != 0) fn_82C2B590(o->f30);
    if (o->f120 != 0) fn_82C2B590(o->f120);
    if (o->f124 != 0) fn_82C2B590(o->f124);
    fn_82A70AF0(o);
  }
}
