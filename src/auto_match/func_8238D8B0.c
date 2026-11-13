extern int fn_82250A18();
extern int fn_82358D38();
extern int fn_82373268();
extern int fn_82374590();
extern int fn_82380FA8();
extern unsigned int lbl_821B4660;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_31;


void fn_8238D8B0(int param_1)

{
  int iVar1;
  unsigned char uStack_31;
  unsigned char **appuStack_30 [4];
  unsigned char ***pppuStack_20;
  
  fn_82380FA8(*(unsigned int *)(*(int *)(param_1 + 8) + 0x7e4));
  fn_82373268(*(unsigned int *)(param_1 + 8));
  iVar1 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar1 = fn_82250A18();
  }
  if (*(char *)(iVar1 + 4) == '\0') {
    fn_82374590(*(unsigned int *)(param_1 + 8));
  }
  pppuStack_20 = appuStack_30;
  appuStack_30[0] = &lbl_821B4660;
  fn_82358D38(*(unsigned int *)(param_1 + 8),appuStack_30);
  if (pppuStack_20 != (unsigned char ***)0x0) {
    iVar1 = (int)appuStack_30 + -(int)pppuStack_20;
    (*(int (**)())(*pppuStack_20)[3])
              (pppuStack_20,iVar1 - (int)(&uStack_31 + (unsigned int)(iVar1 == 0) + -(int)pppuStack_20));
  }
  return;
}

