extern int fn_82816B30();
extern int fn_828223C8();
extern int fn_82822F60();
extern int fn_828252E8();
extern int fn_82F678C8();
extern int __iob_func();
extern int fprintf();
extern unsigned int iStack_48;
extern unsigned int uStack_40;


unsigned __int64 fn_8282FCF0(unsigned __int64 param_1,int param_2)

{
  int iVar2;
  __int64 lVar1;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  int aiStack_60 [4];
  int aiStack_50 [2];
  int iStack_48;
  unsigned int uStack_40;
  
  aiStack_60[0] = param_2 + 0x2fc;
  iVar6 = 0;
  iVar4 = 0;
  iVar3 = 0;
  uVar5 = 0;
  if (*(int *)(param_2 + 0xac) != 0) {
    do {
      iVar2 = fn_82F678C8(aiStack_50,0x14,1,param_1);
      if (iVar2 != 1) {
        lVar1 = __iob_func();
        fprintf(lVar1 + 0x40,0xffffffff8201ef98);
        return 5;
      }
      if (iVar3 != aiStack_50[0]) {
        do {
          fn_828223C8(aiStack_60[0],aiStack_60);
          iVar3 = *(int *)(aiStack_60[0] + 0xc);
          iVar4 = *(int *)(aiStack_60[0] + 0x18);
          iVar6 = aiStack_60[0];
        } while (iVar3 != aiStack_50[0]);
      }
      iStack_48 = iStack_48 + iVar4;
      aiStack_50[0] = iVar6;
      fn_82816B30(*(unsigned int *)(iVar6 + 0x48),aiStack_50);
      *(unsigned char *)(iVar6 + 0x54) = 0;
      iVar2 = fn_828252E8(param_2,0x18);
      *(int *)(iVar2 + 0x10) = param_2;
      *(unsigned int *)(iVar2 + 0x14) = uStack_40;
      fn_82822F60(param_2 + 0x3a4,iVar2,0xffffffff828244e8);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(unsigned int *)(param_2 + 0xac));
  }
  return 0;
}

