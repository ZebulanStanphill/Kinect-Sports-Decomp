extern unsigned int *auStack_4c;
extern int fn_82C29390();
extern int fn_82C29788();
extern int fn_82C29980();
extern int fn_82C29E40();


void fn_82C29F08(int param_1,unsigned __int64 param_2,int *param_3,unsigned int *param_4,unsigned __int64 *param_5)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  int iVar4;
  __int64 lVar5;
  __int64 lVar6;
  int *piStack_50;
  unsigned int auStack_4c [19];
  
  *param_4 = 0;
  *param_5 = 0;
  *param_3 = 0;
  iVar1 = *(int *)(param_1 + 0x2c);
  piStack_50 = (int *)0x0;
  auStack_4c[0] = 0;
  iVar4 = fn_82C29E40();
  if ((-1 < iVar4) &&
     ((*(int *)(iVar1 + 0x40) == 0 ||
      ((iVar4 = fn_82C29980(param_1,*(unsigned __int64 *)(iVar1 + 0x38)), -1 < iVar4 &&
       (iVar4 = fn_82C29E40(param_1,param_2), -1 < iVar4)))))) {
    lVar5 = *(__int64 *)(iVar1 + 0x28);
    iVar4 = fn_82C29788(param_1,lVar5,&piStack_50,auStack_4c);
    piVar3 = piStack_50;
    if (-1 < iVar4) {
      if ((lVar5 == *(__int64 *)(*piStack_50 + 8)) &&
         ((unsigned __int64)*(unsigned int *)(iVar1 + 0x88) <= (unsigned __int64)(lVar5 - *(__int64 *)(iVar1 + 0x80)))) {
        iVar4 = fn_82C29390(param_1);
        if (iVar4 < 0) {
          return;
        }
        lVar5 = *(__int64 *)(iVar1 + 0x28);
        *(__int64 *)(iVar1 + 0x80) = lVar5;
      }
      uVar2 = *(unsigned int *)(*piVar3 + 4);
      lVar6 = *(__int64 *)(*piVar3 + 8);
      if (((unsigned __int64)uVar2 - lVar5) + lVar6 < (param_2 & 0xffffffff)) {
        *param_4 = ((int)lVar6 - (int)lVar5) + uVar2;
        piVar3[1] = piVar3[1] + -1;
      }
      else {
        *param_4 = (unsigned int)param_2;
        if (((unsigned __int64)*(unsigned int *)(*piVar3 + 4) + *(__int64 *)(*piVar3 + 8)) -
            *(__int64 *)(iVar1 + 0x28) == (param_2 & 0xffffffff)) {
          piVar3[1] = piVar3[1] + -1;
        }
      }
      *param_3 = ((int)*(unsigned __int64 *)(iVar1 + 0x28) - (int)*(unsigned __int64 *)((int *)*piVar3 + 2)) +
                 *(int *)*piVar3;
      *param_5 = *(unsigned __int64 *)(iVar1 + 0x28);
      *(unsigned __int64 *)(iVar1 + 0x28) = (unsigned __int64)*param_4 + *(__int64 *)(iVar1 + 0x28);
    }
  }
  return;
}

