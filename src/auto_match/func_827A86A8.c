extern int fn_82773B90();


unsigned __int64 fn_827A86A8(int param_1,int param_2)

{
  char cVar1;
  unsigned __int64 uVar2;
  
  cVar1 = fn_82773B90();
  if ((((cVar1 == '\0') || (cVar1 = fn_82773B90(param_1 + 0xc,param_2 + 0xc), cVar1 == '\0')) ||
      (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18))) ||
     ((*(short *)(param_1 + 0x1c) != *(short *)(param_2 + 0x1c) ||
      (uVar2 = 1, *(short *)(param_1 + 0x1e) != *(short *)(param_2 + 0x1e))))) {
    uVar2 = 0;
  }
  return uVar2;
}

