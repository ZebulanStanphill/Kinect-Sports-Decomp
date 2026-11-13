extern int fn_82250A18();
extern int fn_82358D38();
extern unsigned int lbl_821B2FF0;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_31;


void fn_8236C760(unsigned __int64 param_1)

{
  int iVar1;
  unsigned char uStack_31;
  unsigned char **appuStack_30 [4];
  unsigned char ***pppuStack_20;
  
  iVar1 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar1 = fn_82250A18();
  }
  if (*(char *)(iVar1 + 4) != '\0') {
    pppuStack_20 = appuStack_30;
    appuStack_30[0] = &lbl_821B2FF0;
    fn_82358D38(param_1,appuStack_30);
    if (pppuStack_20 != (unsigned char ***)0x0) {
      iVar1 = (int)appuStack_30 + -(int)pppuStack_20;
      (*(int (**)())(*pppuStack_20)[3])
                (pppuStack_20,iVar1 - (int)(&uStack_31 + (unsigned int)(iVar1 == 0) + -(int)pppuStack_20));
    }
  }
  return;
}

