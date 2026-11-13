extern int fn_82D7D528();
extern unsigned int lbl_82134508;
extern unsigned int lbl_8323B520;


void fn_82DA3EF8(unsigned __int64 param_1,int param_2,int *param_3,int *param_4)

{
  *param_4 = (int)(param_4 + 4);
  param_4[0xc20] = 0;
  param_4[0xc0c] = lbl_82134508;
  param_3[0x18] = *param_3 + 0x1c60;
  param_3[5] = *(int *)(*(char *)(param_2 + 0xc) * 0x40 + *param_3 + 0x1c30);
  fn_82D7D528(param_2,param_3,param_4,*(unsigned int *)(param_2 + 8));
  if ((lbl_8323B520 != 1) && ((int *)*param_4 != param_4 + 4)) {
    (**(int (***)())(**(int **)(param_2 + 8) + 0x18))
              (*(int **)(param_2 + 8),*(unsigned int *)(param_2 + 0x10),
               *(unsigned int *)(param_2 + 0x14),param_3,param_4);
  }
  return;
}

