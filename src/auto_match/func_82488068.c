extern unsigned int *auStack_50;
extern unsigned int *auStack_80;
extern int fn_822A8A50();
extern int fn_822A8D30();
extern int fn_82520D38();
extern int fn_82536CC8();
extern int fn_828647F0();
extern int fn_82864898();
extern int fn_82864988();
extern int fn_82F68CC0();
extern unsigned int lbl_821BE980;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8327F874;
extern unsigned int uRam8327fab0;


unsigned int * fn_82488068(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  float fVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  double dVar5;
  unsigned char auStack_80 [48];
  unsigned char auStack_50 [80];
  
  fn_82520D38();
  fVar2 = ltcg_pool_0_0f;
  dVar5 = (double)ltcg_pool_0_0f;
  *param_1 = &lbl_821BE980;
  param_1[0xb] = fVar2;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0xffffffff;
  uVar1 = *(unsigned int *)(param_2 + 0x44);
  param_1[0xf] = fVar2;
  param_1[10] = uVar1;
  param_1[0x10] = fVar2;
  *(unsigned char *)(param_1 + 0x12) = 0;
  param_1[0xc] = 2;
  param_1[0x19] = 0;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1a] = 0;
  fn_828647F0(auStack_80,*(unsigned int *)(param_1[10] + 0x84c));
  uVar4 = (unsigned __int64)lbl_8327F874;
  if (uVar4 == 0) {
    uVar4 = fn_82536CC8();
    lbl_8327F874 = (unsigned int)uVar4;
  }
  uVar3 = fn_82864988(auStack_50,0xffffffff821be96c);
  uVar4 = fn_822A8D30(uVar4,auStack_80);
  if ((uVar4 & 0xffffffff) != 0) {
    fn_822A8A50(uVar4,uVar3);
  }
  fn_82864898(auStack_50);
  fn_82F68CC0(0xffffffff832657f8,0xffffffff8327faa8,0x54);
  uVar1 = uRam8327fab0;
  param_1[0x21] = (float)dVar5;
  param_1[0x1d] = (float)dVar5;
  param_1[0x1c] = uVar1;
  fn_82864898(auStack_80);
  return param_1;
}

