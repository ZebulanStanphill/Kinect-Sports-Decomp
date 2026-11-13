extern int fn_82A44520();
extern unsigned int lbl_8208998C;
extern unsigned int lbl_820899B8;
extern unsigned int lbl_82089A38;


unsigned int * fn_82A49038(unsigned int *param_1)

{
  int iVar1;
  
  fn_82A44520();
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *param_1 = &lbl_820899B8;
  param_1[1] = &lbl_82089A38;
  param_1[0x23] = &lbl_8208998C;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = param_1 + 0x7f;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 1;
  param_1[0x7f] = 0;
  iVar1 = param_1[0x7e];
  *(unsigned int *)(iVar1 + 8) = param_1[0x7d];
  param_1[0x7d] = iVar1 + 4;
  param_1[0x87] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x88] = param_1 + 0x89;
  param_1[0x90] = 1;
  param_1[0x89] = 0;
  iVar1 = param_1[0x88];
  *(unsigned int *)(iVar1 + 8) = param_1[0x87];
  param_1[0x87] = iVar1 + 4;
  return param_1;
}

