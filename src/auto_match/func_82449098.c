extern int fn_82437388();
extern int fn_824510C0();
extern int fn_82453DE8();
extern int fn_8265C9E0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821922D0;
extern float lbl_821954FC;
extern unsigned int lbl_821956E4;
extern unsigned int lbl_821956F0;
extern unsigned int lbl_821956F4;
extern unsigned int lbl_821B9D60;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned int * fn_82449098(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  
  fn_824510C0();
  *param_1 = &lbl_821B9D60;
  puVar4 = (unsigned int *)fn_8265C9E0(0x24);
  uVar3 = lbl_821956F4;
  uVar2 = lbl_821956F0;
  uVar1 = lbl_821922D0;
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    *puVar4 = lbl_821956E4;
    puVar4[1] = uVar2;
    puVar4[2] = uVar1;
    puVar4[3] = uVar3;
    puVar4[4] = 3000;
    puVar4[5] = 0;
    puVar4[6] = 0;
  }
  param_1[0x12] = puVar4;
  *(unsigned int *)(param_1[0x10] + 0x208) = 0x1c;
  *(unsigned int *)(param_1[0x10] + 0x114) = 5;
  fn_82437388(param_1);
  uVar1 = lbl_8218E8E8;
  *(float *)(param_1[0x11] + 0x3c) = *(float *)(param_1[0x12] + 0xc) * lbl_821954FC;
  *(unsigned int *)(param_1[0x11] + 0x48) = uVar1;
  *(unsigned int *)(param_1[0x10] + 0x180) = 0x25;
  fn_82453DE8(param_1);
  *(unsigned int *)(param_1[0x12] + 0x1c) = 0;
  *(unsigned int *)(param_1[0x12] + 0x20) = 0;
  return param_1;
}

