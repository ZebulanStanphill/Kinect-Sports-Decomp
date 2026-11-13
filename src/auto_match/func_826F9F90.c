extern unsigned int *auStack_30;
extern int fn_8267C4F0();
extern int fn_82693F78();


unsigned __int64 fn_826F9F90(int *param_1,unsigned __int64 param_2,__int64 param_3)

{
  int *piVar1;
  char cVar4;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int auStack_30;
  
  if (param_1[0x1a] != 0) {
    auStack_30 = 0xffffffff;
    piVar1 = *(int **)(*(int *)(param_1[0x1b] + 0x1c) + 0xc);
    cVar4 = (**(int (***)())(*piVar1 + 0x34))(piVar1,param_2,&auStack_30,0);
    if (cVar4 != '\0') {
      (**(int (***)())(*param_1 + 0x10))(param_1,(unsigned __int64)auStack_30 + param_3);
      return 1;
    }
    param_1 = param_1 + 2;
    iVar3 = (**(int (***)())(*param_1 + 0xc))(param_1,4);
    if (iVar3 != 0) {
      fn_8267C4F0();
      uVar2 = (**(int (***)())(*param_1 + 0xc))(param_1,4);
      fn_82693F78(uVar2 + 0xc,0xffffffff8200dc18,param_2);
      if ((uVar2 & 0xffffffff) != 0) {
        fn_8267C4F0(uVar2);
      }
    }
  }
  return 0;
}

