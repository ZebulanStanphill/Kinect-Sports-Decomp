#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82230040();
extern int fn_82F62450();
extern unsigned int lbl_8202114C;
extern unsigned int uStack_18;
extern unsigned int uStack_28;
extern unsigned int uStack_38;


void fn_82240070(int param_1,unsigned int param_2,char param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned char **ppuStack_40;
  char *pcStack_3c;
  unsigned __int64 uStack_38;
  unsigned char **ppuStack_30;
  char *pcStack_2c;
  unsigned __int64 uStack_28;
  unsigned char **ppuStack_20;
  char *pcStack_1c;
  unsigned __int64 uStack_18;
  
  uVar2 = *(unsigned int *)(param_1 + 0x10) & param_2 & 0x17;
  *(unsigned int *)(param_1 + 0xc) = param_2 & 0x17;
  if (uVar2 != 0) {
    if (param_3 == '\0') {
      if ((uVar2 & 4) != 0) {
        uVar1 = fn_82F62450();
        uStack_38 = CONCAT44(1,uVar1);
        pcStack_3c = "ios_base::badbit set";
        ppuStack_40 = &lbl_8202114C;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_40);
      }
      if ((uVar2 & 2) != 0) {
        uVar1 = fn_82F62450();
        uStack_28 = CONCAT44(1,uVar1);
        pcStack_2c = "ios_base::failbit set";
        ppuStack_30 = &lbl_8202114C;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_30);
      }
      uVar1 = fn_82F62450();
      uStack_18 = CONCAT44(1,uVar1);
      pcStack_1c = "ios_base::eofbit set";
      ppuStack_20 = &lbl_8202114C;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_20);
    }
  }
  return;
}

