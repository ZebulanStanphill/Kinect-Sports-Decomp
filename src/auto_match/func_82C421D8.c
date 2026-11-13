extern unsigned int lbl_820F8978;
extern unsigned int lbl_820F897C;
extern unsigned int lbl_820F8D80;
extern unsigned int lbl_8329F180;


unsigned __int64 fn_82C421D8(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  
  uVar3 = (__int64)param_2 * (__int64)param_2 + (__int64)param_1 * (__int64)param_1;
  iVar5 = 0;
  uVar4 = uVar3 >> 0x34;
  uVar1 = uVar4;
  if (uVar4 == 0) {
    uVar4 = uVar3 >> 0x14 & 0xffffffff;
    iVar5 = 0x20;
    uVar1 = uVar4;
    if (uVar4 == 0) {
      return 0xffffffffffffffff;
    }
  }
  while ((uVar1 & 0xff000000) == 0) {
    uVar1 = uVar4 << 8;
    uVar4 = uVar1 & 0xffffff00;
    iVar5 = iVar5 + 8;
  }
  iVar5 = ((unsigned char)(&lbl_8329F180)[(unsigned int)uVar4 >> 0x19] >> ((unsigned int)uVar4 >> 0x16 & 4) & 0xf) + iVar5;
  if (iVar5 + -0x13 < 0x21) {
    uVar4 = uVar3 >> ((__int64)(0x20 - (iVar5 + -0x13)) & 0x7fU) & 0xffffffff;
  }
  else {
    uVar4 = (unsigned __int64)(unsigned int)((int)uVar3 << (iVar5 - 0x33U & 0x3f));
  }
  uVar2 = (unsigned int)(uVar4 >> 0x16) & 0x3fc;
  return ((unsigned __int64)*(unsigned int *)(&lbl_820F8978 + uVar2) -
          (((unsigned __int64)*(unsigned int *)(&lbl_820F8978 + uVar2) -
            (unsigned __int64)*(unsigned int *)(&lbl_820F897C + uVar2) & 0xffffffff) * (uVar4 & 0xffffff) * 0x100
          >> 0x20) & 0xffffffff) * (unsigned __int64)*(unsigned int *)(&lbl_820F8D80 + (iVar5 + 1) * 4) >> 0x20;
}

