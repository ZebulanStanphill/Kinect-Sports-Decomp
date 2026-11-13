extern unsigned int *auStack_90;
extern int fn_8265C940();
extern int fn_8265C940();
extern int fn_82F142B0();
extern int fn_82F143B0();
extern int fn_82F17EB8();
extern int fn_8265C940();
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


/* WARNING: Removing unreachable block (ram,0x82f10238) */
/* WARNING: Removing unreachable block (ram,0x82f10300) */

unsigned __int64 fn_82F10078(int param_1)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  int *piVar8;
  unsigned int auStack_90;
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned int uStack_78;
  unsigned int uStack_74;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  unsigned int uStack_64;

  if (*(int *)(param_1 + 0x658) != 0) {
    piVar8 = (int *)(param_1 + 0x824);
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x658),0);
      piVar8[0xeb] = (int)(((__int64)(int)uVar7 * (__int64)*(int *)(param_1 + 0x550) & 0xffffffffU
                           ) / (unsigned __int64)*(unsigned int *)(param_1 + 0x658));
      trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x658),0);
      piVar8[0xec] = (int)(((__int64)(int)uVar5 * (__int64)*(int *)(param_1 + 0x550) & 0xffffffffU
                           ) / (unsigned __int64)*(unsigned int *)(param_1 + 0x658));
      trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x658),0);
      piVar8[0xed] = (int)(((__int64)*(int *)(param_1 + 0x55c) * (__int64)(int)uVar7 & 0xffffffffU
                           ) / (unsigned __int64)*(unsigned int *)(param_1 + 0x658));
      trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x658),0);
      piVar8[0xee] = (int)(((__int64)(int)uVar5 * (__int64)*(int *)(param_1 + 0x55c) & 0xffffffffU
                           ) / (unsigned __int64)*(unsigned int *)(param_1 + 0x658));
      trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x658),0);
      piVar8[0xef] = (int)(((__int64)*(int *)(param_1 + 800) * (__int64)(int)uVar7 & 0xffffffffU)
                          / (unsigned __int64)*(unsigned int *)(param_1 + 0x658));
      trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x658),0);
      piVar8[0xf0] = (int)(((__int64)(int)uVar5 * (__int64)*(int *)(param_1 + 800) & 0xffffffffU)
                          / (unsigned __int64)*(unsigned int *)(param_1 + 0x658));
      trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x658),0);
      piVar8[0xf1] = (int)(((__int64)(int)(uVar7 * *(int *)(param_1 + 0x564)) *
                            (__int64)*(int *)(param_1 + 0x550) & 0xffffffffU) /
                          (unsigned __int64)*(unsigned int *)(param_1 + 0x658)) + *(int *)(param_1 + 0x574);
      trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x658),0);
      piVar8 = piVar8 + 0xf2;
      *piVar8 = (int)(((__int64)(int)(*(int *)(param_1 + 0x55c) * uVar7) *
                       (__int64)*(int *)(param_1 + 0x568) & 0xffffffffU) /
                     (unsigned __int64)*(unsigned int *)(param_1 + 0x658)) + *(int *)(param_1 + 0x578);
      uVar7 = uVar5;
    } while (uVar5 < *(unsigned int *)(param_1 + 0x658));
  }
  iVar3 = *(int *)(param_1 + 0x304);
  *(int *)(param_1 + 0x310) = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x574);
  *(int *)(param_1 + 0x4a94) = *(int *)(iVar3 + 0x40) + *(int *)(param_1 + 0x574);
  *(int *)(param_1 + 0x4a98) = *(int *)(iVar3 + 0x58) + *(int *)(param_1 + 0x578);
  auStack_90 = 0;
  stack_pair_70.first = 0;
  stack_pair_70.second = 0;
  *(int *)(param_1 + 0x4a9c) = *(int *)(iVar3 + 0x70) + *(int *)(param_1 + 0x578);
  uStack_68 = 0x10;
  uStack_64 = 0x10;
  stack_pair_80.first = 0;
  stack_pair_80.second = 0;
  uStack_78 = 8;
  uStack_74 = 8;
  if (*(int *)(param_1 + 0x658) == 0) {
    uVar1 = 0;
  }
  else {
    *(unsigned int *)(param_1 + 0xc28) = 0;
    *(unsigned int *)(param_1 + 0xc30) = 0;
    uVar7 = *(unsigned int *)(param_1 + 0x658);
    if (((unsigned __int64)uVar7 - 1 & 0xffffffff) == 0) {
      *(unsigned int *)(param_1 + 0xc2c) = *(unsigned int *)(param_1 + 0x2d4);
      *(unsigned int *)(param_1 + 0xc34) = *(unsigned int *)(param_1 + 0x2d4);
      *(unsigned int *)(param_1 + 0xe2c) = *(unsigned int *)(param_1 + 0x2d0);
    }
    else {
      uVar5 = *(unsigned int *)(param_1 + 0x2d4) / uVar7;
      trapWord(6,(unsigned __int64)uVar7,0);
      *(unsigned int *)(param_1 + 0xc2c) = uVar5;
      *(unsigned int *)(param_1 + 0xc34) = uVar5 & 0xfffffffe;
      trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x658),0);
      *(unsigned int *)(param_1 + 0xe2c) = *(unsigned int *)(param_1 + 0x2d0) / *(unsigned int *)(param_1 + 0x658);
    }
    iVar3 = *(int *)(param_1 + 0xc28);
    *(int *)(param_1 + 0xc38) = iVar3 << 4;
    *(int *)(param_1 + 0xc3c) = iVar3 * *(int *)(param_1 + 0x2d0);
    *(int *)(param_1 + 0xc40) = iVar3 * *(int *)(param_1 + 0x2d0);
    iVar6 = iVar3 * *(int *)(param_1 + 0x57c);
    *(int *)(param_1 + 0xd7c) = iVar6;
    *(int *)(param_1 + 0xd80) = iVar3 * *(int *)(param_1 + 0x580);
    *(int *)(param_1 + 0xd74) = iVar6 + *(int *)(param_1 + 0x310);
    puVar2 = (unsigned int *)fn_8265C940(0x94,0x248c8000);
    if (puVar2 == (unsigned int *)0x0) {
      puVar2 = (unsigned int *)0x0;
    }
    else {
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0xffffffff;
      puVar2[2] = 0xffffffff;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[7] = 0xffffffff;
      puVar2[6] = 0xffffffff;
      puVar2[0x13] = 0;
      puVar2[0x12] = 0;
      puVar2[0x15] = 0xffffffff;
      puVar2[0x14] = 0xffffffff;
      puVar2[0x19] = 0;
      puVar2[0x18] = 0;
      puVar2[0x1b] = 0xffffffff;
      puVar2[0x1a] = 0xffffffff;
      puVar2[0x1f] = 0;
      puVar2[0x1e] = 0;
      puVar2[0x21] = 0xffffffff;
      puVar2[0x20] = 0xffffffff;
    }
    *(unsigned int **)(param_1 + 0xd84) = puVar2;
    if ((puVar2 != (unsigned int *)0x0) &&
       (fn_82F17EB8(puVar2,&auStack_90,&stack_pair_70.first,&stack_pair_80.first,0,0,0), auStack_90 == 0)) {
      iVar3 = *(int *)(param_1 + 0xd84);
      *(unsigned int *)(param_1 + 0xd8c) = *(unsigned int *)(iVar3 + 0x40);
      *(unsigned int *)(param_1 + 0xd90) = *(unsigned int *)(iVar3 + 0x58);
      *(unsigned int *)(param_1 + 0xd94) = *(unsigned int *)(iVar3 + 0x70);
      uVar1 = fn_8265C940(0x44,0x248c8000);
      if ((uVar1 & 0xffffffff) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = fn_82F143B0(uVar1,&auStack_90,&stack_pair_70.first,&stack_pair_80.first);
      }
      *(int *)(param_1 + 0xd88) = (int)uVar1;
      if (((uVar1 & 0xffffffff) != 0) && (auStack_90 == 0)) {
        puVar2 = (unsigned int *)fn_82F142B0(uVar1,0);
        *(unsigned int *)(param_1 + 0xd98) = *puVar2;
        puVar2 = (unsigned int *)fn_82F142B0(*(unsigned int *)(param_1 + 0xd88),1);
        *(unsigned int *)(param_1 + 0xd9c) = *puVar2;
        puVar2 = (unsigned int *)fn_82F142B0(*(unsigned int *)(param_1 + 0xd88),2);
        *(unsigned int *)(param_1 + 0xda0) = *puVar2;
        puVar2 = (unsigned int *)fn_8265C940(0x94,0x248c8000);
        if (puVar2 == (unsigned int *)0x0) {
          puVar2 = (unsigned int *)0x0;
        }
        else {
          puVar2[1] = 0;
          *puVar2 = 0;
          puVar2[3] = 0xffffffff;
          puVar2[2] = 0xffffffff;
          puVar2[5] = 0;
          puVar2[4] = 0;
          puVar2[7] = 0xffffffff;
          puVar2[6] = 0xffffffff;
          puVar2[0x13] = 0;
          puVar2[0x12] = 0;
          puVar2[0x15] = 0xffffffff;
          puVar2[0x14] = 0xffffffff;
          puVar2[0x19] = 0;
          puVar2[0x18] = 0;
          puVar2[0x1b] = 0xffffffff;
          puVar2[0x1a] = 0xffffffff;
          puVar2[0x1f] = 0;
          puVar2[0x1e] = 0;
          puVar2[0x21] = 0xffffffff;
          puVar2[0x20] = 0xffffffff;
        }
        *(unsigned int **)(param_1 + 0xda4) = puVar2;
        if ((puVar2 != (unsigned int *)0x0) &&
           (fn_82F17EB8(puVar2,&auStack_90,&stack_pair_70.first,&stack_pair_80.first,0,0,0), auStack_90 == 0)) {
          iVar3 = *(int *)(param_1 + 0xda4);
          *(unsigned int *)(param_1 + 0xda8) = *(unsigned int *)(iVar3 + 0x40);
          *(unsigned int *)(param_1 + 0xdac) = *(unsigned int *)(iVar3 + 0x58);
          *(unsigned int *)(param_1 + 0xdb0) = *(unsigned int *)(iVar3 + 0x70);
          iVar3 = fn_8265C940(0x4f4,0x248c8000);
          *(int *)(param_1 + 0xbcc) = iVar3;
          if (iVar3 != 0) {
            uVar4 = fn_8265C940(0x80,0x248c8000);
            *(unsigned int *)(param_1 + 0xe08) = uVar4;
            iVar3 = fn_8265C940(0x80,0x248c8000);
            *(int *)(param_1 + 0xe0c) = iVar3;
            if ((*(int *)(param_1 + 0xe08) != 0) && (iVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
              fn_8265C940(*(int *)(param_1 + 0xe08),0,0x80);
            }
          }
        }
      }
    }
    fn_8265C940(param_1);
    uVar1 = (unsigned __int64)auStack_90;
    if (auStack_90 == 0) {
      uVar1 = 0xfffffffffffffffd;
    }
  }
  return uVar1;
}
