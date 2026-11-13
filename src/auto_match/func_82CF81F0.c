extern int fn_82CF7C08();
extern int fn_82CF85A0();
extern int fn_82CF8600();
extern unsigned int iStack_3c;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_82CF81F0(int param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  int iVar1;
  unsigned __int64 in_r0;
  unsigned __int64 uVar2;
  int iVar3;
  __int64 lVar4;
  int iVar5;
  unsigned int uStack_40;
  int iStack_3c;
  unsigned int uStack_38;
  
  lVar4 = (__int64)param_3 * (__int64)param_4;
  iVar5 = param_1 + 0x18;
  RtlEnterCriticalSection(iVar5,1);
  iVar3 = (int)lVar4;
  if ((param_2 & 0xffffffff) == 0) {
    if (iVar3 != 0) {
      (**(int (***)())(param_1 + 0x3c))(0xffffffff82133718,*(unsigned int *)(param_1 + 0x40));
      trapWord(0x1f,in_r0,0x16);
      RtlLeaveCriticalSection(iVar5);
      return;
    }
  }
  else {
    if (iVar3 == 0) {
      (**(int (***)())(param_1 + 0x3c))(0xffffffff8213374c,*(unsigned int *)(param_1 + 0x40));
      trapWord(0x1f,in_r0,0x16);
      RtlLeaveCriticalSection(iVar5);
      return;
    }
    iVar1 = *(int *)(param_1 + 0x44);
    uVar2 = fn_82CF85A0(iVar1,param_2);
    if (*(int *)(iVar1 + 8) < (int)uVar2) {
      (**(int (***)())(param_1 + 0x3c))(0xffffffff821336f0,*(unsigned int *)(param_1 + 0x40));
      trapWord(0x1f,in_r0,0x16);
    }
    iVar1 = (int)uVar2 * 0x10 + **(int **)(param_1 + 0x44);
    iStack_3c = *(int *)(iVar1 + 8);
    uStack_40 = *(unsigned int *)(iVar1 + 4);
    uStack_38 = *(unsigned int *)(iVar1 + 0xc);
    if (iStack_3c != iVar3) {
      fn_82CF7C08(param_1,0xffffffff821336d0,param_2,&uStack_40);
      trapWord(0x1f,in_r0,0x16);
    }
    fn_82CF8600(*(unsigned int *)(param_1 + 0x44),uVar2);
    iVar3 = (**(int (***)())(**(int **)(param_1 + 0x34) + 0x2c))
                      (*(int **)(param_1 + 0x34),param_2,lVar4);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) - iVar3;
    (**(int (***)())(**(int **)(param_1 + 0x34) + 8))(*(int **)(param_1 + 0x34),param_2,lVar4);
  }
  RtlLeaveCriticalSection(iVar5);
  return;
}

