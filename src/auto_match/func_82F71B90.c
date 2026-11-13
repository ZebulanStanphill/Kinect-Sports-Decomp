extern int fn_82A2A360();
extern int free();
extern int fn_82F68240();
extern int malloc();
extern int fn_82F6CB58();
extern int fn_82F706C0();
extern int fn_82F706F0();
extern int fn_82F71A70();
extern int fn_82F71CA0();
extern int fn_82F71CD0();
extern unsigned int lbl_831BB940;
extern unsigned int uStack_30;


unsigned int fn_82F71B90(int param_1)

{
  int iVar2;
  __int64 lVar1;
  unsigned int *puVar3;
  unsigned int uStack_30;
  
  uStack_30 = 1;
  iVar2 = fn_82A2A360();
  if (iVar2 == 0) {
    fn_82F706F0();
    fn_82F706C0(0x1e);
    fn_82F6CB58(0xff);
  }
  if ((&lbl_831BB940)[param_1 * 2] == 0) {
    lVar1 = malloc(0x1c);
    if (lVar1 == 0) {
      puVar3 = (unsigned int *)fn_82F68240();
      uStack_30 = 0;
      *puVar3 = 0xc;
    }
    else {
      fn_82F71CD0(10);
      if ((&lbl_831BB940)[param_1 * 2] == 0) {
        iVar2 = fn_82F71A70(lVar1,4000);
        if (iVar2 == 0) {
          free(lVar1);
          puVar3 = (unsigned int *)fn_82F68240();
          *puVar3 = 0xc;
          uStack_30 = 0;
        }
        else {
          (&lbl_831BB940)[param_1 * 2] = (int)lVar1;
        }
      }
      else {
        free(lVar1);
      }
      fn_82F71CA0();
    }
  }
  else {
    uStack_30 = 1;
  }
  return uStack_30;
}

