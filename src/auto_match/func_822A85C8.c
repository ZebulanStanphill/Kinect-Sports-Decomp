extern int fn_822A5A40();
extern int fn_822A5B48();
extern int fn_8265CA20();


void fn_822A85C8(unsigned __int64 param_1,int *param_2)

{
  int iVar1;
  unsigned __int64 *puVar2;
  unsigned __int64 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  __int64 lVar7;
  
  iVar6 = *param_2;
  while (iVar6 != param_2[1]) {
    iVar4 = *(int *)(iVar6 + 0x24);
    if (*(int *)(iVar4 + 0x54c) == 0) {
      fn_822A5B48(param_1,iVar4);
      iVar6 = iVar6 + 0x30;
    }
    else {
      if (iVar4 != 0) {
        fn_822A5A40(iVar4);
        fn_8265CA20(iVar4);
      }
      *(unsigned int *)(iVar6 + 0x24) = 0;
      iVar4 = param_2[1];
      iVar5 = iVar6;
      iVar1 = iVar6;
      while (iVar1 + 0x30 != iVar4) {
        puVar3 = (unsigned __int64 *)(iVar1 + 0x28);
        puVar2 = (unsigned __int64 *)(iVar5 + -8);
        lVar7 = 6;
        do {
          puVar3 = puVar3 + 1;
          puVar2 = puVar2 + 1;
          *puVar2 = *puVar3;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        iVar5 = iVar5 + 0x30;
        iVar1 = iVar1 + 0x30;
      }
      iVar5 = param_2[1] + -0x30;
      for (iVar4 = iVar5; iVar4 != param_2[1]; iVar4 = iVar4 + 0x30) {
      }
      param_2[1] = iVar5;
    }
  }
  return;
}

