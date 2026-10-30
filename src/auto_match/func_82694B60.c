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
extern int fn_826944C8();
extern int fn_82694610();


extern unsigned int strlen(const char *s);
typedef struct Rc_82694B60 { int a; int b; int rc; } Rc_82694B60;
typedef struct Hd_82694B60 { void *p; } Hd_82694B60;

void fn_82694B60(Rc_82694B60 **param_1,char *param_2)
{
  Rc_82694B60 *r;
  Rc_82694B60 *n;
  r = (Rc_82694B60 *)fn_82694610(*(unsigned int *)((unsigned int)*param_1 & 0xfffffc00),param_2,strlen(param_2));
  r->rc++;
  n = *param_1;
  if (--n->rc == 0) {
    fn_826944C8(n);
  }
  *param_1 = r;
}
