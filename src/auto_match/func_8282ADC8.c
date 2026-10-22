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
typedef struct {
  char pad[0x10];
  unsigned int *p10;
  unsigned int a14;
  unsigned int a18;
  unsigned int a1c;
  unsigned int a20;
} S;

extern int fn_82820EF8(unsigned int *p, int n);
extern int fn_82826568(int a, unsigned int b, unsigned int *out);
extern int fn_828295A8(unsigned int a, unsigned int *out);

void fn_8282ADC8(int param_1, S *s)
{
  unsigned int off;
  unsigned int a;
  unsigned int b;

  if (s->a14 != 0) {
    fn_82826568(param_1, s->a14, &a);
    fn_82826568(param_1, s->a18, &b);
    fn_828295A8(a, &off);
    s->p10 = (unsigned int *)(s->a1c + off);
    fn_82820EF8(s->p10, 4);
    s->a20 = *s->p10;
    fn_828295A8(b, &off);
    *s->p10 += off;
  }
}
