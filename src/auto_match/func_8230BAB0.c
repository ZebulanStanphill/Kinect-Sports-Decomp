extern unsigned int *auStack_90;
extern unsigned int *auStack_c0;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern int fn_822AA718();
extern int fn_824FECB8();
extern int fn_824FF1D8();
extern int fn_8255C890();
extern unsigned int lbl_821917C0;


unsigned __int64 fn_8230BAB0(int param_1)

{
  int iVar1;
  float fStack_d0;
  float fStack_cc;
  unsigned char auStack_c0 [16];
  float fStack_b0;
  float fStack_ac;
  float afStack_a0 [4];
  unsigned char auStack_90 [128];
  
  fn_822AA718(&fStack_d0,
                    *(unsigned int *)
                     (**(int **)(*(int *)(param_1 + 0x10) + 8) +
                     *(int *)(*(int *)(param_1 + 0xc) + 0x2c) * 4));
  fn_824FECB8(*(unsigned int *)(*(int *)(param_1 + 0x10) + 0xe10),auStack_90);
  iVar1 = fn_824FF1D8(auStack_90,&fStack_b0,auStack_c0);
  if (iVar1 != 0) {
    fn_8255C890(*(unsigned int *)
                       ((*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0xa1) * 4 +
                       *(int *)(param_1 + 0x10)),afStack_a0,&fStack_d0);
    if (((afStack_a0[0] + lbl_821917C0 < fStack_b0) && (fStack_b0 < fStack_d0 - lbl_821917C0)) &&
       (fStack_ac < fStack_cc - lbl_821917C0)) {
      return 1;
    }
  }
  return 0;
}

