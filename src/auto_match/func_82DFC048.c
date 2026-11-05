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
typedef struct Interface_82DFC048 {unsigned *vt;} Interface_82DFC048;
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;


void fn_82DFC048(int param_1,float param_2,int param_3)

{
  unsigned *iVar1;
  
  *(undefined1 *)(param_3 + 0xc) = *(undefined1 *)(*(int *)(param_1 + 0x1c) + 0x20);
  *(undefined1 *)(param_3 + 0xd) = *(undefined1 *)(param_1 + 0xcc);
  *(undefined1 *)(param_3 + 0xe) = *(undefined1 *)(param_1 + 0xcd);
  *(undefined1 *)(param_3 + 0xf) = *(undefined1 *)(param_1 + 0xce);
  *(float *)(param_3 + 0x10) = *(float *)(param_1 + 0xd0);
  { int obj=*(int *)(param_1+44); iVar1 = *(unsigned **)*(int *)(param_1+44);
  (*(void (**)(int,float,int,int))((int)iVar1+12))(*(int *)(param_1+44),param_2,param_1,param_3);
  }
  *(undefined1 *)(param_1 + 0xcc) = *(undefined1 *)(param_3 + 0xd);
  *(undefined1 *)(param_1 + 0xcd) = *(undefined1 *)(param_3 + 0xe);
  *(undefined1 *)(param_1 + 0xce) = *(undefined1 *)(param_3 + 0xf);
  *(float *)(param_1 + 0xd0) = *(float *)(param_3 + 0x10);
  return;
}

