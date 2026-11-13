extern int fn_82F142B0();


unsigned __int64 fn_82E94E58(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  int *piVar8;
  unsigned __int64 uVar9;
  int iVar10;
  
  uVar4 = *(unsigned int *)(param_1 + 0x2d8);
  iVar2 = uVar4 * 0x300;
  iVar10 = *(int *)(param_1 + 0xd54) + iVar2;
  iVar1 = uVar4 * 0xc;
  iVar5 = iVar10 + iVar2;
  *(int *)(param_1 + 0xd58) = iVar10;
  iVar10 = iVar5 + iVar2;
  *(int *)(param_1 + 0xd5c) = iVar5;
  iVar2 = iVar10 + iVar2;
  *(int *)(param_1 + 0xd60) = iVar10;
  iVar10 = iVar2 + iVar1;
  *(int *)(param_1 + 0xd64) = iVar2;
  iVar2 = iVar10 + iVar1;
  *(int *)(param_1 + 0xd68) = iVar10;
  *(int *)(param_1 + 0x4a90) = *(int *)(param_1 + 0x564) * 8 + -8;
  *(int *)(param_1 + 0xd6c) = iVar2;
  *(unsigned int *)(param_1 + 0x4c04) = uVar4 >> 1;
  *(int *)(param_1 + 0xd70) = iVar2 + iVar1;
  *(unsigned int *)(param_1 + 0xc24) = uVar4 * 0x600 + *(int *)(param_1 + 0xc20);
  if (*(int *)(param_1 + 0x658) != 0) {
    piVar8 = (int *)(param_1 + 0x824);
    uVar4 = 0;
    do {
      uVar6 = uVar4 + 1;
      trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x658),0);
      piVar8[0xeb] = (int)(((__int64)(int)uVar4 * (__int64)*(int *)(param_1 + 0x550) & 0xffffffffU
                           ) / (unsigned __int64)*(unsigned int *)(param_1 + 0x658));
      trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x658),0);
      piVar8[0xec] = (int)(((__int64)(int)uVar6 * (__int64)*(int *)(param_1 + 0x550) & 0xffffffffU
                           ) / (unsigned __int64)*(unsigned int *)(param_1 + 0x658));
      trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x658),0);
      piVar8[0xed] = (int)(((__int64)*(int *)(param_1 + 0x55c) * (__int64)(int)uVar4 & 0xffffffffU
                           ) / (unsigned __int64)*(unsigned int *)(param_1 + 0x658));
      trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x658),0);
      piVar8[0xee] = (int)(((__int64)*(int *)(param_1 + 0x55c) * (__int64)(int)uVar6 & 0xffffffffU
                           ) / (unsigned __int64)*(unsigned int *)(param_1 + 0x658));
      trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x658),0);
      piVar8[0xef] = (int)(((__int64)*(int *)(param_1 + 800) * (__int64)(int)uVar4 & 0xffffffffU)
                          / (unsigned __int64)*(unsigned int *)(param_1 + 0x658));
      trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x658),0);
      piVar8[0xf0] = (int)(((__int64)(int)uVar6 * (__int64)*(int *)(param_1 + 800) & 0xffffffffU)
                          / (unsigned __int64)*(unsigned int *)(param_1 + 0x658));
      trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x658),0);
      piVar8[0xf1] = (int)(((__int64)(int)(uVar4 * *(int *)(param_1 + 0x564)) *
                            (__int64)*(int *)(param_1 + 0x550) & 0xffffffffU) /
                          (unsigned __int64)*(unsigned int *)(param_1 + 0x658)) + *(int *)(param_1 + 0x574);
      trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x658),0);
      piVar8 = piVar8 + 0xf2;
      *piVar8 = (int)(((__int64)(*(int *)(param_1 + 0x55c) * *(int *)(param_1 + 0x568)) *
                       (__int64)(int)uVar4 & 0xffffffffU) / (unsigned __int64)*(unsigned int *)(param_1 + 0x658))
                + *(int *)(param_1 + 0x578);
      uVar4 = uVar6;
    } while (uVar6 < *(unsigned int *)(param_1 + 0x658));
  }
  uVar9 = 0;
  iVar2 = *(int *)(param_1 + 0x304);
  *(int *)(param_1 + 0x310) = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x574);
  *(int *)(param_1 + 0x4a94) = *(int *)(iVar2 + 0x40) + *(int *)(param_1 + 0x574);
  *(int *)(param_1 + 0x4a98) = *(int *)(iVar2 + 0x58) + *(int *)(param_1 + 0x578);
  *(int *)(param_1 + 0x4a9c) = *(int *)(iVar2 + 0x70) + *(int *)(param_1 + 0x578);
  if (*(int *)(param_1 + 0x658) != 0) {
    do {
      iVar2 = (int)uVar9;
      if ((uVar9 & 0xffffffff) == 0) {
        *(unsigned int *)(param_1 + 0xc28) = 0;
        *(unsigned int *)(param_1 + 0xc30) = 0;
      }
      else {
        iVar10 = iVar2 * 0x3c8 + param_1;
        trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x658),0);
        *(unsigned int *)(iVar10 + 0xc28) = *(unsigned int *)(param_1 + 0x2d4) / *(unsigned int *)(param_1 + 0x658);
        *(unsigned int *)(iVar10 + 0xc30) = *(unsigned int *)(iVar10 + 0x86c);
      }
      uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x658);
      if ((uVar9 & 0xffffffff) == (uVar7 - 1 & 0xffffffff)) {
        iVar10 = iVar2 * 0x3c8 + param_1;
        *(unsigned int *)(iVar10 + 0xc2c) = *(unsigned int *)(param_1 + 0x2d4);
        *(unsigned int *)(iVar10 + 0xc34) = *(unsigned int *)(param_1 + 0x2d4);
        *(unsigned int *)(iVar10 + 0xe2c) = *(unsigned int *)(param_1 + 0x2d0);
      }
      else {
        iVar10 = iVar2 * 0x3c8 + param_1;
        trapWord(6,uVar7,0);
        uVar4 = (unsigned int)(((__int64)(iVar2 + 1) * (__int64)*(int *)(param_1 + 0x2d4) & 0xffffffffU) /
                      uVar7);
        *(unsigned int *)(iVar10 + 0xc2c) = uVar4;
        *(unsigned int *)(iVar10 + 0xc34) = uVar4 & 0xfffffffe;
        trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x658),0);
        *(int *)(iVar10 + 0xe2c) =
             (int)(((__int64)(iVar2 + 1) * (__int64)*(int *)(param_1 + 0x2d0) & 0xffffffffU) /
                  (unsigned __int64)*(unsigned int *)(param_1 + 0x658));
      }
      iVar2 = *(int *)(iVar10 + 0xc28);
      *(int *)(iVar10 + 0xc38) = iVar2 << 4;
      *(int *)(iVar10 + 0xc3c) = iVar2 * *(int *)(param_1 + 0x2d0);
      *(int *)(iVar10 + 0xc40) = iVar2 * *(int *)(param_1 + 0x2d0);
      if ((uVar9 & 0xffffffff) != 0) {
        *(int *)(iVar10 + 0xd48) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0x60 + *(int *)(param_1 + 0xd48);
        *(int *)(iVar10 + 0xd4c) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0x600 + *(int *)(param_1 + 0xd4c);
        *(int *)(iVar10 + 0xd50) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0xc + *(int *)(param_1 + 0xd50);
        *(int *)(iVar10 + 0xd44) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0x600 + *(int *)(param_1 + 0xd44);
        *(int *)(iVar10 + 0xd54) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0x300 + *(int *)(param_1 + 0xd54);
        *(int *)(iVar10 + 0xd58) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0x300 + *(int *)(param_1 + 0xd58);
        *(int *)(iVar10 + 0xd5c) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0x300 + *(int *)(param_1 + 0xd5c);
        *(int *)(iVar10 + 0xd60) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0x300 + *(int *)(param_1 + 0xd60);
        *(int *)(iVar10 + 0xc20) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0x600 + *(int *)(param_1 + 0xc20);
        *(int *)(iVar10 + 0xd64) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0xc + *(int *)(param_1 + 0xd64);
        *(int *)(iVar10 + 0xd68) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0xc + *(int *)(param_1 + 0xd68);
        *(int *)(iVar10 + 0xd6c) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0xc + *(int *)(param_1 + 0xd6c);
        *(int *)(iVar10 + 0xd70) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0xc + *(int *)(param_1 + 0xd70);
        *(int *)(iVar10 + 0xc24) =
             iVar2 * *(int *)(param_1 + 0x2d0) * 0x30 + *(int *)(param_1 + 0xc24);
      }
      iVar1 = *(int *)(iVar10 + 0xd84);
      iVar5 = *(int *)(param_1 + 0x57c) * iVar2;
      *(int *)(iVar10 + 0xd7c) = iVar5;
      *(int *)(iVar10 + 0xd80) = iVar2 * *(int *)(param_1 + 0x580);
      *(int *)(iVar10 + 0xd74) = iVar5 + *(int *)(param_1 + 0x310);
      *(unsigned int *)(iVar10 + 0xd8c) = *(unsigned int *)(iVar1 + 0x40);
      *(unsigned int *)(iVar10 + 0xd90) = *(unsigned int *)(iVar1 + 0x58);
      *(unsigned int *)(iVar10 + 0xd94) = *(unsigned int *)(iVar1 + 0x70);
      puVar3 = (unsigned int *)fn_82F142B0(*(unsigned int *)(iVar10 + 0xd88),0);
      *(unsigned int *)(iVar10 + 0xd98) = *puVar3;
      puVar3 = (unsigned int *)fn_82F142B0(*(unsigned int *)(iVar10 + 0xd88),1);
      *(unsigned int *)(iVar10 + 0xd9c) = *puVar3;
      puVar3 = (unsigned int *)fn_82F142B0(*(unsigned int *)(iVar10 + 0xd88),2);
      iVar2 = *(int *)(iVar10 + 0xda4);
      uVar9 = uVar9 + 1;
      *(unsigned int *)(iVar10 + 0xda0) = *puVar3;
      *(unsigned int *)(iVar10 + 0xda8) = *(unsigned int *)(iVar2 + 0x40);
      *(unsigned int *)(iVar10 + 0xdac) = *(unsigned int *)(iVar2 + 0x58);
      *(unsigned int *)(iVar10 + 0xdb0) = *(unsigned int *)(iVar2 + 0x70);
    } while ((uVar9 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x658));
  }
  return 0;
}

