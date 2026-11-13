extern int fn_8240BCE8();


void fn_8240C1F0(int *param_1)

{
  unsigned int uVar1;
  int (**pcVar2)();
  int *piVar5;
  int *piVar6;
  int iVar7;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar8;
  
  piVar5 = (int *)(**(int (***)())(*param_1 + 8))();
  piVar6 = (int *)(**(int (***)())(*param_1 + 8))(param_1);
  iVar7 = (**(int (***)())(*piVar6 + 8))();
  uVar1 = *(unsigned int *)(iVar7 + 0x78c);
  iVar7 = (**(int (***)())(*piVar5 + 4))(piVar5);
  if (uVar1 < *(unsigned int *)(iVar7 + 0x78c)) {
    uVar3 = (**(int (***)())(param_1[0x11] + 4))(param_1 + 0x11);
    pcVar2 = *(int (***)())(param_1[0x11] + 8);
  }
  else {
    piVar5 = (int *)(**(int (***)())(*param_1 + 8))(param_1);
    piVar6 = (int *)(**(int (***)())(*param_1 + 8))(param_1);
    iVar7 = (**(int (***)())(*piVar6 + 8))();
    uVar1 = *(unsigned int *)(iVar7 + 0x78c);
    iVar7 = (**(int (***)())(*piVar5 + 4))(piVar5);
    if (uVar1 <= *(unsigned int *)(iVar7 + 0x78c)) {
      uVar3 = 0;
      uVar4 = 0;
      uVar8 = 4;
      goto LAB_8240c334;
    }
    uVar3 = (**(int (***)())(param_1[0x11] + 8))(param_1 + 0x11);
    pcVar2 = *(int (***)())(param_1[0x11] + 4);
  }
  uVar4 = (*pcVar2)(param_1 + 0x11);
  uVar8 = 2;
LAB_8240c334:
  fn_8240BCE8(param_1,uVar8,uVar4,uVar3);
  return;
}

