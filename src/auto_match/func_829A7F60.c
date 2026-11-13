extern int fn_8295D1C8();


unsigned __int64 fn_829A7F60(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  uVar4 = fn_8295D1C8(param_1,param_2 | param_3);
  if (-1 < (int)uVar4) {
    if ((((param_2 | param_3) & 0x2000) != 0) && (0x1ff < *(unsigned short *)(param_1 + 0xca))) {
      if ((*(unsigned int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x14) + param_4 * 4) + 4) * 4 +
                             *(int *)(param_1 + 0x10)) + 4) & 0x10) == 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x14) + param_4 * 4);
        uVar1 = *(unsigned int *)(iVar2 + 0x10);
        uVar3 = (unsigned __int64)*(unsigned int *)(iVar2 + 0xc) & 0x7ff;
        uVar5 = uVar3 | 0xb0000000;
        if (uVar1 != 0) {
          if (uVar1 == 1) {
            uVar5 = uVar3 | 0xb0550000;
          }
          else if (uVar1 < 3) {
            uVar5 = uVar3 | 0xb0aa0000;
          }
          else if (uVar1 == 3) {
            uVar5 = uVar3 | 0xb0ff0000;
          }
        }
      }
      else {
        uVar5 = 0xfffffffff0e40800;
      }
      fn_8295D1C8(param_1,uVar5);
    }
    uVar4 = 0;
  }
  return uVar4;
}

