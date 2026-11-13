extern int fn_823AB478();
extern int fn_82522430();
extern unsigned int lbl_832767C8;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_825220C8(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  char in_RESERVE;
  
  iVar2 = fn_823AB478(**(unsigned int **)(param_1 + 4));
  fn_82522430(lbl_832767C8,param_1);
  if (*(char *)(lbl_832767C8 + iVar2 + 0x88) == '\0') {
    puVar3 = (unsigned int *)((unsigned __int64)lbl_832767C8 + 0xa0);
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar3 - 1,0,(unsigned __int64)lbl_832767C8 + 0xa0);
      *puVar3 = uVar1;
    }
  }
  else {
    *(unsigned char *)(lbl_832767C8 + iVar2 + 0x88) = 0;
  }
  return;
}

