extern int fn_82E50BE8();
extern int fn_82E66120();
extern int fn_82E661E8();
extern unsigned int lbl_82153AB4;


__int64 fn_82E81108(int *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5)

{
  int *piVar1;
  __int64 lVar2;
  
  if ((param_2 == 0) || ((param_4 & 0xffffffff) == 0)) {
    lVar2 = -0x7fffbffd;
  }
  else {
    lVar2 = (**(int (***)())(*param_1 + 0x24))();
    if (-1 < lVar2) {
      piVar1 = (int *)fn_82E50BE8(0x3c,0,0,0,0);
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        fn_82E66120(piVar1,0,param_4,param_5);
        piVar1[0xe] = 0;
        *piVar1 = (int)&lbl_82153AB4;
      }
      if (piVar1 == (int *)0x0) {
        lVar2 = -0x7ff8fff2;
      }
      else {
        (**(int (***)())(*piVar1 + 4))(piVar1);
        piVar1[0xe] = 0;
        fn_82E661E8(piVar1,0);
        (**(int (***)())(*piVar1 + 8))(piVar1);
      }
    }
  }
  return lVar2;
}

