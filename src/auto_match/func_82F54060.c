extern unsigned int *auStack_20;
extern int fn_8265CA20();
extern int fn_8265CAA0();
extern int fn_827E2B30();
extern int fn_82F53D50();
extern int fn_82F54000();


void fn_82F54060(int *param_1)

{
  unsigned int iVar1;
  unsigned char auStack_20 [8];
  
  fn_827E2B30(auStack_20,param_1 + 1,param_1[1],param_1[2]);
  fn_82F54000(param_1 + 1);
  iVar1 = *param_1;
  if (iVar1 != 0) {
    fn_8265CAA0(*(unsigned int *)(iVar1 + 0x1978));
    fn_82F53D50(iVar1 + 0x1564);
    fn_8265CA20(iVar1);
  }
  return;
}

