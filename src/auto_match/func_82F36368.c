#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_80;
extern int fn_82F35400();
extern unsigned int uStack_7c;


__int64 fn_82F36368(int *param_1,unsigned __int64 param_2,int *param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned short auStack_80 [2];
  unsigned int uStack_7c;
  int *piStack_78;
  unsigned int *puStack_74;
  unsigned int *puStack_70;
  unsigned int *puStack_6c;
  int *piStack_68;
  unsigned int *puStack_64;
  int *apiStack_60 [24];
  
  lVar4 = 0;
  if (param_1[3] == 0) {
    lVar4 = -0x3ff2c94a;
  }
  else if (param_3 == (int *)0x0) {
    lVar4 = -0x7ff8ffa9;
  }
  else if (param_1[0x4d] == 0) {
    lVar4 = -0x3ff2c566;
  }
  else {
    iVar3 = (**(int (***)())(*param_1 + 0x78))(param_1);
    if (iVar3 == 0) {
      uVar1 = param_1[0x4d];
      uVar7 = 0;
      uVar2 = param_1[0x31];
      uVar6 = 0;
      trapDoubleWordImmediate(6,(unsigned __int64)uVar1,0);
      if (uVar2 != 0) {
        param_1 = param_1 + 0x17;
        do {
          fn_82F35400(param_1,uVar6,apiStack_60);
          if (*apiStack_60[0] != 0) {
            fn_82F35400(param_1,uVar6,&puStack_64);
            iVar3 = (**(int (***)())(*(int *)*puStack_64 + 0x24))((int *)*puStack_64,&piStack_68);
            if ((-1 < iVar3) && (uVar7 = ZEXT48(piStack_68) + uVar7, param_2 / uVar1 < uVar7)) {
              fn_82F35400(param_1,uVar6,apiStack_60);
              piStack_68 = apiStack_60[0];
              goto LAB_82f36640;
            }
          }
          uVar6 = uVar6 + 1;
        } while ((uVar6 & 0xffffffff) < (unsigned __int64)uVar2);
      }
    }
    else {
      uVar1 = param_1[0x31];
      uVar7 = 0;
      if (uVar1 != 0) {
        param_1 = param_1 + 0x17;
        uVar5 = 0xffffffffffffffff;
        do {
          fn_82F35400(param_1,uVar7,&piStack_78);
          uVar6 = uVar5;
          if (*piStack_78 != 0) {
            fn_82F35400(param_1,uVar7,&puStack_74);
            lVar4 = (**(int (***)())(*(int *)*puStack_74 + 0x44))((int *)*puStack_74,auStack_80);
            if (lVar4 < 0) {
              return lVar4;
            }
            fn_82F35400(param_1,uVar7,&puStack_70);
            lVar4 = (**(int (***)())(*(int *)*puStack_70 + 0x24))((int *)*puStack_70,&uStack_7c);
            if (lVar4 < 0) {
              return lVar4;
            }
            if (uStack_7c != 0) {
              fn_82F35400(param_1,uVar7,&puStack_6c);
              lVar4 = (**(int (***)())(*(int *)*puStack_6c + 0x48))((int *)*puStack_6c,0,&puStack_64);
              if (lVar4 < 0) {
                return lVar4;
              }
              fn_82F35400(param_1,uVar7,&piStack_68);
              lVar4 = (**(int (***)())(*(int *)*piStack_68 + 0x48))
                                ((int *)*piStack_68,(unsigned __int64)uStack_7c - 1,apiStack_60);
              if (lVar4 < 0) {
                return lVar4;
              }
              if ((ZEXT48(puStack_64) <= (param_2 & 0xffffffff)) &&
                 ((param_2 & 0xffffffff) <= ZEXT48(apiStack_60[0]))) {
                uVar6 = uVar7;
                if ((unsigned __int64)auStack_80[0] == (param_2 >> 0x20 & 0xffff)) break;
                uVar6 = uVar5;
                if ((int)uVar5 == -1) {
                  uVar6 = uVar7;
                }
              }
            }
          }
          uVar7 = uVar7 + 1;
          uVar5 = uVar6;
        } while ((uVar7 & 0xffffffff) < (unsigned __int64)uVar1);
        if ((int)lVar4 < 0) {
          return lVar4;
        }
        if ((int)uVar6 != -1) {
          fn_82F35400(param_1,uVar6,&piStack_68);
LAB_82f36640:
          piStack_68 = (int *)*piStack_68;
          *param_3 = (int)piStack_68;
          (**(int (***)())(*piStack_68 + 4))();
          if (param_4 == (unsigned int *)0x0) {
            return lVar4;
          }
          *param_4 = (int)uVar6;
          return lVar4;
        }
      }
    }
    lVar4 = -0x3ff2c563;
  }
  return lVar4;
}

