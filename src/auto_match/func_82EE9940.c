#define true 1
extern int fn_82E4FE40();
extern int fn_82E58B58();
extern int fn_82E58BE8();
extern int fn_82EE80A8();
extern int fn_82EEA360();


unsigned __int64 fn_82EE9940(int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int *piVar3;
  __int64 lVar4;
  int iVar5;
  __int64 lVar6;
  int *piVar7;
  int *piVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  unsigned int *puStack_50;
  int * apiStack_4c;
  
  iVar5 = param_1[0x1d];
  lVar4 = fn_82EE80A8(iVar5);
  lVar6 = *(__int64 *)(iVar5 + 0x28);
  piVar8 = param_1 + 0x14;
  RtlEnterCriticalSection(piVar8);
  piVar7 = param_1 + 0x426;
  puVar9 = (unsigned int *)(-(unsigned int)(param_1 + 0x427 != (int *)param_1[0x427]) & (unsigned int)param_1[0x427]);
  if (puVar9 != (unsigned int *)0x0) {
    do {
      puVar10 = (unsigned int *)(-(unsigned int)(param_1 + 0x427 != (int *)*puVar9) & *puVar9);
      puStack_50 = puVar9;
      if (puVar9[5] == 0) {
        fn_82E58B58(param_2);
      }
      else {
        *piVar7 = *piVar7 + -1;
        uVar1 = *puVar9;
        puVar2 = (unsigned int *)puVar9[1];
        *puVar2 = uVar1;
        *(unsigned int **)(uVar1 + 4) = puVar2;
        piVar3 = (int *)puVar9[3];
        if (piVar3 != (int *)0x0) {
          (**(int (***)())(*piVar3 + 8))(piVar3,puVar9);
          puStack_50[3] = 0;
        }
        if (puStack_50 != (unsigned int *)0x0) {
          fn_82E4FE40();
        }
      }
      puVar9 = puVar10;
    } while (puVar10 != (unsigned int *)0x0);
  }
  RtlLeaveCriticalSection(piVar8);
  while (*(int *)(param_2 + 0xe8) != 0) {
    fn_82E58BE8(param_2,&puStack_50);
    (*(int (**)())puStack_50[2])(puStack_50[3]);
  }
  RtlEnterCriticalSection(piVar8);
  while( true ) {
    iVar5 = fn_82EEA360(param_1 + 0x1e,lVar4 - lVar6,&apiStack_4c);
    RtlLeaveCriticalSection(piVar8);
    if (iVar5 != 0) break;
    if (apiStack_4c[6] != 0) {
      (**(int (***)())(*param_1 + 0x18))(param_1);
    }
    (**(int (***)())(*apiStack_4c + 8))(apiStack_4c);
    apiStack_4c = (int *)0x0;
    RtlEnterCriticalSection(piVar8);
  }
  RtlEnterCriticalSection(piVar8);
  if ((iVar5 == 2) && (*piVar7 == 0)) {
    param_1[0x42b] = 0;
  }
  RtlLeaveCriticalSection(piVar8);
  return 0;
}

