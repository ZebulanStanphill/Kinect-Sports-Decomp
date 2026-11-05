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
extern int fn_827555D8();
extern int fn_82756488();
extern int fn_82756F70();
extern int fn_827A1508();
extern int fn_827A8738();

typedef struct Hdr_827A3578 { unsigned flag : 1; unsigned rest : 31; int pad; unsigned val; } Hdr_827A3578;

uint fn_827A3578(int param_1,int param_2,uint *param_3)
{
  bool bVar1;
  unsigned int uVar3;
  Hdr_827A3578 *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar2;
  uint t;
  uint fl;
  struct { uint first; uint second; uint rest[24]; } it;

  uVar3 = fn_827A1508(*(undefined4 *)(param_1 + 8));
  if ((int)uVar3 != -1) {
    piVar4 = (Hdr_827A3578 *)fn_827A8738(*(uint *)(param_1 + 8) + 0x24,uVar3);
    if (piVar4 != 0) {

  if ((unsigned char)piVar4->flag) { t = piVar4->val & 0xffffff; if (t == 0xffffff) t = 0xffffffff; } else t = piVar4->val;
  uVar5 = t;
  uVar7 = param_2 - t;
  fn_82756F70(&it.first,piVar4);
  uVar6 = 0;
  while( 1 ) {
    bVar1 = (it.first == 0) || (it.first >= it.second);
    if (((bVar1) || ((*(ushort *)(it.first + 4) & 0xf000) != 0)) ||
       ((*(byte *)(it.first + 6) & 1) != 0)) break;
    fn_827555D8(&it.first);
  }
  uVar9 = 0;
  uVar8 = 0;
  do {
    uVar5 = uVar9 + uVar5;
    bVar1 = (it.first == 0) || (it.first >= it.second);
    if (bVar1) break;
    uVar9 = (uint)(*(ushort *)(it.first + 4) >> 0xc);
    uVar6 = it.first;
    uVar8 = uVar8 + uVar9;
    fn_827555D8(&it.first);
  } while (uVar8 <= uVar7);
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar5;
  }
  fn_82756488(&it.first);
  return uVar6;
    }
  }
  return 0;
}
