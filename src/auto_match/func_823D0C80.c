extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82250D10();
extern int fn_822EFBF0();
extern int fn_823D0DD8();
extern int fn_823E7788();
extern int fn_823EAF68();
extern int fn_824FE498();
extern unsigned int iStack_ec;
extern unsigned int lbl_832975B0;


unsigned __int64 fn_823D0C80(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar2;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_f0 [1];
  int iStack_ec;
  unsigned char auStack_e0 [80];
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [88];
  
  if (*(int *)(param_1 + 0x9a0) == 0) {
    fn_82250D10(auStack_e0);
    puVar4 = (unsigned int *)((unsigned int)(auStack_90 + in_r0) & 0xfffffff0);
    *puVar4 = in_register_000104d0;
    puVar4[1] = in_register_000104d4;
    puVar4[2] = in_register_000104d8;
    puVar4[3] = in_vr77;
    puVar4 = (unsigned int *)((unsigned int)(auStack_80 + in_r0) & 0xfffffff0);
    *puVar4 = in_register_000104d0;
    puVar4[1] = in_register_000104d4;
    puVar4[2] = in_register_000104d8;
    puVar4[3] = in_vr77;
    puVar4 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
    *puVar4 = in_register_000104d0;
    puVar4[1] = in_register_000104d4;
    puVar4[2] = in_register_000104d8;
    puVar4[3] = in_vr77;
    fn_823E7788(param_1,auStack_e0);
    iVar3 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar3 = fn_82250A18();
    }
    if (*(char *)(iVar3 + 4) == '\0') {
      if (*(int *)(param_1 + 0x4c0) != 0) {
        fn_824FE498(param_2);
        puVar4 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
        uVar5 = puVar4[1];
        uVar6 = puVar4[2];
        uVar7 = puVar4[3];
        puVar1 = (unsigned int *)((int)param_2 + 0xbd0U & 0xfffffff0);
        *puVar1 = *puVar4;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        puVar4 = (unsigned int *)((int)param_2 + 0xc30U & 0xfffffff0);
        *puVar4 = in_register_000104d0;
        puVar4[1] = in_register_000104d4;
        puVar4[2] = in_register_000104d8;
        puVar4[3] = in_vr77;
      }
      fn_823D0DD8(param_1,auStack_e0);
    }
    else if (*(int *)(param_1 + 0x84) != 0) {
      puVar4 = (unsigned int *)fn_822EFBF0(auStack_f0);
      fn_823EAF68(*puVar4,auStack_e0);
      if (iStack_ec != 0) {
        fn_822315A0();
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

