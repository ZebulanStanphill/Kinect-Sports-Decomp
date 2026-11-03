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
extern void fn_822315A0(void *);
extern void fn_822333A0(void *);
extern void fn_82359C18(void *);
extern void fn_828E3228(void *);
extern void fn_828E32A0(void *);
extern unsigned int lbl_821968A4;
extern unsigned int lbl_82196C50;

void fn_82232E70(void *self)
{
  char *o = (char *)self;
  char *b;
  void *p;

  *(void **)o = &lbl_82196C50;
  *(void **)(o + 0x28) = &lbl_821968A4;
  b = o + 0x430;
  fn_82359C18(b + 0x50);
  fn_82359C18(b + 0x38);
  fn_828E32A0(b);
  p = *(void **)(o + 0x42c);
  b = o + 0x3c0;
  if (p != 0) {
    fn_822315A0(p);
  }
  fn_82359C18(b + 0x50);
  fn_82359C18(b + 0x38);
  fn_828E32A0(b);
  p = *(void **)(o + 0x3bc);
  b = o + 0x348;
  if (p != 0) {
    fn_822315A0(p);
  }
  p = *(void **)(b + 0x6c);
  if (p != 0) {
    fn_822315A0(p);
  }
  fn_82359C18(b + 0x50);
  fn_82359C18(b + 0x38);
  fn_828E32A0(b);
  fn_822333A0(o + 0x30);
  fn_828E3228(o);
}
