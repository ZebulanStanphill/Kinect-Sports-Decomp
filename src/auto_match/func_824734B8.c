extern int fn_82473498();
extern int fn_825521F0();
extern unsigned int lbl_821917B4;
extern unsigned int lbl_821B44EC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831D450C;


/* WARNING: Removing unreachable block (ram,0x824734ec) */

void fn_824734B8(int param_1,unsigned __int64 param_2)

{
  unsigned char **ppuStack_30;
  int (**pcStack_2c)();
  unsigned char ***pppuStack_20;
  
  lbl_831D450C = 0xffffffff;
  pcStack_2c = fn_82473498;
  pppuStack_20 = &ppuStack_30;
  ppuStack_30 = &lbl_821B44EC;
  fn_825521F0((double)lbl_821CA460,(double)lbl_821917B4,param_1,param_2,&ppuStack_30);
  *(unsigned int *)(param_1 + 0x34) = 1;
  return;
}

