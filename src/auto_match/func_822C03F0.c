extern int fn_822315A0();
extern int fn_823215F0();
extern int fn_8265C9E0();
extern unsigned int lbl_821ACD94;


void fn_822C03F0(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)fn_8265C9E0(0x34);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    *puVar2 = &lbl_821ACD94;
    puVar2[1] = 1;
    puVar2[2] = 1;
    if (puVar2 + 3 != (unsigned int *)0x0) {
      fn_823215F0(puVar2 + 3,param_1 + 0x22c,param_2,param_1);
    }
  }
  iVar1 = *(int *)(param_1 + 0x7e0);
  *(unsigned int **)(param_1 + 0x7e0) = puVar2;
  *(unsigned int **)(param_1 + 0x7dc) = puVar2 + 3;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  puVar2 = (unsigned int *)fn_8265C9E0(0x34);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    *puVar2 = &lbl_821ACD94;
    puVar2[1] = 1;
    puVar2[2] = 1;
    if (puVar2 + 3 != (unsigned int *)0x0) {
      fn_823215F0(puVar2 + 3,param_1 + 0x23c,param_2,param_1);
    }
  }
  iVar1 = *(int *)(param_1 + 0x7e8);
  *(unsigned int **)(param_1 + 0x7e8) = puVar2;
  *(unsigned int **)(param_1 + 0x7e4) = puVar2 + 3;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  return;
}

