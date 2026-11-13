extern unsigned int *auStack_30;
extern int fn_8288C2E0();
extern int fn_828B27A8();
extern int fn_828D5330();
extern unsigned int lbl_82024E20;
extern unsigned int lbl_82024E40;


int * fn_828B4A58(int *param_1,int param_2,int *param_3)

{
  unsigned __int64 uVar1;
  unsigned char auStack_30 [4];
  int * apiStack_2c;
  
  *param_1 = (int)&lbl_82024E20;
  fn_828D5330(param_1 + 2,auStack_30);
  fn_8288C2E0(param_1 + 8,auStack_30);
  param_1[0xb] = param_2;
  uVar1 = (**(int (***)())(*param_3 + 0x48))(param_3);
  *(unsigned __int64 *)(param_1 + 0xc) = uVar1;
  *(unsigned char *)(param_1 + 0xe) = 0;
  *param_1 = (int)&lbl_82024E40;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  apiStack_2c = param_3;
  fn_828B27A8(param_1 + 8,param_1[8],&apiStack_2c);
  (**(int (***)())(*param_1 + 0x18))(param_1);
  return param_1;
}

