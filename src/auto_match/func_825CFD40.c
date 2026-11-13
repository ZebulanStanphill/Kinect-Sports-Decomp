extern int fn_825909E0();
extern int fn_825A23C0();
extern int (*lbl_8326AF28)();
extern unsigned int lbl_8326C2B0;
extern unsigned int lbl_8326C2C0;
extern unsigned int lbl_8326C390;
extern unsigned int lbl_832749B0;
extern unsigned int lbl_83274A04;
extern unsigned int lbl_832960CC;


void fn_825CFD40(unsigned int *param_1,int param_2)

{
  unsigned int *puVar1;
  __int64 lVar2;
  
  *param_1 = 1;
  if (param_2 == lbl_832960CC) {
    lbl_8326C2C0 = fn_825A23C0(0x50,8);
    puVar1 = &lbl_8326C2B0;
    lbl_8326C390 = 0;
    lVar2 = 4;
    do {
      puVar1 = puVar1 + 0xc;
      *puVar1 = 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  lbl_83274A04 = 0;
  lbl_832749B0 = 0;
  if (lbl_8326AF28 != (int (**)())0x0) {
    (*lbl_8326AF28)();
  }
  *(unsigned int *)(param_2 + 0x88c) = 0;
  fn_825909E0(param_2 + 0x85c,0);
  return;
}

