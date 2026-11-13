extern int fn_82EF10C8();


unsigned __int64 fn_82EF1220(int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int *apuStack_30 [12];
  
  iVar3 = fn_82EF10C8(param_1 + 4,apuStack_30);
  if (iVar3 < 0) {
    uVar2 = 0xffffffff8007000e;
  }
  else {
    uVar2 = 0;
    *apuStack_30[0] = *param_2;
    apuStack_30[0][1] = *param_3;
    uVar1 = (unsigned int)param_1[1] >> 1;
    trapWord(6,(unsigned __int64)uVar1,0);
    iVar3 = (*param_2 - (*param_2 / uVar1) * uVar1) * 4;
    apuStack_30[0][2] = *(unsigned int *)(iVar3 + *param_1);
    *(unsigned int **)(iVar3 + *param_1) = apuStack_30[0];
    param_1[2] = param_1[2] + 1;
  }
  return uVar2;
}

