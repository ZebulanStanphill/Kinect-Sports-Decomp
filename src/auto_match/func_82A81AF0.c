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
extern unsigned char lbl_8322344C;
extern int XamAvatarGetManifestLocalUser(unsigned int,int,int);
extern void fn_82A2A370(int);


uint fn_82A81AF0(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if (lbl_8322344C == '\0') {
    iVar1 = -0x7fff0001;
  }
  else {
    if (((param_1) < 4) && (param_2 != 0)) {
      iVar1 = XamAvatarGetManifestLocalUser(param_1,param_2,param_3);
    }
    else {
      iVar1 = -0x7ff8ffa9;
    }
    if (iVar1 >= 0) {
      return param_3 ? 0x3e5 : 0;
    }
  }
  if (param_3 != 0) {
    *(int *)(param_3 + 0x18) = iVar1;
  } else {
    fn_82A2A370(iVar1);
  }
  return 0x65b;
}

