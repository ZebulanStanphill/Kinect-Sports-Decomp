extern int fn_82341008();
extern int fn_8265C9E0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82191418;
extern unsigned int lbl_821922D4;
extern unsigned int lbl_82192754;
extern unsigned int lbl_82195610;
extern unsigned int lbl_821B1C18;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_82349DE8(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  fn_82341008();
  *param_1 = &lbl_821B1C18;
  puVar8 = (unsigned int *)fn_8265C9E0(0x50);
  uVar6 = lbl_82195610;
  uVar2 = lbl_8218E8E8;
  if (puVar8 == (unsigned int *)0x0) {
    puVar8 = (unsigned int *)0x0;
  }
  else {
    puVar8[0x10] = 0;
    uVar7 = ltcg_pool_0_0f;
    puVar8[0x11] = 0;
    uVar5 = lbl_82192754;
    puVar8[0x12] = 2;
    uVar4 = lbl_821922D4;
    uVar3 = lbl_82191418;
    *(unsigned char *)(puVar8 + 4) = 0;
    puVar8[6] = uVar2;
    *(unsigned char *)((int)puVar8 + 0x11) = 0;
    puVar8[7] = uVar7;
    *(unsigned char *)((int)puVar8 + 0x12) = 0;
    puVar8[8] = uVar2;
    *(unsigned char *)((int)puVar8 + 0x13) = 0;
    puVar8[9] = uVar7;
    *(unsigned char *)(puVar8 + 5) = 0;
    puVar8[10] = uVar6;
    *puVar8 = uVar5;
    puVar8[1] = uVar3;
    puVar8[2] = uVar4;
    puVar8[3] = uVar7;
    puVar1 = (unsigned int *)((unsigned int)(puVar8 + 0xc) & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
  }
  param_1[4] = puVar8;
  return param_1;
}

