extern unsigned int *auStack_40;
extern int fn_8265C9E0();
extern int fn_828252D0();
extern int fn_828277F8();
extern int fn_828281C8();
extern int fn_82828720();
extern int fn_82828B78();


void fn_82829A80(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4,
                  unsigned int param_5)

{
  int iVar2;
  unsigned int uVar3;
  unsigned char uVar5;
  __int64 lVar1;
  unsigned int *puVar4;
  unsigned char auStack_40 [4];
  int aiStack_3c [15];
  
  iVar2 = fn_828252D0(0x58);
  uVar3 = fn_82828720(param_1,param_2);
  *(unsigned int *)(iVar2 + 0x10) = uVar3;
  fn_828277F8(iVar2,param_1);
  uVar5 = fn_828281C8(param_1,param_3,aiStack_3c);
  *(unsigned char *)(iVar2 + 0x28) = uVar5;
  *(unsigned int *)(iVar2 + 0x2c) = param_5;
  *(unsigned int *)(iVar2 + 0x14) = 0;
  *(int *)(iVar2 + 0x40) = aiStack_3c[0] + 0x24;
  *(unsigned char *)(iVar2 + 0x34) = 0;
  *(unsigned int *)(iVar2 + 0x38) = 0;
  lVar1 = fn_8265C9E0(0x10);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    fn_82828B78(lVar1,auStack_40,auStack_40);
  }
  *(int *)(iVar2 + 0x3c) = (int)lVar1;
  *(unsigned int *)(iVar2 + 0x44) = 0;
  puVar4 = (unsigned int *)fn_8265C9E0(0x10);
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
  }
  *(unsigned int **)(iVar2 + 0x48) = puVar4;
  *(unsigned int *)(iVar2 + 0x4c) = 0;
  *(unsigned int *)(iVar2 + 0x50) = 0;
  *(unsigned char *)(iVar2 + 0x54) = 0;
  *param_4 = iVar2;
  return;
}

