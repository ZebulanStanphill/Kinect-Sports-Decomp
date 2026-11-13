extern unsigned int *auStack_340;
extern unsigned int *auStack_350;
extern unsigned int *auStack_360;
extern unsigned int *auStack_368;
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern int fn_82EAA320();
extern int fn_82EBBDA0();
extern int fn_82F261D8();
extern int fn_82F26F98();
extern unsigned int iStack_37c;
extern unsigned int iStack_390;
extern unsigned int iStack_398;
extern unsigned int iStack_39c;
extern unsigned int iStack_3a0;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack_36c;
extern unsigned int uStack_370;
extern unsigned int uStack_374;
extern unsigned int uStack_378;
extern unsigned int uStack_380;
extern unsigned int uStack_384;
extern unsigned int uStack_388;
extern unsigned int uStack_38c;
extern unsigned int uStack_394;


void fn_82ECA110(int param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4, unsigned int param_5, unsigned int param_6, unsigned int param_7, unsigned __int64 unused_arg_8, unsigned __int64 unused_arg_9, unsigned __int64 unused_arg_10, int in_stack_00000064, unsigned int in_stack_0000006c, unsigned int in_stack_00000074, unsigned int in_stack_0000007c)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  int iVar17;
  unsigned __int64 uVar18;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned int uStack0000003c;
  unsigned int uStack00000044;
  int *in_stack_00000054;
  int *in_stack_0000005c;




  unsigned int *in_stack_000000bc;
  unsigned int *in_stack_000000c4;
  int *in_stack_000000cc;
  unsigned int *in_stack_000000d4;
  unsigned int *in_stack_000000dc;
  int *in_stack_000000e4;
  int iStack_3a0;
  int iStack_39c;
  int iStack_398;
  unsigned int uStack_394;
  int iStack_390;
  struct { unsigned int first; unsigned int second; } stack_pair_38c;

  unsigned int uStack_384;
  unsigned int uStack_380;
  int iStack_37c;
  unsigned int uStack_378;
  unsigned int uStack_374;
  unsigned int uStack_370;
  unsigned int uStack_36c;
  unsigned int auStack_368 [2];
  unsigned int auStack_360 [4];
  unsigned int auStack_350 [4];
  unsigned char auStack_340 [832];
  
  uStack_374 = in_stack_0000007c;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  uStack00000044 = param_7;
  fn_82EBBDA0(param_1);
  uVar14 = (unsigned __int64)uStack_370;
  uVar13 = (unsigned __int64)uStack_36c;
  uVar12 = (unsigned __int64)uStack_374;
  uVar11 = (unsigned __int64)uStack_378;
  if ((*(int *)(param_1 + 0x6d74) != 0) && (*(int *)(param_1 + 0x6d84) == 0)) {
    uStack_384 = uStack_378;
    stack_pair_38c.first = uStack_374;
    fn_82F261D8(param_1,&uStack_384,&stack_pair_38c.first,in_stack_0000006c,in_stack_00000074);
    (**(int (***)())(param_1 + 0x9b8))
              ((__int64)((int)stack_pair_38c.first >> 2) * (__int64)*(int *)(param_1 + 0x564) +
               (__int64)((int)uStack_384 >> 2) + (unsigned __int64)uStack00000034,
               *(int *)(param_1 + 0x564),auStack_340,0x10,uStack_384,stack_pair_38c.first,1,
               *(unsigned int *)(param_1 + 0x618));
    fn_82E9AC18(param_1,uStack0000001c,0x10,auStack_340,0x10,0x10,0x10,in_stack_00000064);
    auStack_360[0] = uStack_384;
    auStack_350[0] = stack_pair_38c.first;
    fn_82EAA320(param_1,auStack_360,auStack_350,&iStack_37c,auStack_368,1);
    uVar7 = auStack_368[0];
    iVar17 = iStack_37c;
    if ((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) {
      fn_82F26F98(param_1,uStack0000003c,*(unsigned int *)(param_1 + 0x568),auStack_340,8,
                        iStack_37c,auStack_368[0],0);
      fn_82E9AC18(param_1,uStack00000024,8,auStack_340,8,8,8,in_stack_00000064);
      iStack_3a0 = iStack_39c + iStack_3a0;
      iStack_390 = iStack_398 + iStack_390;
      stack_pair_38c.second = uStack_394 | stack_pair_38c.second;
    }
    uVar6 = stack_pair_38c.second;
    if ((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) {
      fn_82F26F98(param_1,uStack00000044,*(unsigned int *)(param_1 + 0x568),auStack_340,8,iVar17
                        ,uVar7,0);
      fn_82E9AC18(param_1,uStack0000002c,8,auStack_340,8,8,8,in_stack_00000064);
      iStack_390 = iStack_398 + iStack_390;
      stack_pair_38c.second = uStack_394 | uVar6;
      iStack_3a0 = iStack_39c + iStack_3a0;
    }
    uVar6 = stack_pair_38c.second;
    iVar17 = *in_stack_00000054;
    uVar18 = (unsigned __int64)(unsigned int)in_stack_00000054[3];
    uVar16 = (unsigned __int64)(unsigned int)in_stack_00000054[2];
    if (iVar17 != 0) {
      uVar1 = *(unsigned int *)(param_1 + 0xa38);
      uVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa30);
      uVar14 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa2c);
      uStack_380 = *(unsigned int *)(param_1 + 0xa34);
      uVar2 = in_stack_00000054[5];
      uVar3 = in_stack_00000054[4];
      iVar8 = fn_82E9B140(param_1,((uVar14 - uVar16) + uVar11 & (unsigned __int64)uStack_380) - uVar14,
                            ((uVar15 - uVar18) + uVar12 & (unsigned __int64)uVar1) - uVar15,stack_pair_38c.second,0);
      uVar12 = (unsigned __int64)uStack_374;
      uVar11 = (unsigned __int64)uStack_378;
      uVar13 = (unsigned __int64)uStack_380;
      uStack_380 = iVar8;
      iVar8 = fn_82E9B140(param_1,((uVar14 - uVar3) + uVar11 & uVar13) - uVar14,
                            ((uVar15 - uVar2) + uVar12 & (unsigned __int64)uVar1) - uVar15,uVar6,0);
      uVar13 = (unsigned __int64)uStack_36c;
      uVar14 = (unsigned __int64)uStack_370;
      if (iVar8 <= (int)uStack_380) {
        uVar16 = (unsigned __int64)uVar3;
        uVar18 = (unsigned __int64)uVar2;
      }
    }
    iVar8 = fn_82E9B140(param_1,((*(unsigned int *)(param_1 + 0xa2c) - uVar16) + uVar11 &
                                  (unsigned __int64)*(unsigned int *)(param_1 + 0xa34)) -
                                  (unsigned __int64)*(unsigned int *)(param_1 + 0xa2c),
                          ((*(unsigned int *)(param_1 + 0xa30) - uVar18) + uVar12 &
                          (unsigned __int64)*(unsigned int *)(param_1 + 0xa38)) -
                          (unsigned __int64)*(unsigned int *)(param_1 + 0xa30),uVar6,0);
    iVar8 = iVar8 + iStack_3a0;
    if (iVar17 != 0) {
      iVar8 = iVar8 + 1;
    }
    uStack_384 = (unsigned int)uVar13;
    stack_pair_38c.first = (unsigned int)uVar14;
    iVar8 = *(int *)(in_stack_00000064 + 0x6c) * iVar8 + iStack_390;
    fn_82F261D8(param_1,&uStack_384,&stack_pair_38c.first,in_stack_0000006c,in_stack_00000074);
    (**(int (***)())(param_1 + 0x9b8))
              ((__int64)((int)stack_pair_38c.first >> 2) * (__int64)*(int *)(param_1 + 0x564) +
               (__int64)((int)uStack_384 >> 2) + (unsigned __int64)uStack00000034,
               *(int *)(param_1 + 0x564),auStack_340,0x10,uStack_384,stack_pair_38c.first,1,
               *(unsigned int *)(param_1 + 0x618));
    fn_82E9AC18(param_1,uStack0000001c,0x10,auStack_340,0x10,0x10,0x10,in_stack_00000064);
    auStack_360[0] = uStack_384;
    auStack_350[0] = stack_pair_38c.first;
    fn_82EAA320(param_1,auStack_360,auStack_350,&iStack_37c,auStack_368,1);
    uVar6 = stack_pair_38c.second;
    iVar17 = iVar8;
    if ((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) {
      fn_82F26F98(param_1,uStack0000003c,*(unsigned int *)(param_1 + 0x568),auStack_340,8,
                        iStack_37c,auStack_368[0],0);
      fn_82E9AC18(param_1,uStack00000024,8,auStack_340,8,8,8,in_stack_00000064);
      iStack_390 = iStack_398 + iStack_390;
      uVar6 = uStack_394 | stack_pair_38c.second;
      iVar17 = iStack_39c + iVar8;
    }
    if ((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) {
      fn_82F26F98(param_1,uStack00000044,*(unsigned int *)(param_1 + 0x568),auStack_340,8,
                        iStack_37c,auStack_368[0],0);
      fn_82E9AC18(param_1,uStack0000002c,8,auStack_340,8,8,8,in_stack_00000064);
      iVar17 = iStack_39c + iVar17;
      iStack_390 = iStack_398 + iStack_390;
      uVar6 = uStack_394 | uVar6;
    }
    iVar4 = *in_stack_0000005c;
    uVar18 = (unsigned __int64)(unsigned int)in_stack_0000005c[3];
    uVar16 = (unsigned __int64)(unsigned int)in_stack_0000005c[2];
    if (iVar4 != 0) {
      uVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa30);
      uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa2c);
      uVar1 = *(unsigned int *)(param_1 + 0xa38);
      uVar2 = *(unsigned int *)(param_1 + 0xa34);
      uVar3 = in_stack_0000005c[5];
      uVar5 = in_stack_0000005c[4];
      iVar9 = fn_82E9B140(param_1,((uVar11 - uVar16) + uVar13 & (unsigned __int64)uVar2) - uVar11,
                            ((uVar15 - uVar18) + uVar14 & (unsigned __int64)uVar1) - uVar15,uVar6,0);
      iVar10 = fn_82E9B140(param_1,((uVar11 - uVar5) + uVar13 & (unsigned __int64)uVar2) - uVar11,
                             ((uVar15 - uVar3) + uVar14 & (unsigned __int64)uVar1) - uVar15,uVar6,0);
      uVar11 = (unsigned __int64)uStack_378;
      if (iVar10 <= iVar9) {
        uVar16 = (unsigned __int64)uVar5;
        uVar18 = (unsigned __int64)uVar3;
      }
    }
    iVar9 = fn_82E9B140(param_1,((*(unsigned int *)(param_1 + 0xa2c) - uVar16) + uVar13 &
                                  (unsigned __int64)*(unsigned int *)(param_1 + 0xa34)) -
                                  (unsigned __int64)*(unsigned int *)(param_1 + 0xa2c),
                          ((*(unsigned int *)(param_1 + 0xa30) - uVar18) + uVar14 &
                          (unsigned __int64)*(unsigned int *)(param_1 + 0xa38)) -
                          (unsigned __int64)*(unsigned int *)(param_1 + 0xa30),uVar6,0);
    iVar9 = iVar9 + iVar17;
    if (iVar4 != 0) {
      iVar9 = iVar9 + 1;
    }
    uStack_380 = *(int *)(in_stack_00000064 + 0x6c) * iVar9 + iStack_390;
    iStack_37c = iVar8;
    uStack_378 = (unsigned int)uVar11;
  }
  *in_stack_000000bc = uStack_378;
  *in_stack_000000c4 = (int)uVar12;
  *in_stack_000000cc = iStack_37c;
  *in_stack_000000d4 = (int)uVar13;
  *in_stack_000000dc = (int)uVar14;
  *in_stack_000000e4 = uStack_380;
  return;
}

