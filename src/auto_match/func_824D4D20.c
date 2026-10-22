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
extern int fn_824CD480();
extern int fn_824CD4E8();
extern int fn_82517CB0();
extern int fn_82517D50();
extern int fn_8265C9E0();
extern unsigned int lbl_821C0BE0;
extern unsigned int lbl_821C0C24;
extern unsigned int lbl_821C0DF8;
extern unsigned int lbl_821C112C;


undefined4 * fn_824D4D20(undefined4 *param_1,undefined8 param_2)

{
  void *p;
  undefined4 *puVar3;
  int i;
  
  fn_82517D50(param_1,param_2,7);
  param_1[0x20] = 0;
  *param_1 = &lbl_821C0BE0;
  puVar3 = param_1 + 0x28;
  param_1[0x1a] = &lbl_821C0C24;
  i = 0x13;
  param_1[0x24] = 0;
  do {
    fn_824CD480(puVar3);
    puVar3 = puVar3 + 0x1c;
  } while (--i >= 0);
  *(undefined8 *)(param_1 + 0x22) = 0;
  p = (void *)fn_8265C9E0(0x220);
  param_1[0x25] = p ? fn_824CD4E8(p) : 0;
  fn_82517CB0();
  *param_1 = &lbl_821C0DF8;
  param_1[0x1a] = &lbl_821C112C;
  fn_82517CB0();
  return param_1;
}
