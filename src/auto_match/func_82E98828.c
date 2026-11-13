typedef unsigned char bool;
extern int fn_82E871A0();
extern int fn_82E94E58();
extern int fn_82E953A0();


unsigned __int64 fn_82E98828(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned int uVar10;
  
  *(int *)(param_1 + 0x31c) = param_2;
  *(int *)(param_1 + 800) = param_3;
  *(int *)(param_1 + 0x324) = param_2 * param_3;
  *(int *)(param_1 + 0x1f3c) = (int)(((param_3 + -1) * 2 & 0x10U) + (param_2 - 1U & 8) ^ 0x18) >> 3;
  fn_82E953A0();
  iVar9 = 0;
  uVar5 = 0;
  if (*(int *)(param_1 + 0x2d4) != 0) {
    do {
      uVar8 = 0;
      if (*(int *)(param_1 + 0x2d0) != 0) {
        iVar7 = iVar9 * 0x114;
        do {
          lVar4 = LZCOUNT(uVar8);
          iVar9 = iVar9 + 1;
          bVar2 = *(int *)(param_1 + 0x2d0) - 1U == uVar8;
          iVar1 = iVar7 + *(int *)(param_1 + 0x1e54);
          uVar8 = uVar8 + 1;
          iVar7 = iVar7 + 0x114;
          *(unsigned int *)(iVar1 + 0x78) =
               (unsigned int)((((unsigned __int64)LZCOUNT((*(int *)(param_1 + 0x2d4) + -1) - uVar5) >> 4 & 2 |
                       (unsigned __int64)bVar2) << 1 | (unsigned __int64)(uVar5 == 0)) << 1) | (unsigned int)lVar4 >> 5;
        } while (uVar8 < *(unsigned int *)(param_1 + 0x2d0));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(unsigned int *)(param_1 + 0x2d4));
  }
  if (*(int *)(param_1 + 0x1ad0) != 0) {
    iVar9 = 0;
    uVar5 = 0;
    if (*(int *)(param_1 + 0x2d4) != 0) {
      do {
        uVar8 = 0;
        if (*(int *)(param_1 + 0x2d0) != 0) {
          iVar7 = iVar9 * 0x114;
          do {
            lVar4 = LZCOUNT(uVar8);
            iVar9 = iVar9 + 1;
            bVar2 = *(int *)(param_1 + 0x2d0) - 1U == uVar8;
            uVar8 = uVar8 + 1;
            uVar6 = (unsigned int)((((unsigned __int64)LZCOUNT((*(int *)(param_1 + 0x2d4) + -1) - uVar5) >> 4 & 2 |
                            (unsigned __int64)bVar2) << 1 | (unsigned __int64)(uVar5 == 0)) << 1) |
                    (unsigned int)lVar4 >> 5;
            *(unsigned int *)(iVar7 + *(int *)(param_1 + 0x1e6c) + 0x78) = uVar6;
            *(unsigned int *)(iVar7 + *(int *)(param_1 + 0x1e70) + 0x78) = uVar6;
            iVar7 = iVar7 + 0x114;
          } while (uVar8 < *(unsigned int *)(param_1 + 0x2d0));
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(unsigned int *)(param_1 + 0x2d4));
    }
  }
  if (*(int *)(param_1 + 0x920) != 0) {
    uVar5 = *(unsigned int *)(param_1 + 0x31c) & 0xf;
    if (uVar5 == 0) {
      iVar9 = *(int *)(param_1 + 0x2d0);
    }
    else if (uVar5 < 4) {
      iVar9 = *(int *)(param_1 + 0x2d0) + -2;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x2d0) + -1;
    }
    *(int *)(param_1 + 0x1ba0) = iVar9;
    uVar5 = *(unsigned int *)(param_1 + 800) & 0xf;
    if (uVar5 == 0) {
      iVar9 = *(int *)(param_1 + 0x2d4);
    }
    else if (uVar5 < 4) {
      iVar9 = *(int *)(param_1 + 0x2d4) + -2;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x2d4) + -1;
    }
    *(int *)(param_1 + 0x1ba4) = iVar9;
  }
  uVar10 = 2;
  if (*(unsigned int *)(param_1 + 0x2d0) < 0xc) {
    uVar10 = 1;
  }
  *(unsigned int *)(param_1 + 0x1c24) = uVar10;
  *(unsigned int *)(param_1 + 0x8d8) = *(unsigned int *)(param_1 + 0x8dc);
  *(int *)(param_1 + 0x6df8) = (*(int *)(param_1 + 0x550) + 0x1f >> 4) + 2;
  *(int *)(param_1 + 0x8f4) = (*(int *)(param_1 + 0x550) >> 4) + 1;
  *(unsigned int *)(param_1 + 0x4bfc) = *(unsigned int *)(param_1 + 0x2d0) * 0x300;
  uVar3 = fn_82E94E58(param_1);
  if ((int)uVar3 == 0) {
    uVar3 = 0;
    *(unsigned int *)(param_1 + 0xb6c) = *(unsigned int *)(param_1 + 0xb7c);
    *(unsigned int *)(param_1 + 0xb70) = 0;
    *(unsigned int *)(param_1 + 0xb74) = *(unsigned int *)(param_1 + 0xc28);
    *(unsigned int *)(param_1 + 0xb78) = *(unsigned int *)(param_1 + 0xc2c);
    *(unsigned int *)(param_1 + 0xf34) = *(unsigned int *)(param_1 + 0xf44);
    *(unsigned int *)(param_1 + 0xf38) = 0;
    *(unsigned int *)(param_1 + 0xf3c) = *(unsigned int *)(param_1 + 0xff0);
    *(unsigned int *)(param_1 + 0xf40) = *(unsigned int *)(param_1 + 0xff4);
    *(unsigned int *)(param_1 + 0x12fc) = *(unsigned int *)(param_1 + 0x130c);
    *(unsigned int *)(param_1 + 0x1300) = 0;
    *(unsigned int *)(param_1 + 0x1304) = *(unsigned int *)(param_1 + 0x13b8);
    *(unsigned int *)(param_1 + 0x1308) = *(unsigned int *)(param_1 + 0x13bc);
    *(unsigned int *)(param_1 + 0x16c4) = *(unsigned int *)(param_1 + 0x16d4);
    *(unsigned int *)(param_1 + 0x16c8) = 0;
    *(unsigned int *)(param_1 + 0x16cc) = *(unsigned int *)(param_1 + 0x1780);
    *(unsigned int *)(param_1 + 0x16d0) = *(unsigned int *)(param_1 + 0x1784);
  }
  else {
    fn_82E871A0(param_1);
  }
  return uVar3;
}

