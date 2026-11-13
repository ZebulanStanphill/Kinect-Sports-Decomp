extern int fn_82248B90();
extern int fn_82F63108();
extern unsigned int lbl_821BE8B4;
extern unsigned int uStack_2c;
extern unsigned int uStack_31;


void fn_82486F40(int param_1,unsigned int param_2)

{
  int *piVar1;
  int iVar2;
  int *apiStack_40 [3];
  unsigned char uStack_31;
  unsigned char **ppuStack_30;
  unsigned int uStack_2c;
  unsigned char ***pppuStack_20;
  
  piVar1 = *(int **)(param_1 + 8);
  pppuStack_20 = &ppuStack_30;
  ppuStack_30 = &lbl_821BE8B4;
  apiStack_40[0] = (int *)*piVar1;
  uStack_2c = param_2;
  if (apiStack_40[0] != piVar1) {
    do {
      if (pppuStack_20 == (unsigned char ***)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      iVar2 = (*(int (**)())(*pppuStack_20)[1])(pppuStack_20,apiStack_40[0] + 4);
    } while ((iVar2 != 0) && (fn_82248B90(apiStack_40), apiStack_40[0] != piVar1));
    if (pppuStack_20 == (unsigned char ***)0x0) {
      return;
    }
  }
  iVar2 = (int)&ppuStack_30 + -(int)pppuStack_20;
  (*(int (**)())(*pppuStack_20)[3])
            (pppuStack_20,iVar2 - (int)(&uStack_31 + (unsigned int)(iVar2 == 0) + -(int)pppuStack_20));
  return;
}

