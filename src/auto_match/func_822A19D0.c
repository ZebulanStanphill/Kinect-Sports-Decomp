extern int fn_822A2A48();
extern int fn_8265C9E0();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D12B0;
extern unsigned int lbl_831D12B8;
extern unsigned int lbl_831D12BC;
extern unsigned int lbl_831D12C0;
extern unsigned int lbl_831D12C4;
extern unsigned int lbl_831D12CC;
extern unsigned int lbl_831D12D0;
extern unsigned int lbl_831D12D4;
extern unsigned int lbl_831D12D8;
extern unsigned int lbl_831D12DC;
extern unsigned int lbl_831D12E8;
extern unsigned int *lbl_831D12F8;
extern unsigned int lbl_831D1300;
extern unsigned int *lbl_831D1310;
extern unsigned int lbl_831D1318;
extern unsigned int lbl_831D131C;
extern unsigned int lbl_831D1320;
extern unsigned int lbl_831D1324;
extern unsigned int lbl_831D1328;


void fn_822A19D0(void)

{
  int iVar1;
  
  lbl_831D12C0 = ltcg_pool_0_0f;
  lbl_831D12C4 = 0;
  lbl_831D12D8 = 0;
  lbl_831D12B8 = 0;
  lbl_831D12BC = 0xffffffff;
  lbl_831D12DC = 0;
  lbl_831D12CC = 0;
  lbl_831D12D0 = 0;
  lbl_831D12D4 = 0;
  lbl_831D12B0 = 0;
  if (lbl_831D12F8 != (int *)0x0) {
    iVar1 = (int)&lbl_831D12E8 + -(int)lbl_831D12F8;
    (**(int (***)())(*lbl_831D12F8 + 0xc))
              (lbl_831D12F8,iVar1 - (-(int)lbl_831D12F8 + -0x7ce2ed19 + (unsigned int)(iVar1 == 0)));
  }
  lbl_831D12F8 = (int *)0x0;
  if (lbl_831D1310 != (int *)0x0) {
    iVar1 = (int)&lbl_831D1300 + -(int)lbl_831D1310;
    (**(int (***)())(*lbl_831D1310 + 0xc))
              (lbl_831D1310,iVar1 - (-(int)lbl_831D1310 + -0x7ce2ed01 + (unsigned int)(iVar1 == 0)));
  }
  lbl_831D1318 = 1;
  lbl_831D1310 = (int *)0x0;
  lbl_831D1320 = 0;
  lbl_831D131C = 0;
  lbl_831D1324 = 6;
  iVar1 = fn_8265C9E0(0x2ac);
  if (iVar1 == 0) {
    lbl_831D1328 = 0;
  }
  else {
    lbl_831D1328 = fn_822A2A48();
  }
  return;
}

