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
extern int fn_8287CBD0();


typedef struct It_828A2988 { unsigned int *p; unsigned int b; unsigned int n; } It_828A2988;

It_828A2988 *fn_828A2988(It_828A2988 *param_1,It_828A2988 *param_2,It_828A2988 *param_3,It_828A2988 *param_4)
{
  unsigned int *pa;
  unsigned int *pb;
  unsigned int **pp;
  unsigned int *q;
  {
    while (param_2->n != param_3->n) {
      param_3->n = param_3->n - 1;
      pa = (unsigned int *)fn_8287CBD0(param_3);
      param_4->n = param_4->n - 1;
      pb = (unsigned int *)fn_8287CBD0(param_4);
      *pb = *pa;
    }
  }
  pp = (unsigned int **)param_4->p;
  param_1->p = 0;
  param_1->b = 0;
  if (pp != 0 && (q = *pp, q != 0)) {
    param_1->p = (unsigned int *)*q;
  }
  param_1->n = param_4->n;
  return param_1;
}
