typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA64F8();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82AC8C90(unsigned int *param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned int uVar1;
  bool bVar2;
  int iVar3;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  
  uVar1 = *param_2;
  if ((uVar1 & 0x40000000) != 0) {
    bVar2 = true;
    if ((uVar1 & 0xe000000) == 0) goto code_r0x82ac8cac;
  }
  bVar2 = false;
code_r0x82ac8cac:
  if (!bVar2) {
    return;
  }
  iVar3 = (uVar1 >> 0xd & 0xfff) + 1;
  uStack00000048 = (unsigned __int64)(unsigned int)param_1[iVar3];
  if (uStack00000048 != 0) {
    if (uStack00000048 == (param_4 & 0xffffffff)) {
      return;
    }
    uStack00000020 = param_3;
    uStack00000028 = param_4;
    uStack00000030 = param_5;
    uStack00000038 = param_6;
    uStack00000040 = param_7;
                    /* WARNING: Subroutine does not return */
    fn_82AA64F8(*param_1,0x12c0,&stack0x00000020);
  }
  param_1[iVar3] = (int)param_4;
  return;
}

