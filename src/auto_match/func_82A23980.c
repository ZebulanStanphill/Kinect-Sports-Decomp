extern unsigned int *auStack_20;
extern int fn_82A20E30();
extern int fn_82A214B0();
extern int fn_82A23408();
extern int fn_82A23880();
extern unsigned int lbl_83219B94;
extern unsigned int lbl_83219C84;
extern unsigned int lbl_83219C88;


unsigned char fn_82A23980(void)

{
  int iVar1;
  unsigned char auStack_20 [16];
  
  if (lbl_83219C88 == 0) {
    RtlEnterCriticalSection(0xffffffff83219ba0);
    iVar1 = fn_82A20E30(auStack_20);
    if (iVar1 == 0) {
      lbl_83219C88 = 1;
      lbl_83219C84 = 0;
    }
    else {
      iVar1 = fn_82A23408(lbl_83219B94,0,auStack_20,0x10,0);
      if (iVar1 == 0) {
        RtlLeaveCriticalSection(0xffffffff83219ba0);
        lbl_83219C84 = fn_82A23880(auStack_20);
        lbl_83219C88 = 1;
        return lbl_83219C84;
      }
      lbl_83219C88 = 1;
      lbl_83219C84 = (unsigned char)*(unsigned int *)(iVar1 + 8);
      fn_82A214B0(lbl_83219B94);
    }
    RtlLeaveCriticalSection(0xffffffff83219ba0);
  }
  return lbl_83219C84;
}

