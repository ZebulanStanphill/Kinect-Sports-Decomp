extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82E49060();
extern int fn_82E50330();
extern unsigned int uStack_48;


__int64 fn_82E73FF8(int *param_1,int *param_2,unsigned __int64 param_3)

{
  int *piVar1;
  __int64 lVar2;
  unsigned int auStack_60 [4];
  unsigned char auStack_50 [8];
  unsigned __int64 uStack_48;
  
  if (param_2 == (int *)0x0) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    uStack_48 = 0;
    lVar2 = fn_82E49060(param_1 + 0x10);
    if (-1 < lVar2) {
      piVar1 = (int *)param_1[0x10];
      param_1[0xd] = (int)piVar1;
      (**(int (***)())(*piVar1 + 4))();
      lVar2 = (**(int (***)())(*param_2 + 0x80))(param_2,param_1[0xd]);
      if (-1 < lVar2) {
        auStack_60[0] = 0;
        lVar2 = (**(int (***)())(*param_1 + 0xc))(param_1,param_2,param_3,auStack_60);
      }
    }
    fn_82E50330(auStack_50);
  }
  return lVar2;
}

