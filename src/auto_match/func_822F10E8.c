extern char lbl_82196582[];
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822B7068();
extern int fn_822B7340();
extern int fn_822E52D8();
extern int fn_822E54B0();

void fn_822F10E8(int param_1)
{
  int iVar1;
  unsigned char auStack_30 [32];
  
  fn_822E54B0(*(int *)(param_1 + 0xc));
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0) {
    fn_82230110(auStack_30,lbl_82196582);
    fn_822E52D8(*(int *)(param_1 + 0xc),auStack_30);
    fn_82230300(auStack_30,1,0);
  }
  if ((*(int *)(*(int *)(param_1 + 0x10) + 0x178) != 2) &&
     (*(void **)(*(int *)(param_1 + 0xc) + 0x78) != 0)) {
    fn_822B7340(*(int *)(param_1 + 0xc));
  }
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x24) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x1e4);
    fn_822B7068(*(int *)(param_1 + 0xc),*(int *)(iVar1 + 0xa8));
    *(int *)(iVar1 + 0xb4) = 0;
  }
}
