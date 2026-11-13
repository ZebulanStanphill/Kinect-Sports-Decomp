extern int fn_8269A678();
extern __int64 fn_826BD928();


unsigned __int64 fn_826C8688(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  if ((*(int *)(param_1 + 0x1c0) == 0) ||
     (uVar1 = fn_8269A678(*(int *)(param_1 + 0x1c0),*(unsigned int *)(param_1 + 0xa0)),
     (uVar1 & 0xffffffff) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_826BD928(uVar1 + 0x68);
  }
  return uVar2;
}

