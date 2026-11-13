extern int fn_82637840();
extern unsigned int lbl_821CC030;
extern unsigned int lbl_821CC034;
extern unsigned int lbl_821CC038;
extern unsigned int lbl_821CC03C;
extern unsigned int lbl_821CC040;
extern unsigned int lbl_821CC044;
extern unsigned int lbl_821CC048;
extern unsigned int lbl_821CC04C;
extern unsigned int lbl_821CC050;
extern unsigned int lbl_821CC054;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_826374C0(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar1 = *(unsigned int *)(param_2 + 0x18);
  uVar2 = uVar1 >> 0x10 & 3;
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else if (uVar2 == 1) {
    uVar3 = 0x8001;
  }
  else {
    uVar3 = 0xc003;
  }
  *(unsigned int *)(param_1 + 0x29bc) = uVar3;
  *(unsigned int *)(param_1 + 0x2880) = uVar1;
  *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) | 0x200000000000000;
  *(unsigned __int64 *)(param_1 + 0x20) = *(unsigned __int64 *)(param_1 + 0x20) | 0x1000000000;
  *(unsigned int *)(param_1 + 0x3234) = lbl_821CC048;
  *(unsigned int *)(param_1 + 0x3238) = lbl_821CC04C;
  *(unsigned int *)(param_1 + 0x323c) = lbl_821CC050;
  *(unsigned int *)(param_1 + 0x3240) = lbl_821CC054;
  fn_82637840((double)lbl_821CC030,(double)lbl_821CC034,(double)lbl_821CC038,
                    (double)lbl_821CC03C,(double)lbl_821CC040,(double)lbl_821CC044);
  return;
}

