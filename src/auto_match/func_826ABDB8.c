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
extern int fn_826AA3E0();


typedef struct E_826ABDB8 { int a; int *b; } E_826ABDB8;
typedef struct V_826ABDB8 { char pad[0x50]; E_826ABDB8 *data; unsigned int n; } V_826ABDB8;

E_826ABDB8 *fn_826ABDB8(V_826ABDB8 *v,int param_2,int **param_3)
{
  E_826ABDB8 *p;
  int *r;
  int *q;
  fn_826AA3E0(&v->data, v->n + 1);
  p = v->data + v->n - 1;
  p->a = param_2;
  r = *param_3;
  r[2] = r[2] + 1;
  q = p->b;
  if (--q[2] == 0) {
    fn_826944C8(q);
  }
  p->b = r;
  return p;
}
