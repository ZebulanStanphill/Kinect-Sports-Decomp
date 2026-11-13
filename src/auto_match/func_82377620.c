extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_d0;
extern unsigned int fStack_100;
extern unsigned int fStack_b4;
extern unsigned int fStack_b8;
extern int fn_82250A18();
extern int fn_822ABA88();
extern int fn_8238EE00();
extern int fn_8288B760();
extern int fn_82F6DA24();
extern int fn_82F6DCBC();
extern unsigned int lbl_832975B0;
extern unsigned int uStack_b0;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_fc;


void fn_82377620(unsigned __int64 param_1,double param_2,double param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned int param_6,unsigned __int64 param_7,unsigned __int64 param_8,
                  unsigned int param_9,unsigned int param_10,unsigned int param_11)

{
  int *piVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  double extraout_f1;
  double dVar6;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned int in_register_00010030;
  unsigned int in_register_00010034;
  unsigned int in_register_00010038;
  unsigned int in_vr3;
  unsigned int in_register_00010040;
  unsigned int in_register_00010044;
  unsigned int in_register_00010048;
  unsigned int in_vr4;
  unsigned int in_stack_000000a4;
  unsigned int in_stack_000000ac;
  unsigned char in_stack_000000c7;
  unsigned char auStack_130 [16];
  unsigned char auStack_120 [16];
  unsigned char auStack_110 [16];
  float fStack_100;
  unsigned int uStack_fc;
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned int uStack_e8;
  unsigned int uStack_e4;
  unsigned int uStack_e0;
  unsigned char auStack_d0 [16];
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  float fStack_b8;
  float fStack_b4;
  unsigned char uStack_b0;
  
  iVar3 = fn_82F6DA24();
  dVar6 = extraout_f1;
  iVar4 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar4 = fn_82250A18();
  }
  if ((*(char *)(iVar4 + 4) != '\0') && (iVar4 = *(int *)(iVar3 + 0x84), iVar4 != 0)) {
    piVar1 = *(int **)(**(int **)(iVar3 + 8) + (int)((param_7 & 0xffffffff) << 2));
    iVar3 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),param_8);
    if (*(int *)(iVar3 + 0x168) == 0) {
      uVar5 = *(unsigned int *)(iVar3 + 0x16c);
    }
    else {
      uVar5 = fn_8288B760();
      uVar5 = uVar5 & 0xff;
    }
    if (uVar5 != 0) {
      puVar2 = (unsigned int *)((unsigned int)(auStack_130 + in_r0) & 0xfffffff0);
      *puVar2 = in_register_00010010;
      puVar2[1] = in_register_00010014;
      puVar2[2] = in_register_00010018;
      puVar2[3] = in_vr1;
      puVar2 = (unsigned int *)((unsigned int)(auStack_120 + in_r0) & 0xfffffff0);
      *puVar2 = in_register_00010020;
      puVar2[1] = in_register_00010024;
      puVar2[2] = in_register_00010028;
      puVar2[3] = in_vr2;
      fStack_100 = (float)dVar6;
      puVar2 = (unsigned int *)((unsigned int)(auStack_110 + in_r0) & 0xfffffff0);
      *puVar2 = in_register_00010030;
      puVar2[1] = in_register_00010034;
      puVar2[2] = in_register_00010038;
      puVar2[3] = in_vr3;
      uStack_f0 = (unsigned int)param_7;
      puVar2 = (unsigned int *)((unsigned int)(auStack_d0 + in_r0) & 0xfffffff0);
      *puVar2 = in_register_00010040;
      puVar2[1] = in_register_00010044;
      puVar2[2] = in_register_00010048;
      puVar2[3] = in_vr4;
      fStack_b8 = (float)param_2;
      uStack_ec = (unsigned int)param_8;
      fStack_b4 = (float)param_3;
      uStack_c0 = in_stack_000000a4;
      uStack_bc = in_stack_000000ac;
      uStack_b0 = in_stack_000000c7;
      iVar4 = *(int *)(iVar4 + 0x88);
      uStack_fc = param_6;
      uStack_e8 = param_9;
      uStack_e4 = param_10;
      uStack_e0 = param_11;
      if (iVar4 != 0) {
        fn_8238EE00(iVar4,auStack_130);
      }
    }
  }
  fn_82F6DCBC();
  return;
}

