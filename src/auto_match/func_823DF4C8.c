extern int fn_82359698();
extern int fn_8236B118();
extern int fn_8236B578();
extern int fn_823E3920();
extern int fn_823E4440();


void fn_823DF4C8(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar4 = fn_8236B578(iVar1);
  if (iVar4 != 0) {
    if (*(int *)(iVar1 + 0x1390) == 4) {
      *(unsigned int *)(iVar1 + 0xd80) = *(unsigned int *)(iVar1 + 0x1430);
      puVar2 = (unsigned int *)(iVar1 + 0x1440U & 0xfffffff0);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      puVar3 = (unsigned int *)(iVar1 + 0xd30U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      fn_8236B118(iVar1,iVar1 + 0x1430);
      fn_823E4440(iVar1,iVar1 + 0x1430);
      uVar5 = 4;
    }
    else {
      if (*(int *)(iVar1 + 0x1390) != 8) {
        return;
      }
      *(unsigned int *)(iVar1 + 0xd80) = *(unsigned int *)(iVar1 + 0x13a0);
      puVar2 = (unsigned int *)(iVar1 + 0x13b0U & 0xfffffff0);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      puVar3 = (unsigned int *)(iVar1 + 0xd30U & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      fn_8236B118(iVar1,iVar1 + 0x13a0);
      fn_823E3920(iVar1,iVar1 + 0x13a0);
      uVar5 = 8;
    }
    fn_82359698(iVar1,uVar5);
  }
  return;
}

