extern int fn_82BD6300();


void fn_82BD6B68(int param_1,int param_2,int *param_3,__int64 param_4)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  if ((int)param_4 != 0) {
    puVar3 = (unsigned int *)(param_1 + 0x24);
    param_2 = param_2 - (int)param_3;
    do {
      piVar1 = (int *)fn_82BD6300(param_1,*(unsigned int *)(param_2 + (int)param_3));
      if ((piVar1 == (int *)0x0) || (*param_3 == 0)) {
        uVar2 = 0;
      }
      else {
        (**(int (***)())(*piVar1 + 8))();
        uVar2 = 1;
      }
      *puVar3 = uVar2;
      param_4 = param_4 + -1;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    } while (param_4 != 0);
  }
  return;
}

