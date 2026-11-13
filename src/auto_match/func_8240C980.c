extern int fn_822B17A8();
extern int fn_8240BCE8();
extern int fn_8240C498();
extern int fn_824569A8();
extern int fn_8288B760();
extern int fn_828AB870();
extern int fn_828B00A0();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_8240C980(int param_1,int param_2)

{
  int *piVar1;
  int iVar4;
  unsigned __int64 uVar2;
  char cVar5;
  __int64 lVar3;
  int *piVar6;
  int *piVar7;
  double dVar8;
  
  piVar7 = (int *)(param_1 + 0x44);
  iVar4 = param_1 + 0x4c;
  if (*(int *)(param_1 + 0x48) != param_2) {
    iVar4 = param_1 + 100;
  }
  *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
  piVar6 = (int *)(param_1 + 100);
  if (*(int *)(param_1 + 0x48) != param_2) {
    piVar6 = (int *)(param_1 + 0x4c);
  }
  *piVar6 = *(int *)(param_1 + 0x1c) + *piVar6;
  piVar6 = *(int **)(param_2 + 0x168);
  if (*(int *)(param_1 + 0xec) != 0) {
    iVar4 = (**(int (***)())(*piVar7 + 0xc))(piVar7,param_2);
    piVar1 = *(int **)(**(int **)(*(int *)(param_1 + 4) + 8) + *(int *)(iVar4 + 0x2c) * 4);
    iVar4 = *(int *)(piVar1[4] * 4 + *piVar1);
    *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + lbl_821CA460;
  }
  iVar4 = param_1 + 0x4c;
  if (*(int *)(param_1 + 0x48) != param_2) {
    iVar4 = param_1 + 100;
  }
  if (*(int *)(iVar4 + 4) == *(int *)(param_1 + 0xe8)) {
    if (piVar6 == (int *)0x0) {
      uVar2 = (**(int (***)())(*piVar7 + 0xc))(piVar7,param_2);
      fn_8240C498(param_1,uVar2);
    }
    else {
      cVar5 = fn_8288B760(piVar6);
      if (cVar5 != '\0') {
        uVar2 = fn_828B00A0((unsigned __int64)(unsigned int)piVar6[4] + 0x278);
        lVar3 = (**(int (***)())(*piVar6 + 8))(piVar6);
        fn_828AB870(lVar3 + 0x49c,uVar2);
      }
    }
  }
  iVar4 = param_1 + 0x4c;
  if (*(int *)(param_1 + 0x48) != param_2) {
    iVar4 = param_1 + 100;
  }
  dVar8 = (double)ltcg_pool_0_0f;
  *(float *)(iVar4 + 8) = ltcg_pool_0_0f;
  iVar4 = (**(int (***)())(*piVar7 + 0xc))(piVar7,param_2);
  if (*(int *)(iVar4 + 0x7a0) == 0) {
    if (piVar6 != (int *)0x0) {
      iVar4 = (**(int (***)())(*piVar6 + 4))(piVar6);
      iVar4 = (**(int (***)())(*(int *)(iVar4 + 0x49c) + 0x3c))();
      if (iVar4 != 0) goto LAB_8240cbdc;
    }
    iVar4 = param_1 + 0x4c;
    if (*(int *)(param_1 + 0x48) != param_2) {
      iVar4 = param_1 + 100;
    }
    *(unsigned int *)(iVar4 + 0xc) = 1;
    iVar4 = *(int *)(param_1 + 0x28);
    *(unsigned int *)(param_1 + 0xf8) = 0;
    *(float *)(iVar4 + 0x2c) = (float)dVar8;
    *(unsigned int *)(iVar4 + 0x30) = 0xffffffff;
  }
  else if (piVar6 == (int *)0x0) {
    iVar4 = param_1 + 100;
    if (*(int *)(param_1 + 0x48) != param_2) {
      iVar4 = param_1 + 0x4c;
    }
    *(unsigned int *)(iVar4 + 0xc) = 0;
    fn_824569A8(*(unsigned int *)(param_1 + 0xf4));
    if (*(int *)(param_1 + 0x40) == 0) {
      fn_8240BCE8(param_1,6,0,0);
    }
  }
LAB_8240cbdc:
  iVar4 = param_1 + 0x4c;
  if (*(int *)(param_1 + 0x48) != param_2) {
    iVar4 = param_1 + 100;
  }
  if (*(int *)(iVar4 + 0x10) == 3) {
    iVar4 = (**(int (***)())(*piVar7 + 0xc))(piVar7,param_2);
    if ((*(int *)(iVar4 + 0x24) != 0) &&
       (iVar4 = *(int *)(*(int *)(iVar4 + 0x24) + 0x34), iVar4 != 0)) {
      fn_822B17A8(iVar4,0x15,0);
    }
  }
  return;
}

