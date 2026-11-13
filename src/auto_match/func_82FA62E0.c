extern unsigned int lbl_83264218;
extern unsigned int lbl_8326421C;
extern unsigned int lbl_83264220;
extern unsigned int lbl_83264224;


void fn_82FA62E0(unsigned int *param_1)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  
  lbl_83264220 = &lbl_83264218;
  lbl_83264224 = &lbl_83264218;
  iVar3 = 0x19;
  lbl_8326421C = 0;
  lbl_83264218 = 0;
  *param_1 = 0;
  puVar1 = param_1;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
    iVar4 = 0;
    lVar5 = 0x20;
    do {
      iVar2 = iVar3 + iVar4;
      iVar4 = iVar4 + 1;
      param_1[iVar2] = &lbl_83264218;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    iVar3 = iVar3 + 0x20;
  } while (iVar3 < 0x319);
  return;
}

