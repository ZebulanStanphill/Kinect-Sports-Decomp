#define true 1
extern int fn_82F68B70();
extern unsigned int lbl_83265988;
extern unsigned int lbl_8326B4C8;
extern unsigned int lbl_8326B4D8;


unsigned __int64 fn_8260DFB0(unsigned __int64 param_1,unsigned int param_2)

{
  int iVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int *piVar4;
  unsigned int uVar5;
  __int64 lVar6;
  
  iVar3 = 0;
  do {
    uVar5 = 0;
    if (lbl_8326B4D8 == 0) {
      if (iVar3 == 4) {
        piVar4 = &lbl_8326B4C8;
        lVar6 = 4;
        do {
          iVar1 = *piVar4;
          if (iVar1 != 0) {
            uVar5 = *(unsigned int *)(*(int *)(iVar1 + 0x34) * 0x28 + iVar1 + 0x3c) & param_2 | uVar5;
          }
          piVar4 = piVar4 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      else {
        uVar5 = ((int *)((&lbl_8326B4C8)[iVar3] + 0x34))
                [*(int *)((&lbl_8326B4C8)[iVar3] + 0x34) * 10 + 2] & param_2;
      }
      if (uVar5 != 0) {
        if (iVar3 == 0xff) {
          return (unsigned __int64)lbl_83265988;
        }
        uVar2 = fn_82F68B70();
        return uVar2;
      }
    }
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      return 0;
    }
  } while( true );
}

