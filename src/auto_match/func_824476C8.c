extern int fn_82437388();
extern int fn_824510C0();
extern int fn_82453DE8();
extern int fn_8265C9E0();
extern unsigned int lbl_821915B4;
extern unsigned int lbl_82195E80;
extern unsigned int lbl_821B9C40;


unsigned int * fn_824476C8(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int in_register_000104b0;
  unsigned int in_register_000104b4;
  unsigned int in_register_000104b8;
  unsigned int in_vr75;
  
  fn_824510C0();
  *param_1 = &lbl_821B9C40;
  puVar2 = (unsigned int *)fn_8265C9E0(4);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    *puVar2 = 0x5dc;
  }
  param_1[0x12] = puVar2;
  *(unsigned int *)(param_1[0x10] + 0x208) = 0x1b;
  *(unsigned int *)(param_1[0x10] + 0x114) = 4;
  fn_82437388(param_1);
  uVar1 = lbl_82195E80;
  *(unsigned int *)(param_1[0x10] + 0x16c) = lbl_821915B4;
  *(unsigned int *)(param_1[0x11] + 0x3c) = uVar1;
  puVar2 = (unsigned int *)(param_1[0x10] + 0x170 & 0xfffffff0);
  *puVar2 = in_register_000104b0;
  puVar2[1] = in_register_000104b4;
  puVar2[2] = in_register_000104b8;
  puVar2[3] = in_vr75;
  *(unsigned int *)(param_1[0x10] + 0x180) = 0x26;
  fn_82453DE8(param_1);
  return param_1;
}

