extern int fn_8267C4F0();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696D38();
extern int fn_826A7398();


void fn_8274BC30(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned char *puVar3;
  int iVar5;
  int *piVar6;
  unsigned __int64 uVar4;
  unsigned char uVar7;
  unsigned int * apuStack_30;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar5 = fn_826A7398();
    piVar6 = (int *)(**(int (***)())(*(int *)(iVar5 + 8) + 0xc))((int *)(iVar5 + 8),0x1b);
    uVar7 = 0;
    if (piVar6 != (int *)0x0) {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,0);
      fn_82696D38(&apuStack_30,uVar4,uVar1,0xffffffffffffffff,0);
      uVar7 = (**(int (***)())(*piVar6 + 0x3c))(piVar6,*apuStack_30);
      uVar2 = apuStack_30[2];
      apuStack_30[2] = (int)((unsigned __int64)uVar2 - 1);
      if ((unsigned __int64)uVar2 - 1 == 0) {
        fn_826944C8(apuStack_30);
      }
    }
    puVar3 = *(unsigned char **)(param_1 + 4);
    fn_826959C8(puVar3);
    puVar3[4] = uVar7;
    *puVar3 = 2;
    if (piVar6 != (int *)0x0) {
      fn_8267C4F0(piVar6);
    }
  }
  return;
}

