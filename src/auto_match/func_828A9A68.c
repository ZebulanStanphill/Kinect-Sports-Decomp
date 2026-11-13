extern int fn_82248B90();
extern int fn_8288F948();
extern int fn_828A12E8();
extern int fn_828A99D0();


int * fn_828A9A68(unsigned __int64 param_1,int param_2,int param_3)

{
  int *piVar2;
  unsigned __int64 uVar1;
  int iVar3;
  int iVar4;
  int aiStack_30;
  
  piVar2 = (int *)fn_828A99D0();
  if (piVar2 == (int *)0x0) {
    uVar1 = fn_828A12E8(param_1);
    iVar3 = fn_8288F948(uVar1,2);
    aiStack_30 = **(int **)(iVar3 + 4);
    if ((int *)aiStack_30 != *(int **)(iVar3 + 4)) {
      do {
        piVar2 = *(int **)(aiStack_30 + 0x14);
        iVar4 = (**(int (***)())(*piVar2 + 0x44))(piVar2);
        if ((iVar4 == param_3) && (*(int *)(piVar2[0xd] + 0x38) == param_2)) {
          return piVar2;
        }
        fn_82248B90(&aiStack_30);
      } while (aiStack_30 != *(int *)(iVar3 + 4));
    }
    piVar2 = (int *)0x0;
  }
  return piVar2;
}

