extern unsigned int *auStack_70;
extern int fn_82CE6820();
extern int fn_82D757E8();
extern int fn_82DD9828();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82139018;


unsigned int *
fn_82D5C050(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned char auStack_70 [64];
  
  fn_82D757E8();
  *param_1 = &lbl_82139018;
  param_1[0x20] = *param_4;
  *(unsigned char *)(param_1 + 0x21) = 1;
  *(unsigned char *)((int)param_1 + 0x85) = 0;
  uVar1 = *param_2;
  uVar2 = *param_3;
  fn_82CE6820(auStack_70,param_2[2],param_3[2]);
  fn_82DD9828(param_1 + 3,uVar1,uVar2,auStack_70);
  uVar1 = lbl_8200133C;
  param_1[0xb] = lbl_8200133C;
  param_1[6] = uVar1;
  return param_1;
}

