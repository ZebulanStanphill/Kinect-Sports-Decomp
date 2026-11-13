extern int fn_827F5708();
extern int fn_827F6370();
extern unsigned int lbl_8218E8E8;


void fn_8250EF10(unsigned __int64 param_1,double param_2,int param_3)

{
  double dVar1;
  
  fn_827F6370(*(unsigned int *)(*(int *)(param_3 + 0x14) + 0x5e0));
  fn_827F6370(param_1,*(unsigned int *)(*(int *)(param_3 + 0x14) + 0x5e4));
  fn_827F5708(param_2,(unsigned __int64)*(unsigned int *)(param_3 + 0x14) + 0x4f0);
  dVar1 = (double)lbl_8218E8E8;
  *(unsigned int *)(*(int *)(param_3 + 0x14) + 0x2fc) = (unsigned int)(param_2 < dVar1);
  *(unsigned int *)(*(int *)(param_3 + 0x14) + 0x4ac) = (unsigned int)LZCOUNT((unsigned int)(param_2 < dVar1)) >> 5;
  return;
}

