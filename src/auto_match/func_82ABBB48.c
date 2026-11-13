extern unsigned int *auStack_a8;
extern unsigned int *auStack_b8;
extern int fn_82A29A38();
extern int fn_82ABA770();
extern int fn_82ABACE8();
extern int fn_82ABB0F0();
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;


unsigned int *
fn_82ABBB48(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned int *param_4,int *param_5,
             int *param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  __int64 lVar12;
  int in_stack_00000054;
  int iStack_c0;
  int iStack_bc;
  unsigned int auStack_b8 [4];
  unsigned int auStack_a8 [42];
  
  uVar3 = *param_4;
  uVar1 = *(unsigned int *)(param_1 + 0x10);
  puVar7 = param_4 + 1;
  iStack_c0 = 0;
  iVar9 = 0;
  if (((uVar3 & 0x2000) == 0x2000) && (0x2ff < uVar1)) {
    uVar10 = *puVar7;
    puVar7 = param_4 + 2;
  }
  else {
    uVar10 = 0;
  }
  uVar8 = 0;
  uVar11 = uVar3;
  if (in_stack_00000054 != 0) {
    uVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    uVar11 = uVar3 & 0x8fffe000 | 0x21;
  }
  iVar6 = 0;
  puVar7 = puVar7 + -1;
  lVar12 = 3;
  do {
    uVar4 = puVar7[1];
    puVar5 = auStack_b8;
    if ((uVar4 & 0x80000000) == 0) {
      *(unsigned int *)((int)auStack_a8 + iVar6) = 0;
LAB_82abbc4c:
      *(unsigned int *)(iVar6 + (int)puVar5) = 0;
    }
    else {
      *(unsigned int *)(iVar6 + (int)puVar5) = uVar4;
      if (((uVar1 < 0x200) || ((uVar4 & 0x2000) != 0x2000)) ||
         ((uVar4 >> 0x14 & 0x700 | uVar4 & 0x1800) != 0x200)) {
        puVar5 = auStack_a8;
        puVar7 = puVar7 + 1;
        goto LAB_82abbc4c;
      }
      puVar7 = puVar7 + 2;
      iVar9 = iVar9 + 1;
      *(unsigned int *)((int)auStack_a8 + iVar6) = *puVar7;
    }
    iVar6 = iVar6 + 4;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  if ((param_2 & 0xffff) == 0x22) {
    iVar9 = iVar9 + 4;
    if ((auStack_b8[1] >> 0x14 & 0x700) != 0 || (auStack_b8[1] & 0x1800) != 0) {
      fn_82A29A38();
    }
    if ((auStack_b8[2] >> 0x14 & 0x700) != 0 || (auStack_b8[2] & 0x1800) != 0) {
      fn_82A29A38();
    }
    if (((auStack_b8[2] ^ auStack_b8[1]) & 0x7ff) == 0) {
      fn_82A29A38();
    }
    *param_3 = 0x57;
    iStack_c0 = 1;
    uVar4 = 0;
    if (in_stack_00000054 == 0) {
      uVar4 = uVar10;
    }
    uVar2 = fn_82ABA770(param_3 + 1,uVar11,uVar4,&iStack_c0,param_1);
    param_3 = (unsigned int *)
              fn_82ABACE8(uVar2,auStack_b8[0],auStack_a8[0],param_7,param_8,0x57,0,uVar1);
    if (in_stack_00000054 == 0) goto LAB_82abbe40;
  }
  else {
    if ((param_2 & 0xffff) != 0x25) {
      iVar9 = 0;
      goto LAB_82abbe40;
    }
    if ((uVar3 >> 0x14 & 0x700) != 0 || (uVar3 & 0x1800) != 0) {
      fn_82A29A38();
    }
    if (uVar1 < 0x300) {
      if ((auStack_b8[1] >> 0x14 & 0x700 | auStack_b8[1] & 0x1800) != 0x200) {
        fn_82A29A38();
      }
      if ((auStack_b8[2] >> 0x14 & 0x700 | auStack_b8[2] & 0x1800) != 0x200) {
        fn_82A29A38();
      }
      iVar9 = iVar9 + 4;
    }
    else {
      if ((param_2 & 0xf000000) != 0x2000000) {
        fn_82A29A38();
      }
      iVar9 = iVar9 + 2;
    }
    *param_3 = 0x59;
    iStack_c0 = 1;
    uVar4 = 0;
    if (in_stack_00000054 == 0) {
      uVar4 = uVar10;
    }
    uVar2 = fn_82ABA770(param_3 + 1,uVar11 & 0xfff0ffff | 0x30000,uVar4,&iStack_c0,param_1);
    param_3 = (unsigned int *)
              fn_82ABACE8(uVar2,auStack_b8[0],auStack_a8[0],param_7,param_8,0x59,0,uVar1);
    if (in_stack_00000054 == 0) goto LAB_82abbe40;
    uVar3 = uVar3 & 0xfff0ffff | 0x30000;
  }
  iStack_bc = 0;
  param_3 = (unsigned int *)fn_82ABB0F0(param_3,uVar3,uVar10,uVar8,0xe40000,&iStack_bc,param_1);
  iStack_c0 = iStack_c0 + iStack_bc;
LAB_82abbe40:
  *param_5 = iVar9;
  *param_6 = *param_6 + iStack_c0;
  return param_3;
}

