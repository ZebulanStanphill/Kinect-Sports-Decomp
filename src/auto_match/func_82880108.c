extern int fn_825089A0();
extern int fn_82888338();
extern unsigned int lbl_832129F4;
extern unsigned int lbl_832129F8;
extern unsigned int lbl_83213E3C;
extern unsigned int lbl_83213E40;
extern unsigned int lbl_83213E44;


void fn_82880108(unsigned int param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  int *piVar2;
  
  lbl_832129F4 = param_1;
  lbl_832129F8 = param_2;
  fn_82888338();
  lbl_83213E40 = 0;
  piVar2 = (int *)fn_825089A0();
  uVar1 = (**(int (***)())(*piVar2 + 0xc))();
  lbl_83213E3C = 1;
  lbl_83213E44 = (int)(uVar1 / 1000);
  return;
}

