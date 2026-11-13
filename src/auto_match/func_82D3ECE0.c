extern unsigned int *auStack_30;
extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_82D3ECE0(int param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char auStack_30 [1];
  
  iVar5 = *(int *)(param_1 + 0x4c);
  iVar3 = fn_82CE5410();
  if ((int)(param_2[2] & 0x3fffffffU) < iVar5) {
    iVar4 = (param_2[2] & 0x3fffffffU) << 1;
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),param_2,iVar4,0x10);
  }
  param_2[1] = iVar5;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    iVar3 = 0;
    do {
      iVar5 = iVar5 + 1;
      puVar1 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (unsigned int *)(iVar3 + *param_2 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      iVar3 = iVar3 + 0x10;
    } while (iVar5 < *(int *)(param_1 + 0x4c));
  }
  return;
}

