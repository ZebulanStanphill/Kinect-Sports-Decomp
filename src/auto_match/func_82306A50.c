extern int fn_82250A18();
extern int fn_823CC7A0();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_832975B0;


void fn_82306A50(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  iVar3 = *(int *)(param_1 + 0x10);
  *(unsigned int *)(param_1 + 0x50) = ltcg_pool_0_0f;
  puVar4 = (unsigned int *)(param_1 + 0xb0U & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  puVar4 = (unsigned int *)(param_1 + 0xc0U & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  *(unsigned int *)(param_1 + 0xa0) = 0;
  puVar4 = (unsigned int *)(param_1 + 0x80U & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  *(unsigned char *)(param_1 + 0x54) = 0;
  puVar4 = (unsigned int *)(param_1 + 0x90U & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  puVar4 = (unsigned int *)(param_1 + 0x60U & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  iVar5 = fn_823CC7A0();
  iVar3 = iVar5 * 300 + iVar3;
  iVar5 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar5 = fn_82250A18();
  }
  fVar1 = *(float *)(iVar3 + 0x560);
  if (*(char *)(iVar5 + 4) == '\0') {
    fVar2 = *(float *)(iVar3 + 0x55c);
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar1 = (fVar1 - fVar2) * ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + fVar2
    ;
  }
  *(float *)(param_1 + 0x70) = fVar1;
  *(unsigned int *)(param_1 + 0xd0) = 1;
  return;
}

