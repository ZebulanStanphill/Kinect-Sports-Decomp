extern int fn_82A29A38();


void fn_82AB03B0(unsigned int param_1,int param_2,int *param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  puVar1 = (unsigned int *)*param_3;
  if (0xf < param_1) {
    fn_82A29A38();
  }
  uVar2 = 0;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else if (param_2 == 0x10000000) {
    uVar2 = 0x2000000;
  }
  else if (param_2 == 0x18000000) {
    uVar2 = 0x4000000;
  }
  else if (param_2 == 0x20000000) {
    uVar2 = 0x3000000;
  }
  else {
    fn_82A29A38();
  }
  *puVar1 = (param_1 & 0xff) << 0x10 | uVar2 | 0x8000019;
  *param_3 = (int)(puVar1 + 1);
  return;
}

