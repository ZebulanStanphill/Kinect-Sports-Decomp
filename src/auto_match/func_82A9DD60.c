extern unsigned int *auStack_10;
extern int fn_82A9D3D8();


void fn_82A9DD60(int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
  unsigned int auStack_10;
  
  if (-1 < *(int *)(param_1 + 0x90)) {
    auStack_10 = (param_4 & 0xf) << 0x10 | (param_3 << 4 | param_2 & 0xf) << 0x14;
    fn_82A9D3D8(*(unsigned int *)(param_1 + 0x50),&auStack_10,param_1 + 0x90);
  }
  return;
}

