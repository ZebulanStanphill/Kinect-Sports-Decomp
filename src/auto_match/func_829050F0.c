extern int fn_82901F20();
extern int fn_82904258();
extern int fn_82907DE8();
extern int fn_82964588();
extern unsigned int iStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


unsigned __int64
fn_829050F0(int param_1,int param_2,__int64 param_3,int param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned __int64 param_7,unsigned int *param_8)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *in_stack_00000054;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  int iStack_54;
  
  uVar3 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if (param_8 == (unsigned int *)0x0) {
    param_8 = &uStack_58;
  }
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + 4);
    if (iVar2 == 1) {
      uVar1 = fn_829050F0(param_1,*(unsigned int *)(param_2 + 8),param_3,param_4,param_5,param_6,
                            param_7,param_8);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = fn_829050F0(param_1,*(unsigned int *)(param_2 + 0xc),
                            ((unsigned __int64)uStack_5c & 0x3fffffff) * 4 + param_3,param_4,param_5,
                            param_6,param_7,param_8);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uStack_60 = iStack_54 + uStack_5c;
    }
    else {
      if (iVar2 == 6) {
        uVar1 = fn_829050F0(param_1,*(unsigned int *)(param_2 + 0x18),param_3,param_4,param_5,
                              param_6,param_7,param_8);
      }
      else {
        if (iVar2 == 8) {
          iVar2 = param_2;
          if ((int)param_6 == 0) {
            do {
              if (*(int *)(iVar2 + 4) != 8) break;
              iVar2 = *(int *)(iVar2 + 0x10);
            } while (iVar2 != 0);
            if (((iVar2 != 0) && (*(int *)(iVar2 + 4) == 9)) && (*(int *)(iVar2 + 0x10) == 3)) {
              param_4 = fn_82964588(*(unsigned int *)(param_1 + 8),0xffffffff82029a30,0x2d1,
                                          0xffffffffffffffff,4);
              param_6 = 1;
            }
          }
          if (*(int *)(param_2 + 0x14) != 0) {
            do {
              uVar1 = fn_829050F0(param_1,*(unsigned int *)(param_2 + 0x10),
                                    ((unsigned __int64)uStack_60 & 0x3fffffff) * 4 + param_3,param_4,
                                    param_5,param_6,param_7,param_8);
              if ((int)uVar1 < 0) {
                return uVar1;
              }
              uVar3 = uVar3 + 1;
              uStack_60 = uStack_5c + uStack_60;
            } while (uVar3 < *(unsigned int *)(param_2 + 0x14));
          }
          goto LAB_829053d8;
        }
        if (iVar2 == 9) {
          if (*(int *)(param_2 + 0x10) == 3) {
            if ((int)param_6 == 0) {
              param_4 = fn_82964588(*(unsigned int *)(param_1 + 8),0xffffffff82029a30,0x2d1,
                                          0xffffffffffffffff,4);
            }
            else {
              iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + param_4 * 4);
              *(unsigned int *)(iVar2 + 4) = *(unsigned int *)(iVar2 + 4) | 0x80;
            }
          }
          uVar1 = fn_82901F20(param_1,*(unsigned int *)(param_2 + 0x10),
                                *(unsigned int *)(param_2 + 0x1c),*(unsigned int *)(param_2 + 0x20),
                                *(unsigned int *)(param_2 + 0x24),param_3,param_4,param_8);
        }
        else {
          if (iVar2 != 0xb) {
            fn_82904258(param_1,0,0,0xffffffff8202dc94);
            goto LAB_829053d8;
          }
          uVar1 = fn_82907DE8(param_1,*(unsigned int *)(param_2 + 0x30),param_3,param_4,param_5,
                                  param_6,param_7,param_8);
        }
      }
      if ((int)uVar1 < 0) {
        return uVar1;
      }
    }
  }
LAB_829053d8:
  if (in_stack_00000054 != (unsigned int *)0x0) {
    *in_stack_00000054 = uStack_60;
  }
  return 0;
}

