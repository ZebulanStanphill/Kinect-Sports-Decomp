__int64 fn_82A3F820(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = param_1[2];
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = -uVar1 & uVar1;
  param_1[2] = uVar1 ^ uVar2;
  return (__int64)
         (int)(((((unsigned int)((uVar2 & 0xffff0000) != 0) << 1 |
                 (unsigned int)((uVar2 & 0xffffff00) != 0 || (uVar2 & 0xff00ff00) != 0)) << 1 |
                (unsigned int)((uVar2 & 0xf0f0f0f0) != 0)) << 1 | (unsigned int)((uVar2 & 0xcccccccc) != 0)) << 1 |
              (unsigned int)((uVar2 & 0xaaaaaaaa) != 0)) * (__int64)(int)param_1[1] + (unsigned __int64)*param_1;
}

