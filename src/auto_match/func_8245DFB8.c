extern unsigned int *auStack_80;
extern unsigned int *auStack_84;
extern unsigned int *auStack_88;
extern unsigned int *auStack_8c;
extern int fn_8245E230();
extern int fn_8245E2C8();
extern int fn_82558B08();
extern int fn_8262FBD8();
extern int fn_8263B758();
extern int fn_8263BDD8();
extern int fn_82A1DDC0();
extern int fn_82A1E740();
extern int fn_82A1E7D8();
extern int fn_82E23130();
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int uStack_90;


__int64 fn_8245DFB8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  __int64 lVar5;
  int iVar6;
  unsigned int uStack_90;
  unsigned char auStack_8c [4];
  unsigned char auStack_88 [4];
  unsigned char auStack_84 [4];
  unsigned char auStack_80 [24];
  int iStack_68;
  int iStack_64;
  
  iVar3 = param_1 + 0xe4;
  RtlEnterCriticalSection(iVar3);
  iVar2 = *(int *)(param_1 + 0x48) * 0x1c + param_1;
  lVar5 = 0;
  iVar6 = iVar2 + 0x78;
  if (*(int *)(param_1 + 0x50) == 0) {
    if (*(int *)(param_1 + 0xe0) != 0) {
      iVar2 = *(int *)(param_1 + 0xe0) + -1;
      *(int *)(param_1 + 0xe0) = iVar2;
      *(unsigned int *)(param_1 + 0x50) = (unsigned int)LZCOUNT(iVar2) >> 5;
    }
    lVar5 = 0x15;
  }
  else {
    if (*(int *)(iVar2 + 0x8c) == 0x12345678) {
      uVar4 = 0;
      iVar1 = fn_82A1E740(iVar6,&uStack_90,0);
      if (iVar1 != 0) {
        do {
          iVar1 = fn_82A1E740(param_1 + 0x5c,&uStack_90,0);
          if (iVar1 == 0) {
            fn_8245E230(param_1);
            lVar5 = 0x65b;
            break;
          }
          uVar4 = uVar4 + 1;
          if (0x42 < uVar4) break;
          fn_82558B08();
          iVar1 = fn_82A1E740(iVar6,&uStack_90,0);
        } while (iVar1 != 0);
      }
      if (*(int *)(iVar2 + 0x90) == 0) {
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      }
      fn_82A1E7D8(*(unsigned int *)(iVar2 + 0x84));
      *(unsigned int *)(iVar2 + 0x8c) = 0;
      if (lVar5 != 0) goto LAB_8245e210;
    }
    fn_8245E2C8(param_1,param_2,
                      *(unsigned int *)((*(int *)(param_1 + 0x48) + 0xc) * 4 + param_1));
    if (*(int *)(param_1 + 0x28) == 0) {
      iVar2 = *(int *)(param_1 + 0x48) + 1;
      *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x2c);
      *(unsigned int *)(param_1 + 0x2c) =
           *(unsigned int *)((*(int *)(param_1 + 0x48) + 0xc) * 4 + param_1);
    }
    else {
      fn_8263BDD8(*(int *)(param_1 + 0x28),0,0,0x10,&uStack_90,auStack_84,auStack_88,
                        auStack_8c);
      fn_8263B758(*(unsigned int *)(param_1 + 0x28),0,auStack_80);
      fn_82A1DDC0(*(unsigned int *)((*(int *)(param_1 + 0x48) + 0xf) * 4 + param_1),uStack_90,
                        ((__int64)iStack_64 * (__int64)iStack_68 & 0x3fffffffU) << 2);
      iVar1 = *(int *)(param_1 + 0x28);
      fn_8262FBD8(iVar1,*(unsigned int *)(iVar1 + 0x20) & 0xfffff000,
                        *(unsigned int *)(iVar1 + 0x30) & 0xfffff000);
      *(unsigned int *)(iVar2 + 0x8c) = 0x12345678;
      lVar5 = fn_82E23130(param_1 + 4,
                              *(unsigned int *)((*(int *)(param_1 + 0x48) + 0xf) * 4 + param_1),
                              param_3,param_4,iVar6);
      *(unsigned int *)(param_1 + 0x28) = 0;
      if (lVar5 != 0) {
        fn_8245E230(param_1);
        *(unsigned int *)(iVar2 + 0x8c) = 0;
        goto LAB_8245e210;
      }
      *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x2c);
      *(unsigned int *)(param_1 + 0x2c) =
           *(unsigned int *)((*(int *)(param_1 + 0x48) + 0xc) * 4 + param_1);
      iVar2 = (*(int *)(param_1 + 0x48) + 1) % 3;
    }
    *(int *)(param_1 + 0x48) = iVar2;
  }
LAB_8245e210:
  if (iVar3 != 0) {
    RtlLeaveCriticalSection(iVar3);
  }
  return lVar5;
}

