extern unsigned int *auStack_2c;
extern int fn_82359200();
extern int fn_82359558();
extern unsigned int lbl_82191FC8;
extern unsigned int uStack_30;


void fn_8236FEF0(int *param_1,unsigned __int64 param_2)

{
  unsigned int uStack_30;
  unsigned int auStack_2c [11];
  
  if ((param_1[0x28] != 0) && (*(int *)(param_1[0x28] + 0x40) == 1)) {
    fn_82359200((double)lbl_82191FC8,param_1,param_2,param_2);
    return;
  }
  auStack_2c[0] = 0;
  uStack_30 = 0;
  (**(int (***)())(*param_1 + 0x70))(param_1,auStack_2c,&uStack_30);
                    /* WARNING: Subroutine does not return */
  fn_82359558((double)lbl_82191FC8,param_1,uStack_30);
}

