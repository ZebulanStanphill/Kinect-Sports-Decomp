extern unsigned int lbl_82005748;
extern unsigned int lbl_82192680;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_82196750;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;


void fn_82561778(unsigned int *param_1,int param_2,unsigned int param_3)

{
  char cVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int in_r0;
  char *pcVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  param_1[0x2a] = param_3;
  uVar4 = ltcg_pool_0_0f;
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 4) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 0xc) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  if ((param_3 & 1) == 0) {
    puVar2 = (unsigned int *)((unsigned int)(&lbl_82196750 + in_r0) & 0xfffffff0);
    uVar6 = puVar2[1];
    uVar7 = puVar2[2];
    uVar8 = puVar2[3];
    puVar3 = (unsigned int *)((unsigned int)(param_1 + 0x10) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
  }
  else {
    param_1[0x16] = uVar4;
    param_1[0x15] = uVar4;
    param_1[0x14] = uVar4;
  }
  uVar7 = lbl_82192680;
  uVar6 = lbl_82005748;
  pcVar5 = (char *)(param_1 + 0x21);
  param_1[0x1b] = 3;
  uVar8 = lbl_82193AF0;
  param_2 = param_2 - (int)pcVar5;
  param_1[0x18] = uVar7;
  param_1[0x19] = uVar8;
  param_1[0x1a] = uVar6;
  do {
    if ((char *)((int)param_1 + 0xa5) <= pcVar5) break;
    cVar1 = pcVar5[param_2];
    *pcVar5 = cVar1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (pcVar5 == (char *)((int)param_1 + 0xa5)) {
    pcVar5[-1] = '\0';
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = lbl_8326B430;
  uVar6 = lbl_8326B434;
  param_1[0x31] = lbl_821CA460;
  param_1[0x32] = uVar4;
  param_1[0x30] = uVar6;
  param_1[3] = 1;
  param_1[0x33] = 0;
  param_1[0x34] = 1;
  return;
}

