extern int fn_8306E600();


int fn_8306CBB8(int param_1,unsigned int param_2,unsigned int param_3)

{
  int uVar1;
  
  if ((param_2 < 0x48) && (param_3 != 0)) {
    uVar1 = fn_8306E600(*(unsigned int *)(param_1 + 0x1b18));
    return uVar1;
  }
  return 0x80070057;
}

