extern char lbl_82196582[];
extern int fn_82BE5240();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BEB8C0();
extern int fn_82BF1138();


int fn_82BEA858(int param_1)

{
  int uVar1;
  int *piVar2;
  
  fn_82BEB8C0(param_1);
  if (*(void **)(param_1 + 0x40) == 0) {
    fn_82BE5240(param_1,0x130,lbl_82196582);
    uVar1 = 0x130;
  }
  else {
    fn_82BE5340(*(void **)(param_1 + 0x40));
    while (*(int *)(*(int *)(param_1 + 0x40) + 8) != 0) {
      piVar2 = (int *)fn_82BE5378(*(void **)(param_1 + 0x40));
      (*(int (**)())(*piVar2 + 0x14))(piVar2);
      fn_82BE5350(*(unsigned int *)(param_1 + 0x40));
    }
    if (*(void **)(param_1 + 0x44) == 0) {
      fn_82BE5240(param_1,0x131,lbl_82196582);
      uVar1 = 0x131;
    }
    else {
      fn_82BE5340(*(void **)(param_1 + 0x44));
      while (*(int *)(*(int *)(param_1 + 0x44) + 8) != 0) {
        fn_82BF1138(fn_82BE5378(*(void **)(param_1 + 0x44)));
        fn_82BE5350(*(unsigned int *)(param_1 + 0x44));
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}

