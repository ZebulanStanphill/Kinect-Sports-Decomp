extern int fn_82FA5060();
extern int fn_8302D408();
extern int fn_8303E5A8();
extern int fn_8303E600();
extern unsigned int lbl_831BC768;


unsigned __int64 fn_8302E148(int param_1,unsigned __int64 param_2)

{
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar1;
  
  if ((unsigned int)param_2 == (unsigned int)(*(unsigned char *)(param_1 + 0x11f) >> 5)) {
    return 1;
  }
  *(unsigned char *)(param_1 + 0x11f) =
       (unsigned char)((param_2 & 0xffffffff) << 5) | *(unsigned char *)(param_1 + 0x11f) & 0x1f;
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
    (**(int (***)())(**(int **)(param_1 + 0x88) + 8))();
  }
  if ((*(unsigned char *)(param_1 + 0x11f) & 0xe0) == 0x20) {
    iVar2 = fn_82FA5060(lbl_831BC768,0x10);
    if (iVar2 != 0) {
      piVar3 = (int *)fn_8303E5A8();
      goto LAB_8302e1e0;
    }
  }
  else {
    iVar2 = fn_82FA5060(lbl_831BC768,0x10);
    if (iVar2 != 0) {
      piVar3 = (int *)fn_8303E600();
      goto LAB_8302e1e0;
    }
  }
  piVar3 = (int *)0x0;
LAB_8302e1e0:
  *(int **)(param_1 + 0x88) = piVar3;
  if (piVar3 == (int *)0x0) {
    uVar1 = 2;
  }
  else {
    uVar1 = (**(int (***)())(*piVar3 + 4))();
    if ((int)uVar1 != 1) {
      (**(int (***)())(**(int **)(param_1 + 0x88) + 8))();
      *(unsigned int *)(param_1 + 0x88) = 0;
    }
  }
  fn_8302D408(param_1);
  return uVar1;
}

