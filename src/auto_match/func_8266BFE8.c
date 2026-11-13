typedef unsigned char bool;
extern int fn_82F66570();
extern unsigned int uStack00000014;


bool fn_8266BFE8(unsigned int param_1)

{
  int iVar1;
  unsigned int uStack00000014;
  
  uStack00000014 = param_1;
  iVar1 = fn_82F66570(param_1,0x2a);
  return iVar1 != 0;
}

