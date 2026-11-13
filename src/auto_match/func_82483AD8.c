extern char cRam832766f2;
extern int fn_822746B8();
extern int fn_82292BC0();
extern int fn_82292C30();
extern int fn_82292D50();
extern int fn_8247F240();
extern int fn_8254B438();
extern int fn_8255B1E0();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uRam832766f1;


void fn_82483AD8(int param_1)

{
  if (cRam832766f2 == '\0') {
    fn_82292BC0(0,0,0);
    fn_82292C30(0);
    fn_82292D50(1);
    fn_8254B438(*(unsigned int *)(*(int *)(param_1 + 0x978) + 0x8c8));
    *(unsigned int *)(param_1 + 0x5c) = 0;
    *(unsigned int *)(param_1 + 0x60) = 0;
    *(unsigned int *)(param_1 + 0x84) = 0;
    *(unsigned int *)(param_1 + 100) = 1;
    if (*(int *)(param_1 + 8) == 6) {
      fn_8247F240(param_1 + 0x10,0);
    }
    if (*(int *)(param_1 + 0xfc) != 0) {
      fn_822746B8(*(int *)(param_1 + 0xfc),0);
      *(unsigned int *)(param_1 + 0xfc) = 0;
    }
    *(unsigned int *)(param_1 + 0x980) = 1;
    uRam832766f1 = 1;
    if (((*(int *)(param_1 + 8) == 5) || (*(int *)(param_1 + 8) == 6)) &&
       (*(int *)(param_1 + 0x97c) != 0)) {
      fn_8255B1E0((double)ltcg_pool_0_0f,*(unsigned int *)(*(int *)(param_1 + 0x978) + 0x844),
                        param_1 + 0x97c,1,0,0,0,1);
    }
  }
  return;
}

