extern int fn_82C038C8();
extern int fn_82F68CC0();


unsigned __int64 fn_82C13F10(__int64 *param_1,__int64 param_2)

{
  int iVar3;
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned char *pbVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned char *apbStack_40 [16];
  
  apbStack_40[0] = (unsigned char *)0x0;
  if (param_1 == (__int64 *)0x0) {
    return 2;
  }
  uVar6 = param_2 - 0x18;
  *(unsigned int *)(param_1 + 0x13) = 0;
  if ((3 < (uVar6 & 0xffffffff)) &&
     (iVar3 = fn_82C038C8(param_1,*param_1,4,apbStack_40), iVar3 == 4)) {
    uVar7 = 4;
    pbVar4 = apbStack_40[0] + 4;
    uVar5 = (((unsigned __int64)apbStack_40[0][3] * 0x100 + (unsigned __int64)apbStack_40[0][2]) * 0x100 +
            (unsigned __int64)apbStack_40[0][1]) * 0x100 + (unsigned __int64)*apbStack_40[0];
    *(int *)(param_1 + 0x13) = (int)uVar5;
    if (uVar5 < 0x21) {
      apbStack_40[0] = pbVar4;
      if (uVar5 != 0) {
        if ((uVar6 & 0xffffffff) < (uVar5 + 4 & 0xffffffff)) {
          return 3;
        }
        uVar1 = fn_82C038C8(param_1,*param_1 + 4,uVar5,apbStack_40);
        if ((uVar1 & 0xffffffff) != uVar5) {
          return 3;
        }
        uVar7 = uVar1 + 4;
        if (0x20 < (uVar1 & 0xffffffff)) {
          return 3;
        }
        fn_82F68CC0((int)param_1 + 0x76,apbStack_40[0],uVar1);
      }
      uVar5 = uVar7 + 4;
      if (((uVar5 & 0xffffffff) <= (uVar6 & 0xffffffff)) &&
         (iVar3 = fn_82C038C8(param_1,(uVar7 & 0xffffffff) + *param_1,4,apbStack_40), iVar3 == 4))
      {
        pbVar4 = apbStack_40[0] + 4;
        uVar7 = (((unsigned __int64)apbStack_40[0][3] * 0x100 + (unsigned __int64)apbStack_40[0][2]) * 0x100 +
                (unsigned __int64)apbStack_40[0][1]) * 0x100 + (unsigned __int64)*apbStack_40[0];
        apbStack_40[0] = pbVar4;
        if (uVar7 != 0) {
          if ((uVar6 & 0xffffffff) < (uVar5 + uVar7 & 0xffffffff)) {
            return 3;
          }
          uVar1 = fn_82C038C8(param_1,(uVar5 & 0xffffffff) + *param_1,uVar7,apbStack_40);
          if ((uVar1 & 0xffffffff) != uVar7) {
            return 3;
          }
          uVar5 = uVar5 + uVar1;
          if (0x10 < (uVar1 & 0xffffffff)) {
            return 3;
          }
          fn_82F68CC0((int)param_1 + 0x9c,apbStack_40[0],uVar1);
        }
        uVar7 = uVar5 + 4;
        if (((uVar7 & 0xffffffff) <= (uVar6 & 0xffffffff)) &&
           (iVar3 = fn_82C038C8(param_1,(uVar5 & 0xffffffff) + *param_1,4,apbStack_40), iVar3 == 4)
           ) {
          pbVar4 = apbStack_40[0] + 4;
          uVar5 = (((unsigned __int64)apbStack_40[0][3] * 0x100 + (unsigned __int64)apbStack_40[0][2]) * 0x100 +
                  (unsigned __int64)apbStack_40[0][1]) * 0x100 + (unsigned __int64)*apbStack_40[0];
          apbStack_40[0] = pbVar4;
          if (uVar5 != 0) {
            if ((uVar6 & 0xffffffff) < (uVar7 + uVar5 & 0xffffffff)) {
              return 3;
            }
            uVar1 = fn_82C038C8(param_1,(uVar7 & 0xffffffff) + *param_1,uVar5,apbStack_40);
            if ((uVar1 & 0xffffffff) != uVar5) {
              return 3;
            }
            uVar7 = uVar7 + uVar1;
            if (0x20 < (uVar1 & 0xffffffff)) {
              return 3;
            }
            fn_82F68CC0((int)param_1 + 0xac,apbStack_40[0],uVar1);
          }
          uVar5 = uVar7 + 4;
          if (((uVar5 & 0xffffffff) <= (uVar6 & 0xffffffff)) &&
             (iVar3 = fn_82C038C8(param_1,(uVar7 & 0xffffffff) + *param_1,4,apbStack_40),
             iVar3 == 4)) {
            lVar8 = (((unsigned __int64)apbStack_40[0][3] * 0x100 + (unsigned __int64)apbStack_40[0][2]) * 0x100 +
                    (unsigned __int64)apbStack_40[0][1]) * 0x100 + (unsigned __int64)*apbStack_40[0];
            if (lVar8 != 0) {
              apbStack_40[0] = apbStack_40[0] + 4;
              if ((uVar6 & 0xffffffff) < (uVar5 + lVar8 & 0xffffffff)) {
                return 3;
              }
              for (; lVar8 != 0; lVar8 = lVar8 - lVar2) {
                lVar2 = fn_82C038C8(param_1,(uVar5 & 0xffffffff) + *param_1,lVar8,apbStack_40);
                uVar5 = uVar5 + lVar2;
              }
            }
            *param_1 = (uVar6 & 0xffffffff) + *param_1;
            return 0;
          }
        }
      }
    }
  }
  return 3;
}

