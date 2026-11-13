extern int fn_8288DD10();
extern int fn_828A12E8();


unsigned short fn_828B57B0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = fn_828A12E8();
  iVar2 = fn_8288DD10(uVar1,param_2);
  return *(unsigned short *)(iVar2 + 0x20);
}

