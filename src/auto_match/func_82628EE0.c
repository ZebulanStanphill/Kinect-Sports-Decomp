extern int fn_82586B60();
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


unsigned __int64 fn_82628EE0(int *param_1,int param_2)

{
  unsigned int *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  unsigned int *puVar5;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  unsigned int uStack_28;
  unsigned int uStack_24;
  
  iVar2 = *param_1;
  if (*(int *)(iVar2 + 4) == 0x2d) {
    uStack_28 = 1;
    uStack_24 = 8;
    iVar2 = fn_82586B60(iVar2 + 8);
    puVar1 = *(unsigned int **)(param_2 + 0x314);
    for (puVar5 = *(unsigned int **)(param_2 + 0x310); puVar5 < puVar1; puVar5 = puVar5 + 2) {
      if (puVar5[1] == iVar2) {
        (**(int (***)())(*(int *)*puVar5 + 0xc))((int *)*puVar5,&uStack_28);
      }
    }
  }
  else {
    if (*(int *)(iVar2 + 4) != 0x37) {
      return 4;
    }
    if ((*(unsigned int *)(iVar2 + 8) & 0xffff) != 0) {
      for (piVar4 = *(int **)(param_2 + 0x310); piVar4 < *(int **)(param_2 + 0x314);
          piVar4 = piVar4 + 2) {
        piVar3 = (int *)*piVar4;
        if ((unsigned int)*(unsigned short *)(piVar3 + 0x22e) == (*(unsigned int *)(iVar2 + 8) & 0xffff)) goto LAB_82628f4c;
      }
      piVar3 = (int *)0x0;
LAB_82628f4c:
      if (piVar3 != (int *)0x0) {
        stack_pair_30.first = 0x16;
        stack_pair_30.second = 8;
        (**(int (***)())(*piVar3 + 0xc))(piVar3,&stack_pair_30.first);
      }
    }
  }
  return 3;
}

