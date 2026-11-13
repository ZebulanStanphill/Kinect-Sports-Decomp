#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int fStack_3c;
extern int fn_82248B90();
extern int fn_82F63108();
extern unsigned int lbl_821BE8CC;
extern unsigned int uStack_2c;
extern unsigned int uStack_31;


void fn_824870A8(double param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piStack_40;
  float fStack_3c;
  unsigned char uStack_31;
  unsigned char **ppuStack_30;
  unsigned __int64 uStack_2c;
  unsigned char ***pppuStack_20;
  
  fStack_3c = (float)param_1;
  pppuStack_20 = &ppuStack_30;
  ppuStack_30 = &lbl_821BE8CC;
  piVar1 = *(int **)(param_2 + 8);
  uStack_2c = CONCAT44(*(unsigned int *)(param_2 + 0x14),fStack_3c);
  piStack_40 = (int *)*piVar1;
  if (piStack_40 != piVar1) {
    do {
      if (pppuStack_20 == (unsigned char ***)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      iVar2 = (*(int (**)())(*pppuStack_20)[1])(pppuStack_20,piStack_40 + 4);
    } while ((iVar2 != 0) && (fn_82248B90(&piStack_40), piStack_40 != piVar1));
    if (pppuStack_20 == (unsigned char ***)0x0) {
      return;
    }
  }
  iVar2 = (int)&ppuStack_30 + -(int)pppuStack_20;
  (*(int (**)())(*pppuStack_20)[3])
            (pppuStack_20,iVar2 - (int)(&uStack_31 + (unsigned int)(iVar2 == 0) + -(int)pppuStack_20));
  return;
}

