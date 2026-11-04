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
extern int fn_82F819D0();
extern int fn_82F86B68();


extern char lbl_831BBCA8[];
typedef struct Loc_82F864F8 { char a30[8]; char a28[8]; } Loc_82F864F8;
undefined8 fn_82F864F8(undefined8 param_1,undefined8 param_2)
{
  unsigned int uVar1;
  int iVar2;
  undefined8 r;
  Loc_82F864F8 loc;

  uVar1 = fn_82F819D0(loc.a28,loc.a30,param_2,0,0,0,0,lbl_831BBCA8);
  iVar2 = fn_82F86B68(loc.a28,param_1);
  if ((uVar1 & 3) == 0) {
    if (iVar2 == 1) return 3;
    if (iVar2 != 2) return 0;
    return 4;
  } else if ((uVar1 & 1) != 0) return 4;
  r = 3;
  if ((uVar1 & 2) != 0) return r;
  return 0;
}
