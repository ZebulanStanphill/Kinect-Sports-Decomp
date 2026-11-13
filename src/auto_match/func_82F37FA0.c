extern int fn_82F377E8();
extern int fn_82F37AA8();


unsigned __int64 fn_82F37FA0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int *piStack_50;
  int *apiStack_4c [19];
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    iVar4 = param_1 + 8;
    uVar3 = 1;
    do {
      fn_82F377E8(iVar4,uVar5,&piStack_50);
      if (*piStack_50 == param_2) {
        fn_82F377E8(iVar4,uVar5,apiStack_4c);
        piVar1 = (int *)*apiStack_4c[0];
        if (((piVar1 == (int *)0x0) || (*(unsigned int *)(param_1 + 0x70) < uVar3)) ||
           (iVar2 = fn_82F37AA8(iVar4,uVar5), iVar2 < 0)) {
          return 0xffffffff8000ffff;
        }
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
        (**(int (***)())(*piVar1 + 8))(piVar1);
        uVar5 = uVar5 - 1;
        uVar3 = uVar3 - 1;
      }
      uVar5 = uVar5 + 1;
      uVar3 = uVar3 + 1;
    } while ((uVar5 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x70));
  }
  return 0;
}

