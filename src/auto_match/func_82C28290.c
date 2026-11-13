#define true 1
extern int fn_82C27C38();
extern int fn_82C29788();
extern unsigned int iStack_40;


void fn_82C28290(int param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  int iVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  int iStack_40;
  int *apiStack_3c [15];
  
  iVar1 = *(int *)(param_1 + 0x2c);
  apiStack_3c[0] = (int *)0x0;
  iStack_40 = 0;
  if ((*(__int64 *)(iVar1 + 0x28) == *(__int64 *)(iVar1 + 0x20)) ||
     (iVar4 = (*(int (**)())**(unsigned int **)(iVar1 + 0x4c))(*(unsigned int **)(iVar1 + 0x4c)), -1 < iVar4
     )) {
    *(unsigned int *)(iVar1 + 0x5c) = param_2;
    *(unsigned __int64 *)(iVar1 + 0x60) = *(unsigned __int64 *)(iVar1 + 0x40);
    while( true ) {
      lVar5 = *(__int64 *)(iVar1 + 0x60);
      iVar4 = fn_82C29788(param_1,lVar5,apiStack_3c,&iStack_40);
      piVar3 = apiStack_3c[0];
      if (iVar4 < 0) {
        return;
      }
      if (iStack_40 == 0) break;
      if ((lVar5 == *(__int64 *)(*apiStack_3c[0] + 8)) &&
         (iVar4 = fn_82C27C38(param_1), iVar4 < 0)) {
        return;
      }
      uVar10 = *(unsigned __int64 *)(iVar1 + 0x60);
      uVar7 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x5c);
      uVar9 = (unsigned __int64)*(unsigned int *)(*piVar3 + 4);
      uVar8 = *(unsigned __int64 *)(*piVar3 + 8);
      uVar6 = (uVar9 - uVar10) + uVar8;
      if (uVar6 < uVar7) {
        piVar3[1] = piVar3[1] + -1;
        uVar7 = ((uVar8 & 0xffffffff) - (uVar10 & 0xffffffff)) + uVar9;
      }
      else if (uVar6 == uVar7) {
        piVar3[1] = piVar3[1] + -1;
      }
      lVar5 = *(unsigned int *)(iVar1 + 0x5c) - uVar7;
      uVar6 = (uVar7 & 0xffffffff) + *(__int64 *)(iVar1 + 0x60);
      *(int *)(iVar1 + 0x5c) = (int)lVar5;
      *(unsigned __int64 *)(iVar1 + 0x60) = uVar6;
      if ((lVar5 == 0) || (*(unsigned __int64 *)(iVar1 + 0x20) < uVar6)) break;
    }
    if (*(unsigned int *)(iVar1 + 0x5c) != 0) {
      iVar4 = (*(int (**)())**(unsigned int **)(iVar1 + 0x4c))
                        (*(unsigned int **)(iVar1 + 0x4c),
                         (unsigned __int64)*(unsigned int *)(iVar1 + 0x5c) + *(__int64 *)(iVar1 + 0x20));
      if (iVar4 < 0) {
        return;
      }
      uVar2 = *(unsigned int *)(iVar1 + 0x5c);
      *(unsigned int *)(iVar1 + 0x5c) = 0;
      *(unsigned __int64 *)(iVar1 + 0x20) = (unsigned __int64)uVar2 + *(__int64 *)(iVar1 + 0x20);
      *(unsigned __int64 *)(iVar1 + 0x28) = *(__int64 *)(iVar1 + 0x28) + (unsigned __int64)uVar2;
    }
    *(unsigned __int64 *)(iVar1 + 0x40) = (unsigned __int64)param_2 + *(__int64 *)(iVar1 + 0x40);
  }
  return;
}

