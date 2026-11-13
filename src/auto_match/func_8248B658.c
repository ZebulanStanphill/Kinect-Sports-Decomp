extern int fn_822315A0();


unsigned __int64 fn_8248B658(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    uVar1 = *(unsigned int *)(param_1 + 0x3c);
    uVar2 = *(unsigned int *)(param_1 + 0x14);
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 0x40);
    uVar2 = *(unsigned int *)(param_1 + 0x20);
  }
  uVar3 = (**(int (***)())(*(int *)*param_2 + 0x18))((int *)*param_2,uVar2,uVar1);
  if (param_2[1] != 0) {
    fn_822315A0(param_2[1]);
  }
  return uVar3;
}

