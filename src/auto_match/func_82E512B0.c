extern int fn_82E50CB8();
extern int fn_82E50F10();


unsigned short fn_82E512B0(int param_1)

{
  unsigned short uVar1;
  
  fn_82E50CB8(param_1 + 100);
  uVar1 = *(unsigned short *)(param_1 + 0x5c);
  fn_82E50F10(param_1 + 100);
  return uVar1;
}

