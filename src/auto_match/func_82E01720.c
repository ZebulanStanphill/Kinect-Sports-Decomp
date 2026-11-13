extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82D8D008();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82E01720(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [16];
  unsigned char uStack_20;
  unsigned int uStack_1c;
  
  uStack_1c = *(unsigned int *)(param_1 + 0xc);
  uVar1 = *(unsigned int *)(param_1 + 0x10);
  puVar2 = (unsigned int *)(param_2 + 0x50U & 0xfffffff0);
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  puVar3 = (unsigned int *)(param_2 + 0x60U & 0xfffffff0);
  uVar7 = *puVar3;
  uVar8 = puVar3[1];
  uVar9 = puVar3[2];
  uVar10 = puVar3[3];
  uStack_20 = 1;
  puVar3 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  puVar2 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  fn_82D8D008(uVar1,auStack_40);
  return;
}

