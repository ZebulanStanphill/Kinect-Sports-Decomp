typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AC8C90();
extern int fn_82AE9578();
extern int fn_82AEBAF8();


void fn_82AED4F0(__int64 param_1,int *param_2,char param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  bool bVar4;
  char cVar5;
  
  iVar1 = *param_2;
  do {
    if (iVar1 == 0) {
      return;
    }
    uVar2 = *(unsigned int *)(iVar1 + 0xc);
    if ((*(unsigned char *)(uVar2 + 0x10) & 1) == 0) {
      fn_82AC8C90(param_1 + 4,iVar1,param_2,uVar2);
      if (param_3 != '\0') {
        for (uVar3 = *(unsigned int *)(*(int *)(uVar2 + 0x1c) + 0x24); uVar3 = uVar3 & 0xfffffffe,
            uVar3 + 0x24 != *(int *)(uVar2 + 0x1c) + 0x20; uVar3 = *(unsigned int *)(uVar3 + 0x28)) {
          if (uVar2 == uVar3) {
            bVar4 = true;
            goto LAB_82aed574;
          }
        }
        bVar4 = false;
LAB_82aed574:
        if (bVar4) goto LAB_82aed5a0;
      }
      cVar5 = fn_82AE9578(param_1,uVar2,0);
      if (cVar5 != '\0') {
        fn_82AEBAF8(param_1,uVar2);
      }
    }
LAB_82aed5a0:
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}

