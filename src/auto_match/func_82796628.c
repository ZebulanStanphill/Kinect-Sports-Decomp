typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8267BE38();
extern int fn_8278FD18();
extern int fn_82790FA0();
extern int fn_82794B38();
extern int fn_82794B88();
extern int fn_82794C10();
extern int fn_82796390();
extern int fn_82796498();


int fn_82796628(int param_1,int *param_2,unsigned __int64 param_3)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int aiStack_40;
  
  if (((*param_2 == 0) || (param_2[1] < 0)) || (bVar1 = false, *(int *)(*param_2 + 4) <= param_2[1])
     ) {
    bVar1 = true;
  }
  if (bVar1) {
    iVar2 = fn_82796498(param_1,param_3);
  }
  else {
    iVar2 = param_2[1];
    iVar5 = 0;
    if (iVar2 != 0) {
      iVar4 = *(int *)(iVar2 * 4 + *(int *)(param_1 + 0xc) + -4);
      iVar5 = *(int *)(iVar4 + 4);
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar5 != 0) && (cVar3 = fn_8278FD18(), cVar3 != '\0')) {
        iVar5 = iVar5 + -1;
      }
      iVar5 = iVar5 + iVar4;
    }
    fn_82794B88(param_1);
    aiStack_40 = fn_82794C10();
    fn_82796390((int *)(param_1 + 0xc),iVar2,&aiStack_40);
    iVar4 = aiStack_40;
    if (aiStack_40 != 0) {
      fn_82794B38(aiStack_40);
      fn_8267BE38(iVar4);
    }
    iVar2 = *(int *)(iVar2 * 4 + *(int *)(param_1 + 0xc));
    if ((param_3 & 0xffffffff) == 0) {
      param_3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x18);
    }
    fn_82790FA0(iVar2,*(unsigned int *)(param_1 + 8),param_3);
    *(int *)(iVar2 + 0x1c) = iVar5;
  }
  return iVar2;
}

