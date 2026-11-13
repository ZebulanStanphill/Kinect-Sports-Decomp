extern int fn_82AB15D0();
extern int fn_82BAAC50();
extern int fn_82BAB1C8();
extern unsigned int lbl_820E3014;
extern unsigned int lbl_820E30A8;
extern unsigned int lbl_8316FF50;


/* WARNING: Removing unreachable block (ram,0x82bacf44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82BACE10(int *param_1,int param_2,unsigned int *param_3)

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
    param_3[2] = (lbl_820E3014 & 0x1f) << 0x18 | param_3[2] & 0xe0ffffff;
    iVar3 = (**(int (***)())(*param_1 + 4))(param_1);
    if (0 < iVar3) {
      fn_82BAAC50(param_1,param_3,1,1);
      fn_82BAAC50(param_1,param_3,1,2);
      uVar2 = param_1[0x21];
      uVar4 = ((unsigned __int64)uVar2 & 0xff) << 0x18 |
              ((unsigned __int64)uVar2 & 0xff00) << 8 |
              (unsigned __int64)(uVar2 >> 8) & 0xff00 | (unsigned __int64)(uVar2 >> 0x18);
      *(unsigned char *)((int)param_3 + 5) =
           (unsigned char)((uVar4 + 0x1000000 & 0xffffffff) >> 0x12) & 0xc0 |
           (unsigned char)((uVar4 - 0x100 & 0xffffffff) >> 6) & 0xc |
           (unsigned char)((uVar4 - 0x20000 & 0xffffffff) >> 0xc) & 0x30 | (unsigned char)(uVar2 >> 0x18) & 3;
      *(char *)((int)param_3 + 6) = (char)*(unsigned short *)(param_3 + 1);
    }
  }
  else {
    *param_3 = lbl_820E30A8 << 0x1a | *param_3 & 0x3ffffff;
    iVar3 = (**(int (***)())(*param_1 + 4))();
    if (0 < iVar3) {
      fn_82BAAC50(param_1,param_3,1,3);
      *(unsigned char *)((int)param_3 + 7) = 0;
      cVar1 = *(char *)(param_1 + 0x21);
      if (((cVar1 != *(char *)((int)param_1 + 0x85)) || (cVar1 != *(char *)((int)param_1 + 0x86)))
         || (cVar1 != *(char *)((int)param_1 + 0x87))) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df830,0xffffffff820df268,0xa3d);
      }
      uVar4 = (unsigned __int64)*(unsigned char *)(param_1 + 0x21) - 3;
      if ((__int64)uVar4 < 0) {
        uVar4 = (unsigned __int64)*(unsigned char *)(param_1 + 0x21) + 1;
      }
      *(unsigned char *)((int)param_3 + 7) = (unsigned char)((uVar4 & 0xffffffff) << 6) | (unsigned char)param_3[1];
      *(unsigned char *)((int)param_3 + 7) = (unsigned char)param_3[1] | *(unsigned char *)(param_1 + 0x21);
    }
  }
  fn_82BAB1C8(param_1,param_3);
  uVar2 = param_3[1] >> 0x1b & 3;
  if ((uVar2 != 0) && (uVar2 != param_1[0xd])) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df77c,0xffffffff820df268,0xa58);
  }
  param_3[1] = (param_1[0xd] & 3U) << 0x1b | param_3[1] & 0xe7ffffff;
  *param_3 = *param_3 | 0x8000;
  return;
}

