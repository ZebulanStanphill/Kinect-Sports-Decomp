extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82DF3CE0();
extern int fn_82DF6F28();
extern int fn_82DF86E0();


void fn_82DF78A8(unsigned __int64 param_1,int *param_2,__int64 param_3,unsigned __int64 param_4)

{
  int iVar2;
  unsigned __int64 uVar1;
  int iVar3;
  
  iVar3 = *(int *)(*param_2 + 0x10);
  if (*(char *)(iVar3 + 0x18) == '\x01') {
    iVar3 = *(char *)(iVar3 + 0x10) + iVar3;
  }
  else {
    iVar3 = 0;
  }
  iVar3 = *(int *)(iVar3 + 8);
  if (0 < (int)param_3) {
    do {
      iVar2 = fn_82CE5410();
      iVar2 = (**(int (***)())(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x120);
      *(unsigned short *)(iVar2 + 4) = 0x120;
      uVar1 = fn_82DF86E0();
      iVar2 = fn_82DF6F28(param_1,*param_2,*(unsigned int *)(iVar3 + 0x78),uVar1);
      if (iVar2 == 0) {
        fn_82DF3CE0(param_4,uVar1);
      }
      fn_82CE4118(uVar1);
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}

