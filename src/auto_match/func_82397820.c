extern int fn_82397F30();
extern int fn_8265C9E0();
extern unsigned int lbl_821B5748;
extern unsigned int lbl_821B57E8;
extern unsigned int lbl_821B58C0;
extern unsigned int lbl_821B5998;
extern unsigned int ltcg_pool_0_0f;


void fn_82397820(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int *puVar8;
  
  if (*(int *)(param_1 + 0x178) == 1) {
    puVar8 = (unsigned int *)fn_8265C9E0(0x80);
    uVar1 = ltcg_pool_0_0f;
    if (puVar8 != (unsigned int *)0x0) {
      uVar2 = *(unsigned int *)(param_1 + 0xcc);
      uVar6 = (unsigned int)LZCOUNT(uVar2) >> 5;
      puVar8[7] = 0xb;
      puVar8[10] = 0xb;
      puVar8[0x16] = uVar1;
      puVar8[0x1e] = uVar1;
      puVar8[1] = 0;
      puVar8[2] = uVar6;
      puVar8[3] = uVar6;
      puVar8[4] = uVar6;
      puVar8[5] = 0;
      puVar8[6] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[0xb] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 8;
      puVar8[0x10] = 0;
      puVar8[0x11] = 8;
      puVar8[0x12] = 0;
      puVar8[0x13] = 8;
      puVar8[0x14] = 0;
      puVar8[0x15] = 9;
      puVar8[0x17] = 1;
      puVar8[0x18] = 0;
      *puVar8 = &lbl_821B58C0;
      puVar8[0x19] = uVar2;
      puVar8[0x1a] = 0;
      puVar8[0x1b] = 9;
      puVar8[0x1c] = 8;
      puVar8[0x1d] = 0;
      puVar8[0x1f] = 0;
      goto LAB_82397b98;
    }
  }
  else {
    if (*(int *)(param_1 + 0x178) == 2) {
      puVar8 = (unsigned int *)fn_8265C9E0(0xb0);
      uVar1 = ltcg_pool_0_0f;
      if (puVar8 == (unsigned int *)0x0) {
        puVar8 = (unsigned int *)0x0;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x2d8);
        uVar4 = *(unsigned int *)(param_1 + 0xcc);
        uVar5 = *(unsigned int *)(iVar7 + 0x164);
        uVar2 = *(unsigned int *)(iVar7 + 0x168);
        uVar3 = *(unsigned int *)(iVar7 + 0x16c);
        uVar6 = (unsigned int)LZCOUNT(uVar4) >> 5;
        puVar8[0xf] = 8;
        puVar8[0x11] = 8;
        puVar8[0x13] = 8;
        puVar8[0x16] = uVar1;
        puVar8[1] = 0;
        puVar8[2] = uVar6;
        puVar8[3] = uVar6;
        puVar8[4] = uVar6;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 1;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[10] = 0xb;
        puVar8[0xb] = 0;
        puVar8[0xc] = 0;
        puVar8[0xd] = 0;
        puVar8[0xe] = 0;
        puVar8[0x10] = 0;
        puVar8[0x12] = 0;
        puVar8[0x14] = 0;
        puVar8[0x15] = 9;
        puVar8[0x17] = 1;
        puVar8[0x18] = 0;
        *puVar8 = &lbl_821B5998;
        puVar8[0x19] = uVar4;
        puVar8[0x1a] = 0;
        puVar8[0x1b] = 0;
        puVar8[0x1c] = 0;
        puVar8[0x1d] = 0;
        puVar8[0x1f] = 0;
        puVar8[0x20] = 0;
        puVar8[0x21] = 0;
        puVar8[0x23] = uVar3;
        puVar8[0x24] = uVar3;
        puVar8[0x26] = 0;
        puVar8[0x25] = uVar1;
        puVar8[0x27] = 0;
        puVar8[0x29] = uVar2;
        puVar8[0x28] = uVar5;
        puVar8[0x2a] = 0;
        puVar8[0x2b] = 0;
      }
      *(unsigned int **)(param_1 + 0x2e0) = puVar8;
      return;
    }
    iVar7 = fn_82397F30();
    if (iVar7 == 0) {
      puVar8 = (unsigned int *)fn_8265C9E0(100);
      if (puVar8 != (unsigned int *)0x0) {
        iVar7 = *(int *)(param_1 + 0x2d8);
        uVar1 = *(unsigned int *)(param_1 + 0x2a8);
        uVar2 = *(unsigned int *)(iVar7 + 0x150);
        uVar3 = *(unsigned int *)(iVar7 + 0x158);
        uVar4 = *(unsigned int *)(iVar7 + 0x154);
        puVar8[0x16] = ltcg_pool_0_0f;
        *puVar8 = &lbl_821B5748;
        puVar8[1] = 0;
        puVar8[2] = uVar1;
        puVar8[3] = uVar1;
        puVar8[4] = uVar1;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = uVar2;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[10] = uVar4;
        puVar8[0xb] = uVar3;
        puVar8[0xc] = 0;
        puVar8[0xd] = 0;
        puVar8[0xe] = 0;
        puVar8[0xf] = 8;
        puVar8[0x10] = 0;
        puVar8[0x11] = 8;
        puVar8[0x12] = 0;
        puVar8[0x13] = 8;
        puVar8[0x14] = 0;
        puVar8[0x15] = 9;
        puVar8[0x17] = 1;
        puVar8[0x18] = 0;
        goto LAB_82397b98;
      }
    }
    else {
      puVar8 = (unsigned int *)fn_8265C9E0(0x74);
      if (puVar8 != (unsigned int *)0x0) {
        iVar7 = *(int *)(param_1 + 0x2d8);
        uVar1 = *(unsigned int *)(param_1 + 0x2a8);
        uVar2 = *(unsigned int *)(iVar7 + 0x150);
        uVar3 = *(unsigned int *)(iVar7 + 0x158);
        uVar4 = *(unsigned int *)(iVar7 + 0x154);
        puVar8[0x16] = ltcg_pool_0_0f;
        puVar8[1] = 0;
        puVar8[2] = uVar1;
        puVar8[3] = uVar1;
        puVar8[4] = uVar1;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = uVar2;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[10] = uVar4;
        puVar8[0xb] = uVar3;
        puVar8[0xc] = 0;
        puVar8[0xd] = 0;
        puVar8[0xe] = 0;
        puVar8[0xf] = 8;
        puVar8[0x10] = 0;
        puVar8[0x11] = 8;
        puVar8[0x12] = 0;
        puVar8[0x13] = 8;
        puVar8[0x14] = 0;
        puVar8[0x15] = 9;
        puVar8[0x17] = 1;
        puVar8[0x18] = 0;
        *puVar8 = &lbl_821B57E8;
        puVar8[0x19] = 0;
        puVar8[0x1a] = 0;
        puVar8[0x1b] = 0;
        puVar8[0x1c] = 0;
        goto LAB_82397b98;
      }
    }
  }
  puVar8 = (unsigned int *)0x0;
LAB_82397b98:
  *(unsigned int **)(param_1 + 0x2e0) = puVar8;
  return;
}

