extern int fn_827F3770();
extern int fn_827F4248();
extern unsigned int lbl_821BF540;
extern unsigned int lbl_821CA460;


unsigned int * fn_824A1C90(unsigned int *param_1,int *param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  fn_827F4248(param_1,param_1 + 8,0,0,0);
  *param_1 = &lbl_821BF540;
  uVar3 = (**(int (***)())(*param_2 + 0x28))(param_2);
  fn_827F3770(param_1 + 8,uVar3);
  param_1[0x2d] = param_2;
  param_1[0x2e] = param_3;
  param_1[0x34] = 0;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 0x30) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  param_1[0x35] = 0;
  uVar2 = lbl_821CA460;
  param_1[0x36] = 1;
  param_1[0x37] = uVar2;
  return param_1;
}

