#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82630B08();
extern unsigned int lbl_8320A898;


void fn_82532F98(int *param_1,unsigned short *param_2)

{
  unsigned short uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  
  uVar1 = *(unsigned short *)(param_1 + 2);
  uVar4 = (unsigned __int64)uVar1;
  if (uVar1 != 0) {
    iVar5 = 0;
    do {
      if (*param_2 != 0xffff) {
        iVar7 = param_1[1] + iVar5;
        iVar6 = (unsigned int)*param_2 * 0x40 + *param_1;
        puVar2 = (unsigned int *)(in_r0 + iVar7 & 0xfffffff0);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (unsigned int *)(in_r0 + iVar6 & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        puVar2 = (unsigned int *)(iVar7 + 0x10U & 0xfffffff0);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (unsigned int *)(iVar6 + 0x10U & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        puVar2 = (unsigned int *)(iVar7 + 0x20U & 0xfffffff0);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (unsigned int *)(iVar6 + 0x20U & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        puVar2 = (unsigned int *)(iVar7 + 0x30U & 0xfffffff0);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (unsigned int *)(iVar6 + 0x30U & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
      }
      iVar5 = iVar5 + 0x40;
      param_2 = param_2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  iVar5 = param_1[1];
  for (uVar4 = CONCAT44(iVar5,iVar5) & 0xffffffffffffff7f;
      (int)uVar4 < (int)((unsigned int)uVar1 * 0x40 + iVar5); uVar4 = uVar4 + 0x80) {
    dataCacheBlockFlush(uVar4);
  }
  iVar6 = *param_1;
  for (uVar4 = CONCAT44(iVar6,iVar6) & 0xffffffffffffff7f;
      (int)uVar4 < (int)((unsigned int)uVar1 * 0x40 + iVar6); uVar4 = uVar4 + 0x80) {
    dataCacheBlockFlush(uVar4);
  }
  fn_82630B08(lbl_8320A898,iVar5,(unsigned __int64)*(unsigned short *)(param_1 + 2) << 6,0);
  fn_82630B08(lbl_8320A898,*param_1,(unsigned __int64)*(unsigned short *)(param_1 + 2) << 6,0);
  return;
}

