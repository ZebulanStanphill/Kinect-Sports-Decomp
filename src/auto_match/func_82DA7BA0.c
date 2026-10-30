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
typedef struct { void *pad[7]; void (*f1c)(void *, void *); } Vt_82DA7BA0;

void fn_82DA7BA0(int param_1, int *param_2)
{
  int a;
  int b;
  int pa;
  int pb;

  a = param_2[0];
  if (*(char *)(a + 4) == 3) {
    if (*(unsigned char *)(param_2[1] + 4) == 3) {
      return;
    }
  }
  if (*(char *)(a + 4) == 3) {
    pa = a + *(char *)(a + 5);
    pb = param_2[1] + *(char *)(param_2[1] + 5);
    (*(Vt_82DA7BA0 **)(pa + *(char *)(pa + 0x10)))->f1c((void *)(pa + *(char *)(pa + 0x10)), (void *)pb);
  }
  b = param_2[1];
  if (*(unsigned char *)(b + 4) == 3) {
    pb = b + *(char *)(b + 5);
    pa = param_2[0] + *(char *)(param_2[0] + 5);
    (*(Vt_82DA7BA0 **)(pb + *(char *)(pb + 0x10)))->f1c((void *)(pb + *(char *)(pb + 0x10)), (void *)pa);
  }
}
