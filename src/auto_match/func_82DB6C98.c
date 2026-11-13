extern int fn_82D7D528();
extern int fn_82DB61C8();
extern unsigned int lbl_82134508;
extern unsigned int lbl_8323B520;


void fn_82DB6C98(unsigned __int64 param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  double dVar2;
  
  *param_4 = (int)(param_4 + 4);
  param_4[0xc20] = 0;
  dVar2 = (double)lbl_82134508;
  param_4[0xc0c] = (int)lbl_82134508;
  iVar1 = *(char *)(param_2 + 0xc) * 0x40 + *param_3;
  param_3[0x18] = iVar1 + 0x1c20;
  param_3[5] = *(int *)(iVar1 + 0x1c30);
  fn_82D7D528(param_2,param_3,param_4,*(unsigned int *)(param_2 + 8));
  if (lbl_8323B520 != 1) {
    if ((int *)*param_4 != param_4 + 4) {
      (**(int (***)())(**(int **)(param_2 + 8) + 0x18))
                (*(int **)(param_2 + 8),*(unsigned int *)(param_2 + 0x10),
                 *(unsigned int *)(param_2 + 0x14),param_3,param_4);
    }
    if ((double)(float)param_4[0xc0c] != dVar2) {
      fn_82DB61C8(param_1,param_4,param_2);
    }
  }
  return;
}

