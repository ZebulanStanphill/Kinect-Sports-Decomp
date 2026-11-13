unsigned __int64 fn_82CAB3D0(__int64 param_1,__int64 param_2,__int64 param_3,__int64 param_4,
                       __int64 param_5,__int64 param_6,unsigned __int64 param_7)

{
  __int64 lVar1;
  __int64 lVar2;
  __int64 lVar3;
  
  lVar1 = param_6;
  if ((int)param_6 <= (int)param_1) {
    lVar1 = param_1;
    param_1 = param_6;
  }
  lVar2 = param_3;
  if (((int)param_1 <= (int)param_3) && (lVar2 = param_1, (int)lVar1 < (int)param_3)) {
    lVar1 = param_3;
  }
  lVar3 = param_5;
  if (((int)lVar2 <= (int)param_5) && (lVar3 = lVar2, (int)lVar1 < (int)param_5)) {
    lVar1 = param_5;
  }
  lVar2 = param_2;
  if (((int)lVar3 <= (int)param_2) && (lVar2 = lVar3, (int)lVar1 < (int)param_2)) {
    lVar1 = param_2;
  }
  lVar3 = param_4;
  if (((int)lVar2 <= (int)param_4) && (lVar3 = lVar2, (int)lVar1 < (int)param_4)) {
    lVar1 = param_4;
  }
  return ((~(param_7 ^ lVar1 - lVar3) & 0xffffffff) >> 0x1f) +
         (unsigned __int64)(param_7 <= (unsigned __int64)(lVar1 - lVar3)) & 1;
}

