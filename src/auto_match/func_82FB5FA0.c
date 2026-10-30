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
typedef struct Sub_82FB5FA0 {
  char pad0[0xc];
  unsigned int c;
  char pad10[0x74 - 0x10];
  int *p74;
} Sub_82FB5FA0;
typedef struct Cls_82FB5FA0 {
  int pad[2];
  void *vt;
} Cls_82FB5FA0;
typedef struct Obj_82FB5FA0 {
  char pad0[0x8];
  unsigned int f8;
  int fc;
  unsigned int f10;
} Obj_82FB5FA0;
extern unsigned char fn_82FB48E8(unsigned int);
extern void fn_82FB5D80(void *, unsigned int);

void fn_82FB5FA0(Obj_82FB5FA0 *o, unsigned int a, unsigned int b)
{
  Sub_82FB5FA0 *s;
  unsigned char ok;

  if (b != *(unsigned int *)(*(int *)((char *)o - 8) + 0x28) && o->fc != 1) {
    return;
  }
  if (o->f8 == a) {
    return;
  }
  s = *(Sub_82FB5FA0 **)((char *)o - 0x34);
  if (s != 0) {
    if (*s->p74 != 0) ok = 1;
    else { if (s->c != 0) ok = fn_82FB48E8(s->c); else ok = 0; }
    if (ok != 0) {
      o->f10 = a;
      goto done;
    }
  }
  fn_82FB5D80((char *)o - 0x40, a);
done:
  o->f8 = a;
}
