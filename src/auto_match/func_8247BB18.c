extern unsigned int *auStack_70;
extern int fn_82281308();
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_8247C020();
extern int fn_8265C9E0();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern int iRam831d3c90;
extern unsigned int lbl_821A8C90;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uRam831d3c94;
extern unsigned int uRam831d3cac;


unsigned int *
fn_8247BB18(unsigned int *param_1,unsigned int *param_2,int param_3,unsigned int param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned int param_8)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned char auStack_70 [112];
  
  param_1[5] = 0;
  *param_1 = &lbl_821A8C90;
  fn_82F68CC0(param_1 + 6,param_2,0x18);
  param_1[0xd] = param_4;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  fn_822C5B18(param_1 + 0x16,param_7);
  param_1[0x1d] = 0;
  param_1[0x1c] = param_8;
  uVar3 = *(unsigned int *)(param_3 + 0x8c8);
  param_1[0x1f] = ltcg_pool_0_0f;
  param_1[0x1e] = uVar3;
  param_1[1] = param_1;
  param_1[2] = fn_8247C020;
  param_1[3] = fn_82BA02A8;
  param_1[4] = fn_82BA02A8;
  uRam831d3c94 = *param_2;
  uRam831d3cac = param_2[1];
  iRam831d3c90 = param_3;
  lVar1 = fn_8265C9E0(0x68);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1[0x1c];
    uVar2 = fn_822C5B18(auStack_70,param_1 + 0x16);
    uVar3 = fn_82281308(lVar1,0xffffffff831d3c90,param_1,0,param_5,param_6,uVar2,uVar3);
  }
  param_1[5] = uVar3;
  fn_82359C18(param_7);
  return param_1;
}

