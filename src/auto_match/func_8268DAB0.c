extern int fn_8268DA20();
extern unsigned int lbl_831E9284;
extern unsigned int lbl_831E9288;


void fn_8268DAB0(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  fn_8268DA20(0xffffffff831e7e80,param_1);
  uVar3 = (unsigned int)param_1;
  uVar2 = uVar3;
  if (lbl_831E9288 != 0) {
    puVar1 = (unsigned int *)(lbl_831E9288 + 0x14);
    lbl_831E9288 = uVar3;
    *puVar1 = uVar3;
    uVar3 = lbl_831E9284;
    uVar2 = lbl_831E9288;
  }
  lbl_831E9288 = uVar2;
  lbl_831E9284 = uVar3;
  return;
}

