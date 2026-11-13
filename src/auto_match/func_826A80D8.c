extern int fn_8267C4F0();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696D38();


void fn_826A80D8(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar5;
  int *piVar6;
  unsigned __int64 uVar4;
  unsigned int *puStack_30;
  unsigned int * apuStack_2c;
  
  if (1 < *(int *)(param_1 + 0x1c)) {
    iVar5 = (**(int (***)())(**(int **)(*(int *)(param_1 + 0x18) + 0x74) + 0x40))();
    piVar6 = (int *)(**(int (***)())(*(int *)(iVar5 + 8) + 0xc))(iVar5 + 8,0x1b);
    if (piVar6 != (int *)0x0) {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,1);
      fn_82696D38(&apuStack_2c,uVar4,uVar1,0xffffffffffffffff,0);
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar2 = *apuStack_2c;
      uVar4 = fn_826957D0(param_1,0);
      fn_82696D38(&puStack_30,uVar4,uVar1,0xffffffffffffffff,0);
      (**(int (***)())(*piVar6 + 100))(piVar6,iVar5,*puStack_30,uVar2);
      uVar3 = puStack_30[2];
      puStack_30[2] = (int)((unsigned __int64)uVar3 - 1);
      if ((unsigned __int64)uVar3 - 1 == 0) {
        fn_826944C8(puStack_30);
      }
      uVar3 = apuStack_2c[2];
      apuStack_2c[2] = (int)((unsigned __int64)uVar3 - 1);
      if ((unsigned __int64)uVar3 - 1 == 0) {
        fn_826944C8(apuStack_2c);
      }
      fn_8267C4F0(piVar6);
    }
  }
  return;
}

