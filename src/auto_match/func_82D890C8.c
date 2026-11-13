extern unsigned int *auStack_30;
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82D88AE0();
extern int fn_82D8EAD8();
extern int fn_82D95890();
extern int fn_82DA6530();
extern int fn_82DA6A58();
extern int fn_82DA6BA8();


unsigned char * fn_82D890C8(unsigned char *param_1,int param_2,int *param_3)

{
  int iVar1;
  __int64 lVar2;
  unsigned char auStack_30 [4];
  int *piStack_2c;
  
  if (*(int *)(param_2 + 0x94) == 0) {
    *(unsigned int *)(param_2 + 0x94) = 1;
    iVar1 = (**(int (***)())(*param_3 + 0x18))(param_3);
    if ((iVar1 == 1) && (*(int *)(param_3[0x11] + 8) == param_2)) {
      fn_82D88AE0(param_2);
    }
    fn_82CE4040(param_3);
    fn_82D8EAD8(param_2,param_3,1);
    fn_82D95890(param_3,param_2);
    fn_82CE4118(param_3);
    lVar2 = (unsigned __int64)*(unsigned int *)(param_2 + 0x94) - 1;
    *(int *)(param_2 + 0x94) = (int)lVar2;
    if ((lVar2 == 0) && (*(char *)(param_2 + 0x9c) == '\0')) {
      if (*(int *)(param_2 + 0x8c) != 0) {
        *(unsigned int *)(param_2 + 0x8c) = 0;
        fn_82DA6BA8(*(unsigned int *)(param_2 + 0x88));
      }
      if ((*(int *)(param_2 + 0xa4) == 1) && (*(int *)(param_2 + 0x90) != 0)) {
        *(unsigned int *)(param_2 + 0x90) = 0;
        fn_82DA6A58(*(unsigned int *)(param_2 + 0x88));
      }
    }
    *param_1 = 1;
  }
  else {
    auStack_30[0] = 9;
    piStack_2c = param_3;
    fn_82DA6530(*(unsigned int *)(param_2 + 0x88),auStack_30);
    *param_1 = 0;
  }
  return param_1;
}

