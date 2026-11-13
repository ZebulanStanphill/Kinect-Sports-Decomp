extern int fn_82B7BD28();
extern int fn_82BA03B8();
extern int fn_82BC0088();
extern unsigned int lbl_820E0214;
extern unsigned int lbl_821AAD20;


unsigned int * fn_82BB6C20(int *param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  
  iVar2 = param_1[5];
  uVar7 = 0;
  if (*(int *)(iVar2 + 4) != 0) {
    iVar5 = 0;
    do {
      if ((uVar7 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar2 + 4)) {
        piVar3 = (int *)(*(int *)(iVar2 + 8) + iVar5);
      }
      else {
        piVar3 = (int *)fn_82BC0088(iVar2,uVar7);
      }
      iVar2 = param_1[5];
      if (*(int *)(*piVar3 + 0x28) == param_2) {
        if ((uVar7 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar2 + 4)) {
          puVar4 = (unsigned int *)(*(int *)(iVar2 + 8) + (int)uVar7 * 4);
        }
        else {
          puVar4 = (unsigned int *)fn_82BC0088(iVar2,uVar7);
        }
        return (unsigned int *)*puVar4;
      }
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 + 4;
    } while ((uVar7 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar2 + 4));
  }
  uVar1 = *(unsigned int *)(*param_1 + 0x5b0);
  puVar4 = (unsigned int *)fn_82B7BD28(uVar1,0x48);
  puVar6 = puVar4 + 1;
  *puVar4 = uVar1;
  if (puVar6 == (unsigned int *)0x0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    uVar1 = *(unsigned int *)(param_1[5] + 4);
    puVar4[5] = lbl_821AAD20;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar6 = &lbl_820E0214;
    puVar4[8] = 0xffffffff;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = param_2;
    puVar4[0xc] = uVar1;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    *(unsigned char *)(puVar4 + 0xf) = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[4] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
  }
  *(unsigned char *)(puVar6 + 0xe) = 0;
  uVar1 = *(unsigned int *)(*param_1 + 0x5b0);
  puVar4 = (unsigned int *)fn_82B7BD28(uVar1,0x14);
  puVar8 = puVar4 + 1;
  *puVar4 = uVar1;
  if (puVar8 == (unsigned int *)0x0) {
    puVar8 = (unsigned int *)0x0;
  }
  else {
    fn_82BA03B8(puVar8,*(unsigned int *)(*param_1 + 0x5b0));
  }
  puVar6[0xd] = puVar8;
  uVar1 = *(unsigned int *)(*param_1 + 0x5b0);
  puVar4 = (unsigned int *)fn_82B7BD28(uVar1,0x14);
  puVar8 = puVar4 + 1;
  *puVar4 = uVar1;
  puVar4 = (unsigned int *)0x0;
  if (puVar8 != (unsigned int *)0x0) {
    fn_82BA03B8(puVar8,*(unsigned int *)(*param_1 + 0x5b0));
    puVar4 = puVar8;
  }
  puVar6[0xc] = puVar4;
  puVar4 = (unsigned int *)fn_82BC0088(param_1[5],*(unsigned int *)(param_1[5] + 4));
  *puVar4 = puVar6;
  return puVar6;
}

