extern int fn_8267BE38();
extern int fn_82681F28();
extern int fn_82682070();
extern int fn_82682298();


void fn_826824B0(int *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  int *apiStack_20 [4];
  
  if ((param_1[2] & 0xfffffffU) == 0) {
    return;
  }
  uVar5 = (unsigned __int64)(unsigned int)param_1[2] - 1;
  param_1[2] = (unsigned int)uVar5;
  if ((uVar5 & 0xfffffff) == 0) {
    (**(int (***)())*param_1)(param_1,0);
    uVar4 = param_1[2];
    param_1[2] = uVar4 & 0x8fffffff;
    if ((int)uVar4 < 0) {
      piVar1 = (int *)param_1[1];
      uVar4 = param_1[3];
      if (uVar4 + 1 == *piVar1) {
        fn_82681F28();
      }
      else {
        *(unsigned int *)(*(int *)((uVar4 >> 8 & 0xfffffc) + piVar1[3]) + (uVar4 & 0x3ff) * 4) =
             piVar1[4] << 1 | 1;
        *(int *)(param_1[1] + 0x10) = param_1[3];
      }
    }
    (**(int (***)())(*param_1 + 4))(param_1);
    fn_8267BE38(param_1);
    return;
  }
  if ((uVar5 & 0x70000000) == 0x30000000) {
    return;
  }
  uVar4 = (unsigned int)uVar5 & 0x8fffffff;
  param_1[2] = uVar4 | 0x30000000;
  if ((uVar5 & 0x8fffffff) >> 0x1f == 0) {
    piVar1 = (int *)param_1[1];
    uVar4 = uVar4 | 0xb0000000;
    iVar2 = piVar1[4];
    if (iVar2 != -1) {
      param_1[2] = uVar4;
      param_1[3] = iVar2;
      uVar4 = piVar1[4];
      iVar2 = *(int *)(*(int *)((uVar4 >> 8 & 0xfffffc) + piVar1[3]) + (uVar4 & 0x3ff) * 4);
      *(int **)(*(int *)((uVar4 >> 8 & 0xfffffc) + piVar1[3]) + (uVar4 & 0x3ff) * 4) = param_1;
      *(int *)(param_1[1] + 0x10) = iVar2 >> 1;
      return;
    }
    iVar2 = *piVar1;
    param_1[2] = uVar4;
    param_1[3] = iVar2;
    *(unsigned char *)(piVar1 + 6) = *(unsigned char *)(piVar1 + 6) | 1;
    apiStack_20[0] = param_1;
    cVar3 = fn_82682070(param_1[1],apiStack_20);
    *(unsigned char *)(param_1[1] + 0x18) = *(unsigned char *)(param_1[1] + 0x18) & 0xfe;
    if (cVar3 == '\0') {
      cVar3 = fn_82682298(param_1[1],0);
      *(unsigned char *)(param_1[1] + 0x18) = *(unsigned char *)(param_1[1] + 0x18) | 1;
      if ((cVar3 == '\0') ||
         (apiStack_20[0] = param_1, cVar3 = fn_82682070(param_1[1],apiStack_20), cVar3 == '\0')) {
        param_1[3] = -1;
        param_1[2] = param_1[2] & 0xfffffff;
      }
      *(unsigned char *)(param_1[1] + 0x18) = *(unsigned char *)(param_1[1] + 0x18) & 0xfe;
      return;
    }
    return;
  }
  return;
}

