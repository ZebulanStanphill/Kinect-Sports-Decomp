extern int fn_82CE5410();
extern int fn_82CFC050();


void fn_82CE96B0(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar5;
  __int64 lVar4;
  unsigned __int64 uVar6;
  __int64 lVar7;
  
  if ((int)param_1[1] < (int)param_2) {
    uVar6 = ((unsigned __int64)param_1[1] & 0x7fffffff) << 1;
    if ((int)param_2 <= (int)uVar6) {
      param_2 = uVar6;
    }
    iVar5 = fn_82CE5410();
    lVar4 = (**(int (***)())(**(int **)(iVar5 + 0x10) + 4))
                      (*(int **)(iVar5 + 0x10),(param_2 & 0x1ffffff) << 7);
    uVar6 = (unsigned __int64)*param_1;
    if (uVar6 != 0) {
      uVar1 = param_1[4];
      if (uVar1 != 0) {
        uVar2 = param_1[3];
        uVar3 = param_1[2];
        if ((int)uVar3 < (int)uVar2) {
          uVar6 = ((unsigned __int64)uVar3 & 0x1ffffff) * 0x80 + uVar6;
          lVar7 = lVar4;
        }
        else {
          lVar7 = ((unsigned __int64)param_1[1] - (unsigned __int64)uVar3 & 0x1ffffff) * 0x80;
          fn_82CFC050(lVar4,((unsigned __int64)uVar3 & 0x1ffffff) * 0x80 + uVar6,lVar7);
          uVar6 = (unsigned __int64)*param_1;
          lVar7 = lVar7 + lVar4;
          uVar1 = uVar2;
        }
        fn_82CFC050(lVar7,uVar6,uVar1 << 7);
      }
      param_1[2] = 0;
      param_1[3] = param_1[4];
    }
    uVar1 = param_1[1];
    if (uVar1 != 0) {
      uVar2 = *param_1;
      iVar5 = fn_82CE5410();
      (**(int (***)())(**(int **)(iVar5 + 0x10) + 8))(*(int **)(iVar5 + 0x10),uVar2,uVar1 << 7);
    }
    *param_1 = (unsigned int)lVar4;
    param_1[1] = (unsigned int)param_2;
  }
  return;
}

