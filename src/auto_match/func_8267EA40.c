extern int fn_8267B890();
extern int fn_8267E9F0();
extern unsigned int lbl_8200568C;
extern unsigned int lbl_831E7E64;


unsigned int * fn_8267EA40(unsigned int *param_1,unsigned char param_2)

{
  unsigned int iVar1;
  unsigned int uVar2;
  
  param_1[1] = 1;
  *param_1 = &lbl_8200568C;
  if ((param_2 == '\0') || (iVar1 = fn_8267B890(lbl_831E7E64,0x2c,0), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_8267E9F0();
  }
  param_1[2] = uVar2;
  return param_1;
}

