extern int fn_829F5368();
extern int fn_829F5370();
extern int fn_829F65B8();
extern int fn_829F6608();
extern int fn_829F67E0();
extern int fn_829F6FE0();
extern int fn_829F77B0();
extern unsigned int *lbl_83218C44;


unsigned __int64 fn_829F7980(double param_1,double param_2,int param_3)

{
  unsigned int *puVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 in_r8;
  unsigned char in_vs32 [16];
  unsigned char in_vs61 [16];
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  
  piVar2 = lbl_83218C44;
  if (param_3 == 0) {
    lbl_83218C44 = (int *)0x0;
    if (piVar2 != (int *)0x0) {
      fn_829F65B8(piVar2);
      fn_829F5370(piVar2);
    }
  }
  else {
    if (lbl_83218C44 == (int *)0x0) {
      iVar3 = fn_829F5368(0x1a960);
      if (iVar3 == 0) {
        lbl_83218C44 = (int *)0x0;
        return 8;
      }
      lbl_83218C44 = (int *)fn_829F6FE0();
      if (lbl_83218C44 == (int *)0x0) {
        return 8;
      }
    }
    *lbl_83218C44 = param_3;
    puVar1 = (unsigned int *)((unsigned int)(lbl_83218C44 + 0x4b08) & 0xfffffff0);
    *puVar1 = in_register_00010010;
    puVar1[1] = in_register_00010014;
    puVar1[2] = in_register_00010018;
    puVar1[3] = in_vr1;
    altv207_13(in_vs32,in_vs61);
    puVar1 = (unsigned int *)((unsigned int)(lbl_83218C44 + 0x4b0c) & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f4;
    puVar1[2] = in_register_000103f8;
    puVar1[3] = in_vr63;
    piVar2 = lbl_83218C44;
    lbl_83218C44[0x4b10] = (int)(float)param_1;
    piVar2[0x4b11] = (int)(float)param_2;
    fn_829F6608();
    iVar3 = fn_829F67E0(lbl_83218C44);
    if (iVar3 != 0) {
      fn_829F77B0(lbl_83218C44,in_r8);
    }
  }
  return 0;
}

