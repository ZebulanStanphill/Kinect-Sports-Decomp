extern int fn_82AB15D0();
extern int fn_82BAAC50();
extern int fn_82BAB1C8();
extern unsigned int lbl_820E2FB8;
extern unsigned int lbl_8316FF50;


/* WARNING: Removing unreachable block (ram,0x82bacba0) */
/* WARNING: Removing unreachable block (ram,0x82bacc18) */

void fn_82BACA30(int *param_1,int param_2,unsigned int *param_3)

{
  char cVar1;
  unsigned int uVar2;
  int iVar3;
  int *piVar5;
  unsigned __int64 uVar4;
  
  piVar5 = (int *)((((int)param_3 - *(int *)(param_2 + 4)) / 0xc) * 8 + *(int *)(param_2 + 0x34));
  if (*piVar5 == 0) {
    *piVar5 = (int)param_1;
  }
  else {
    piVar5[1] = (int)param_1;
  }
  if ((*(unsigned int *)(&lbl_8316FF50 + param_1[6] * 0x34) >> 2 & 1) == 0) {
    iVar3 = (**(int (***)())(*param_1 + 4))(param_1);
    if (0 < iVar3) {
      fn_82BAAC50(param_1,param_3,1,1);
      uVar2 = param_1[0x21];
      uVar4 = ((unsigned __int64)uVar2 & 0xff) << 0x18 |
              ((unsigned __int64)uVar2 & 0xff00) << 8 |
              (unsigned __int64)(uVar2 >> 8) & 0xff00 | (unsigned __int64)(uVar2 >> 0x18);
      *(unsigned char *)((int)param_3 + 5) =
           (unsigned char)((uVar4 + 0x1000000 & 0xffffffff) >> 0x12) & 0xc0 |
           (unsigned char)((uVar4 - 0x100 & 0xffffffff) >> 6) & 0xc |
           (unsigned char)((uVar4 - 0x20000 & 0xffffffff) >> 0xc) & 0x30 | (unsigned char)(uVar2 >> 0x18) & 3;
    }
    iVar3 = (**(int (***)())(*param_1 + 4))(param_1);
    if (1 < iVar3) {
      fn_82BAAC50(param_1,param_3,2,2);
      uVar2 = param_1[0x22];
      uVar4 = ((unsigned __int64)uVar2 & 0xff) << 0x18 |
              ((unsigned __int64)uVar2 & 0xff00) << 8 |
              (unsigned __int64)(uVar2 >> 8) & 0xff00 | (unsigned __int64)(uVar2 >> 0x18);
      *(unsigned char *)((int)param_3 + 6) =
           (unsigned char)((uVar4 + 0x1000000 & 0xffffffff) >> 0x12) & 0xc0 |
           (unsigned char)((uVar4 - 0x100 & 0xffffffff) >> 6) & 0xc |
           (unsigned char)((uVar4 - 0x20000 & 0xffffffff) >> 0xc) & 0x30 | (unsigned char)(uVar2 >> 0x18) & 3;
    }
    iVar3 = (**(int (***)())(*param_1 + 4))(param_1);
    if (2 < iVar3) {
      fn_82BAAC50(param_1,param_3,3,3);
      uVar2 = param_1[0x23];
      uVar4 = ((unsigned __int64)uVar2 & 0xff) << 0x18 |
              ((unsigned __int64)uVar2 & 0xff00) << 8 |
              (unsigned __int64)(uVar2 >> 8) & 0xff00 | (unsigned __int64)(uVar2 >> 0x18);
      *(unsigned char *)((int)param_3 + 7) =
           (unsigned char)((uVar4 + 0x1000000 & 0xffffffff) >> 0x12) & 0xc0 |
           (unsigned char)((uVar4 - 0x100 & 0xffffffff) >> 6) & 0xc |
           (unsigned char)((uVar4 - 0x20000 & 0xffffffff) >> 0xc) & 0x30 | (unsigned char)(uVar2 >> 0x18) & 3;
    }
    param_3[2] = (*(unsigned int *)(&lbl_820E2FB8 + param_1[6] * 4) & 0x1f) << 0x18 |
                 param_3[2] & 0xe0ffffff;
  }
  else {
    iVar3 = (**(int (***)())(*param_1 + 4))(param_1);
    if ((1 < iVar3) && (param_1[0x3b] != param_1[0x3c])) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df8c4,0xffffffff820df268,0x9a6);
    }
    iVar3 = (**(int (***)())(*param_1 + 4))(param_1);
    if (0 < iVar3) {
      fn_82BAAC50(param_1,param_3,1,3);
      cVar1 = *(char *)(param_1 + 0x21);
      if (((cVar1 != *(char *)((int)param_1 + 0x85)) || (cVar1 != *(char *)((int)param_1 + 0x86)))
         || (cVar1 != *(char *)((int)param_1 + 0x87))) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df830,0xffffffff820df268,0x9ab);
      }
      uVar4 = (unsigned __int64)*(unsigned char *)(param_1 + 0x21) - 3;
      if ((__int64)uVar4 < 0) {
        uVar4 = (unsigned __int64)*(unsigned char *)(param_1 + 0x21) + 1;
      }
      *(char *)((int)param_3 + 7) = (char)((uVar4 & 0xffffffff) << 6);
      iVar3 = (**(int (***)())(*param_1 + 4))(param_1);
      if (iVar3 < 2) {
        if ((param_1[6] == 99) || (param_1[6] == 100)) {
          *(unsigned char *)((int)param_3 + 7) = (unsigned char)param_3[1] | *(unsigned char *)(param_1 + 0x21);
        }
      }
      else {
        *(unsigned char *)((int)param_3 + 7) = (unsigned char)param_3[1] | *(unsigned char *)(param_1 + 0x22);
        cVar1 = *(char *)(param_1 + 0x22);
        if (((cVar1 != *(char *)((int)param_1 + 0x89)) || (cVar1 != *(char *)((int)param_1 + 0x8a)))
           || (cVar1 != *(char *)((int)param_1 + 0x8b))) {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df798,0xffffffff820df268,0x9b0);
        }
      }
    }
    *param_3 = *(int *)(&lbl_820E2FB8 + param_1[6] * 4) << 0x1a | *param_3 & 0x3ffffff;
  }
  fn_82BAB1C8(param_1,param_3);
  uVar2 = param_3[1] >> 0x1b & 3;
  if ((uVar2 != 0) && (uVar2 != param_1[0xd])) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df77c,0xffffffff820df268,0x9d7);
  }
  param_3[1] = (param_1[0xd] & 3U) << 0x1b | param_3[1] & 0xe7ffffff;
  return;
}

