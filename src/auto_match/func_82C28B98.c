extern unsigned int *auStack_4c;
extern int fn_82C27C38();
extern int fn_82C28428();
extern int fn_82C28A68();
extern int fn_82C29788();


void fn_82C28B98(int param_1,unsigned __int64 param_2,int *param_3,unsigned int *param_4,unsigned __int64 *param_5)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  int iVar4;
  __int64 lVar5;
  int *piStack_50;
  unsigned int auStack_4c [19];
  
  *param_4 = 0;
  *param_5 = 0;
  *param_3 = 0;
  iVar1 = *(int *)(param_1 + 0x2c);
  piStack_50 = (int *)0x0;
  auStack_4c[0] = 0;
  if ((((*(__int64 *)(iVar1 + 0x28) == *(__int64 *)(iVar1 + 0x20)) ||
       (iVar4 = (*(int (**)())**(unsigned int **)(iVar1 + 0x4c))(*(unsigned int **)(iVar1 + 0x4c)),
       -1 < iVar4)) && (iVar4 = fn_82C28A68(param_1,param_2), -1 < iVar4)) &&
     ((*(int *)(iVar1 + 0x58) == 0 ||
      ((iVar4 = fn_82C28428(param_1,*(unsigned __int64 *)(iVar1 + 0x50)), -1 < iVar4 &&
       (iVar4 = fn_82C28A68(param_1,param_2), -1 < iVar4)))))) {
    lVar5 = *(__int64 *)(iVar1 + 0x40);
    iVar4 = fn_82C29788(param_1,lVar5,&piStack_50,auStack_4c);
    piVar3 = piStack_50;
    if (-1 < iVar4) {
      if ((lVar5 != *(__int64 *)(*piStack_50 + 8)) || (iVar4 = fn_82C27C38(param_1), -1 < iVar4))
      {
        uVar2 = *(unsigned int *)(*piVar3 + 4);
        lVar5 = *(__int64 *)(*piVar3 + 8);
        if (((unsigned __int64)uVar2 - *(__int64 *)(iVar1 + 0x40)) + lVar5 < (param_2 & 0xffffffff)) {
          *param_4 = ((int)lVar5 - (int)*(__int64 *)(iVar1 + 0x40)) + uVar2;
          piVar3[1] = piVar3[1] + -1;
        }
        else {
          *param_4 = (unsigned int)param_2;
          if (((unsigned __int64)*(unsigned int *)(*piVar3 + 4) + *(__int64 *)(*piVar3 + 8)) -
              *(__int64 *)(iVar1 + 0x40) == (param_2 & 0xffffffff)) {
            piVar3[1] = piVar3[1] + -1;
          }
        }
        *param_3 = ((int)*(unsigned __int64 *)(iVar1 + 0x40) - (int)*(unsigned __int64 *)((int *)*piVar3 + 2)) +
                   *(int *)*piVar3;
        *param_5 = *(unsigned __int64 *)(iVar1 + 0x40);
        *(unsigned __int64 *)(iVar1 + 0x40) = (unsigned __int64)*param_4 + *(__int64 *)(iVar1 + 0x40);
      }
    }
  }
  return;
}

