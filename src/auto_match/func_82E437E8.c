extern int fn_82E31BD0();
extern int fn_82E7B6F0();


void fn_82E437E8(int param_1)

{
  int iVar1;
  
  iVar1 = fn_82E31BD0(*(unsigned int *)(param_1 + 0x7c),param_1 + 0x78);
  if (iVar1 >= 0) {
    fn_82E7B6F0(param_1 + 0x10);
  }
  return;
}

