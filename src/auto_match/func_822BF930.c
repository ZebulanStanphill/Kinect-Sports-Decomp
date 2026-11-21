extern unsigned int ___7bad_alloc_stdext__6B_;
extern unsigned int fn_822C1358;
extern unsigned int fn_822C1388;
extern unsigned int fn_822C13B8;
extern unsigned int lbl_821ACDBC;
extern unsigned int lbl_821ACDD4;

/* WARNING: Inlined function: __savegprlr_27 */

void fn_822BF930(int param_1,__int64 param_2)

{
  unsigned int *puVar1;
  int (**pcStack_d0)();
  int iStack_cc;
  unsigned char *puStack_c8;
  unsigned int uStack_c4;
  unsigned char *puStack_c0;
  unsigned int uStack_bc;
  unsigned char *puStack_b8;
  unsigned int uStack_b4;
  unsigned __int64 uStack_b0;
  int iStack_a8;
  unsigned char auStack_90 [16];
  unsigned int *puStack_80;
  unsigned char auStack_70 [16];
  unsigned int *puStack_60;
  unsigned char auStack_50 [16];
  unsigned int *puStack_40;
  
  *(int *)(param_1 + 0x27c) = (int)param_2;
  iStack_cc = 0;
  pcStack_d0 = fn_822C1358;
  uStack_b0 = 0x822c135800000000;
  iStack_a8 = param_1;
  puVar1 = (unsigned int *)fn_8265C9E0(0x20);
  if (puVar1 == (unsigned int *)0x0) {
    uStack_b4 = 0;
    puStack_b8 = &___7bad_alloc_stdext__6B_;
    __Raise_exception_stdext__QBAXXZ(&puStack_b8);
    return;
  }
  *puVar1 = &lbl_821ACDBC;
  memcpy(puVar1 + 2,&uStack_b0,0x18);
  puStack_80 = puVar1;
  fn_82321370(&pcStack_d0,param_2 + 0x508,auStack_90);
  fn_823F2E20(param_1 + 0x280,&pcStack_d0);
  if (iStack_cc != 0) {
    fn_822315A0();
  }
  fn_82359C18(auStack_90);
  iStack_cc = 0;
  pcStack_d0 = fn_822C1388;
  uStack_b0 = 0x822c138800000000;
  iStack_a8 = param_1;
  puVar1 = (unsigned int *)fn_8265C9E0(0x20);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = &lbl_821ACDD4;
    memcpy(puVar1 + 2,&uStack_b0,0x18);
    puStack_60 = puVar1;
    fn_82321370(&pcStack_d0,param_2 + 0x578,auStack_70);
    fn_823F2E20(param_1 + 0x288,&pcStack_d0);
    if (iStack_cc != 0) {
      fn_822315A0();
    }
    fn_82359C18(auStack_70);
    iStack_cc = 0;
    pcStack_d0 = fn_822C13B8;
    uStack_b0 = 0x822c13b800000000;
    iStack_a8 = param_1;
    puVar1 = (unsigned int *)fn_8265C9E0(0x20);
    if (puVar1 != (unsigned int *)0x0) {
      *puVar1 = &lbl_821ACDD4;
      memcpy(puVar1 + 2,&uStack_b0,0x18);
      puStack_40 = puVar1;
      fn_82321370(&pcStack_d0,param_2 + 0x558,auStack_50);
      fn_823F2E20(param_1 + 0x290,&pcStack_d0);
      if (iStack_cc != 0) {
        fn_822315A0();
      }
      fn_82359C18(auStack_50);
      if (*(int *)(param_1 + 0x5a8) != 0) {
        fn_8232B908(*(int *)(param_1 + 0x5a8),param_2);
      }
      return;
    }
    uStack_c4 = 0;
    puStack_c8 = &___7bad_alloc_stdext__6B_;
    __Raise_exception_stdext__QBAXXZ(&puStack_c8);
    return;
  }
  uStack_bc = 0;
  puStack_c0 = &___7bad_alloc_stdext__6B_;
  __Raise_exception_stdext__QBAXXZ(&puStack_c0);
  return;
}
