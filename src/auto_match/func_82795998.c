// Built with link-time code generation together with its "ltcg_units" (objects.json):
// n stays in volatile r4 across fn_8278FD18, which LTCG knows leaves it alone.
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
extern unsigned char fn_8278FD18(unsigned int *v);
extern void fn_827954C0(unsigned int *p, unsigned int n, int flag);

void fn_82795998(unsigned int *param_1)
{
  unsigned int n;

  if (fn_8278FD18(param_1)) {
    n = param_1[1];
    if (n != 0 && fn_8278FD18(param_1)) {
      n = n - 1;
    }
    fn_827954C0(param_1 + 4, n, 1);
    n = param_1[1];
    if (n != 0 && *(short *)(n * 2 + *param_1 - 2) == 0) {
      param_1[1] = n - 1;
    }
  }
}
