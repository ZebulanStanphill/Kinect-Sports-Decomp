extern int fn_8262F658();


void fn_829F5370(unsigned __int64 param_1)

{
  int (**pcVar1)();
  
  if ((param_1 & 0xffffffff) == 0) {
    return;
  }
  pcVar1 = (int (**)())fn_8262F658();
  (*pcVar1)(param_1,0x249c0000);
  return;
}

