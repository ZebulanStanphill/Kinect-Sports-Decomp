extern int fn_827F0898();
extern int fn_827F3980();


void fn_827F0D28(int param_1)

{
  int uVar1;
  
  uVar1 = *(unsigned short *)(param_1 + 0xe8);
  while (uVar1 = uVar1 - 1, uVar1 >= 0) {
    fn_827F0898(param_1,uVar1 & 0xffff);
  }
  *(unsigned short *)(param_1 + 0xe8) = 0;
  fn_827F3980(param_1,0,0);
  return;
}

