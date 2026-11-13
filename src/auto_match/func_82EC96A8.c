extern unsigned int *auStack_340;
extern unsigned int *auStack_350;
extern unsigned int *auStack_360;
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern int fn_82EAA320();
extern int fn_82EB71E8();
extern int fn_82EBF358();
extern int fn_82F261D8();
extern int fn_82F26F98();
extern unsigned int iStack_368;
extern unsigned int iStack_370;
extern unsigned int iStack_378;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack_364;
extern unsigned int uStack_36c;
extern unsigned int uStack_374;
extern unsigned int uStack_37c;
extern unsigned int uStack_380;


void fn_82EC96A8(int param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4, unsigned int param_5, unsigned int param_6, unsigned int param_7, unsigned __int64 unused_arg_8, unsigned __int64 unused_arg_9, int in_stack_0000005c, unsigned int in_stack_00000064, unsigned int in_stack_0000006c, int in_stack_00000074, int in_stack_0000007c, unsigned __int64 unused_arg_15, unsigned __int64 unused_arg_16, unsigned __int64 unused_arg_17, int in_stack_0000009c, int in_stack_000000a4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int iVar9;
  int iVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  int iVar15;
  unsigned __int64 uVar16;
  int iVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned int uStack0000003c;
  unsigned int uStack00000044;
  int *in_stack_00000054;







  unsigned int *in_stack_000000c4;
  unsigned int *in_stack_000000cc;
  int *in_stack_000000d4;
  unsigned int uStack_380;
  struct { unsigned int first; int second; } stack_pair_37c;

  unsigned int uStack_374;
  int iStack_370;
  unsigned int uStack_36c;
  int iStack_368;
  unsigned int uStack_364;
  unsigned int auStack_360 [4];
  unsigned int auStack_350 [4];
  unsigned char auStack_340 [832];
  
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  uStack00000044 = param_7;
  if (in_stack_0000009c == 0) {
    fn_82EB71E8();
  }
  else {
    stack_pair_37c.second = in_stack_0000007c;
    iStack_370 = in_stack_00000074;
    fn_82EBF358();
  }
  uVar8 = stack_pair_37c.first;
  uVar7 = uStack_380;
  uVar14 = (unsigned __int64)stack_pair_37c.first;
  uVar13 = (unsigned __int64)uStack_380;
  if ((*(int *)(param_1 + 0x6d74) != 0) && (*(int *)(param_1 + 0x6d84) == 0)) {
    uStack_36c = uStack_380;
    uStack_374 = stack_pair_37c.first;
    fn_82F261D8(param_1,&uStack_36c,&uStack_374,in_stack_00000064,in_stack_0000006c);
    lVar11 = (__int64)((int)uStack_374 >> 2) * (__int64)*(int *)(param_1 + 0x564);
    if (in_stack_000000a4 == 1) {
      (**(int (***)())(param_1 + 0x9b8))(lVar11 + ((int)uStack_36c >> 2) + (unsigned __int64)uStack00000034);
    }
    else {
      (**(int (***)())(param_1 + 0x9c0))
                (lVar11 + ((int)uStack_36c >> 2) + (unsigned __int64)uStack00000034,
                 *(int *)(param_1 + 0x564),auStack_340,0x10,uStack_36c,uStack_374,in_stack_000000a4,
                 *(unsigned int *)(param_1 + 0x618));
    }
    fn_82E9AC18(param_1,uStack0000001c,0x10,auStack_340,0x10,0x10,0x10,in_stack_0000005c);
    auStack_350[0] = uStack_36c;
    auStack_360[0] = uStack_374;
    fn_82EAA320(param_1,auStack_350,auStack_360,&uStack_380,&stack_pair_37c.first,1);
    uVar3 = stack_pair_37c.first;
    uVar2 = uStack_380;
    iVar15 = iStack_370;
    uVar6 = uStack_364;
    iVar17 = stack_pair_37c.second;
    if ((*(unsigned int *)(param_1 + 0x6dc4) & 1) != 0) {
      fn_82F26F98(param_1,uStack0000003c,*(unsigned int *)(param_1 + 0x568),auStack_340,8,
                        uStack_380,stack_pair_37c.first,0);
      fn_82E9AC18(param_1,uStack00000024,8,auStack_340,8,8,8,in_stack_0000005c);
      iVar15 = uStack_380 + iStack_370;
      uVar6 = stack_pair_37c.first | uStack_364;
      iVar17 = iStack_368 + stack_pair_37c.second;
    }
    if ((*(unsigned int *)(param_1 + 0x6dc4) & 2) != 0) {
      fn_82F26F98(param_1,uStack00000044,*(unsigned int *)(param_1 + 0x568),auStack_340,8,uVar2,
                        uVar3,0);
      fn_82E9AC18(param_1,uStack0000002c,8,auStack_340,8,8,8,in_stack_0000005c);
      iVar17 = iStack_368 + iVar17;
      iVar15 = uStack_380 + iVar15;
      uVar6 = stack_pair_37c.first | uVar6;
    }
    iVar1 = *in_stack_00000054;
    uVar19 = (unsigned __int64)(unsigned int)in_stack_00000054[3];
    uVar18 = (unsigned __int64)(unsigned int)in_stack_00000054[2];
    if (iVar1 != 0) {
      uVar16 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa30);
      uVar12 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa2c);
      uVar2 = *(unsigned int *)(param_1 + 0xa38);
      uVar3 = *(unsigned int *)(param_1 + 0xa34);
      uVar4 = in_stack_00000054[5];
      uVar5 = in_stack_00000054[4];
      iVar9 = fn_82E9B140(param_1,((uVar12 - uVar18) + uVar13 & (unsigned __int64)uVar3) - uVar12,
                            ((uVar16 - uVar19) + uVar14 & (unsigned __int64)uVar2) - uVar16,uVar6,0);
      iVar10 = fn_82E9B140(param_1,((uVar12 - uVar5) + uVar13 & (unsigned __int64)uVar3) - uVar12,
                             ((uVar16 - uVar4) + uVar14 & (unsigned __int64)uVar2) - uVar16,uVar6,0);
      if (iVar10 <= iVar9) {
        uVar18 = (unsigned __int64)uVar5;
        uVar19 = (unsigned __int64)uVar4;
      }
    }
    iVar9 = fn_82E9B140(param_1,((*(unsigned int *)(param_1 + 0xa2c) - uVar18) + uVar13 &
                                  (unsigned __int64)*(unsigned int *)(param_1 + 0xa34)) -
                                  (unsigned __int64)*(unsigned int *)(param_1 + 0xa2c),
                          ((*(unsigned int *)(param_1 + 0xa30) - uVar19) + uVar14 &
                          (unsigned __int64)*(unsigned int *)(param_1 + 0xa38)) -
                          (unsigned __int64)*(unsigned int *)(param_1 + 0xa30),uVar6,in_stack_0000009c);
    iVar9 = iVar9 + iVar17;
    if (iVar1 != 0) {
      iVar9 = iVar9 + 1;
    }
    stack_pair_37c.second = *(int *)(in_stack_0000005c + 0x6c) * iVar9 + iVar15;
  }
  *in_stack_000000c4 = uVar7;
  *in_stack_000000cc = uVar8;
  *in_stack_000000d4 = stack_pair_37c.second;
  return;
}

