typedef unsigned char bool;
#define true 1
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659CD;
extern unsigned int lbl_832767C8;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned char fn_8247D628(int param_1)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  int iVar6;
  char in_RESERVE;
  
  bVar1 = lbl_832659CD == '\0';
  if (!bVar1) {
    uVar4 = (unsigned __int64)lbl_832767C8;
    do {
      puVar5 = (unsigned int *)(uVar4 + 0xa0);
      uVar2 = *puVar5;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((unsigned __int64)uVar2,0,uVar4 + 0xa0);
        *puVar5 = uVar3;
        bVar1 = true;
      }
    } while (!bVar1);
    if ((int)uVar2 < 1) {
      iVar6 = *(int *)(param_1 + 0x88);
      goto LAB_8247d680;
    }
  }
  iVar6 = 0;
LAB_8247d680:
  if (iVar6 != 0) {
    return *(unsigned char *)(*(int *)(*(int *)(lbl_83265988 + 0xf0) + 8) + 8) >> 6 & 1 | 4;
  }
  return 0;
}

