extern unsigned int lbl_831B8D30;
extern unsigned int lbl_831B8D40;


void fn_82F14878(unsigned __int64 param_1,unsigned int *param_2,unsigned int *param_3,int *param_4,int param_5)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  
  uVar3 = (unsigned __int64)((int)param_1 >> 0x1f);
  uVar3 = (param_1 ^ uVar3) - uVar3;
  uVar2 = (int)param_1 >> 0x10 & 1;
  if (uVar3 == 0) {
    *param_3 = 0;
    *param_2 = 0;
    *param_4 = 0;
    return;
  }
  iVar4 = (int)uVar3;
  if (iVar4 < 3) {
    *param_3 = (int)((uVar3 & 0xffffffff) << 1) - 2U | uVar2;
    *param_2 = 1;
    *param_4 = 2;
    return;
  }
  if (iVar4 < 7) {
    iVar1 = (int)((uVar3 - 3 & 0xffffffff) << 2);
    *param_2 = 2;
    iVar4 = *(int *)(&lbl_831B8D30 + iVar1);
    *param_3 = *(int *)(&lbl_831B8D40 + iVar1) << 1 | uVar2;
    *param_4 = iVar4 + 1;
    return;
  }
  if (iVar4 < 0xf) {
    *param_2 = 3;
    iVar1 = (iVar4 + -7 >> 1) * 4;
    iVar4 = *(int *)(&lbl_831B8D30 + iVar1);
    *param_3 = *(int *)(&lbl_831B8D40 + iVar1) << 2 | -(int)((uVar3 & 0xffffffff) << 1) - 1U & 2 |
               uVar2;
    *param_4 = iVar4 + 2;
    return;
  }
  if (iVar4 < 0x1f) {
    iVar1 = (iVar4 + -0xf >> 2) * 4;
    *param_2 = 4;
    iVar4 = *(int *)(&lbl_831B8D30 + iVar1);
    *param_3 = *(int *)(&lbl_831B8D40 + iVar1) << 3 | (unsigned int)((uVar3 + 1 & 0xffffffff) << 1) & 6 |
               uVar2;
    *param_4 = iVar4 + 3;
    return;
  }
  *param_2 = 5;
  if (param_5 != 0) {
    iVar1 = (iVar4 + -0x1f >> 4) * 4;
    iVar4 = *(int *)(&lbl_831B8D30 + iVar1);
    *param_3 = *(int *)(&lbl_831B8D40 + iVar1) << 5 | (unsigned int)((uVar3 + 1 & 0xffffffff) << 1) & 0x1e |
               uVar2;
    *param_4 = iVar4 + 5;
    return;
  }
  iVar1 = (iVar4 + -0x1f >> 5) * 4;
  iVar4 = *(int *)(&lbl_831B8D30 + iVar1);
  *param_3 = *(int *)(&lbl_831B8D40 + iVar1) << 6 | (unsigned int)((uVar3 + 1 & 0xffffffff) << 1) & 0x3e |
             uVar2;
  *param_4 = iVar4 + 6;
  return;
}

