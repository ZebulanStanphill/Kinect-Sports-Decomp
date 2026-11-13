extern int fn_82684270();
extern int fn_8268B8E8();
extern int fn_8268BEA8();


void fn_826F3458(__int64 param_1,int param_2)

{
  unsigned char cVar1;
  
  param_1 = param_1 + 0x40;
  fn_8268B8E8(param_1,((unsigned int)*(unsigned int *)(*(int *)(param_2 + 0x20) + 0x24) & 0xfffffffc) + 8);
  cVar1 = fn_82684270(param_1);
  if (cVar1 == '\0') {
    fn_8268BEA8(param_1);
  }
  return;
}

