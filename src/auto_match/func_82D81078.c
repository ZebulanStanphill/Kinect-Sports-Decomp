extern unsigned int *auStack_40;
extern int fn_82CE4040();
extern int fn_82D899D8();
extern int fn_82D8F4C8();
extern int fn_82D91018();
extern int fn_82DA6530();
extern int fn_82DA6A58();
extern int fn_82DA6BA8();
extern int fn_82DACA10();
extern int fn_82DAD7D0();
extern int fn_83080B30();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_38;


int * fn_82D81078(int param_1,int *param_2,unsigned __int64 param_3)

{
  unsigned short uVar1;
  int iVar2;
  unsigned short uVar3;
  __int64 lVar4;
  unsigned char auStack_40 [4];
  int *piStack_3c;
  unsigned int uStack_38;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    fn_82D899D8(param_2,param_1,param_2[4]);
    if (param_2[6] == 0) {
      iVar2 = (**(int (***)())(*param_2 + 0x10))(param_2);
      param_2[6] = iVar2;
    }
    fn_83080B30((double)lbl_821AAD20);
    *(unsigned short *)((int)param_2 + 0xea) = 0;
    *(unsigned short *)(param_2 + 0x3b) = 0;
    iVar2 = *(int *)(param_1 + 0x108) + 1;
    *(unsigned char *)(param_1 + 0x9d) = 0;
    *(int *)(param_1 + 0x108) = iVar2;
    param_2[0x35] = iVar2;
    fn_82CE4040(param_2);
    fn_82D8F4C8(param_1,param_2,param_3);
    uVar3 = (unsigned short)*(unsigned char *)(param_1 + 0x305);
    if ((*(unsigned char *)(param_1 + 0x307) & 3) < (*(unsigned char *)((int)param_2 + 0xe9) & 3)) {
      uVar3 = ~uVar3;
    }
    if (*(unsigned char *)(param_1 + 0x307) < *(unsigned char *)((int)param_2 + 0xe9)) {
      uVar1 = ~(unsigned short)*(unsigned char *)(param_1 + 0x306) << 0xe;
    }
    else {
      uVar1 = (unsigned short)*(unsigned char *)(param_1 + 0x306) << 0xe;
    }
    *(unsigned short *)((int)param_2 + 0xea) = *(unsigned short *)((int)param_2 + 0xea) & 0x3fff | uVar3 << 0xe;
    *(unsigned short *)(param_2 + 0x3b) = *(unsigned short *)(param_2 + 0x3b) & 0x3fff | uVar1;
    *(unsigned char *)(param_1 + 0x9d) = 1;
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
    fn_82D91018(param_1,param_2);
    fn_82DAD7D0(param_1,param_2);
    fn_82DACA10(param_2);
    lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x94) - 1;
    *(int *)(param_1 + 0x94) = (int)lVar4;
    if ((lVar4 == 0) && (*(char *)(param_1 + 0x9c) == '\0')) {
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
    uStack_38 = (unsigned int)param_3;
    auStack_40[0] = 1;
    piStack_3c = param_2;
    fn_82DA6530(*(unsigned int *)(param_1 + 0x88),auStack_40);
    param_2 = (int *)0x0;
  }
  return param_2;
}

