extern int fn_82A75588();
extern int fn_82C2E420();
extern int fn_82C30370();


unsigned __int64 fn_82C3A9E0(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  short sVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  int iVar6;
  double dVar7;
  int aiStack_50;
  
  iVar1 = *param_1;
  aiStack_50 = 0;
  uVar5 = 0;
  if (*(int *)(iVar1 + 0x3c) < 3) {
    uVar5 = 0;
    *(unsigned short *)((int)param_1 + 0x96) = 0;
  }
  else if (*(short *)(iVar1 + 0x244) == 1) {
    iVar6 = *(int *)(iVar1 + 0x140);
    sVar3 = **(short **)(iVar1 + 0x248);
    *(unsigned short *)((int)param_1 + 0x96) = 0;
    iVar6 = sVar3 * 0x6f0 + iVar6;
    *(unsigned char *)(iVar6 + 0xb4) = 0;
    dVar7 = (double)fn_82C2E420(0,0);
    *(float *)(iVar6 + 0xc4) = (float)dVar7;
    uVar5 = 0;
  }
  else {
    if (*(short *)((int)param_1 + 0x96) == -1) {
      aiStack_50 = 0;
      uVar5 = fn_82C30370(param_1 + 0x38,3,&aiStack_50);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      *(unsigned short *)((int)param_1 + 0x96) = 0;
      param_1[0x21] = aiStack_50;
    }
    if (*(short *)((int)param_1 + 0x96) < *(short *)(iVar1 + 0x244)) {
      piVar4 = param_1 + 0x38;
      do {
        iVar6 = *(short *)(*(short *)((int)param_1 + 0x96) * 2 + *(int *)(iVar1 + 0x248)) * 0x6f0 +
                *(int *)(iVar1 + 0x140);
        uVar5 = fn_82A75588(piVar4,(unsigned __int64)(unsigned int)param_1[0x21] + 1);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        aiStack_50 = 0;
        uVar5 = fn_82C30370(piVar4,1,&aiStack_50);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        if (aiStack_50 == 0) {
          *(unsigned char *)(iVar6 + 0xb4) = 0;
          uVar2 = 0;
        }
        else if (param_1[0x21] == 0) {
          *(unsigned char *)(iVar6 + 0xb4) = 1;
          uVar2 = 1;
        }
        else {
          aiStack_50 = 0;
          uVar5 = fn_82C30370(piVar4,param_1[0x21],&aiStack_50);
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          uVar2 = aiStack_50 + 1U & 0xff;
          *(char *)(iVar6 + 0xb4) = (char)(aiStack_50 + 1U);
        }
        dVar7 = (double)fn_82C2E420(uVar2,0);
        *(float *)(iVar6 + 0xc4) = (float)dVar7;
        sVar3 = *(short *)((int)param_1 + 0x96) + 1;
        *(short *)((int)param_1 + 0x96) = sVar3;
      } while (sVar3 < *(short *)(iVar1 + 0x244));
    }
  }
  return uVar5;
}

