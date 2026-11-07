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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _uStack_20 ((*(U64*)&uStack_20))
extern int fn_82CE5458();
extern unsigned int iStack_1c;
extern float lbl_82131F88[];
extern float lbl_821954B0[];
extern unsigned int uStack_20;


void fn_824203A0(int param_1,int *param_2)

{
  float uVar1;
  int iVar2;
  float uStack_20;
  int iStack_1c;
  
  if (*param_2 == 0) {
    iVar2 = param_2[2];
  }
  else {
    iVar2 = param_2[1];
  }
  if ((*(byte *)(iVar2 + 0xe8) == '\x04') || (*(byte *)(iVar2 + 0xe8) == '\x05')) {
    iVar2 = (int)(*(float *)(param_1 + 8) * lbl_821954B0[151]);
    *(char *)(param_2[6] + 0xd) = (char)iVar2;
    if (*(int *)(param_1 + 0x10) != 0) {
      if (*(int *)(param_1 + 0x14) == 0) {
        *(float *)(param_1 + 4) = lbl_82131F88[*(byte *)(param_2[6] + 0xc)];
      }
      uVar1 = *(float *)(param_1 + 0xc);
    } else {
      if (*(int *)(param_1 + 0x14) == 0) goto LAB_82420464;
      uVar1 = *(float *)(param_1 + 4);
    }
    uStack_20 = uVar1;
    fn_82CE5458(param_2[6] + 0xc,&uStack_20);
  }
LAB_82420464:
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  return;
}

