extern unsigned int *auStack_340;
extern int fn_82E9AC18();
extern int fn_82E9B140();
extern int fn_82EB52E0();
extern int fn_82F261D8();
extern unsigned int iStack0000003c;
extern unsigned int iStack_350;
extern unsigned int iStack_358;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack_354;
extern unsigned int uStack_35c;
extern unsigned int uStack_360;


void fn_82EC93E0(int param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4,int *param_5,
                  int param_6,unsigned __int64 param_7,unsigned __int64 param_8)

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
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  int iStack0000003c;
  unsigned int *in_stack_00000094;
  unsigned int *in_stack_0000009c;
  int *in_stack_000000a4;
  unsigned int *in_stack_000000ac;
  unsigned int uStack_360;
  unsigned int uStack_35c;
  int iStack_358;
  unsigned int uStack_354;
  int iStack_350;
  unsigned char auStack_340 [832];
  
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  iStack0000003c = param_6;
  fn_82EB52E0();
  uVar8 = uStack_35c;
  uVar7 = uStack_360;
  uVar13 = 0;
  uStack_354 = 0;
  uVar15 = (unsigned __int64)uStack_360;
  uVar14 = (unsigned __int64)uStack_35c;
  if ((*(int *)(param_1 + 0x6d74) != 0) && (*(int *)(param_1 + 0x6d84) == 0)) {
    uStack_360 = uStack_35c;
    uStack_35c = uVar7;
    fn_82F261D8(param_1,&uStack_360,&uStack_35c,param_7,param_8);
    (**(int (***)())(param_1 + 0xa5c))
              ((__int64)((int)uStack_35c >> 2) * (__int64)*(int *)(param_1 + 0x564) +
               (__int64)((int)uStack_360 >> 2) + (unsigned __int64)uStack00000024,
               *(int *)(param_1 + 0x564),auStack_340,8,uStack_360 & 3,uStack_35c & 3,
               *(unsigned int *)(param_1 + 0x618));
    iVar6 = iStack0000003c;
    fn_82E9AC18(param_1,uStack0000001c,0x10,auStack_340,8,8,8,iStack0000003c);
    uVar13 = uStack_354;
    iVar1 = *param_5;
    uVar17 = (unsigned __int64)(unsigned int)param_5[3];
    uVar16 = (unsigned __int64)(unsigned int)param_5[2];
    if (iVar1 != 0) {
      uVar12 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa30);
      uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa2c);
      uVar2 = *(unsigned int *)(param_1 + 0xa38);
      uVar3 = *(unsigned int *)(param_1 + 0xa34);
      uVar4 = param_5[5];
      uVar5 = param_5[4];
      iVar9 = fn_82E9B140(param_1,((uVar11 - uVar16) + uVar14 & (unsigned __int64)uVar3) - uVar11,
                            ((uVar12 - uVar17) + uVar15 & (unsigned __int64)uVar2) - uVar12,uStack_354,0);
      iVar10 = fn_82E9B140(param_1,((uVar11 - uVar5) + uVar14 & (unsigned __int64)uVar3) - uVar11,
                             ((uVar12 - uVar4) + uVar15 & (unsigned __int64)uVar2) - uVar12,uVar13,0);
      if (iVar10 <= iVar9) {
        uVar16 = (unsigned __int64)uVar5;
        uVar17 = (unsigned __int64)uVar4;
      }
    }
    iVar9 = fn_82E9B140(param_1,((*(unsigned int *)(param_1 + 0xa2c) - uVar16) + uVar14 &
                                  (unsigned __int64)*(unsigned int *)(param_1 + 0xa34)) -
                                  (unsigned __int64)*(unsigned int *)(param_1 + 0xa2c),
                          ((*(unsigned int *)(param_1 + 0xa30) - uVar17) + uVar15 &
                          (unsigned __int64)*(unsigned int *)(param_1 + 0xa38)) -
                          (unsigned __int64)*(unsigned int *)(param_1 + 0xa30),uVar13,0);
    iVar9 = iVar9 + iStack_350;
    if (iVar1 != 0) {
      iVar9 = iVar9 + 1;
    }
    iStack_358 = *(int *)(iVar6 + 0x6c) * iVar9 + iStack_358;
  }
  *in_stack_00000094 = uVar8;
  *in_stack_0000009c = uVar7;
  *in_stack_000000a4 = iStack_358;
  *in_stack_000000ac = uVar13;
  return;
}

