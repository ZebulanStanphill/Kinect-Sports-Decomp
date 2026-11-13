extern unsigned int *auStack_4c;
extern unsigned int *auStack_50;
extern int fn_82D01808();
extern int fn_82D02518();


void fn_82CF9248(int param_1,__int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  unsigned __int64 uVar5;
  unsigned char auStack_50 [4];
  unsigned int auStack_4c;
  
  RtlEnterCriticalSection(param_1 + 4);
  if ((int)param_2 < 1) {
    param_2 = 1;
  }
  uVar1 = *(unsigned int *)(param_1 + 0x900);
  uVar5 = (unsigned __int64)uVar1;
  do {
    iVar3 = *(int *)((int)((uVar5 + 0x5f & 0xffffffff) << 2) + param_1);
    iVar2 = *(int *)(iVar3 + 0x28);
    pcVar4 = (char *)fn_82D02518(auStack_50,iVar3,param_2,&auStack_4c);
    if (*pcVar4 != '\0') {
      uVar5 = uVar5 + 1;
      uVar5 = (unsigned __int64)(*(unsigned int *)(param_1 + 0x208) >> 0x1f) -
              (((uVar5 & 0xffffffff) >> 0x1f) + (unsigned __int64)(uVar5 < *(unsigned int *)(param_1 + 0x208))) &
              uVar5;
    }
    fn_82D01808(iVar3);
    param_2 = param_2 - (unsigned __int64)auStack_4c;
    *(int *)(param_1 + 0x20) =
         (*(int *)(iVar3 + 0x28) - iVar2) * *(int *)(iVar3 + 4) + *(int *)(param_1 + 0x20);
  } while ((0 < param_2) && ((unsigned int)uVar5 != uVar1));
  *(unsigned int *)(param_1 + 0x900) = (unsigned int)uVar5;
  RtlLeaveCriticalSection(param_1 + 4);
  return;
}

