extern int fn_82275F90();
extern int fn_82275C58();
extern int fn_8265CA20();
extern unsigned int iStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_82275B20(__int64 param_1,unsigned __int64 param_2,int *param_3,unsigned int param_4,int param_5)

{
  int iVar1;
  __int64 lVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  int iStack_90;
  int aiStack_80 [8];
  int aiStack_60 [8];

  if ((int)(param_4 * 2) <= param_5) {
    lVar4 = ((unsigned __int64)param_4 & 0x1fffffff) * 8;
    lVar3 = param_1;
    do {
      iStack_90 = param_3[4];
      lVar2 = lVar4 + lVar3;
      uStack_a0 = 0;
      uStack_9c = 0;
      param_1 = lVar4 + lVar2;
      uStack_98 = 0;
      uStack_94 = 0;
      iVar1 = fn_82275C58(aiStack_80,lVar3,lVar2,lVar2,param_1,&uStack_a0);
      param_3[4] = *(int *)(iVar1 + 0x10);
      if (aiStack_80[0] != 0) {
        fn_8265CA20(aiStack_80[0]);
      }
      param_5 = param_5 + param_4 * -2;
      lVar3 = param_1;
    } while ((int)(param_4 * 2) <= param_5);
  }
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  if ((int)param_4 < param_5) {
    iStack_90 = param_3[4];
    lVar3 = ((unsigned __int64)param_4 & 0x1fffffff) * 8 + param_1;
    fn_82275C58(aiStack_60,param_1,lVar3,lVar3,param_2,&uStack_a0);
  }
  else {
    iStack_90 = param_3[4];
    fn_82275F90(aiStack_60,param_1,param_2,&uStack_a0);
  }
  if (aiStack_60[0] != 0) {
    fn_8265CA20();
  }
  iVar1 = *param_3;
  if (iVar1 != 0) {
    for (; iVar1 != param_3[2]; iVar1 = iVar1 + 8) {
    }
    fn_8265CA20();
  }
  return;
}
