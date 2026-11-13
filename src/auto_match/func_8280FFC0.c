extern unsigned int *auStack_50;
extern int fn_8280E890();
extern int fn_8280F098();


void fn_8280FFC0(unsigned __int64 param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 in_r7;
  unsigned char auStack_50 [48];
  
  fn_8280E890(param_1,auStack_50);
  if ((in_r7 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else if ((in_r7 & 0xffffffff) == 1) {
    uVar1 = 1;
  }
  else if ((in_r7 & 0xffffffff) < 3) {
    uVar1 = 2;
  }
  else if ((in_r7 & 0xffffffff) == 4) {
    uVar1 = 4;
  }
  else if ((in_r7 & 0xffffffff) == 5) {
    uVar1 = 5;
  }
  else {
    if ((in_r7 & 0xffffffff) != 6) {
      return;
    }
    uVar1 = 6;
  }
  fn_8280F098(auStack_50,uVar1);
  return;
}

