extern int fn_82A6D090();
extern int fn_82A75588();
extern int memcpy();


unsigned __int64 fn_82A741F0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int aiStack_60;
  
  iVar1 = *param_1;
  piVar6 = param_1 + 0x38;
  iVar2 = param_1[2];
  aiStack_60 = 0;
  iVar5 = param_2 * 0x6f0;
  iVar4 = *(int *)(iVar1 + 0x140) + iVar5;
  uVar3 = fn_82A75588(piVar6,3);
  if (-1 < (int)uVar3) {
    if ((*(short *)(iVar4 + 0x72) < 1) && (*(int *)(iVar1 + 0x84) != 1)) {
      **(unsigned char **)(*(int *)(iVar4 + 0x1a8) + 0x10) = 1;
    }
    else {
      aiStack_60 = 0;
      uVar3 = fn_82A6D090(piVar6,1,&aiStack_60);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      **(unsigned char **)(*(int *)(iVar4 + 0x1a8) + 0x10) = (char)aiStack_60;
    }
    if ((**(char **)(*(int *)(iVar4 + 0x1a8) + 0x10) == '\x01') && (*(int *)(iVar4 + 0x1bc) == 0)) {
      aiStack_60 = 0;
      uVar3 = fn_82A6D090(piVar6,2,&aiStack_60);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      *(int *)(*(int *)(iVar1 + 0x140) + iVar5 + 0x1b4) = aiStack_60 + 1;
    }
    if ((**(char **)(*(int *)(iVar4 + 0x1a8) + 0x10) == '\x01') && (*(int *)(iVar4 + 0x1bc) == 1)) {
      *(unsigned short *)(*param_1 + 0x20) = 0;
      param_1[0x1f] = 0;
      iVar5 = *(int *)(*param_1 + 0x140) + iVar5;
      memcpy(*(unsigned int *)(iVar5 + 4),*(unsigned int *)(iVar5 + 8),
                   *(int *)(*param_1 + 0x130) << 2);
    }
    *(unsigned int *)(iVar2 + param_2 * 8 + 4) = 1;
  }
  return uVar3;
}

