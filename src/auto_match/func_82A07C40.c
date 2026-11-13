extern unsigned int fStack_100;
extern unsigned int fStack_a4;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern unsigned int fStack_b4;
extern unsigned int fStack_b8;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern unsigned int fStack_d4;
extern unsigned int fStack_d8;
extern unsigned int fStack_dc;
extern unsigned int fStack_e0;
extern unsigned int fStack_e4;
extern unsigned int fStack_e8;
extern unsigned int fStack_ec;
extern unsigned int fStack_f0;
extern unsigned int fStack_f8;
extern unsigned int fStack_fc;
extern int fn_82A022A0();
extern int fn_82A02760();
extern int fn_82F6DA04();
extern int fn_82F6DC9C();
extern unsigned int lbl_821AAD20;
extern unsigned int *lbl_83218C34;


void fn_82A07C40(unsigned __int64 param_1,int param_2)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  double dVar3;
  unsigned char in_vs32 [16];
  unsigned char in_vs42 [16];
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  struct { float first; float second; } stack_pair_100;

  float fStack_f8;
  struct { float first; float second; } stack_pair_f0;

  struct { float first; float second; } stack_pair_e8;

  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;

  iVar2 = fn_82F6DA04();
  dVar3 = (double)lbl_821AAD20;
  stack_pair_f0.first = lbl_821AAD20;
  stack_pair_f0.second = lbl_821AAD20;
  stack_pair_e8.first = lbl_821AAD20;
  stack_pair_e8.second = lbl_821AAD20;
  fStack_e0 = lbl_821AAD20;
  fStack_dc = lbl_821AAD20;
  fStack_d8 = lbl_821AAD20;
  fStack_d4 = lbl_821AAD20;
  fStack_d0 = lbl_821AAD20;
  fStack_cc = lbl_821AAD20;
  fStack_c8 = lbl_821AAD20;
  fStack_c4 = lbl_821AAD20;
  fStack_c0 = lbl_821AAD20;
  fStack_bc = lbl_821AAD20;
  fStack_b8 = lbl_821AAD20;
  fStack_b4 = lbl_821AAD20;
  fStack_b0 = lbl_821AAD20;
  fStack_ac = lbl_821AAD20;
  fStack_a8 = lbl_821AAD20;
  fStack_a4 = lbl_821AAD20;
  fn_82A022A0(&stack_pair_f0.first);
  fn_82A022A0(&stack_pair_f0.first);
  fn_82A022A0(&stack_pair_e8.first);
  fn_82A022A0(&stack_pair_e8.first);
  fn_82A022A0(&fStack_b0);
  fn_82A022A0(&fStack_b0);
  fn_82A022A0(&fStack_e0);
  fn_82A022A0(&fStack_e0);
  fn_82A022A0(&fStack_d8);
  fn_82A022A0(&fStack_d8);
  puVar1 = (unsigned int *)(param_2 + 0x20U & 0xfffffff0);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  fn_82A022A0(&fStack_d0);
  fn_82A022A0(&fStack_a8);
  fn_82A022A0(&fStack_a8);
  puVar1 = (unsigned int *)((int)&stack_pair_100.first + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  if ((((double)stack_pair_100.first != dVar3) || ((double)stack_pair_100.second != dVar3)) ||
     ((double)fStack_f8 != dVar3)) {
    puVar1 = (unsigned int *)((int)&stack_pair_100.first + in_r0 & 0xfffffff0);
    *puVar1 = in_register_00010020;
    puVar1[1] = in_register_00010024;
    puVar1[2] = in_register_00010028;
    puVar1[3] = in_vr2;
    if ((((double)stack_pair_100.first != dVar3) || ((double)stack_pair_100.second != dVar3)) ||
       ((double)fStack_f8 != dVar3)) {
      puVar1 = (unsigned int *)((int)&stack_pair_100.first + in_r0 & 0xfffffff0);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      if ((((double)stack_pair_100.first != dVar3) || ((double)stack_pair_100.second != dVar3)) ||
         ((double)fStack_f8 != dVar3)) {
        altv300_21(in_vs32,in_vs42);
        fn_82A022A0(&fStack_c8);
      }
    }
  }
  fn_82A022A0(&fStack_c0);
  fn_82A022A0(&fStack_b8);
  fn_82A022A0(&fStack_b8);
  fn_82A02760(iVar2,&stack_pair_f0.first);
  if (lbl_83218C34 != (int *)0x0) {
    stack_pair_f0.first = *(float *)(iVar2 + 0x40a0);
    stack_pair_f0.second = *(float *)(iVar2 + 0x40a8);
    stack_pair_e8.first = *(float *)(iVar2 + 0x40b0);
    stack_pair_e8.second = *(float *)(iVar2 + 0x40b8);
    fStack_e0 = *(float *)(iVar2 + 0x40c0);
    fStack_dc = *(float *)(iVar2 + 0x40c8);
    fStack_d8 = *(float *)(iVar2 + 0x40d0);
    fStack_d4 = *(float *)(iVar2 + 0x40d8);
    fStack_d0 = *(float *)(iVar2 + 0x40e0);
    fStack_cc = *(float *)(iVar2 + 0x40e8);
    (**(int (***)())(*lbl_83218C34 + 0x58))(lbl_83218C34,*(unsigned int *)(iVar2 + 0x4144),&stack_pair_f0.first);
  }
  fn_82F6DC9C();
  return;
}
