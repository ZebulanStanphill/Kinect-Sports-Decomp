extern int fn_82F66AC0();
extern unsigned int uStack_10;


unsigned int fn_8265CCA8(char param_1)

{
  int iVar1;
  char cStack00000017;
  unsigned int uStack_10;
  
  if ((param_1 < '\x01') || (cStack00000017 = param_1, iVar1 = fn_82F66AC0(param_1), iVar1 == 0)) {
    uStack_10 = 0;
  }
  else {
    uStack_10 = 1;
  }
  return uStack_10;
}

