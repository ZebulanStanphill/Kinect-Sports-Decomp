extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82250D10();
extern int fn_822EFBF0();
extern int fn_823D1138();
extern int fn_823E7368();
extern int fn_823EB078();
extern unsigned int iStack_50;
extern unsigned int iStack_cc;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_4c;


unsigned __int64 fn_823D0FF8(int param_1,int param_2)

{
  int in_r0;
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar1;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_d0 [4];
  int iStack_cc;
  unsigned char auStack_c0 [80];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  int iStack_50;
  unsigned char uStack_4c;
  
  if (*(int *)(param_1 + 0x9a0) == 0) {
    fn_82250D10(auStack_c0);
    puVar3 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
    puVar3 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
    iStack_50 = 0xffffffff;
    fn_823E7368(param_1,auStack_c0);
    puVar3 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
    *puVar3 = in_register_00010010;
    puVar3[1] = in_register_00010014;
    puVar3[2] = in_register_00010018;
    puVar3[3] = in_vr1;
    puVar3 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar3 = in_register_00010020;
    puVar3[1] = in_register_00010024;
    puVar3[2] = in_register_00010028;
    puVar3[3] = in_vr2;
    uStack_4c = *(char *)(param_1 + 0xd51) == '\0';
    iVar2 = lbl_832975B0;
    iStack_50 = param_2;
    if (lbl_832975B0 == 0) {
      iVar2 = fn_82250A18();
    }
    if (*(char *)(iVar2 + 4) == '\0') {
      fn_823D1138(param_1,auStack_c0);
    }
    else if ((*(int *)(param_1 + 0x84) != 0) && (*(int *)(param_1 + 0xcc) == param_2)) {
      puVar3 = (unsigned int *)fn_822EFBF0(auStack_d0);
      fn_823EB078(*puVar3,auStack_c0);
      if (iStack_cc != 0) {
        fn_822315A0();
      }
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

