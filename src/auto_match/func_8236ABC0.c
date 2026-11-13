extern int fn_8225F160();


unsigned int fn_8236ABC0(int param_1,int param_2)

{
  struct Vec { unsigned int *begin,*end; } *piVar1;
  int iVar2;
  unsigned int uVar3;
  
  piVar1 = *(struct Vec **)(*(int *)(param_1 + 0x20) + param_2 * 4);
  if ((unsigned int)(piVar1->end - piVar1->begin) > 0) {
    iVar2 = fn_8225F160();
    if (*(int *)(iVar2 + 8) == 0) {
      iVar2 = 1 - *(int *)(param_1 + 0x9ac);
    }
    else {
      iVar2 = 0;
    }
    uVar3 = *(unsigned int *)(iVar2 * 4 + (int)piVar1->begin);
  }
  else { uVar3 = 0; }
  return uVar3;
}

