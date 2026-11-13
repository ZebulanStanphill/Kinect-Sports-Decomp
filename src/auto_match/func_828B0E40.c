extern int fn_82381BC0();
extern int fn_823AA970();


void fn_828B0E40(int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int aiStack_30 [12];
  
  if ((param_2 & 0xff) != 0) {
    iVar2 = 0;
    aiStack_30[0] = *(int *)param_1[0x88];
    iVar3 = 0;
    if ((int *)aiStack_30[0] != (int *)param_1[0x88]) {
      do {
        iVar1 = fn_823AA970(*(unsigned int *)(aiStack_30[0] + 0x10));
        iVar2 = iVar3;
        if (iVar3 < iVar1) {
          iVar2 = iVar1;
        }
        fn_82381BC0(aiStack_30);
        iVar3 = iVar2;
      } while (aiStack_30[0] != param_1[0x88]);
    }
    param_1[0x7e] = iVar2 + 10;
  }
  (**(int (***)())(*param_1 + 0xc))(param_1,param_2);
  return;
}

