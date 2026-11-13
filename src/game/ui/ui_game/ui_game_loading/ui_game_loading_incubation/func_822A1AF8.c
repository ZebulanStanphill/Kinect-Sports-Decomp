extern int fn_822A22C8();
extern unsigned int lbl_831D1298;
extern unsigned int lbl_831D12A0;
extern unsigned int lbl_831D12B4;
extern unsigned int lbl_831D12B8;
extern unsigned int lbl_831D12BC;
extern unsigned int lbl_831D12CC;
extern unsigned int lbl_831D12D0;
extern unsigned int lbl_831D12D4;
extern int (*lbl_8327677C)();


void fn_822A1AF8(unsigned __int64 param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  
  iVar1 = fn_822A22C8();
  if (iVar1 == 0) {
    lbl_831D12CC = 0;
    lbl_831D12D0 = 0;
    lbl_831D12D4 = 0;
  }
  else {
    lbl_831D12BC = 0xffffffff;
    lbl_831D12B4 = param_2;
    lbl_831D12B8 = param_3;
  }
  lbl_831D1298 = lbl_831D1298 + 1;
  if (lbl_831D12A0 != 0) {
    if (lbl_8327677C != (int (**)())0x0) {
      (*lbl_8327677C)(0xffffffff821abf28,0xffffffff821abeb8,0x12a);
    }
    lbl_831D12A0 = 0;
  }
  return;
}

