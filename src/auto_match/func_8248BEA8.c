#define true 1
extern unsigned int *auStack_30;
extern int fn_8248BC38();
extern int fn_8248C5E0();
extern int fn_8248DE88();
extern int fn_8265C9E0();
extern unsigned int ltcg_pool_0_0f;


void fn_8248BEA8(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int *piVar10;
  unsigned int *puVar11;
  unsigned char auStack_30 [48];
  
  iVar2 = *(int *)(param_1 + 0x18);
  while( true ) {
    if (iVar2 == *(int *)(param_1 + 0x1c)) break;
    fn_8248DE88(iVar2);
    piVar10 = (int *)fn_8248C5E0(auStack_30,param_1 + 0x18,iVar2);
    iVar2 = *piVar10;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    fn_8248BC38(*(int *)(param_1 + 0x14),1);
  }
  *(unsigned int *)(param_1 + 0x14) = 0;
  puVar11 = (unsigned int *)fn_8265C9E0(0x68);
  uVar9 = ltcg_pool_0_0f;
  if (puVar11 == (unsigned int *)0x0) {
    puVar11 = (unsigned int *)0x0;
  }
  else {
    uVar3 = *(unsigned int *)(param_1 + 0x6c);
    uVar1 = *(unsigned int *)(param_1 + 0x70);
    uVar4 = *(unsigned int *)(param_1 + 0x68);
    uVar5 = *(unsigned int *)(param_1 + 100);
    uVar6 = *(unsigned int *)(param_1 + 0x7c);
    uVar7 = *(unsigned int *)(param_1 + 0x78);
    uVar8 = *(unsigned int *)(param_1 + 0x74);
    *puVar11 = *(unsigned int *)(param_1 + 0x60);
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar11[0xc] = uVar9;
    puVar11[0xf] = uVar9;
    puVar11[6] = uVar5;
    puVar11[0x10] = uVar1;
    puVar11[7] = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[0xb] = 0;
    puVar11[0xd] = uVar4;
    puVar11[0xe] = uVar3;
    puVar11[0x12] = 1;
    puVar11[0x13] = 0;
    puVar11[0x14] = 0;
    puVar11[0x15] = 0;
    puVar11[0x17] = uVar8;
    puVar11[0x18] = uVar7;
    puVar11[0x19] = uVar6;
  }
  *(unsigned int **)(param_1 + 0x14) = puVar11;
  return;
}

