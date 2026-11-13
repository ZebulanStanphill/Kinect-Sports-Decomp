typedef unsigned char bool;
#define true 1
extern int iRam831e928c;
extern unsigned int lbl_831E9284;
extern unsigned int lbl_831E9288;
extern unsigned int uRam831e9290;
extern unsigned __int64 storeWordConditionalIndexed();


/* WARNING: Removing unreachable block (ram,0x8268df7c) */

void fn_8268DEB8(void)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  int *piVar6;
  char in_RESERVE;
  unsigned char in_cr0;
  
  sync(1);
  if (iRam831e928c == 0) {
    do {
      uVar4 = uRam831e9290;
      if (uRam831e9290 == 1) {
        do {
          sync(1);
        } while( true );
      }
      sync(1);
      do {
        uVar3 = uRam831e9290;
        if (uRam831e9290 != uVar4) {
          if (in_RESERVE != '\0') {
            uRam831e9290 = storeWordConditionalIndexed((unsigned __int64)uRam831e9290,0,0xffffffff831e9290)
            ;
            in_cr0 = 2;
          }
          break;
        }
        if (in_RESERVE != '\0') {
          uRam831e9290 = storeWordConditionalIndexed(1,0,0xffffffff831e9290);
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      sync(1);
    } while (uVar3 != uVar4);
    while (iVar2 = lbl_831E9284, iVar2 != 0) {
      lbl_831E9284 = *(int *)(iVar2 + 0x14);
      *(unsigned int *)(iVar2 + 0x14) = 0;
      uVar4 = (unsigned int)*(unsigned short *)((*(unsigned int *)(iVar2 + 8) >> 2 & 0x3ffffffe) + 0x831e7e84);
      if (uVar4 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(((*(unsigned int *)(iVar2 + 8) & 7) + uVar4) * 4 + -0x7ce17d80);
      }
      if (iVar5 != iVar2) {
        iVar1 = *(int *)(iVar5 + 0x10);
        if (iVar1 == 0) {
          *(int *)(iVar5 + 0x10) = iVar2;
        }
        else {
          piVar6 = (int *)(iVar1 + 0x14);
          iVar5 = *(int *)(iVar1 + 0x14);
          while (iVar5 != 0) {
            piVar6 = (int *)(*piVar6 + 0x14);
            iVar5 = *piVar6;
          }
          *piVar6 = iVar2;
        }
      }
    }
    lbl_831E9284 = 0;
    lbl_831E9288 = 0;
    sync(1);
    iRam831e928c = 1;
  }
  return;
}

