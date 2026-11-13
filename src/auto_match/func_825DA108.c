extern int fn_82552890();
extern int fn_825529B0();
extern int fn_82552B50();
extern int fn_8261D538();


unsigned __int64 fn_825DA108(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (*(int *)(param_2 + 0x5bc) != 0) {
    fn_8261D538();
  }
  uVar4 = *(unsigned int *)(param_2 + 0x5cc);
  uVar1 = *(unsigned int *)(param_2 + 0x5d8);
  uVar2 = *(unsigned int *)(param_2 + 0x5c4);
  uVar3 = *(unsigned int *)(param_2 + 0x5c8);
  iVar9 = 0;
  *(unsigned int *)(param_1 + 0xb78) = uVar3;
  *(int *)(param_1 + 0xb60) = param_1;
  *(unsigned int *)(param_1 + 0xb7c) = uVar3;
  *(unsigned int *)(param_1 + 0xb74) = uVar2;
  *(unsigned int *)(param_1 + 0xb80) = uVar4;
  *(unsigned int *)(param_1 + 0xb70) = uVar1;
  if (*(int *)(param_1 + 0xb68) != 0) {
    *(unsigned int *)(param_1 + 0xb68) = 0;
  }
  *(unsigned int *)(param_1 + 0xb84) = *(unsigned int *)(param_2 + 0x5c0);
  iVar5 = *(int *)(param_2 + 0x5bc);
  if (iVar5 != 0) {
    iVar10 = param_1 + 0xa30;
    iVar7 = (iVar5 + 0xa30) - iVar10;
    do {
      if ((iVar9 != 4) && (iVar9 != 7)) {
        iVar8 = iVar7 + iVar10;
        iVar6 = fn_825529B0(iVar8);
        if (iVar6 != 0) {
          iVar6 = fn_825529B0(iVar10);
          if (iVar6 != 0) {
            fn_82552B50(iVar10,1);
          }
          if (*(int *)(param_1 + 0x38) == 0) {
            fn_82552890(iVar10,iVar8,param_1);
          }
        }
      }
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 0x18;
    } while (iVar9 < 9);
    *(unsigned int *)(param_1 + 0xb08) = *(unsigned int *)(iVar5 + 0xb08);
  }
  return 1;
}

