extern int fn_82F68CC0();
extern unsigned int lbl_82134508;
extern unsigned int lbl_821AAD20;


unsigned int * fn_82D5BDC0(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned __int64 *puVar3;
  unsigned __int64 *puVar4;
  __int64 lVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  
  uVar6 = lbl_82134508;
  *param_1 = *param_2;
  param_1[0x40c] = uVar6;
  uVar6 = lbl_821AAD20;
  param_1[0x414] = lbl_821AAD20;
  puVar4 = (unsigned __int64 *)(param_2 + 0xc12);
  param_1[0x415] = uVar6;
  puVar3 = (unsigned __int64 *)(param_1 + 0x412);
  puVar1 = (unsigned int *)((int)param_2 + in_r0 + 0x3010 & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (unsigned int *)((int)param_1 + in_r0 + 0x1010 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  puVar1 = (unsigned int *)((unsigned int)(param_2 + 0xc08) & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  lVar5 = 6;
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x408) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  param_1[0x40c] = param_2[0xc0c];
  param_1[0x40d] = param_2[0xc0d];
  *(unsigned __int64 *)(param_1 + 0x410) = *(unsigned __int64 *)(param_2 + 0xc10);
  *(unsigned __int64 *)(param_1 + 0x412) = *(unsigned __int64 *)(param_2 + 0xc12);
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if (param_2[0xc20] != 0) {
    fn_82F68CC0(param_1 + 1,param_2[0xc20],0x1008);
  }
  return param_1;
}

