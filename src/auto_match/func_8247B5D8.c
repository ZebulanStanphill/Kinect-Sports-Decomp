extern int fn_8225C590();
extern int fn_82526358();


void fn_8247B5D8(int param_1,unsigned int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  
  if (param_2 != 0) {
    if (**(int **)(param_1 + 4) != 0) {
      iVar1 = fn_8225C590();
      for (piVar3 = *(int **)(iVar1 + 0x10); piVar3 != *(int **)(iVar1 + 0x14); piVar3 = piVar3 + 1)
      {
        if (param_2 == *piVar3) {
          if (*(char *)(param_2 + 0xd8) != '\0') {
            return;
          }
          uVar2 = 3;
          goto LAB_8247b63c;
        }
      }
    }
    if (*(char *)(param_2 + 0xd8) == '\0') {
      uVar2 = 0;
LAB_8247b63c:
      fn_82526358(param_2,0x8001,uVar2);
    }
  }
  return;
}

