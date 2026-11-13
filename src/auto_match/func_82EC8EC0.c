extern unsigned int *auStack_340;
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern int fn_82EAE4B0();
extern int fn_82F261D8();
extern unsigned int iStack00000044;
extern unsigned int iStack_358;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000004c;
extern unsigned int uStack_348;
extern unsigned int uStack_34c;
extern unsigned int uStack_350;
extern unsigned int uStack_354;
extern unsigned int uStack_35c;
extern unsigned int uStack_360;
extern unsigned int uStack_364;
extern unsigned int uStack_368;
extern unsigned int uStack_36c;
extern unsigned int uStack_370;


void fn_82EC8EC0(int param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4,int *param_5,
                  int *param_6,int param_7,unsigned int param_8)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int iVar10;
  int iVar11;
  unsigned int uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  int *piStack0000003c;
  int iStack00000044;
  unsigned int uStack0000004c;
  unsigned int in_stack_00000054;
  unsigned int *in_stack_0000009c;
  unsigned int *in_stack_000000a4;
  unsigned int *in_stack_000000ac;
  unsigned int *in_stack_000000b4;
  unsigned int *in_stack_000000bc;
  int *in_stack_000000c4;
  unsigned int uStack_370;
  unsigned int uStack_36c;
  unsigned int uStack_368;
  unsigned int uStack_364;
  unsigned int uStack_360;
  unsigned int uStack_35c;
  int iStack_358;
  unsigned int uStack_354;
  unsigned int uStack_350;
  unsigned int uStack_34c;
  unsigned int uStack_348;
  unsigned char auStack_340 [832];
  
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  piStack0000003c = param_6;
  iStack00000044 = param_7;
  uStack0000004c = param_8;
  fn_82EAE4B0(param_1);
  uVar8 = uStack0000004c;
  uVar16 = (unsigned __int64)uStack_350;
  uVar13 = (unsigned __int64)uStack_354;
  if ((*(int *)(param_1 + 0x6d74) != 0) && (*(int *)(param_1 + 0x6d84) == 0)) {
    uStack_370 = uStack_34c;
    uStack_364 = uStack_348;
    fn_82F261D8(param_1,&uStack_370,&uStack_364,uStack0000004c,in_stack_00000054);
    uVar15 = (unsigned __int64)uStack00000024;
    (**(int (***)())(param_1 + 0x9b8))
              ((__int64)((int)uStack_364 >> 2) * (__int64)*(int *)(param_1 + 0x564) +
               (__int64)((int)uStack_370 >> 2) + uVar15,*(int *)(param_1 + 0x564),auStack_340,0x10,
               uStack_370,uStack_364,1,*(unsigned int *)(param_1 + 0x618));
    iVar7 = iStack00000044;
    uVar6 = uStack0000001c;
    fn_82E9AC18(param_1,uStack0000001c,0x10,auStack_340,0x10,0x10,0x10,iStack00000044);
    uVar9 = uStack_35c;
    iVar1 = *param_5;
    uVar18 = (unsigned __int64)(unsigned int)param_5[3];
    uVar17 = (unsigned __int64)(unsigned int)param_5[2];
    if (iVar1 != 0) {
      uStack_368 = *(unsigned int *)(param_1 + 0xa38);
      uVar14 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa30);
      uVar16 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa2c);
      uStack_36c = *(unsigned int *)(param_1 + 0xa34);
      uVar12 = param_5[5];
      uVar2 = param_5[4];
      iVar10 = fn_82E9B140(param_1,((uVar16 - uVar17) + (unsigned __int64)uStack_34c &
                                     (unsigned __int64)uStack_36c) - uVar16,
                             ((uVar14 - uVar18) + (unsigned __int64)uStack_348 & (unsigned __int64)uStack_368) -
                             uVar14,uStack_35c,0);
      uVar13 = (unsigned __int64)uStack_36c;
      uStack_36c = iVar10;
      iVar10 = fn_82E9B140(param_1,((uVar16 - uVar2) + (unsigned __int64)uStack_34c & uVar13) - uVar16,
                             ((uVar14 - uVar12) + (unsigned __int64)uStack_348 & (unsigned __int64)uStack_368) -
                             uVar14,uVar9,0);
      uVar13 = (unsigned __int64)uStack_354;
      if (iVar10 <= (int)uStack_36c) {
        uVar17 = (unsigned __int64)uVar2;
        uVar18 = (unsigned __int64)uVar12;
      }
      uVar16 = (unsigned __int64)uStack_350;
    }
    iVar10 = fn_82E9B140(param_1,((*(unsigned int *)(param_1 + 0xa2c) - uVar17) + (unsigned __int64)uStack_34c &
                                   (unsigned __int64)*(unsigned int *)(param_1 + 0xa34)) -
                                   (unsigned __int64)*(unsigned int *)(param_1 + 0xa2c),
                           ((*(unsigned int *)(param_1 + 0xa30) - uVar18) + (unsigned __int64)uStack_348 &
                           (unsigned __int64)*(unsigned int *)(param_1 + 0xa38)) -
                           (unsigned __int64)*(unsigned int *)(param_1 + 0xa30),uVar9,0);
    iVar10 = iVar10 + uStack_360;
    if (iVar1 != 0) {
      iVar10 = iVar10 + 1;
    }
    uStack_370 = (unsigned int)uVar13;
    uStack_364 = (unsigned int)uVar16;
    uVar12 = *(int *)(iVar7 + 0x6c) * iVar10 + iStack_358;
    uStack_360 = uVar12;
    fn_82F261D8(param_1,&uStack_370,&uStack_364,uVar8,in_stack_00000054);
    (**(int (***)())(param_1 + 0x9b8))
              ((__int64)((int)uStack_364 >> 2) * (__int64)*(int *)(param_1 + 0x564) +
               (__int64)((int)uStack_370 >> 2) + uVar15,*(int *)(param_1 + 0x564),auStack_340,0x10,
               uStack_370,uStack_364,1,*(unsigned int *)(param_1 + 0x618));
    fn_82E9AC18(param_1,uVar6,0x10,auStack_340,0x10,0x10,0x10,iVar7);
    iVar1 = *piStack0000003c;
    uVar18 = (unsigned __int64)(unsigned int)piStack0000003c[3];
    uVar17 = (unsigned __int64)(unsigned int)piStack0000003c[2];
    if (iVar1 != 0) {
      uVar14 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa30);
      uVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa2c);
      uVar2 = *(unsigned int *)(param_1 + 0xa38);
      uVar3 = *(unsigned int *)(param_1 + 0xa34);
      uVar4 = piStack0000003c[5];
      uVar5 = piStack0000003c[4];
      iVar10 = fn_82E9B140(param_1,((uVar15 - uVar17) + uVar13 & (unsigned __int64)uVar3) - uVar15,
                             ((uVar14 - uVar18) + uVar16 & (unsigned __int64)uVar2) - uVar14,uStack_35c,0);
      iVar11 = fn_82E9B140(param_1,((uVar15 - uVar5) + uVar13 & (unsigned __int64)uVar3) - uVar15,
                             ((uVar14 - uVar4) + uVar16 & (unsigned __int64)uVar2) - uVar14,uStack_35c,0);
      if (iVar11 <= iVar10) {
        uVar17 = (unsigned __int64)uVar5;
        uVar18 = (unsigned __int64)uVar4;
      }
    }
    iVar10 = fn_82E9B140(param_1,((*(unsigned int *)(param_1 + 0xa2c) - uVar17) + uVar13 &
                                   (unsigned __int64)*(unsigned int *)(param_1 + 0xa34)) -
                                   (unsigned __int64)*(unsigned int *)(param_1 + 0xa2c),
                           ((*(unsigned int *)(param_1 + 0xa30) - uVar18) + uVar16 &
                           (unsigned __int64)*(unsigned int *)(param_1 + 0xa38)) -
                           (unsigned __int64)*(unsigned int *)(param_1 + 0xa30),uStack_35c,0);
    iVar10 = iVar10 + uStack_360;
    if (iVar1 != 0) {
      iVar10 = iVar10 + 1;
    }
    uStack_36c = *(int *)(iVar7 + 0x6c) * iVar10 + iStack_358;
    uStack_368 = uVar12;
  }
  *in_stack_0000009c = uStack_34c;
  *in_stack_000000a4 = uStack_348;
  *in_stack_000000ac = uStack_368;
  *in_stack_000000b4 = (int)uVar13;
  *in_stack_000000bc = (int)uVar16;
  *in_stack_000000c4 = uStack_36c;
  return;
}

