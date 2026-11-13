extern int fn_827F3A60();
extern int fn_827F3C58();
extern int fn_827F4100();
extern int fn_827F4248();
extern int fn_827F56B0();
extern unsigned int lbl_8201DD78;
extern float lbl_82196288;


unsigned int * fn_827F5AF8(unsigned int *param_1,int *param_2)

{
  int iVar1;
  float uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  fn_827F4248(param_1,param_1 + 0x12,param_2[3],2,param_1 + 0x38);
  *param_1 = &lbl_8201DD78;
  uVar2 = lbl_82196288;
  *(short *)(param_1 + 8) = *param_2 % 6;
  *(short *)((int)param_1 + 0x22) = (short)(*param_2 / 6);
  ((float *)param_1)[9] = ((float *)param_2)[5];
  ((float *)param_1)[10] = ((float *)param_2)[5] - ((float *)param_2)[4];
  ((float *)param_1)[11] = ((float *)param_2)[6];
  ((float *)param_1)[12] = uVar2;
  param_1[0xd] = param_2[0xb];
  param_1[0xe] = param_2[7];
  param_1[0xf] = param_2[10];
  param_1[0x10] = param_2[8];
  *(unsigned short *)(param_1 + 0x11) = *(unsigned short *)(param_2 + 9);
  uVar3 = fn_827F3A60(param_2[2]);
  uVar4 = fn_827F3A60(param_2[1]);
  if (uVar4 > uVar3) {
    iVar1 = param_2[1];
  }
  else {
    iVar1 = param_2[2];
  }
  fn_827F4100(param_1 + 0x12,iVar1);
  *(unsigned char *)(param_1 + 0x37) = 0;
  fn_827F3C58(param_1,0,param_2[1]);
  fn_827F3C58(param_1,1,param_2[2]);
  if (param_1[0x10] != 0) {
    fn_827F56B0(param_1);
  }
  return param_1;
}

