extern int fn_82C06348();
extern int fn_82C0BF28();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_820EC6C8;
extern unsigned int lbl_821AAD20;


unsigned int * fn_82C042E8(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  fn_82C06348();
  *param_1 = &lbl_820EC6C8;
  fn_82C0BF28(param_1 + 0x11);
  fn_82C0BF28(param_1 + 0x23);
  fn_82C0BF28(param_1 + 0x35);
  *(unsigned __int64 *)(param_1 + 0x48) = 0;
  *(unsigned __int64 *)(param_1 + 0x4c) = 0;
  *(unsigned __int64 *)(param_1 + 0x4a) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  uVar2 = lbl_821AAD20;
  param_1[0x50] = 0;
  uVar1 = lbl_82002AE0;
  param_1[0x51] = 0;
  param_1[0x54] = uVar2;
  param_1[0x55] = uVar1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  return param_1;
}

