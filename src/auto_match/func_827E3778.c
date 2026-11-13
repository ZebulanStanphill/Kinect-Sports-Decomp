extern int fn_827E43E0();
extern int fn_827E43E8();
extern int fn_827E82F8();


unsigned __int64 fn_827E3778(unsigned int *param_1,unsigned __int64 param_2)

{
  int iVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  iVar3 = fn_827E43E0(param_2);
  if (iVar3 < (int)(unsigned int)*(unsigned char *)(param_1 + 0x17)) {
    iVar3 = fn_827E43E0(param_2);
    if (iVar3 == -1) {
      fn_827E43E8(param_2,(unsigned __int64)*(unsigned char *)(param_1 + 0x17) - 1);
    }
    uVar1 = fn_827E43E0(param_2);
    fn_827E82F8((uVar1 & 0x3ffffff) * 0x40 + (unsigned __int64)*param_1,param_2);
    uVar2 = 0;
  }
  else {
    uVar2 = 0x708;
  }
  return uVar2;
}

