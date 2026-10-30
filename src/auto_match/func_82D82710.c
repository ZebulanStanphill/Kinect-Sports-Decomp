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
extern void fn_82D82658(int, int);


typedef struct { int *data; int size; } Arr_82D82710;
typedef struct { char pad[0x28]; Arr_82D82710 a; int pad2; Arr_82D82710 b; } Obj_82D82710;
static void Each_82D82710(Arr_82D82710 *a, int x)
{
  int *p;
  for (p = a->data; p != a->data + a->size; p++) {
    fn_82D82658(*p, x);
  }
}
void fn_82D82710(Obj_82D82710 *param_1, int param_2)
{
  Each_82D82710(&param_1->a, param_2);
  Each_82D82710(&param_1->b, param_2);
}
