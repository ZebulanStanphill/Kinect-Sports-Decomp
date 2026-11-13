extern int fn_822ABAF8();
extern int fn_822ABF20();
extern int fn_82526C70();


void fn_822AE9D8(unsigned int *param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if (piVar3 < (int *)param_1[1]) {
    do {
      iVar1 = *(int *)(((int *)*piVar3)[4] * 4 + *(int *)*piVar3);
      fn_82526C70(iVar1 + 0x28,0x20,0xffffffff821ac494);
      if (*(int *)(iVar1 + 0x18) == 0) {
        uVar2 = 0xffffffff821ac49c;
      }
      else {
        uVar2 = fn_822ABF20(iVar1);
      }
      fn_822ABAF8(iVar1,uVar2);
      piVar3 = piVar3 + 1;
    } while (piVar3 < (int *)param_1[1]);
  }
  return;
}

