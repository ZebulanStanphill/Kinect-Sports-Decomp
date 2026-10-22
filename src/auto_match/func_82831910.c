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
extern int fn_82831868();


void fn_82831910(int param_1,int param_2)

{
  uint iVar1, a, b;
  struct { uint a,b; } t;
  
  if (*(uint *)(param_2 + 0x14) != 0) {
    a = *(uint *)(param_1 + 0x2c8);
    if (*(uint *)(param_2 + 0x14) != a) {
      b = *(uint *)(param_1 + 0x2b8);
      if (b != 0) {
        *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) + 1;
        if (*(char *)(param_1 + 1000) == '\0') {
          t.a = a;
          t.b = b;
          fn_82831868(&t.a,*(undefined4 *)(param_1 + 0x3c0));
        }
        *(undefined4 *)(param_1 + 0x2b8) = 0;
      }
      *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_2 + 0x14);
    }
    iVar1 = *(uint *)(param_1 + 700) + 1;
    *(uint *)(param_1 + 700) = iVar1;
    b = *(uint *)(param_1 + 0x2b8) + 1;
    *(uint *)(param_1 + 0x2b8) = b;
    if (iVar1 == *(uint *)(param_1 + 0xb4)) {
      *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) + 1;
      if (*(char *)(param_1 + 1000) == '\0') {
        t.a = *(uint *)(param_1 + 0x2c8);
        t.b = b;
        fn_82831868(&t.a,*(undefined4 *)(param_1 + 0x3c0));
      }
    }
  }
  return;
}

