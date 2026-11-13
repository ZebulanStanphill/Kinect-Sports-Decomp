extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82D04B20();


void fn_82D05070(int *param_1)

{
  int iVar1;
  __int64 lVar2;
  __int64 lVar3;
  __int64 lVar4;
  int iVar5;
  
  lVar2 = (unsigned __int64)(unsigned int)param_1[1] - 1;
  lVar4 = 0x7fffffff;
  if ((int)lVar2 < 0x7fffffff) {
    lVar4 = lVar2;
  }
  lVar4 = lVar4 + -1;
  if (-1 < lVar4) {
    do {
      if (*(char *)(*param_1 + (int)lVar4) == '/') goto LAB_82d050c4;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  lVar4 = -1;
LAB_82d050c4:
  lVar3 = 0x7fffffff;
  if ((int)lVar2 < 0x7fffffff) {
    lVar3 = lVar2;
  }
  lVar3 = lVar3 + -1;
  if (-1 < lVar3) {
    do {
      if (*(char *)(*param_1 + (int)lVar3) == '\\') goto LAB_82d050f8;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  lVar3 = -1;
LAB_82d050f8:
  if ((int)lVar3 <= (int)lVar4) {
    lVar3 = lVar4;
  }
  if ((int)lVar3 < 0) {
    fn_82D04B20(param_1);
  }
  else {
    iVar1 = fn_82CE5410();
    iVar5 = (int)(lVar3 + 1);
    if ((int)(param_1[2] & 0x3fffffffU) < iVar5) {
      lVar4 = ((unsigned __int64)(unsigned int)param_1[2] & 0x3fffffff) << 1;
      if ((int)lVar4 <= iVar5) {
        lVar4 = lVar3 + 1;
      }
      fn_82CE6310(*(unsigned int *)(iVar1 + 0xc),param_1,lVar4,1);
    }
    param_1[1] = iVar5;
    *(unsigned char *)(*param_1 + (int)lVar3) = 0;
  }
  return;
}

