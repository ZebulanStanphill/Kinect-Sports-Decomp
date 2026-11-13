extern int fn_83065890();
extern int fn_83065C58();
extern unsigned int iStack_18;
extern unsigned int lbl_8217E890;


void fn_83063190(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned char **appuStack_20 [2];
  int iStack_18;
  
  iStack_18 = 0;
  appuStack_20[0] = &lbl_8217E890;
  fn_83065890(appuStack_20,*(unsigned int *)(param_1 + 0x2c));
  for (; iStack_18 != 0; iStack_18 = (*(int (**)())appuStack_20[0][1])(appuStack_20,iStack_18)) {
    iVar2 = *(int *)(iStack_18 + 0x58);
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 4);
      fn_83065C58(iVar2);
      iVar2 = iVar1;
    }
  }
  return;
}

