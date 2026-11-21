extern unsigned int fn_82404AA0;
extern unsigned int fn_82404AF0;
extern unsigned int fn_82404B10;
extern unsigned int fn_82404B30;
extern unsigned int fn_82404B58;
extern unsigned int lbl_821B7CAC;
extern unsigned int lbl_821B7CC4;

/* WARNING: Inlined function: __savegprlr_28 */

void fn_824048B0(__int64 param_1,__int64 param_2,__int64 param_3)

{
  unsigned int uVar1;
  unsigned char auStack_d0 [4];
  int iStack_cc;
  unsigned int uStack_c8;
  unsigned char **ppuStack_c0;
  int (**pcStack_bc)();
  unsigned int uStack_b8;
  unsigned char ***pppuStack_b0;
  unsigned char *puStack_a0;
  int (**pcStack_9c)();
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned char **ppuStack_90;
  unsigned char *puStack_80;
  int (**pcStack_7c)();
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned char **ppuStack_70;
  unsigned char *puStack_60;
  int (**pcStack_5c)();
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned char **ppuStack_50;
  unsigned char *puStack_40;
  int (**pcStack_3c)();
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned char **ppuStack_30;
  
  uVar1 = (unsigned int)param_1;
  pppuStack_b0 = &ppuStack_c0;
  pcStack_bc = fn_82404AA0;
  ppuStack_c0 = &lbl_821B7CAC;
  uStack_b8 = uVar1;
  fn_82321370(auStack_d0,param_3 + 0x508,&ppuStack_c0);
  param_1 = param_2 * 0x28 + param_1;
  fn_823F2E20(param_1 + 4,auStack_d0);
  if (iStack_cc != 0) {
    fn_822315A0();
  }
  fn_82359C18(&ppuStack_c0);
  ppuStack_90 = &puStack_a0;
  puStack_a0 = &lbl_821B7CC4;
  pcStack_9c = fn_82404AF0;
  uStack_94 = uStack_c8;
  uStack_98 = uVar1;
  fn_82321370(auStack_d0,param_3 + 0x518,&puStack_a0);
  fn_823F2E20(param_1 + 0xc,auStack_d0);
  if (iStack_cc != 0) {
    fn_822315A0();
  }
  fn_82359C18(&puStack_a0);
  puStack_80 = &lbl_821B7CC4;
  ppuStack_70 = &puStack_80;
  uStack_74 = uStack_c8;
  pcStack_7c = fn_82404B10;
  uStack_78 = uVar1;
  fn_82321370(auStack_d0,param_3 + 0x528,&puStack_80);
  fn_823F2E20(param_1 + 0x14,auStack_d0);
  if (iStack_cc != 0) {
    fn_822315A0();
  }
  fn_82359C18(&puStack_80);
  puStack_60 = &lbl_821B7CC4;
  ppuStack_50 = &puStack_60;
  uStack_54 = uStack_c8;
  pcStack_5c = fn_82404B30;
  uStack_58 = uVar1;
  fn_82321370(auStack_d0,param_3 + 0x548,&puStack_60);
  fn_823F2E20(param_1 + 0x1c,auStack_d0);
  if (iStack_cc != 0) {
    fn_822315A0();
  }
  fn_82359C18(&puStack_60);
  puStack_40 = &lbl_821B7CC4;
  ppuStack_30 = &puStack_40;
  uStack_34 = uStack_c8;
  pcStack_3c = fn_82404B58;
  uStack_38 = uVar1;
  fn_82321370(auStack_d0,param_3 + 0x538,&puStack_40);
  fn_823F2E20(param_1 + 0x24,auStack_d0);
  if (iStack_cc != 0) {
    fn_822315A0();
  }
  fn_82359C18(&puStack_40);
  return;
}
