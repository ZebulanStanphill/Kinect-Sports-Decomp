extern int fn_822315A0();
extern int fn_82266D28();
extern int fn_82279C58();
extern unsigned int iStack_1c;
extern unsigned int uStack_20;


unsigned int * fn_822888F0(unsigned int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  unsigned int uStack_20;
  int iStack_1c;
  
  iVar1 = *(int *)(param_2 + 0x69c);
  if (*(int *)(iVar1 + 0x6c) == 0) {
    if ((*(int *)(iVar1 + 0x44) == 1) || (*(int *)(iVar1 + 0x44) == 0)) {
      piVar2 = (int *)(iVar1 + 0x4c);
    }
    else {
      piVar2 = (int *)(iVar1 + 0x54);
    }
    iVar1 = *piVar2;
  }
  else {
    iVar1 = *(int *)(iVar1 + 100);
  }
  if (iVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    fn_82266D28(param_1);
  }
  else {
    fn_82279C58(&uStack_20);
    *param_1 = 0;
    param_1[1] = 0;
    if (param_1 != &uStack_20) {
      iVar1 = param_1[1];
      param_1[1] = iStack_1c;
      *param_1 = uStack_20;
      iStack_1c = iVar1;
    }
    if (iStack_1c != 0) {
      fn_822315A0();
    }
  }
  return param_1;
}

