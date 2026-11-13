extern int fn_822315A0();
extern int fn_8229A560();
extern int fn_822BE6D0();
extern int fn_82359620();
extern int fn_82404F30();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8265C9E0();
extern unsigned int lbl_82191B24;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821B817C;
extern unsigned int lbl_821B81AC;
extern unsigned int lbl_821B81BC;


unsigned int *
fn_8240D3E0(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,__int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned int *puStack_50;
  unsigned int *puStack_4c;
  
  param_1[1] = (int)param_2;
  *param_1 = &lbl_821B817C;
  param_1[4] = (int)param_4;
  param_1[2] = &lbl_821B81BC;
  param_1[3] = param_3;
  fn_822BE6D0(param_1 + 5,param_4);
  param_1[0x11] = param_1 + 2;
  param_1[0x10] = lbl_82191B24;
  puVar3 = (unsigned int *)((unsigned int)(param_1 + 0xc) & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  param_1[0x16] = 0;
  param_1[8] = &lbl_821B81AC;
  fn_8229A560(param_1 + 0x18,param_2);
  uVar2 = fn_8251F720(param_6 + 0xa8,0);
  uVar1 = param_1[1];
  puVar3 = (unsigned int *)fn_8265C9E0(0x1350);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    puVar3[1] = 1;
    *puVar3 = &lbl_821A8D8C;
    puVar3[2] = 1;
    if (puVar3 + 4 != (unsigned int *)0x0) {
      fn_82404F30(puVar3 + 4,uVar1,param_1,param_1 + 2,param_5,uVar2,param_7,param_8);
    }
  }
  puStack_50 = puVar3 + 4;
  puStack_4c = puVar3;
  fn_82359620(param_1[1],&puStack_50);
  if (puVar3 != (unsigned int *)0x0) {
    fn_822315A0(puVar3);
  }
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8251FA58(uVar2);
  }
  return param_1;
}

