typedef unsigned char bool;
extern unsigned int lbl_82079AE8;
extern unsigned int lbl_82079AEC;


void fn_829ECEE8(unsigned __int64 param_1,unsigned int *param_2,__int64 param_3,unsigned int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  
  if (0 < (int)param_3) {
    do {
      iVar3 = (int)*param_2 / (int)(param_4 & 0xffff);
      bVar1 = -1 < iVar3;
      if (!bVar1) {
        iVar3 = -iVar3;
      }
      if (iVar3 < 0x90000) {
        iVar3 = (iVar3 << 8) / 9;
        iVar2 = (iVar3 >> 0x10) * 4;
        uVar4 = iVar3 >> 8 & 0xff;
        uVar4 = (int)(*(int *)(&lbl_82079AE8 + iVar2) * (0x100 - uVar4) +
                     *(int *)(&lbl_82079AEC + iVar2) * uVar4) >> 8;
        if (!bVar1) {
          uVar4 = 0x10000 - uVar4;
        }
      }
      else {
        uVar4 = -(unsigned int)bVar1 & 0x10000;
      }
      *param_2 = uVar4;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

