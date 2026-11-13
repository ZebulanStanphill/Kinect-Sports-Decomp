extern unsigned int lbl_82027790;
extern unsigned int lbl_82027794;
extern unsigned int lbl_82027798;


unsigned __int64 fn_828F0170(unsigned char *param_1,unsigned int param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  
  if (param_1 == (unsigned char *)0x0) {
    uVar4 = 0xffffffff8876086c;
  }
  else {
    uVar7 = 0;
    uVar8 = 0x31;
    do {
      uVar9 = (uVar8 + uVar7 & 0xffffffff) >> 1;
      iVar1 = (int)uVar9 * 0xc;
      pbVar6 = *(unsigned char **)(&lbl_82027790 + iVar1);
      pbVar5 = param_1;
      do {
        uVar3 = (unsigned int)*pbVar5;
        uVar2 = (unsigned int)*pbVar6;
        if (*pbVar6 == 0) break;
        pbVar6 = pbVar6 + 1;
        pbVar5 = pbVar5 + 1;
      } while (uVar2 == uVar3);
      if (uVar2 == uVar3) {
        if ((*(unsigned int *)(&lbl_82027798 + iVar1) & param_2) == param_2) {
          if (param_3 != (unsigned int *)0x0) {
            *param_3 = *(unsigned int *)(&lbl_82027790 + iVar1);
            param_3[1] = *(unsigned int *)(&lbl_82027794 + iVar1);
            param_3[2] = *(unsigned int *)(&lbl_82027798 + iVar1);
          }
          return 0;
        }
        break;
      }
      if ((int)(uVar2 - uVar3) < 0) {
        uVar7 = uVar9 + 1;
        uVar9 = uVar8;
      }
      uVar8 = uVar9;
    } while (uVar7 < uVar9);
    uVar4 = 0xffffffff80004005;
  }
  return uVar4;
}

