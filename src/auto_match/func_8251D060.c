extern int fn_82596850();
extern unsigned int lbl_8327F644[];
extern unsigned int lbl_832960A0[];



void fn_8251D060(void)

{
  unsigned iVar1;
  
  if (!(lbl_832960A0[59] == 0)) {
    iVar1 = *(int *)(lbl_832960A0[59] + 4);
  } else {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    if (lbl_8327F644[13] != iVar1) {
      lbl_8327F644[13] = iVar1;
    }
    fn_82596850(iVar1);
    if ((*(int (**)())(lbl_832960A0+71)) != (int (**)())0x0) {
      (*(*(int (**)())(lbl_832960A0+71)))(iVar1);
    }
  }
  return;
}

