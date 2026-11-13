typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82630750();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82631AF0();
extern int fn_82637AF8();
extern int fn_82637B30();
extern int fn_826381E0();
extern int fn_82638220();
extern int fn_82638288();
extern int fn_82638D10();
extern int fn_82639208();
extern int fn_826392A0();
extern int fn_82639380();
extern int fn_82639528();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_8263AA68();
extern int fn_8263CBB0();
extern int fn_82645218();
extern int fn_82647538();
extern int fn_82647578();
extern int fn_8264B7E0();
extern int fn_8264BDD8();
extern int fn_8264C1F8();
extern int fn_826582D8();
extern int fn_829F7AB8();
extern int fn_829F7D28();
extern unsigned int iStack0000003c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000004c;


/* WARNING: Removing unreachable block (ram,0x829f8cc4) */
/* WARNING: Removing unreachable block (ram,0x829f8ccc) */
/* WARNING: Removing unreachable block (ram,0x829f8cdc) */
/* WARNING: Removing unreachable block (ram,0x829f8ce0) */
/* WARNING: Removing unreachable block (ram,0x829f8cfc) */

unsigned __int64 fn_829F8170(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned int uStack00000034;
  int iStack0000003c;
  unsigned int uStack0000004c;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  int in_stack_0000007c;
  int in_stack_00000084;
  int in_stack_0000008c;
  unsigned int *in_stack_00000094;
  
  uStack00000034 = (unsigned int)param_5;
  iStack0000003c = (int)param_6;
  uStack0000004c = param_8;
  fn_82647538(*(unsigned int *)(param_1 + 4));
  fn_8264B7E0(*(unsigned int *)(param_1 + 4),
                    *(unsigned int *)((*(int *)(param_1 + 0x10) + 2) * 4 + param_1),0,0,0,0,0);
  fn_829F7AB8(*(unsigned int *)(param_1 + 4),param_1 + 0x50,param_2,param_3,param_4,param_5,param_6,
                param_7);
  *(unsigned __int64 *)(*(int *)(param_1 + 4) + 8) =
       *(unsigned __int64 *)(*(int *)(param_1 + 4) + 8) & 0xe000000000000003;
  **(unsigned __int64 **)(param_1 + 4) = **(unsigned __int64 **)(param_1 + 4) & 0x8000000000000001;
  *(unsigned __int64 *)(*(int *)(param_1 + 4) + 0x20) =
       *(unsigned __int64 *)(*(int *)(param_1 + 4) + 0x20) & 0xfeffffffffffffff;
  *(unsigned __int64 *)(*(int *)(param_1 + 4) + 0x18) =
       *(unsigned __int64 *)(*(int *)(param_1 + 4) + 0x18) & 0xfffffffff8000001;
  *(unsigned __int64 *)(*(int *)(param_1 + 4) + 0x20) =
       *(unsigned __int64 *)(*(int *)(param_1 + 4) + 0x20) & 0xff81ffffffffffff;
  iVar1 = *(int *)(param_1 + 4);
  fn_8264C1F8(iVar1,0,0);
  if (*(int *)(param_1 + 0x74) != 0) {
    fn_82645218(iVar1);
  }
  fn_82631AF0(iVar1,0);
  fn_8263AA68(iVar1,0,*(unsigned int *)(param_1 + 0x4c),0);
  fn_8263AA68(iVar1,1,param_1 + 0x50,0);
  fn_8263A508(iVar1,0);
  uVar14 = 0;
  do {
    fn_82639380(iVar1,uVar14,0);
    fn_82639528(iVar1,uVar14,0);
    iVar4 = (int)uVar14;
    iVar2 = iVar4 * 0x18 + iVar1;
    uVar12 = uVar14 + 0x20;
    *(unsigned int *)(iVar2 + 0x48c) = *(unsigned int *)(iVar2 + 0x48c) & 0xfe7fffff | 0x1000000;
    iVar2 = (iVar4 + 0x30) * 0x18;
    iVar3 = (iVar4 + 0x30) * 0x18;
    uVar11 = uVar14 + 0x20;
    *(unsigned __int64 *)(iVar1 + 0x18) =
         0x8000000000000000U >> (uVar14 + 0x20 & 0x7f) | *(unsigned __int64 *)(iVar1 + 0x18);
    uVar13 = uVar14 + 0x20;
    iVar4 = (iVar4 + 0x30) * 0x18;
    uVar14 = uVar14 + 1 & 0xff;
    *(unsigned int *)(iVar2 + iVar1) = *(unsigned int *)(iVar2 + iVar1) & 0xffffe3ff | 0x800;
    *(unsigned __int64 *)(iVar1 + 0x18) =
         0x8000000000000000U >> (uVar12 & 0x7f) | *(unsigned __int64 *)(iVar1 + 0x18);
    *(unsigned int *)(iVar3 + iVar1) = *(unsigned int *)(iVar3 + iVar1) & 0xffff1fff | 0x4000;
    *(unsigned __int64 *)(iVar1 + 0x18) =
         0x8000000000000000U >> (uVar11 & 0x7f) | *(unsigned __int64 *)(iVar1 + 0x18);
    *(unsigned int *)(iVar4 + iVar1) = *(unsigned int *)(iVar4 + iVar1) & 0xfff8ffff | 0x20000;
    *(unsigned __int64 *)(iVar1 + 0x18) =
         0x8000000000000000U >> (uVar13 & 0x7f) | *(unsigned __int64 *)(iVar1 + 0x18);
  } while (uVar14 < 5);
  fn_82639208(iVar1,0);
  fn_826381E0(iVar1,0);
  fn_82638220(iVar1,0);
  fn_82638288(iVar1,0);
  fn_826392A0(iVar1,0);
  fn_82638D10(iVar1,0);
  fn_82637AF8(iVar1,0);
  fn_82637B30(iVar1,0);
  if (((param_3 & 0xffffffff) == 0) || (bVar9 = true, in_stack_00000074 == 0)) {
    bVar9 = false;
  }
  if (((param_3 & 0xffffffff) == 0) || (bVar5 = true, in_stack_0000007c == 0)) {
    bVar5 = false;
  }
  if ((in_stack_0000005c == 0) ||
     (((in_stack_00000064 != 0 && (in_stack_0000006c != 0)) && ((param_7 & 0xffffffff) != 0)))) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (((in_stack_0000005c == 0) || (in_stack_00000064 == 0)) ||
     ((in_stack_0000006c == 0 || (bVar7 = true, (param_7 & 0xffffffff) == 0)))) {
    bVar7 = false;
  }
  if (((in_stack_00000074 == 0) || ((param_2 & 0xffffffff) == 0)) ||
     (((param_5 & 0xffffffff) == 0 || (bVar8 = true, in_stack_00000084 == 0)))) {
    bVar8 = false;
  }
  if (((in_stack_0000005c == 0) || (iStack0000003c == 0)) || (bVar10 = true, in_stack_0000008c == 0)
     ) {
    bVar10 = false;
  }
  if (bVar9) {
    fn_82630750(iVar1,0,in_stack_00000074,1);
  }
  if (bVar5) {
    fn_82630750(iVar1,1,in_stack_0000007c,1);
  }
  if (((bVar6) || (bVar7)) && (fn_82630750(iVar1,2,in_stack_0000005c,1), bVar7)) {
    fn_82630750(iVar1,3,in_stack_00000064,1);
  }
  if (bVar9) {
    fn_8264C1F8(iVar1,0,2);
                    /* WARNING: Subroutine does not return */
    fn_8263CBB0(iVar1,1,param_3,0x40000000);
  }
  if (bVar5) {
    fn_8264C1F8(iVar1,0,0x100);
                    /* WARNING: Subroutine does not return */
    fn_8263CBB0(iVar1,1,param_3,0x40000000);
  }
  fn_8264C1F8(iVar1,0,0);
  if (*(int *)(param_1 + 0x78) != 0) {
    fn_82645218(iVar1);
  }
  if (!bVar6) {
    fn_8264C1F8(iVar1,0,0);
    if (*(int *)(param_1 + 0x80) != 0) {
      fn_82645218(iVar1);
    }
    if (bVar7) {
      fn_8264C1F8(iVar1,0,0x20);
      fn_82631920(iVar1,*(unsigned int *)(param_1 + 0x14));
                    /* WARNING: Subroutine does not return */
      fn_82631578(iVar1,*(unsigned int *)(param_1 + 0x40));
    }
    fn_8264C1F8(iVar1,0,0);
    if (*(int *)(param_1 + 0x84) != 0) {
      fn_82645218(iVar1);
    }
    if (bVar8) {
      fn_8264C1F8(iVar1,0,4);
                    /* WARNING: Subroutine does not return */
      fn_8263CBB0(iVar1,0,in_stack_00000074,0x80000000);
    }
    fn_8264C1F8(iVar1,0,0);
    if (*(int *)(param_1 + 0x7c) != 0) {
      fn_82645218(iVar1);
    }
    if (!bVar10) {
      fn_8264C1F8(iVar1,0,0);
      if (*(int *)(param_1 + 0x88) != 0) {
        fn_82645218(iVar1);
      }
      fn_826582D8(*(unsigned int *)(param_1 + 4));
      fn_829F7D28(*(unsigned int *)(param_1 + 4),in_stack_0000005c,in_stack_00000064,
                    in_stack_0000006c,in_stack_00000074,in_stack_0000007c,in_stack_00000084,
                    in_stack_0000008c);
      uVar14 = fn_8264BDD8(*(unsigned int *)(param_1 + 4));
      *in_stack_00000094 = *(unsigned int *)((*(int *)(param_1 + 0x10) + 2) * 4 + param_1);
      *(unsigned int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - 1U & 1;
      fn_82647578(*(unsigned int *)(param_1 + 4));
      return (uVar14 & 0xffffffff) >> 0x1f ^ 1;
    }
    fn_8264C1F8(iVar1,0,8);
    fn_8263A1B8(iVar1,0,*(unsigned int *)(param_1 + 0x34));
    fn_82631920(iVar1,*(unsigned int *)(param_1 + 0x14));
                    /* WARNING: Subroutine does not return */
    fn_82631578(iVar1,*(unsigned int *)(param_1 + 0x2c));
  }
  fn_8264C1F8(iVar1,0,0x80);
  fn_82631920(iVar1,*(unsigned int *)(param_1 + 0x14));
                    /* WARNING: Subroutine does not return */
  fn_82631578(iVar1,*(unsigned int *)(param_1 + 0x48));
}

