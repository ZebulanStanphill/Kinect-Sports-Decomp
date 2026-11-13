extern int fn_8289B5C0();


unsigned __int64 fn_828E02D0(int *param_1,int param_2)

{
  unsigned __int64 uVar1;
  
  uVar1 = (**(int (***)())(*param_1 + 0x18))
                    (param_1,*(unsigned int *)(param_2 + 0x6c),param_2 + 0x98,
                     *(unsigned int *)(param_2 + 0x80));
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = -(unsigned __int64)(param_1[1] != 0) & 1;
  }
  else {
    uVar1 = fn_8289B5C0(uVar1,param_2);
  }
  return uVar1;
}

