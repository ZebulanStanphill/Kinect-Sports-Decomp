extern int fn_82F534D8();
extern int fn_82F53978();
extern int fn_82F59478();
extern unsigned int lbl_821AAD20;


int fn_82F4EC58(int param_1)

{
  unsigned int *puVar1;
  double dVar2;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  
  dVar2 = (double)lbl_821AAD20;
  fn_82F534D8(dVar2,dVar2,dVar2,dVar2);
  puVar1 = (unsigned int *)(param_1 + 0x50U & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  fn_82F53978(param_1 + 0x60);
  fn_82F53978(param_1 + 0x850);
  fn_82F53978(param_1 + 0x1040);
  *(float *)(param_1 + 0x1830) = (float)dVar2;
  fn_82F59478(dVar2,dVar2,dVar2,param_1 + 0x1834);
  *(unsigned int *)(param_1 + 0x1840) = 0;
  return param_1;
}

