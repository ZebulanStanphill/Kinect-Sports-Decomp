extern int fn_82AB15D0();
extern int fn_82BAAC50();
extern int fn_82BAB1C8();
extern int fn_82BD09F0();
extern unsigned int lbl_820E3014;
extern unsigned int lbl_820E30A8;
extern unsigned int lbl_8316FF50;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82BAD3A8(int param_1,int param_2,unsigned int *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int *piVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  
  piVar4 = (int *)((((int)param_3 - *(int *)(param_2 + 4)) / 0xc) * 8 + *(int *)(param_2 + 0x34));
  if (*piVar4 == 0) {
    *piVar4 = param_1;
  }
  else {
    piVar4[1] = param_1;
  }
  if ((*(unsigned int *)(&lbl_8316FF50 + *(int *)(param_1 + 0x18) * 0x34) >> 2 & 1) == 0) {
    fn_82BAAC50(param_1,param_3,1,1);
    fn_82BAAC50(param_1,param_3,1,2);
    param_3[2] = (lbl_820E3014 & 0x1f) << 0x18 | param_3[2] & 0xe0ffffff;
    iVar2 = fn_82BD09F0(*(unsigned int *)(param_4 + 0xab0),*(unsigned int *)(param_1 + 0xec));
    if (-1 < iVar2) {
      uVar5 = *(unsigned int *)(param_1 + 0x84);
      uVar3 = ((unsigned __int64)uVar5 & 0xff) << 0x18 |
              ((unsigned __int64)uVar5 & 0xff00) << 8 |
              (unsigned __int64)(uVar5 >> 8) & 0xff00 | (unsigned __int64)(uVar5 >> 0x18);
      *(unsigned char *)((int)param_3 + 5) =
           (unsigned char)((uVar3 + 0x1000000 & 0xffffffff) >> 0x12) & 0xc0 |
           (unsigned char)((uVar3 - 0x100 & 0xffffffff) >> 6) & 0xc |
           (unsigned char)((uVar3 - 0x20000 & 0xffffffff) >> 0xc) & 0x30 | (unsigned char)(uVar5 >> 0x18) & 3;
      *(char *)((int)param_3 + 6) = (char)*(unsigned short *)(param_3 + 1);
    }
  }
  else {
    fn_82BAAC50(param_1,param_3,1,1);
    *param_3 = lbl_820E30A8 << 0x1a | *param_3 & 0x3ffffff;
    cVar1 = *(char *)(param_1 + 0x84);
    if (((cVar1 != *(char *)(param_1 + 0x85)) || (cVar1 != *(char *)(param_1 + 0x86))) ||
       (cVar1 != *(char *)(param_1 + 0x87))) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df830,0xffffffff820df268,0xac3);
    }
    uVar5 = *(unsigned int *)(param_1 + 0x84);
    uVar3 = ((unsigned __int64)uVar5 & 0xff) << 0x18 |
            ((unsigned __int64)uVar5 & 0xff00) << 8 |
            (unsigned __int64)(uVar5 >> 8) & 0xff00 | (unsigned __int64)(uVar5 >> 0x18);
    *(unsigned char *)((int)param_3 + 7) =
         (unsigned char)((uVar3 + 0x1000000 & 0xffffffff) >> 0x12) & 0xc0 |
         (unsigned char)((uVar3 - 0x100 & 0xffffffff) >> 6) & 0xc |
         (unsigned char)((uVar3 - 0x20000 & 0xffffffff) >> 0xc) & 0x30 | (unsigned char)(uVar5 >> 0x18) & 3;
  }
  fn_82BAB1C8(param_1,param_3);
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 == 0) {
    if ((param_3[1] & 0x18000000) != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df8f4,0xffffffff820df268,0xad4);
    }
    uVar5 = param_3[1] & 0xe7ffffff;
  }
  else if (iVar2 == 2) {
    uVar5 = param_3[1] >> 0x1b & 3;
    if ((uVar5 != 0) && (uVar5 != 2)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df908,0xffffffff820df268,0xad8);
    }
    uVar5 = param_3[1] & 0xe7ffffff | 0x10000000;
  }
  else {
    if (iVar2 != 3) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820df268,0xae0);
      return;
    }
    uVar5 = param_3[1] >> 0x1b & 3;
    if ((uVar5 != 0) && (uVar5 != 3)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df930,0xffffffff820df268,0xadc);
    }
    uVar5 = param_3[1] | 0x18000000;
  }
  param_3[1] = uVar5;
  return;
}

