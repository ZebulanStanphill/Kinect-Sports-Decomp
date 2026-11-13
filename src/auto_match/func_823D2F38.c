extern int fn_823D32F8();
extern int fn_8251F720();
extern int fn_8251FA58();
extern unsigned int ltcg_pool_0_0f;


int * fn_823D2F38(int *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5,
                   unsigned __int64 param_6)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[1] = (int)param_4;
  param_1[2] = param_5;
  iVar1 = *(int *)(param_2 + 0x4c0);
  param_1[0x3a] = ltcg_pool_0_0f;
  param_1[0xd] = 0;
  param_1[0x3e] = 0;
  param_1[3] = iVar1;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  iVar1 = fn_8251F720(param_3,0);
  fn_823D32F8(param_1,iVar1,param_4,param_6);
  param_1[4] = *(int *)(iVar1 + 0x38);
  param_1[5] = *(int *)(iVar1 + 0x3c);
  param_1[6] = *(int *)(iVar1 + 0x40);
  param_1[7] = *(int *)(iVar1 + 0x44);
  param_1[8] = *(int *)(iVar1 + 0x48);
  param_1[9] = *(int *)(iVar1 + 0x4c);
  param_1[0xb] = *(int *)(iVar1 + 0x28);
  param_1[0x3b] = *(int *)(iVar1 + 0x2c);
  param_1[0x3c] = *(int *)(iVar1 + 0x30);
  param_1[0x3d] = *(int *)(iVar1 + 0x34);
  fn_8251FA58(iVar1);
  return param_1;
}

