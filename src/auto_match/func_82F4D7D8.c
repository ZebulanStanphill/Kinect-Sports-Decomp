typedef unsigned char bool;
extern unsigned int *auStack_af0;
extern int fn_829D23A0();
extern int fn_829D2BE0();
extern int fn_829D2D28();
extern int fn_82A1DD38();
extern int fn_82A1E650();
extern int fn_82A1E6A0();
extern int fn_82A1E810();
extern unsigned int lbl_8326183C;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82F4D7D8(void)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar5;
  __int64 lVar4;
  unsigned __int64 uVar6;
  __int64 lVar7;
  char in_RESERVE;
  unsigned char bVar8;
  unsigned char auStack_af0 [2800];
  
  uVar2 = lbl_8326183C;
  *(unsigned int *)(lbl_8326183C + 0x2b04) = 1;
  *(unsigned int *)(uVar2 + 0x2b08) = 0;
  uVar3 = fn_82A1E6A0(0,0,0,0xffffffff821655d8);
  iVar5 = fn_829D2BE0(uVar3,-(*(int *)(lbl_8326183C + 0x2dbc) == 0) & 2);
  if (iVar5 < 0) {
LAB_82f4d840:
    uVar3 = 0x15;
    *(unsigned int *)(lbl_8326183C + 0x2b04) = 0;
  }
  else {
    iVar5 = *(int *)(lbl_8326183C + 0x2b04);
    uVar2 = lbl_8326183C;
    while (iVar5 != 0) {
      if (*(int *)(uVar2 + 0x2dc0) != *(int *)(uVar2 + 0x2dbc)) {
        *(int *)(uVar2 + 0x2dbc) = *(int *)(uVar2 + 0x2dc0);
        fn_829D23A0();
        iVar5 = fn_829D2BE0(uVar3,-(*(int *)(lbl_8326183C + 0x2dbc) == 0) & 2);
        if (iVar5 < 0) goto LAB_82f4d840;
      }
      fn_82A1E650(uVar3,0xffffffffffffffff);
      lVar4 = fn_829D2D28(-(unsigned __int64)((*(unsigned int *)(lbl_8326183C + 0x2b28) & 0x10) != 0),
                                auStack_af0);
      bVar8 = (lVar4 == 0) << 1;
      if (lVar4 < 0) {
        lVar7 = (unsigned __int64)lbl_8326183C + 0x2b50;
        do {
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(1,0,lVar7);
            *(unsigned int *)lVar7 = uVar1;
            bVar8 = 2;
          }
        } while (!(bool)(bVar8 >> 1));
      }
      else {
        RtlEnterCriticalSection((unsigned __int64)lbl_8326183C + 0x2b0c);
        fn_82A1DD38(lbl_8326183C + 0x2050,auStack_af0,0xab0);
        RtlLeaveCriticalSection(lbl_8326183C + 0x2b0c);
        uVar6 = (unsigned __int64)lbl_8326183C;
        do {
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(0,0,uVar6 + 0x2b50);
            *(unsigned int *)(uVar6 + 0x2b50) = uVar1;
            bVar8 = 2;
          }
        } while (!(bool)(bVar8 >> 1 & 1));
        if (*(int *)(lbl_8326183C + 0x2dc4) != 0) {
          fn_82A1E810();
        }
      }
      uVar2 = lbl_8326183C;
      *(char *)(lbl_8326183C + 1) = '\x01' - (lVar4 == -0x7ff8fb71);
      iVar5 = *(int *)(uVar2 + 0x2b04);
    }
    fn_829D23A0();
    uVar2 = lbl_8326183C;
    uVar3 = 0;
    *(unsigned int *)(lbl_8326183C + 0x2b00) = 0;
    *(unsigned int *)(uVar2 + 0x2b08) = 1;
  }
  return uVar3;
}

