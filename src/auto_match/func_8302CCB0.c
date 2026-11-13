extern int fn_82FA5060();
extern int fn_82FFF750();
extern int fn_8303E5A8();
extern int fn_8303E600();
extern unsigned int lbl_831BC768;


unsigned __int64 fn_8302CCB0(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  int *piVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  
  uVar1 = fn_82FFF750();
  if ((int)uVar1 != 1) {
    return uVar1;
  }
  puVar4 = (unsigned int *)(param_1 + 0x88);
  *(unsigned int *)(param_1 + 0x108) = 0;
  lVar5 = 0x1f;
  do {
    puVar4 = puVar4 + 1;
    *puVar4 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if ((*(unsigned char *)(param_1 + 0x11f) & 0xe0) == 0x20) {
    iVar2 = fn_82FA5060(lbl_831BC768,0x10);
    if (iVar2 != 0) {
      piVar3 = (int *)fn_8303E5A8();
      goto LAB_8302cd38;
    }
  }
  else {
    iVar2 = fn_82FA5060(lbl_831BC768,0x10);
    if (iVar2 != 0) {
      piVar3 = (int *)fn_8303E600();
      goto LAB_8302cd38;
    }
  }
  piVar3 = (int *)0x0;
LAB_8302cd38:
  *(int **)(param_1 + 0x88) = piVar3;
  if (piVar3 == (int *)0x0) {
    return 2;
  }
  uVar1 = (**(int (***)())(*piVar3 + 4))();
  return uVar1;
}

