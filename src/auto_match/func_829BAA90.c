extern int fn_8265C940();


unsigned int d3dx_jpeg_get_large(unsigned __int64 param_1,__int64 param_2)

{
  unsigned int uVar1;
  unsigned int iVar2;
  
  iVar2 = fn_8265C940(param_2 + 0x10,0x24810000);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = iVar2 + 0x10U & 0xfffffff0;
  *(char *)(uVar1 - 1) = (char)uVar1 - (char)iVar2;
  return uVar1;
}

