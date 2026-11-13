typedef unsigned char bool;
#define true 1
extern unsigned int lbl_8201DFEC;
extern unsigned int lbl_82057B98;
extern unsigned int lbl_821AAD20;


bool fn_829E5BC0(double param_1,int *param_2)

{
  float fVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  
  if (param_1 <= (double)lbl_8201DFEC) {
    uVar3 = 0;
    iVar4 = 0;
    do {
      iVar5 = 0;
      lVar6 = 5;
      do {
        if ((double)lbl_8201DFEC < (double)*(float *)((iVar4 + iVar5) * 4 + *(int *)(*param_2 + 4)))
        {
          uVar3 = uVar3 + 1;
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      iVar4 = iVar4 + 5;
    } while (iVar4 < 0x19);
    if (uVar3 < 4) {
      iVar4 = 0x264;
      lVar6 = 0x80;
      fVar1 = lbl_821AAD20;
      do {
        puVar2 = (unsigned int *)(iVar4 + *(int *)(*param_2 + 4));
        iVar4 = iVar4 + 4;
        fVar1 = (float)*puVar2 + fVar1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      return lbl_82057B98 <
             fVar1 / (float)(((__int64)param_2[0xd] * (__int64)param_2[0xc] & 0xffffffffU) >> 1);
    }
  }
  return true;
}

