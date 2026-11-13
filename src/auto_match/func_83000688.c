extern unsigned int *auStack_50;
extern int fn_82FF2D40();
extern unsigned int lbl_8217BB40;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_83000688(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned short *param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  double dVar4;
  unsigned int auStack_50;
  
  uVar3 = param_2 & 0xffff;
  if ((uVar3 != 0) && (uVar3 < *param_4)) {
    uVar2 = (unsigned int)*param_4 - (param_2 & 0xffff) & 0xffff;
    if ((int)(param_4[1] - uVar3) <= (int)uVar2) {
      uVar2 = param_4[1] - uVar3;
    }
    if ((uVar2 & 0xffff) != 0) {
      uVar3 = 0;
      dVar4 = (double)lbl_8217BB40;
      iVar1 = param_1;
      do {
        auStack_50 = 0;
        iVar1 = fn_82FF2D40(dVar4,iVar1,param_3,*(unsigned int *)(param_1 + 0xc),
                                  *(unsigned char *)(param_1 + 0x3d) >> 7,&auStack_50);
        uVar3 = uVar3 + 1 & 0xffff;
      } while (uVar3 < (uVar2 & 0xffff));
    }
  }
  param_4[1] = (unsigned short)param_2;
  return;
}

