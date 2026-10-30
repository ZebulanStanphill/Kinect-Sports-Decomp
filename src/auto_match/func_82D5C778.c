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
extern int fn_82D70F30(void *);
extern int fn_82DD77B0(void *, int, undefined8);
typedef struct Sub_82D5C778 { int a; int b; unsigned int c; } Sub_82D5C778;
typedef struct Ob_82D5C778 { char pad0[8]; int f8; char pad1[0x24]; Sub_82D5C778 sub; float f3c; char pad2[0x44]; char c84; char pad3; short s86; } Ob_82D5C778;

void fn_82D5C778(Ob_82D5C778 *p,undefined8 param_2)
{
  Sub_82D5C778 *s = &p->sub;
  fn_82DD77B0(s, p->f8, param_2);
  p->c84 = 0;
  if (s != 0) {
    s->a = 0;
    s->b = 0;
    s->c = 0x80000000;
  }
  fn_82D70F30(s);
  p->s86 = 0x19;
  p->f3c = 0.0f;
}
