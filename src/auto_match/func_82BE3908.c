extern unsigned int *auStack_60;
extern int fn_82BE2530();
extern int fn_82BE2E60();
extern int fn_82BE3328();
extern int fn_82BE5240();
extern int fn_82F64068();
extern unsigned int uStack_68;


__int64 fn_82BE3908(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 *puVar3;
  unsigned int uVar4;
  __int64 lVar5;
  __int64 lVar6;
  unsigned __int64 uStack_68;
  unsigned char auStack_60 [72];
  
  puVar3 = &uStack_68;
  lVar5 = 0;
  lVar6 = 8;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 5) {
code_r0x82be39a8:
    lVar5 = fn_82BE2530(param_1);
    *(unsigned int *)(param_1 + 0x10) = 7;
    if (lVar5 == 0) {
      return 0;
    }
    uVar2 = 0xffffffff820e8f68;
  }
  else {
    if (iVar1 == 6) {
      fn_82BE2E60(0,0);
      return 200;
    }
    if (iVar1 == 8) goto code_r0x82be39a8;
    if (iVar1 != 10) {
      if (iVar1 != 0xc) {
        return 0;
      }
      uVar4 = 2;
      goto code_r0x82be39f4;
    }
    lVar5 = fn_82BE3328(param_1);
    *(unsigned int *)(param_1 + 0x10) = 9;
    if (lVar5 == 0) {
      return 0;
    }
    uVar2 = 0xffffffff820e8f88;
  }
  fn_82F64068(auStack_60,0x40,0x3f,uVar2,lVar5);
  fn_82BE5240(param_1,lVar5,0xffffffff82196582);
  uVar4 = 0;
code_r0x82be39f4:
  *(unsigned int *)(param_1 + 0x10) = uVar4;
  return lVar5;
}

