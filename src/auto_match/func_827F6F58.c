extern int fn_827F9A10();
extern int fn_827F9AB0();
extern int fn_827FA1F0();
extern int fn_827FACF0();
extern unsigned int lbl_821960D0;


void fn_827F6F58(unsigned int *param_1,int param_2)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  
  param_1[1] = param_2;
  param_1[4] = 0;
  *param_1 = &lbl_821960D0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (param_2 == 0) {
    param_1[2] = 0;
    *(unsigned short *)((int)param_1 + 0x32) = 0;
    *(unsigned short *)((int)param_1 + 0x2e) = 0;
    fn_827FA1F0(param_1,0);
    uVar2 = 1;
  }
  else {
    param_1[2] = *(unsigned int *)(param_2 + 0x2c);
    *(unsigned short *)((int)param_1 + 0x32) = *(unsigned short *)(param_2 + 0x1a);
    *(unsigned short *)((int)param_1 + 0x2e) = *(unsigned short *)(param_2 + 0x1c);
    fn_827FA1F0(param_1,*(unsigned short *)(param_2 + 0x1e));
    uVar2 = *(unsigned int *)(param_2 + 0x30);
  }
  param_1[0x24] = uVar2;
  param_1[7] = 0;
  param_1[0x21] = 0;
  param_1[5] = 0;
  param_1[0x23] = 0;
  *(unsigned short *)(param_1 + 0x22) = 0xffff;
  uVar1 = fn_827F9A10(param_1);
  fn_827F9AB0(param_1,(uVar1 & 0xffff) - 1);
  fn_827FACF0(param_1);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}

