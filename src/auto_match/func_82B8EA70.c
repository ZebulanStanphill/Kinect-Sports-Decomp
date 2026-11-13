typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82B86C90();
extern int fn_82B8E280();
extern unsigned int uStack_58;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

__int64 * fn_82B8EA70(__int64 *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  bool bVar3;
  unsigned int auStack_60 [2];
  unsigned int uStack_58;
  unsigned char auStack_50 [80];
  
  uVar1 = *(unsigned int *)(param_2 + 8);
  bVar3 = false;
  uStack_58 = 0;
  if (((uVar1 >> 5 & 1) == 0) && ((uVar1 >> 0x19 & 1) == 0)) {
    uVar1 = uVar1 >> 7 & 0x7f;
    if ((0x52 < uVar1) && (uVar1 < 0x60)) {
      bVar3 = true;
    }
    if (((!bVar3) && (uVar1 != 0x7d)) &&
       (uVar2 = fn_82B86C90(param_2,auStack_50,auStack_60),
       (uVar2 & 0xffffffff) == (unsigned __int64)((1 << (*(unsigned int *)(param_2 + 8) >> 0xe & 7)) - 1))) {
      fn_82B8E280(param_1,param_3,param_2,uVar2,auStack_50,param_4,auStack_60[0]);
      return param_1;
    }
  }
  *param_1 = (unsigned __int64)uStack_58 << 0x20;
  return param_1;
}

