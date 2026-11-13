extern unsigned int *auStack_38;


unsigned int fn_82EE6CF0(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int *piStack_40;
  int *piStack_3c;
  unsigned int auStack_38 [14];
  
  iVar1 = (**(int (***)())(**(int **)(param_1 + 0x110) + 0xc))
                    (*(int **)(param_1 + 0x110),0xffffffff8202e618,auStack_38);
  if ((-1 < iVar1) && (uVar3 = 0, auStack_38[0] != 0)) {
    do {
      iVar1 = (**(int (***)())(**(int **)(param_1 + 0x110) + 0x10))
                        (*(int **)(param_1 + 0x110),0xffffffff8202e618,uVar3,&piStack_3c);
      if (-1 < iVar1) {
        piStack_40 = (int *)0x0;
        iVar1 = (**(int (***)())*piStack_3c)(piStack_3c,0xffffffff8214c740,&piStack_40);
        if ((-1 < iVar1) && ((**(int (***)())(*piStack_40 + 0x10))(), piStack_40 != (int *)0x0)) {
          (**(int (***)())(*piStack_40 + 8))();
          piStack_40 = (int *)0x0;
        }
        if (piStack_3c != (int *)0x0) {
          (**(int (***)())(*piStack_3c + 8))();
          piStack_3c = (int *)0x0;
        }
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (unsigned __int64)auStack_38[0]);
  }
  uVar2 = (**(int (***)())(**(int **)(param_1 + 0x110) + 0x20))
                    (*(int **)(param_1 + 0x110),0xffffffff8202e618);
  return (int)uVar2 >> 0x1f & uVar2;
}

