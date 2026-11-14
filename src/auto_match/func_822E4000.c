extern unsigned int *auStack_50;
extern int fn_822B54F8();
extern int fn_82356F98();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern int fn_82A1DD38();
extern int XMemSet();
extern unsigned int lbl_821ADF14;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_822E4000(unsigned int *param_1,__int64 param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_50 [32];
  
  fn_822B54F8();
  *param_1 = &lbl_821ADF14;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  fn_82356F98(param_1 + 0x73);
  fn_82356F98(param_1 + 0x75);
  fn_82356F98(param_1 + 0x77);
  fn_82356F98(param_1 + 0x79);
  fn_82356F98(param_1 + 0x7b);
  fn_82356F98(param_1 + 0x7d);
  fn_82356F98(param_1 + 0x7f);
  fn_82356F98(param_1 + 0x81);
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  uVar2 = ltcg_pool_0_0f;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0xa8] = uVar2;
  param_1[0x9d] = 1;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 0xa4) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  param_1[0x9e] = 0;
  uVar2 = lbl_821CA460;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = uVar2;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  XMemSet(param_1 + 0x88,0,0x40);
  XMemSet(param_1 + 0x98,0,4);
  fn_82A1DD38(param_1 + 0x6c,param_2 + 0x4c,0xc);
  fn_82864988(auStack_50,0xffffffff821ade78);
  uVar2 = fn_828647D8();
  param_1[0x70] = uVar2;
  fn_82864898(auStack_50);
  return param_1;
}

