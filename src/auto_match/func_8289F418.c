extern unsigned int *auStack_20;
extern int fn_8289E3C8();
extern int fn_8289EC50();


void fn_8289F418(__int64 param_1,unsigned int param_2)

{
  int iVar1;
  unsigned char auStack_20 [8];
  
  iVar1 = fn_8289E3C8(param_1 + 0x54);
  if ((unsigned int *)(iVar1 + 0xc) != (unsigned int *)0x0) {
    *(unsigned int *)(iVar1 + 0xc) = param_2;
  }
  fn_8289EC50(auStack_20,param_1 + 0x54,iVar1,0);
  return;
}

