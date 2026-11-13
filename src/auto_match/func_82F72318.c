__int64 fn_82F72318(unsigned int *param_1,int param_2,int param_3)

{
  __int64 lVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  
  uVar3 = param_2 + 7U & 0xfffffff8;
  if (param_3 != 0) {
    lVar1 = (*(int (**)())*param_1)(uVar3);
    return lVar1;
  }
  if (uVar3 == 0) {
    uVar3 = 8;
  }
  if ((unsigned int)param_1[4] < uVar3) {
    if (uVar3 < 0x1001) {
      puVar2 = (unsigned int *)fn_82F72318(0xffffffff832635a0,0x1004,1);
      if (puVar2 == (unsigned int *)0x0) {
        puVar2 = (unsigned int *)0x0;
      }
      else {
        *puVar2 = 0;
      }
      if (puVar2 != (unsigned int *)0x0) {
        if ((unsigned int *)param_1[3] == (unsigned int *)0x0) {
          param_1[2] = puVar2;
        }
        else {
          *(unsigned int *)param_1[3] = puVar2;
        }
        param_1[3] = puVar2;
        uVar3 = 0x1000 - uVar3;
        goto LAB_82f723d8;
      }
    }
    lVar1 = 0;
  }
  else {
    uVar3 = param_1[4] - uVar3;
LAB_82f723d8:
    param_1[4] = uVar3;
    lVar1 = (unsigned __int64)(unsigned int)param_1[3] + (unsigned __int64)uVar3 + 4;
  }
  return lVar1;
}

