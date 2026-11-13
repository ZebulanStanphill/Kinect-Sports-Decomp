extern int fn_82FF5DA8();
extern int fn_82FF5E70();
extern unsigned int lbl_831BC768;


void fn_82FF61E8(int param_1)

{
  int iVar1;
  
  iVar1 = fn_82FF5DA8(param_1 + 0x10,8,0xffffffffffffffff,lbl_831BC768);
  if (iVar1 == 1) {
    fn_82FF5E70(param_1 + 0x30,8,0xffffffffffffffff,lbl_831BC768);
  }
  *(unsigned int *)(param_1 + 0x6c) = 0;
  *(unsigned int *)(param_1 + 0x70) = 0;
  *(unsigned int *)(param_1 + 0x74) = 0;
  *(unsigned int *)(param_1 + 0x78) = 0;
  *(unsigned int *)(param_1 + 0x7c) = 0;
  *(unsigned int *)(param_1 + 0x80) = 0;
  return;
}

