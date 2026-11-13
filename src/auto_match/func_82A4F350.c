extern int fn_82A49AC8();
extern int fn_82A4ED78();
extern int fn_82A5ED20();


void fn_82A4F350(int param_1,unsigned __int64 param_2,int *param_3,unsigned __int64 param_4,int *param_5)

{
  unsigned short uVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  unsigned short uVar7;
  unsigned short uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  
  uVar1 = *(unsigned short *)(*param_3 + 0xe);
  iVar6 = fn_82A5ED20(param_1,1,param_3,1);
  if (-1 < iVar6) {
    psVar4 = (short *)*param_3;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = uVar1;
    if (*psVar4 == -2) {
      uVar10 = *(unsigned int *)(psVar4 + 10);
      uVar8 = psVar4[9];
    }
    psVar5 = (short *)*param_5;
    if (*psVar5 == -2) {
      uVar9 = *(unsigned int *)(psVar5 + 10);
    }
    sVar2 = psVar5[1];
    sVar3 = psVar4[1];
    uVar7 = fn_82A49AC8();
    fn_82A4ED78(param_1,uVar7,sVar3,sVar2,uVar1 >> 3,uVar8,uVar10,uVar9);
    *(unsigned int *)(param_1 + 0xf0) = 0;
    *(unsigned int *)(param_1 + 0xf4) = 0;
    *(unsigned int *)(param_1 + 0xcc) = *(unsigned int *)(*param_5 + 4) / 1000;
  }
  return;
}

