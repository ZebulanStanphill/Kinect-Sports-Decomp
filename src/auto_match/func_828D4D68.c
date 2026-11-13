extern int fn_828D9A48();
extern unsigned int lbl_82026D68;


unsigned __int64 fn_828D4D68(int param_1)

{
  unsigned __int64 uVar1;
  char cVar2;
  
  uVar1 = (**(int (***)())(**(int **)(param_1 + 4) + 0x4c))();
  cVar2 = fn_828D9A48(*(unsigned int *)(param_1 + 4));
  if (cVar2 == '\0') {
    return uVar1;
  }
  if ((uVar1 & 0xffffffff) < 0x20) {
    return (unsigned __int64)lbl_82026D68;
  }
  return uVar1 & 0xffffffff;
}

