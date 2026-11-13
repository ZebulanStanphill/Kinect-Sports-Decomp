extern unsigned int *auStack_20;
extern int fn_822BEFF8();
extern int fn_822C72E0();
extern int fn_82327178();
extern unsigned int uStack_1c;


void fn_82327A68(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar2;
  char cVar3;
  __int64 lVar1;
  unsigned char auStack_20 [4];
  unsigned int uStack_1c;
  
  if ((param_3 == 0) && (param_4 == 1)) {
    iVar2 = (**(int (***)())(*param_1 + 8))();
    if (param_2 == iVar2 + 0x33c) {
      iVar2 = (**(int (***)())(*param_1 + 8))(param_1);
      cVar3 = (**(int (***)())(*(int *)(iVar2 + 0x33c) + 0x3c))();
      if (((cVar3 == '\0') && (iVar2 = param_1[0x2f], iVar2 != 0)) && (*(int *)(iVar2 + 0x788) == 2)
         ) {
        fn_822C72E0(*(unsigned int *)(*(int *)(iVar2 + 0x114) + 0x20),0xffffffff821acc94);
      }
    }
    else {
      iVar2 = (**(int (***)())(*param_1 + 8))(param_1);
      if (param_2 == iVar2 + 0x448) {
        uStack_1c = 0;
        auStack_20[0] = 0;
        lVar1 = (**(int (***)())(*param_1 + 8))(param_1);
        fn_82327178(lVar1 + 0x448,&uStack_1c,auStack_20);
        if (param_1[0x2f] != 0) {
          fn_822BEFF8(param_1[0x2f],uStack_1c,auStack_20[0]);
        }
      }
    }
  }
  return;
}

