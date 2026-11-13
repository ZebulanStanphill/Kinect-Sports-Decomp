extern int fn_8267B890();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_826C52C8();
extern int fn_826D06C8();
extern unsigned int lbl_831E7E64;


void fn_826D0878(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  int iVar2;
  unsigned int *puVar3;
  
  if (((param_2 & 0xffffffff) != 0) || (*(int *)(param_1 + 0x1b4) != 0)) {
    if (*(int *)(param_1 + 0x1b4) == 0) {
      puVar3 = (unsigned int *)fn_8267B890(lbl_831E7E64,0x24,0);
      if (puVar3 == (unsigned int *)0x0) {
        puVar3 = (unsigned int *)0x0;
      }
      else {
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        *puVar3 = 100;
        puVar3[1] = 0;
      }
      *(unsigned int **)(param_1 + 0x1b4) = puVar3;
    }
    piVar1 = *(int **)(*(int *)(param_1 + 0x1b4) + 0x20);
    if (piVar1 != (int *)0x0) {
      (**(int (***)())(*piVar1 + 0xc))();
    }
    iVar2 = *(int *)(param_1 + 0x1b4);
    if ((param_2 & 0xffffffff) != 0) {
      fn_8267C4C8(param_2);
    }
    if (*(int *)(iVar2 + 0x20) != 0) {
      fn_8267C4F0();
    }
    *(int *)(iVar2 + 0x20) = (int)param_2;
    piVar1 = *(int **)(*(int *)(param_1 + 0x1b4) + 0x20);
    if (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      fn_826C52C8(param_1);
      (**(int (***)())(iVar2 + 0x28))(piVar1);
      fn_826D06C8(param_1,param_2,0,0);
    }
  }
  return;
}

