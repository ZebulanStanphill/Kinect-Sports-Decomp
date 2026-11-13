extern int fn_826038C8();
extern int fn_82603968();
extern int fn_82603A18();
extern int fn_82D89BD8();


void fn_825A7178(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  
  iVar1 = *(int *)(param_1 + 0x4e0);
  puVar3 = (unsigned int *)(param_1 + 0x5d0U & 0xfffffff0);
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  puVar4 = (unsigned int *)(iVar1 + 0x70U & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar5;
  puVar4[2] = uVar6;
  puVar4[3] = uVar7;
  uVar5 = *(unsigned int *)(param_1 + 0x5e8);
  uVar6 = *(unsigned int *)(param_1 + 0x5e4);
  *(unsigned int *)(iVar1 + 0x80) = *(unsigned int *)(param_1 + 0x5e0);
  *(unsigned int *)(iVar1 + 0x84) = uVar6;
  *(unsigned int *)(iVar1 + 0x88) = uVar5;
  uVar5 = *(unsigned int *)(param_1 + 0x5f4);
  uVar6 = *(unsigned int *)(param_1 + 0x5f0);
  *(unsigned int *)(iVar1 + 0xf0) = *(unsigned int *)(param_1 + 0x5ec);
  *(unsigned int *)(iVar1 + 0xf4) = uVar6;
  *(unsigned int *)(iVar1 + 0xf8) = uVar5;
  if (*(int *)(param_1 + 0x594) != 0) {
    if (*(int *)(param_1 + 0x590) != 0) {
      fn_82603968(iVar1);
      goto LAB_825a7278;
    }
    if (*(int *)(param_1 + 0x594) != 0) {
      fn_82603A18(iVar1);
      goto LAB_825a7278;
    }
  }
  if (*(int *)(param_1 + 0x590) != 0) {
    iVar2 = *(int *)(iVar1 + 0x18);
    puVar3 = (unsigned int *)(param_1 + 0x5a0U & 0xfffffff0);
    uVar5 = *puVar3;
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    uVar8 = puVar3[3];
    fn_82D89BD8(iVar2);
    puVar3 = (unsigned int *)(iVar1 + 0x20U & 0xfffffff0);
    *puVar3 = uVar5;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    puVar3 = (unsigned int *)(iVar2 + 0x1b0U & 0xfffffff0);
    uVar5 = *puVar3;
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    uVar8 = puVar3[3];
    *(unsigned int *)(iVar1 + 0x108) = 0;
    puVar3 = (unsigned int *)(iVar1 + 0x60U & 0xfffffff0);
    *puVar3 = uVar5;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    *(unsigned int *)(iVar1 + 0x110) = 0;
    *(unsigned int *)(iVar1 + 0x10c) = 1;
    fn_826038C8(iVar1);
  }
LAB_825a7278:
  *(unsigned int *)(param_1 + 0x588) = 1;
  *(unsigned int *)(param_1 + 0x580) = 0;
  return;
}

