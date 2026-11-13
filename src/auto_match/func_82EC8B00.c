extern unsigned int *auStack_340;
extern unsigned int *auStack_358;
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern int fn_82EAC2B8();
extern int fn_82EB3118();
extern int fn_82F261D8();
extern unsigned int iStack0000003c;
extern unsigned int iStack_360;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;
extern unsigned int uStack_348;
extern unsigned int uStack_35c;


void fn_82EC8B00(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3,unsigned __int64 param_4,
                  int *param_5,int param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  unsigned int uStack0000001c;
  int iStack0000003c;
  unsigned int uStack00000044;
  unsigned int uStack0000004c;
  int in_stack_00000054;
  int in_stack_0000007c;
  int in_stack_00000084;
  unsigned int *in_stack_000000a4;
  unsigned int *in_stack_000000ac;
  int *in_stack_000000b4;
  int iStack_360;
  unsigned int uStack_35c;
  unsigned int auStack_358 [2];
  __int64 lStack_350;
  unsigned __int64 uStack_348;
  unsigned char auStack_340 [832];
  
  uStack0000001c = (unsigned int)param_2;
  uStack00000044 = (unsigned int)param_7;
  uStack0000004c = (unsigned int)param_8;
  iStack0000003c = param_6;
  if (in_stack_0000007c == 0) {
    lStack_350 = param_3;
    uStack_348 = param_1;
    fn_82EAC2B8();
    param_3 = lStack_350;
    param_1 = uStack_348;
  }
  else {
    iStack_360 = in_stack_00000054;
    fn_82EB3118();
    param_7 = (unsigned __int64)uStack00000044;
    param_8 = (unsigned __int64)uStack0000004c;
    param_2 = (unsigned __int64)uStack0000001c;
  }
  uVar8 = auStack_358[0];
  uVar7 = uStack_35c;
  iVar6 = iStack0000003c;
  iVar11 = (int)param_1;
  uVar14 = (unsigned __int64)uStack_35c;
  uVar13 = (unsigned __int64)auStack_358[0];
  if ((*(int *)(iVar11 + 0x6d74) != 0) && (*(int *)(iVar11 + 0x6d84) == 0)) {
    uStack_35c = auStack_358[0];
    auStack_358[0] = uVar7;
    fn_82F261D8(param_1,&uStack_35c,auStack_358,param_7,param_8);
    iVar1 = *(int *)(iVar11 + 0x564);
    if (in_stack_00000084 == 1) {
      (**(int (***)())(iVar11 + 0x9b8))
                ((__int64)((int)auStack_358[0] >> 2) * (__int64)iVar1 +
                 (__int64)((int)uStack_35c >> 2) + param_3);
    }
    else {
      (**(int (***)())(iVar11 + 0x9c0))
                ((__int64)((int)auStack_358[0] >> 2) * (__int64)iVar1 +
                 (__int64)((int)uStack_35c >> 2) + param_3,iVar1,auStack_340,0x10,uStack_35c,
                 auStack_358[0],in_stack_00000084,*(unsigned int *)(iVar11 + 0x618));
    }
    fn_82E9AC18(param_1,param_2,0x10,auStack_340,0x10,0x10,0x10,iVar6);
    iVar1 = *param_5;
    uVar17 = (unsigned __int64)(unsigned int)param_5[3];
    uVar16 = (unsigned __int64)(unsigned int)param_5[2];
    if (iVar1 != 0) {
      uVar15 = (unsigned __int64)*(unsigned int *)(iVar11 + 0xa30);
      uVar12 = (unsigned __int64)*(unsigned int *)(iVar11 + 0xa2c);
      uVar2 = *(unsigned int *)(iVar11 + 0xa38);
      uVar3 = *(unsigned int *)(iVar11 + 0xa34);
      uVar4 = param_5[5];
      uVar5 = param_5[4];
      iVar9 = fn_82E9B140(param_1,((uVar12 - uVar16) + uVar13 & (unsigned __int64)uVar3) - uVar12,
                            ((uVar15 - uVar17) + uVar14 & (unsigned __int64)uVar2) - uVar15,iStack_360,0);
      iVar10 = fn_82E9B140(param_1,((uVar12 - uVar5) + uVar13 & (unsigned __int64)uVar3) - uVar12,
                             ((uVar15 - uVar4) + uVar14 & (unsigned __int64)uVar2) - uVar15,iStack_360,0);
      if (iVar10 <= iVar9) {
        uVar16 = (unsigned __int64)uVar5;
        uVar17 = (unsigned __int64)uVar4;
      }
    }
    iVar11 = fn_82E9B140(param_1,((*(unsigned int *)(iVar11 + 0xa2c) - uVar16) + uVar13 &
                                   (unsigned __int64)*(unsigned int *)(iVar11 + 0xa34)) -
                                   (unsigned __int64)*(unsigned int *)(iVar11 + 0xa2c),
                           ((*(unsigned int *)(iVar11 + 0xa30) - uVar17) + uVar14 &
                           (unsigned __int64)*(unsigned int *)(iVar11 + 0xa38)) -
                           (unsigned __int64)*(unsigned int *)(iVar11 + 0xa30),iStack_360,in_stack_0000007c);
    iVar11 = iVar11 + (((unsigned __int64)(lStack_350) >> 0) & 0xFFFFFFFF);
    if (iVar1 != 0) {
      iVar11 = iVar11 + 1;
    }
    iStack_360 = *(int *)(iVar6 + 0x6c) * iVar11 + (((unsigned __int64)(uStack_348) >> 0) & 0xFFFFFFFF);
  }
  *in_stack_000000a4 = uVar8;
  *in_stack_000000ac = uVar7;
  *in_stack_000000b4 = iStack_360;
  return;
}

