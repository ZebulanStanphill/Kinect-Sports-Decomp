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
extern int fn_82FA5190();
extern int fn_8303A1F0();
extern float lbl_82002AE0;
extern unsigned int lbl_831BC770;


void fn_830269B8(int param_1)

{
  float uVar1;

  (*(void (**)(int))(**(int **)(param_1 + 4) + 8))(*(int *)(param_1 + 4));
  if (*(unsigned int *)(param_1 + 0x74) != 0) {
    fn_82FA5190(lbl_831BC770, *(unsigned int *)(param_1 + 0x74));
  }
  *(int *)(param_1 + 0x60) = 0;
  *(short *)(param_1 + 0x6e) = 0;
  uVar1 = lbl_82002AE0;
  *(short *)(param_1 + 0x6c) = 0;
  *(float *)(param_1 + 0x7c) = uVar1;
  *(int *)(param_1 + 0x68) = 0x2b;
  *(short *)(param_1 + 0x70) = 0;
  *(int *)(param_1 + 0x74) = 0;
  *(int *)(param_1 + 0x78) = 0xffffffff;
  *(int *)(param_1 + 0x80) = 0xffffffff;
  *(int *)(param_1 + 0x84) = 1;
  fn_8303A1F0(param_1 + 0x10);
  {
    char *c = (char *)(param_1 + 0xb8);
    *c = 0;
  }
  (*(void (**)(int))(**(int **)(param_1 + 4) + 0x18))(*(int *)(param_1 + 4));
}
