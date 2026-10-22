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
extern int fn_8223C478();
extern int fn_8288A398();
extern int fn_828E9DB8();
extern int fn_828E9F18();


static void wb(undefined8 s, undefined4 v, int n)
{
  fn_8223C478(s,n,0);
  fn_828E9DB8(s,v,n);
}
static void wb64(undefined8 s, undefined8 v, int n)
{
  fn_8223C478(s,n,0);
  fn_828E9F18(s,v,n);
}
void fn_828DD470(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = fn_8288A398();
  wb(param_2,*(undefined4 *)(iVar2 + 0x38),0x20);
  wb64(param_2,*(undefined8 *)(param_1 + 0x80),0x40);
  wb(param_2,*(undefined4 *)(param_1 + 0x88),8);
  wb(param_2,*(undefined4 *)(param_1 + 0x8c),8);

  return;
}

