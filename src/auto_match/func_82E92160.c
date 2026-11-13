extern int fn_82E92098();


unsigned __int64 fn_82E92160(int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  if (*param_1 != 0) {
    uVar1 = param_1[1];
    trapWord(6,(unsigned __int64)uVar1,0);
    if (param_1[5] != (param_1[6] + 3U) - ((param_1[6] + 3U) / uVar1) * uVar1) {
      fn_82E92098(param_1);
      *(unsigned int *)(param_1[6] * 0x28 + *param_1) = param_2;
      uVar1 = param_1[1];
      trapWord(6,(unsigned __int64)uVar1,0);
      param_1[6] = (param_1[6] + 1U) - ((param_1[6] + 1U) / uVar1) * uVar1;
      return 0;
    }
  }
  return 0xffffffffffffff9c;
}

