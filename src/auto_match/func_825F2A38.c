extern unsigned int *auStack_30;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_828F10B0();
extern int fn_82CE5990();
extern int fn_82D80A40();
extern int fn_82D93168();


void fn_825F2A38(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned __int64 in_r0;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [48];
  unsigned char auStack_30 [48];
  
  for (puVar1 = (unsigned int *)*param_1; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[2]) {
    uVar2 = puVar1[1];
    fn_82D80A40(*(unsigned int *)(uVar2 + 8));
    fn_82D93168(uVar2 + 0xe0);
    fn_82CE5990(auStack_80,auStack_60);
    iVar6 = (int)in_r0;
    puVar3 = (unsigned int *)((unsigned int)(auStack_80 + iVar6) & 0xfffffff0);
    uVar7 = *puVar3;
    uVar8 = puVar3[1];
    uVar9 = puVar3[2];
    uVar10 = puVar3[3];
    puVar3 = (unsigned int *)((unsigned int)(auStack_30 + iVar6) & 0xfffffff0);
    uVar11 = puVar3[1];
    uVar12 = puVar3[2];
    uVar13 = puVar3[3];
    puVar4 = (unsigned int *)(*puVar1 * 0x80 + param_1[7] & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar11;
    puVar4[2] = uVar12;
    puVar4[3] = uVar13;
    uVar2 = param_1[7];
    puVar3 = (unsigned int *)((unsigned int)(auStack_70 + iVar6) & 0xfffffff0);
    *puVar3 = uVar7;
    puVar3[1] = uVar8;
    puVar3[2] = uVar9;
    puVar3[3] = uVar10;
    fn_828F10B0(((unsigned __int64)*puVar1 & 0x1ffffff) * 0x80 + (unsigned __int64)uVar2 + 0x18,auStack_70,4);
    iVar6 = (int)in_r0;
    puVar3 = (unsigned int *)((unsigned int)(auStack_30 + iVar6) & 0xfffffff0);
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    puVar4 = (unsigned int *)(*puVar1 * 0x80 + param_1[7] + 0x20 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
    *(unsigned short *)(param_1[7] + *puVar1 * 0x80 + 0x38) =
         *(unsigned short *)(param_1[7] + *puVar1 * 0x80 + 0x18);
    iVar5 = *puVar1 * 0x80 + param_1[7];
    *(unsigned short *)(iVar5 + 0x3a) = *(unsigned short *)(iVar5 + 0x1a);
    iVar5 = *puVar1 * 0x80 + param_1[7];
    *(unsigned short *)(iVar5 + 0x3c) = *(unsigned short *)(iVar5 + 0x1c);
    iVar5 = *puVar1 * 0x80 + param_1[7];
    *(unsigned short *)(iVar5 + 0x3e) = *(unsigned short *)(iVar5 + 0x1e);
    puVar3 = (unsigned int *)((unsigned int)(auStack_30 + iVar6) & 0xfffffff0);
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    puVar4 = (unsigned int *)(*puVar1 * 0x80 + param_1[7] + 0x40 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
    *(unsigned short *)(param_1[7] + *puVar1 * 0x80 + 0x58) =
         *(unsigned short *)(param_1[7] + *puVar1 * 0x80 + 0x18);
    iVar5 = *puVar1 * 0x80 + param_1[7];
    *(unsigned short *)(iVar5 + 0x5a) = *(unsigned short *)(iVar5 + 0x1a);
    iVar5 = *puVar1 * 0x80 + param_1[7];
    *(unsigned short *)(iVar5 + 0x5c) = *(unsigned short *)(iVar5 + 0x1c);
    iVar5 = *puVar1 * 0x80 + param_1[7];
    *(unsigned short *)(iVar5 + 0x5e) = *(unsigned short *)(iVar5 + 0x1e);
    puVar3 = (unsigned int *)((unsigned int)(auStack_30 + iVar6) & 0xfffffff0);
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    puVar4 = (unsigned int *)(*puVar1 * 0x80 + param_1[7] + 0x60 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
    *(unsigned short *)(param_1[7] + *puVar1 * 0x80 + 0x78) =
         *(unsigned short *)(param_1[7] + *puVar1 * 0x80 + 0x18);
    iVar6 = *puVar1 * 0x80 + param_1[7];
    *(unsigned short *)(iVar6 + 0x7a) = *(unsigned short *)(iVar6 + 0x1a);
    iVar6 = *puVar1 * 0x80 + param_1[7];
    *(unsigned short *)(iVar6 + 0x7c) = *(unsigned short *)(iVar6 + 0x1c);
    iVar6 = *puVar1 * 0x80 + param_1[7];
    *(unsigned short *)(iVar6 + 0x7e) = *(unsigned short *)(iVar6 + 0x1e);
  }
  return;
}

