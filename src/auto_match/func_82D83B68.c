extern unsigned int *auStack_30;
extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D91178();
extern int fn_82D9A2C8();
extern int fn_82DA6530();
extern int fn_82DA6A58();
extern int fn_82DA6BA8();
extern int fn_82DADB30();


int * fn_82D83B68(int param_1,int *param_2)

{
  int iVar1;
  __int64 lVar2;
  unsigned char auStack_30 [4];
  int *piStack_2c;
  
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x98) + (unsigned __int64)*(unsigned int *)(param_1 + 0x94) == 0) {
    *(unsigned int *)(param_1 + 0x94) = *(unsigned int *)(param_1 + 0x94) + 1;
    if (param_2[6] == 0) {
      iVar1 = (**(int (***)())(*param_2 + 0x10))(param_2);
      param_2[6] = iVar1;
    }
    param_2[2] = param_1;
    fn_82CE4040(param_2);
    iVar1 = fn_82CE5410();
    if (*(unsigned int *)(param_1 + 0x118) == (*(unsigned int *)(param_1 + 0x11c) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(unsigned int *)(iVar1 + 0x10),(int *)(param_1 + 0x114),4);
    }
    *(int **)(*(int *)(param_1 + 0x118) * 4 + *(int *)(param_1 + 0x114)) = param_2;
    *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
    fn_82D91178(param_1,param_2);
    fn_82DADB30(param_1,param_2);
    fn_82D9A2C8(param_2);
    lVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x94) - 1;
    *(int *)(param_1 + 0x94) = (int)lVar2;
    if ((lVar2 == 0) && (*(char *)(param_1 + 0x9c) == '\0')) {
      if (*(int *)(param_1 + 0x8c) != 0) {
        *(unsigned int *)(param_1 + 0x8c) = 0;
        fn_82DA6BA8(*(unsigned int *)(param_1 + 0x88));
      }
      if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0x90) != 0)) {
        *(unsigned int *)(param_1 + 0x90) = 0;
        fn_82DA6A58(*(unsigned int *)(param_1 + 0x88));
      }
    }
  }
  else {
    auStack_30[0] = 0xd;
    piStack_2c = param_2;
    fn_82DA6530(*(unsigned int *)(param_1 + 0x88),auStack_30);
    param_2 = (int *)0x0;
  }
  return param_2;
}

