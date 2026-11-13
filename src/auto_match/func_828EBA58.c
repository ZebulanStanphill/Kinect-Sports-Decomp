extern unsigned int *auStack_40;
extern int fn_82230218();
extern int fn_828B3948();
extern int fn_82F68CC0();
extern int iRam832144f0;
extern unsigned int lbl_8202751C;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000040;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack00000050;


unsigned int *
fn_828EBA58(unsigned int *param_1,unsigned char param_2,unsigned char param_3,unsigned int param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  unsigned __int64 uStack00000050;
  unsigned int in_stack_0000006c;
  unsigned int in_stack_00000074;
  unsigned char in_stack_0000007f;
  unsigned int in_stack_00000084;
  unsigned int in_stack_0000008c;
  unsigned int in_stack_00000094;
  unsigned int in_stack_0000009c;
  unsigned char in_stack_000000a7;
  unsigned char in_stack_000000af;
  unsigned char auStack_40 [64];
  
  *(unsigned char *)(param_1 + 2) = param_2;
  *param_1 = &lbl_8202751C;
  param_1[8] = 0xf;
  param_1[7] = 0;
  *(unsigned char *)(param_1 + 3) = 0;
  uStack00000040 = param_6;
  uStack00000048 = param_7;
  uStack00000050 = param_8;
  fn_82230218(param_1 + 3,in_stack_0000006c,0,0xffffffffffffffff);
  *(unsigned __int64 *)(param_1 + 10) = 0;
  fn_82F68CC0(param_1 + 0xc,&stack0x00000040,0x24);
  param_1[0x15] = iRam832144f0;
  iRam832144f0 = iRam832144f0 + 1;
  *(unsigned char *)(param_1 + 0x16) = 1;
  *(unsigned char *)((int)param_1 + 0x59) = param_3;
  fn_828B3948(param_1 + 0x17,auStack_40,auStack_40);
  puVar2 = param_1 + 0x2e;
  lVar3 = 5;
  param_1[0x1b] = in_stack_00000074;
  *(unsigned char *)(param_1 + 0x36) = in_stack_000000a7;
  param_1[0x1c] = param_4;
  *(unsigned char *)(param_1 + 0x1d) = in_stack_0000007f;
  param_1[0x1e] = in_stack_00000084;
  param_1[0x1f] = in_stack_0000008c;
  uVar1 = lbl_821AAD20;
  param_1[0x20] = in_stack_00000094;
  param_1[0x21] = in_stack_0000009c;
  *(unsigned char *)(param_1 + 0x22) = in_stack_000000af;
  *(unsigned char *)((int)param_1 + 0x89) = 0;
  param_1[0x23] = 2;
  param_1[0x24] = 1;
  *(unsigned char *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  do {
    puVar2[-4] = uVar1;
    puVar2[-9] = 0;
    puVar2 = puVar2 + 1;
    *puVar2 = uVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(unsigned __int64 *)(param_1 + 10) = param_5;
  return param_1;
}

