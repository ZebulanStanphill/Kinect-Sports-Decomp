extern int fn_82FA9400();
extern int fn_82FA9410();
extern int fn_82FA9A38();
extern int fn_82FABE28();
extern int fn_82FABE80();


unsigned __int64
fn_82FB4580(unsigned __int64 param_1,int param_2,unsigned int *param_3,unsigned __int64 param_4,unsigned int *param_5)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar4;
  __int64 lVar3;
  unsigned __int64 uVar5;
  __int64 lVar6;
  __int64 lVar7;
  unsigned int *puVar8;
  
  puVar8 = param_5 + 2;
  uVar5 = ((unsigned __int64)*(unsigned int *)(param_2 + 8) + ((unsigned __int64)*(unsigned int *)(param_2 + 8) & 0x7fffffff) * 2
          & 0xfffffff) * 0x10 - (unsigned __int64)*(unsigned int *)(param_2 + 0x10);
  if ((int)uVar5 <= (int)param_5[2]) {
    uVar5 = (unsigned __int64)param_5[2];
  }
  uVar1 = (unsigned __int64)*(unsigned short *)(param_2 + 0x2c) & 0xffffe000;
  lVar6 = uVar1 - 0x2000;
  uVar2 = fn_82FA9A38(param_3[1],param_1,*param_3,uVar5 - param_5[1],0,
                        *(unsigned int *)(param_2 + 0x14) >> 0x1b,
                        lVar6 - ((uVar1 - 0x2001) + (unsigned __int64)(lVar6 == 0)),1);
  if (((((*(unsigned short *)(param_2 + 0x2c) & 0xe000) == 0x2000) && ((int)uVar2 == 1)) &&
      (*(int *)(param_3[1] + 0x40) != 0)) &&
     ((iVar4 = fn_82FABE80(param_4), iVar4 != 0 && (*(int *)(iVar4 + 0x40) != 0)))) {
    uVar2 = fn_82FA9400(param_3[1],*param_5);
    uVar2 = fn_82FABE28(param_4,param_2 + 0x18,uVar2,puVar8);
    if ((int)uVar2 == 1) {
      lVar6 = fn_82FA9410(param_3[1],param_5[1]);
      lVar7 = (unsigned __int64)*param_5 + lVar6;
      if ((int)lVar7 < (int)*puVar8) {
        do {
          lVar3 = fn_82FA9400(param_3[1]);
          uVar2 = fn_82FA9A38(param_3[1],param_1,*param_3,lVar7,lVar3 + (unsigned __int64)*puVar8,
                                *(unsigned int *)(param_2 + 0x14) >> 0x1b,0,1);
          if ((int)uVar2 != 1) {
            return uVar2;
          }
          uVar2 = fn_82FA9400(param_3[1],*param_5);
          uVar2 = fn_82FABE28(param_4,param_2 + 0x18,uVar2,puVar8);
          if ((int)uVar2 != 1) {
            return uVar2;
          }
          lVar7 = (unsigned __int64)*param_5 + lVar6;
        } while ((int)lVar7 < (int)*puVar8);
      }
    }
  }
  return uVar2;
}

