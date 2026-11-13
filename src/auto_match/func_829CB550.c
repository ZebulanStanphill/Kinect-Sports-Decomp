typedef unsigned char bool;
extern unsigned int *auStack_10;
extern unsigned int lbl_8315C3E8;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_829CB550(void)

{
  int iVar1;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int auStack_10 [4];
  
  auStack_10[0] = 0;
  iVar1 = XamXStudioRequest(1,auStack_10);
  if (-1 < iVar1) {
    do {
      if (in_RESERVE != '\0') {
        lbl_8315C3E8 =
             (unsigned char *)storeWordConditionalIndexed(0xffffffff829c9120,0,0xffffffff8315c3e8);
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  return;
}

