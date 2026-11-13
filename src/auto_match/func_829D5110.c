extern int fn_829D47B0();
extern int fn_829E19A8();
extern int fn_82A28E60();
extern int fn_82A2B2F0();
extern int XamUserNuiGetUserIndex();
extern unsigned int *lbl_832179FC;


void fn_829D5110(void)

{
  int iVar2;
  __int64 lVar1;
  unsigned int *puVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  int aiStack_40;
  
  if (((lbl_832179FC[0x23d35] & 1) != 0) && (fn_829D47B0(&aiStack_40,0xaf000), aiStack_40 != 0))
  {
    iVar2 = fn_829E19A8(lbl_832179FC + 0x9268,aiStack_40,0xaf000);
    if (iVar2 < 0) {
      fn_82A2B2F0(0xffffffff82057520);
      fn_82A28E60(lbl_832179FC[0x23d33],0,aiStack_40);
      return;
    }
    fn_82A28E60(lbl_832179FC[0x23d33],0,aiStack_40);
    lVar1 = XamNuiIdentityGetSessionId();
    if (lVar1 == *(__int64 *)(lbl_832179FC + 0x926a)) {
      puVar3 = lbl_832179FC + 0x9260;
      RtlEnterCriticalSection(puVar3);
      uVar5 = 0;
      piVar4 = lbl_832179FC + 0xc798;
      puVar6 = lbl_832179FC;
      do {
        if ((piVar4[4] != 0) &&
           ((iVar2 = XamUserNuiGetUserIndex(uVar5,puVar6 + 3), -1 < iVar2 ||
            ((lbl_832179FC[0x23d35] & 0x40) != 0)))) {
          *puVar6 = 1;
          puVar6[1] = puVar6[1] | 1;
          puVar6[2] = (unsigned int)(*piVar4 != 0);
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 6;
        piVar4 = piVar4 + 0x3534;
      } while ((uVar5 & 0xffffffff) < 8);
      RtlLeaveCriticalSection(puVar3);
      return;
    }
  }
  fn_82A2B2F0(0xffffffff82057520,0);
  return;
}

