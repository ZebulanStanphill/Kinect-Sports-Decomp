#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_30;
extern int fn_82469C10();
extern int fn_82469CD8();
extern int fn_825200A8();
extern int fn_82837D98();


void fn_8246FD50(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int iVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned int auStack_30 [12];
  
  if (((param_3 & 0xffffffff) != 0) && (iVar1 = *(int *)param_3, iVar1 != 0)) {
    lVar8 = param_2 * 0x14 + (unsigned __int64)*(unsigned int *)(param_1 + 0x90);
    lVar6 = lVar8 + 0x10;
    iVar5 = fn_825200A8(param_3,lVar6);
    if (iVar5 == 0) {
      puVar4 = (unsigned int *)lVar8;
      puVar2 = (unsigned int *)puVar4[1];
      uVar3 = *puVar2;
      while (uVar7 = (unsigned __int64)uVar3, uVar7 != ZEXT48(puVar2)) {
        iVar5 = fn_825200A8(uVar7 + 8,param_3);
        if (iVar5 != 0) {
          *(int *)lVar6 = iVar1;
          fn_82837D98(*(unsigned int *)(((unsigned int *)uVar7)[3] + 0x14),0,auStack_30);
          *puVar4 = auStack_30[0];
          break;
        }
        puVar2 = (unsigned int *)puVar4[1];
        uVar3 = *(unsigned int *)uVar7;
      }
      iVar1 = *(int *)(param_1 + 0x310);
      if (iVar1 != 0) {
        if ((param_2 & 0xffffffff) == 0) {
          fn_82469C10(iVar1,**(unsigned int **)(param_1 + 0x90));
        }
        else {
          fn_82469CD8(iVar1,(*(unsigned int **)(param_1 + 0x90))[5]);
        }
      }
    }
  }
  return;
}

