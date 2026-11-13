extern int fn_82CE8268();
extern int fn_82CE8920();
extern int fn_83088FB0();
extern int fn_830893D0();
extern unsigned int lbl_82DA7910;


void fn_82D80A78(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  do {
    uVar2 = uVar2 + 1 & 0xff;
    *(unsigned char **)(iVar1 + -0x7cdc1dd0) = &lbl_82DA7910;
    iVar1 = uVar2 << 2;
  } while (uVar2 < 0x11);
  if (*(int *)(param_1 + 0x60) < 2) {
    *(unsigned int *)(param_1 + 0x60) = 2;
  }
  fn_82CE8920(param_1,0,0xc,1);
  fn_82CE8268(param_1,0,0x8323e23000000011,0x82daa4a082daa858);
  fn_82CE8268(param_1,1,0x8323e23000000011,0x82daa4a082daa858);
  fn_830893D0(param_1);
  fn_83088FB0(param_1);
  return;
}

