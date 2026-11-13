#define true 1
extern __int64 fn_828865B0();


void fn_8287FE88(unsigned int *param_1,int param_2)

{
  unsigned int iVar1;
  __int64 lVar2;
  __int64 lVar3;
  
  iVar1 = param_1[1];
  do {
    if (iVar1 == 0) {
LAB_8287fed0:
      if (*param_1 != 0) {
        *(int *)(*param_1 + 0x34) = param_2;
      }
      *(int *)(param_2 + 0x30) = *param_1;
      *param_1 = param_2;
LAB_8287feec:
      *(int *)(param_2 + 0x34) = iVar1;
      if (param_1[1] == iVar1) {
        param_1[1] = param_2;
      }
      param_1[2] = param_1[2] + 1;
      *(int **)(param_2 + 0x2c) = param_1;
      return;
    }
    lVar2 = fn_828865B0(iVar1);
    lVar3 = fn_828865B0(param_2);
    if (lVar2 <= lVar3) {
      if (iVar1 != 0) {
        if (*(unsigned int *)(iVar1 + 0x30) != 0) {
          *(int *)(*(int *)(iVar1 + 0x30) + 0x34) = param_2;
        }
        *(unsigned int *)(param_2 + 0x30) = *(unsigned int *)(iVar1 + 0x30);
        *(int *)(iVar1 + 0x30) = param_2;
        goto LAB_8287feec;
      }
      goto LAB_8287fed0;
    }
    iVar1 = *(int *)(iVar1 + 0x34);
  } while( true );
}

