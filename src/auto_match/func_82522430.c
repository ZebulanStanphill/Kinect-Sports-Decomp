#define true 1
extern int fn_82522ED8();
extern int fn_82F63CA0();


unsigned __int64 fn_82522430(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  int *piVar5;
  unsigned __int64 uVar4;
  
  RtlEnterCriticalSection(param_1 + 4);
  piVar5 = *(int **)(param_1 + 0x20);
  do {
    if (piVar5 == *(int **)(param_1 + 0x24)) {
      uVar4 = 0;
LAB_825224d4:
      RtlLeaveCriticalSection(param_1 + 4);
      return uVar4;
    }
    iVar1 = *piVar5;
    if (iVar1 == param_2) {
      iVar2 = *(int *)(iVar1 + 4);
      if (iVar2 != 0) {
        lVar3 = (unsigned __int64)*(unsigned int *)(iVar2 + 0xc) - 1;
        *(int *)(iVar2 + 0xc) = (int)lVar3;
        if (lVar3 < 1) {
          fn_82522ED8();
        }
      }
      fn_82522ED8(iVar1);
      fn_82F63CA0(piVar5,piVar5 + 1,(*(int *)(param_1 + 0x24) - (int)(piVar5 + 1) >> 2) << 2);
      uVar4 = 1;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -4;
      goto LAB_825224d4;
    }
    piVar5 = piVar5 + 1;
  } while( true );
}

