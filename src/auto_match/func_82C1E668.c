extern int fn_82C10F40();
extern int fn_82C1E328();


unsigned __int64 fn_82C1E668(int param_1,__int64 param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int aiStack_50;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  aiStack_50 = 0;
  uVar6 = (unsigned __int64)*(unsigned int *)(*(int *)(iVar1 + 4) + 0x14);
  uVar7 = uVar6 + param_2;
  if (((__int64)(unsigned __int64)*(unsigned int *)(*(int *)(iVar1 + 4) + 0x10) < (__int64)uVar7) ||
     ((__int64)uVar7 < (__int64)uVar6)) {
LAB_82c1e6ac:
    uVar3 = 0xffffffff80070057;
  }
  else {
    if (*(short *)(iVar1 + 0x98) != 0) {
      uVar3 = fn_82C10F40(*(unsigned int *)(iVar1 + 0x94),param_3,&aiStack_50);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      if ((*(int *)(aiStack_50 + 4) == 0) || (*(int *)(aiStack_50 + 4) == 2)) {
        return 0xffffffff805000bc;
      }
      if (*(int *)(aiStack_50 + 0x30) == 2) {
        if (param_4 == 0) {
          uVar4 = (unsigned __int64)*(unsigned int *)(*(int *)(aiStack_50 + 0x48) + 4);
          uVar6 = (__int64)uVar7 / (__int64)uVar4;
          uVar5 = uVar4 & ~((uVar7 * 2 | uVar7 >> 0x3f) - 1);
          trapDoubleWordImmediate(6,uVar4,0);
          trapDoubleWordImmediate(5,uVar5,0xffff);
        }
        else {
          uVar5 = (unsigned __int64)*(unsigned int *)(*(int *)(aiStack_50 + 0x48) + 4);
          trapDoubleWordImmediate(6,uVar5,0);
          uVar4 = (uVar5 * 999 & 0xffffffff) / 1000 + uVar7;
          uVar6 = (__int64)uVar4 / (__int64)uVar5;
          trapDoubleWordImmediate(5,uVar5 & ~((uVar4 * 2 | uVar4 >> 0x3f) - 1),0xffff);
        }
        if ((uVar6 & 0xffffffff) <= (unsigned __int64)*(unsigned int *)(*(int *)(aiStack_50 + 0x48) + 0xc)) {
          uVar2 = *(unsigned int *)(*(int *)(*(int *)(aiStack_50 + 0x48) + 0x10) +
                           (int)((uVar6 & 0xffffffff) << 3));
          if (uVar2 <= *(unsigned int *)(*(int *)(iVar1 + 4) + 0xc)) {
            uVar3 = fn_82C1E328(param_1,((__int64)*(int *)(*(int *)(iVar1 + 4) + 8) *
                                           (__int64)(int)uVar2 & 0xffffffffU) +
                                          *(__int64 *)(iVar1 + 0x10),uVar5);
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            if (param_4 == 0) {
              *(unsigned int *)(iVar1 + 0xbc) = 0;
              *(unsigned int *)(iVar1 + 0xb8) = 1;
            }
            else {
              *(unsigned int *)(iVar1 + 0xb8) = 0;
              *(unsigned int *)(iVar1 + 0xbc) = 1;
            }
            *(char *)(iVar1 + 0xc4) = (char)param_3;
            *(int *)(iVar1 + 0xdc) = (int)uVar6;
            *(int *)(iVar1 + 0xc0) = (int)uVar7;
            *(unsigned int *)(iVar1 + 200) = 0;
            *(unsigned int *)(iVar1 + 0xd0) = 0;
            *(unsigned int *)(iVar1 + 0xd4) = 0;
            *(unsigned int *)(iVar1 + 0xd8) = 0;
            *(unsigned int *)(iVar1 + 0xcc) = 0;
            return uVar3;
          }
        }
        goto LAB_82c1e6ac;
      }
    }
    uVar3 = 0xffffffff805000bb;
  }
  return uVar3;
}

