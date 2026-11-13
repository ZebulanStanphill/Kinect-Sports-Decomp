extern int fn_8267BE38();
extern int fn_8278FD18();
extern int fn_82794B38();
extern int fn_82794B88();
extern int fn_82796170();
extern int fn_827961E0();


void fn_82796570(int param_1,unsigned __int64 param_2)

{
  char cVar2;
  unsigned __int64 uVar1;
  int iVar3;
  int iVar4;
  int aiStack_30 [12];
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x10) * 4 + *(int *)(param_1 + 0xc) + -4);
    iVar4 = *(int *)(iVar3 + 4);
    iVar3 = *(int *)(iVar3 + 0x1c);
    if (iVar4 != 0) {
      cVar2 = fn_8278FD18();
      if (cVar2 != '\0') {
        iVar4 = iVar4 + -1;
      }
    }
    iVar4 = iVar4 + iVar3;
  }
  uVar1 = fn_82794B88(param_1);
  aiStack_30[0] = fn_827961E0(uVar1,param_2);
  fn_82796170((int *)(param_1 + 0xc),aiStack_30);
  iVar3 = aiStack_30[0];
  if (aiStack_30[0] != 0) {
    fn_82794B38(aiStack_30[0]);
    fn_8267BE38(iVar3);
  }
  *(int *)(*(int *)(*(int *)(param_1 + 0x10) * 4 + *(int *)(param_1 + 0xc) + -4) + 0x1c) = iVar4;
  return;
}

