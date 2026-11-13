extern unsigned int *auStack_280;
extern unsigned int *auStack_480;
extern unsigned int *auStack_490;
extern unsigned int *auStack_4a0;
extern unsigned int *auStack_4b0;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CEAFA8();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82CFC050();
extern int fn_82CFD5B0();
extern int fn_82CFFC68();
extern int fn_83082610();
extern unsigned int *lbl_8323B464;


void fn_82E14960(int param_1,int *param_2)

{
  int iVar3;
  unsigned __int64 uVar1;
  int iVar4;
  unsigned __int64 uVar2;
  unsigned int *puVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned char auStack_4b0 [16];
  unsigned char auStack_4a0 [16];
  unsigned char auStack_490 [16];
  unsigned char auStack_480 [512];
  unsigned char auStack_280 [528];
  
  param_2[1] = 0;
  iVar6 = *(int *)(param_1 + 0x14);
  iVar3 = fn_82CE5410();
  if ((int)(param_2[2] & 0x3fffffffU) < iVar6) {
    iVar4 = (param_2[2] & 0x3fffffffU) << 1;
    if (iVar4 <= iVar6) {
      iVar4 = iVar6;
    }
    fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),param_2,iVar4,0x10);
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar3 = 0;
    do {
      iVar4 = param_2[1];
      param_2[1] = iVar4 + 1;
      puVar7 = (unsigned int *)(iVar4 * 0x10 + *param_2);
      uVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 8);
      uVar9 = *(unsigned int *)(iVar3 + *(int *)(param_1 + 0x10)) & 0xfffffffe;
      uVar1 = fn_83082610((unsigned int *)(param_1 + 8));
      iVar4 = thunk_FUN_82f66570(uVar9,0x2e);
      while (iVar4 != 0) {
        iVar4 = iVar4 - uVar9;
        fn_82CFC050(auStack_480,uVar9,iVar4);
        uVar9 = iVar4 + uVar9 + 1;
        auStack_480[iVar4] = 0;
        iVar4 = fn_82CEAFA8(uVar1,auStack_480);
        if (iVar4 == 0) goto LAB_82e14b48;
        if (*(char *)(iVar4 + 0xc) != '\x19') {
          fn_82CEE578(auStack_4a0,auStack_280,0x200);
          uVar1 = fn_82CEDB38(auStack_4a0,0xffffffff8214b2a0);
          fn_82CEDB38(uVar1,auStack_480);
          (**(int (***)())(*lbl_8323B464 + 0xc))
                    (lbl_8323B464,1,0xfffffffff032edfe,auStack_280,0xffffffff8214b2c0,0x81);
                    /* WARNING: Subroutine does not return */
          fn_82CED958(auStack_4a0);
        }
        uVar1 = fn_82CFD5B0();
        uVar8 = *(unsigned short *)(iVar4 + 0x12) + uVar8;
        iVar4 = thunk_FUN_82f66570(uVar9,0x2e);
      }
      uVar2 = fn_82CEAFA8(uVar1,uVar9);
      if ((uVar2 & 0xffffffff) == 0) {
LAB_82e14b48:
        param_2[1] = param_2[1] + -1;
        fn_82CEE578(auStack_4b0,auStack_280,0x200);
        uVar1 = fn_82CEDB38(auStack_4b0,0xffffffff8214b2e8);
        fn_82CEDB38(uVar1,uVar9);
        (**(int (***)())(*lbl_8323B464 + 0xc))
                  (lbl_8323B464,1,0xfffffffff032edf1,auStack_280,0xffffffff8214b2c0,0x93);
                    /* WARNING: Subroutine does not return */
        fn_82CED958(auStack_4b0);
      }
      *puVar7 = uVar9;
      puVar5 = (unsigned int *)fn_82CFFC68(auStack_490,uVar8,uVar2);
      puVar7[2] = *puVar5;
      puVar7[3] = puVar5[1];
      puVar7[1] = *(unsigned int *)(iVar3 + *(int *)(param_1 + 0x10) + 4) & 0xfffffffe;
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar6 < *(int *)(param_1 + 0x14));
  }
  return;
}

