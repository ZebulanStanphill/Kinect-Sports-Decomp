extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_82687270();
extern int fn_82687F98();


void fn_826F3210(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  int iVar7;
  int *piVar8;
  unsigned __int64 uVar9;
  
  RtlEnterCriticalSection(param_1 + 3);
  uVar1 = param_2 + 0x10 & 0xfffffff0;
  if ((unsigned int)param_1[1] < uVar1) {
    lVar4 = (param_2 + 0x10 & 0x1ffffff0) << 3;
    if (param_1[2] == 0) {
      uVar2 = fn_8267B890(*param_1,lVar4,0);
      param_1[2] = uVar2;
      puVar5 = (unsigned int *)param_1[2];
      for (uVar9 = uVar1; uVar9 != 0; uVar9 = uVar9 - 1) {
        if (puVar5 != (unsigned int *)0x0) {
          *puVar5 = 0;
          puVar5[1] = 0;
        }
        puVar5 = puVar5 + 2;
      }
    }
    else {
      puVar3 = (unsigned int *)fn_8267B890(*param_1,lVar4,0);
      iVar7 = 0;
      puVar5 = puVar3;
      for (uVar9 = uVar1; uVar9 != 0; uVar9 = uVar9 - 1) {
        if (puVar5 != (unsigned int *)0x0) {
          *puVar5 = 0;
          puVar5[1] = 0;
        }
        puVar5 = puVar5 + 2;
      }
      uVar6 = 0;
      if (param_1[1] != 0) {
        do {
          fn_82687F98(iVar7 + (int)puVar3,param_1[2] + iVar7);
          uVar6 = uVar6 + 1;
          iVar7 = iVar7 + 8;
        } while (uVar6 < (unsigned int)param_1[1]);
      }
      piVar8 = (int *)param_1[2];
      for (uVar9 = (unsigned __int64)(unsigned int)param_1[1]; uVar9 != 0; uVar9 = uVar9 - 1) {
        if (*piVar8 != 0) {
          fn_82687270();
        }
        piVar8 = piVar8 + 2;
      }
      fn_8267BE38(param_1[2]);
      param_1[2] = puVar3;
    }
    param_1[1] = (int)uVar1;
  }
  fn_82687F98((unsigned __int64)(unsigned int)param_1[2] + (param_2 & 0x1fffffff) * 8,param_3);
  RtlLeaveCriticalSection(param_1 + 3);
  return;
}

