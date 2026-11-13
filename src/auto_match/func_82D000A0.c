extern int fn_82CFBBF0();
extern int fn_82D004B8();


void fn_82D000A0(int *param_1,char *param_2,unsigned int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  int iVar7;
  unsigned __int64 uVar8;
  
  uVar4 = 0;
  cVar2 = *param_2;
  pcVar1 = param_2;
  while (cVar2 != '\0') {
    pcVar1 = pcVar1 + 1;
    uVar4 = ((uVar4 & 0x7ffffff) * 0x20 - uVar4) + (__int64)cVar2;
    cVar2 = *pcVar1;
  }
  uVar4 = uVar4 & 0x7fffffff;
  if (param_1[2] < param_1[1] << 1) {
    fn_82D004B8(param_1,(param_1[2] + 1) * 2);
  }
  uVar5 = (unsigned __int64)(unsigned int)param_1[2];
  uVar8 = uVar4 & uVar5;
  lVar6 = (uVar8 & 0x3fffffff) << 2;
  iVar7 = (int)lVar6;
  iVar3 = *(int *)(iVar7 + *param_1);
  while (iVar3 != -1) {
    iVar7 = (int)lVar6;
    if ((*(unsigned int *)(*param_1 + iVar7) == uVar4) &&
       (iVar3 = fn_82CFBBF0(param_2,*(unsigned int *)
                                      ((int)((uVar5 + uVar8 + 1 & 0xffffffff) << 2) + *param_1)),
       iVar3 == 0)) goto LAB_82d00190;
    uVar5 = (unsigned __int64)(unsigned int)param_1[2];
    uVar8 = uVar8 + 1 & uVar5;
    lVar6 = (uVar8 & 0x3fffffff) << 2;
    iVar7 = (int)lVar6;
    iVar3 = *(int *)(iVar7 + *param_1);
  }
  param_1[1] = param_1[1] + 1;
LAB_82d00190:
  *(int *)(iVar7 + *param_1) = (int)uVar4;
  *(char **)((int)(((unsigned int)param_1[2] + uVar8 + 1 & 0xffffffff) << 2) + *param_1) = param_2;
  *(unsigned int *)
   ((int)((((unsigned __int64)(unsigned int)param_1[2] + 1 & 0x7fffffff) * 2 + uVar8 & 0xffffffff) << 2) + *param_1
   ) = param_3;
  return;
}

