extern int fn_827D9DA0();
extern int fn_827D9DC0();


unsigned int fn_827E7378(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar2 = *(unsigned int *)(param_1 + 8);
  if (*(int *)(param_2 + 0x20) == 0) {
    uVar1 = fn_827D9DC0(uVar2);
    uVar2 = *(unsigned int *)(param_1 + 8);
    uVar1 = uVar1 & 0xfffffffffffffff3 | 8;
  }
  else {
    uVar1 = 0x100;
  }
  fn_827D9DA0(uVar2,uVar1);
  return *(unsigned int *)(param_2 + 0x20);
}

