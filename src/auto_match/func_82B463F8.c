extern int fn_82AA64F8();
extern unsigned int lbl_83160F20;
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

__int64 fn_82B463F8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  char cVar1;
  char cVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned char **ppuVar5;
  char *pcVar6;
  char *pcVar7;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  
  iVar3 = *(int *)(param_2 + 0x10);
  if (((iVar3 == 0) || (param_8 = (unsigned __int64)*(unsigned int *)(iVar3 + 4), *(unsigned int *)(iVar3 + 4) != 3)) ||
     (param_8 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x10), *(unsigned int *)(iVar3 + 0x10) != 9)) {
    uStack00000020 = param_3;
    uStack00000028 = param_4;
    uStack00000030 = param_5;
    uStack00000038 = param_6;
    uStack00000040 = param_7;
    uStack00000048 = param_8;
                    /* WARNING: Subroutine does not return */
    fn_82AA64F8(param_1,0x12c1,&stack0x00000020);
  }
  uVar4 = 0;
  ppuVar5 = &lbl_83160F20;
  do {
    pcVar7 = *ppuVar5;
    pcVar6 = *(char **)(iVar3 + 0x18);
    do {
      cVar1 = *pcVar7;
      cVar2 = *pcVar6;
      if (cVar1 == '\0') break;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) break;
    uVar4 = uVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while ((uVar4 & 0xffffffff) < 0x17);
  if ((uVar4 & 0xffffffff) != 0x17) {
    return uVar4 + 1;
  }
  return 0;
}

