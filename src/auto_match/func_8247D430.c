extern int fn_82292AE8();
extern int fn_82292BC0();
extern int fn_82292C30();
extern int fn_8247CD28();
extern int fn_8247D718();
extern int fn_82536070();
extern int fn_8254B438();
extern int fn_825521F0();
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821B44EC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831D450C;


/* WARNING: Removing unreachable block (ram,0x8247d4c4) */

void fn_8247D430(int param_1)

{
  int iVar1;
  unsigned char **ppuStack_30;
  int (**pcStack_2c)();
  unsigned char ***pppuStack_20;
  
  fn_82292BC0(0,0,0);
  fn_82292C30(4);
  iVar1 = fn_82292AE8();
  if (*(int *)(iVar1 + 0x54) != 0) {
    *(unsigned int *)(iVar1 + 0x54) = 0;
    fn_82536070(0xffffffff821aa320,0xffffffff821aa314);
  }
  fn_8254B438(*(unsigned int *)(*(int *)(param_1 + 0x90) + 0x8c8));
  if (*(int *)(param_1 + 8) == 4) {
    lbl_831D450C = 0xffffffff;
    pcStack_2c = fn_8247D718;
    pppuStack_20 = &ppuStack_30;
    ppuStack_30 = &lbl_821B44EC;
    fn_825521F0((double)lbl_821CA460,(double)lbl_821917C0);
  }
  fn_8247CD28(param_1 + 0x10);
  return;
}

