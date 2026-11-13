#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_8267BE38();
extern int fn_8270A1E0();
extern int fn_8270A5C8();
extern unsigned int iStack_a0;
extern unsigned int iStack_ac;
extern unsigned int uStack0000002c;
extern unsigned int uStack0000003c;
extern unsigned int uStack0000004c;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;


/* WARNING: Removing unreachable block (ram,0x8270a7bc) */

void fn_8270A638(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4,
                  __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned int uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  __int64 lVar10;
  __int64 lVar11;
  int iVar12;
  __int64 lVar13;
  __int64 lVar14;
  unsigned int uStack0000002c;
  unsigned int uStack0000003c;
  unsigned int uStack0000004c;
  int in_stack_00000054;
  int in_stack_0000005c;
  int (**in_stack_00000064)();
  unsigned int *puStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b0;
  int iStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  int iStack_a0;
  
  uStack0000003c = (unsigned int)param_6;
  puStack_c0 = (unsigned int *)0x0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack0000004c = (unsigned int)param_8;
  uStack0000002c = param_4;
  fn_8270A5C8(&puStack_c0,param_2,0);
  uVar2 = (param_7 & 0x1ffffff) << 7;
  iVar12 = (int)param_2;
  lVar1 = (__int64)((int)uVar2 / iVar12);
  trapWord(6,param_2,0);
  trapWord(5,param_2 & ~(((uVar2 & 0x7fffffff) << 1 | (param_7 & 0x1ffffff) >> 0x18) - 1),0xffff);
  fn_8270A1E0(&uStack_b0,lVar1,(param_7 & 0xffffff) * 0x100 + lVar1,param_2);
  if (0 < iVar12) {
    uVar4 = (unsigned __int64)uStack_a4;
    uVar6 = iStack_a0 - 0x80;
    uVar2 = param_2;
    puVar3 = puStack_c0;
    do {
      *puVar3 = uVar6;
      uVar4 = uStack_a8 + uVar4;
      uVar6 = uVar6 + iStack_ac;
      if (0 < (__int64)uVar4) {
        uVar6 = uVar6 + 1;
        uVar4 = uVar4 - uStack_b0;
      }
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  uVar2 = (param_8 & 0x1ffffff) << 7;
  lVar1 = (__int64)((int)uVar2 / (int)param_3);
  trapWord(6,param_3,0);
  trapWord(5,param_3 & ~(((uVar2 & 0x7fffffff) << 1 | (param_8 & 0x1ffffff) >> 0x18) - 1),0xffff);
  fn_8270A1E0(&uStack_b0,lVar1,(param_8 & 0xffffff) * 0x100 + lVar1,param_3);
  if ((int)param_3 < 1) {
LAB_8270a8e4:
    fn_8267BE38(puStack_c0);
    return;
  }
  iVar8 = (int)param_7 + -1;
  lVar1 = (__int64)iVar8 * (__int64)in_stack_0000005c;
  uVar2 = (unsigned __int64)uStack_a4;
  iVar9 = iStack_a0;
  do {
    iVar7 = (int)(iVar9 - 0x80U) >> 8;
    uVar6 = iVar9 - 0x80U & 0xff;
    if (-1 < iVar7) {
      param_6 = (__int64)iVar7 * (__int64)in_stack_00000054 + param_6;
    }
    iVar7 = iVar7 + 1;
    if ((int)param_8 <= iVar7) {
      iVar7 = (int)param_8 + -1;
    }
    lVar10 = (__int64)iVar7 * (__int64)in_stack_00000054 + (unsigned __int64)uStack0000003c;
    uVar4 = 0;
    lVar13 = param_1;
    puVar3 = puStack_c0;
    if (0 < iVar12) {
      do {
        iVar7 = (int)*puVar3 >> 8;
        if (iVar8 <= iVar7) break;
        lVar5 = (__int64)(iVar7 + 1) * (__int64)in_stack_0000005c;
        (*in_stack_00000064)
                  (lVar13,(__int64)iVar7 * (__int64)in_stack_0000005c + param_6,lVar5 + param_6,
                   (__int64)iVar7 * (__int64)in_stack_0000005c + lVar10,lVar5 + lVar10,
                   *puVar3 & 0xff,uVar6);
        uVar4 = uVar4 + 1;
        lVar13 = lVar13 + param_5;
        puVar3 = puVar3 + 1;
      } while ((int)uVar4 < iVar12);
    }
    lVar5 = lVar1 + param_6;
    lVar10 = lVar1 + lVar10;
    if ((int)uVar4 < iVar12) {
      lVar14 = param_2 - uVar4;
      lVar11 = (uVar4 & 0x3fffffff) * 4 + ZEXT48(puStack_c0) + -4;
      do {
        lVar11 = lVar11 + 4;
        (*in_stack_00000064)(lVar13,lVar5,lVar5,lVar10,lVar10,*(unsigned int *)lVar11 & 0xff,uVar6);
        lVar14 = lVar14 + -1;
        lVar13 = lVar13 + param_5;
      } while (lVar14 != 0);
    }
    uVar2 = uStack_a8 + uVar2;
    iVar9 = iStack_ac + iVar9;
    if (0 < (__int64)uVar2) {
      iVar9 = iVar9 + 1;
      uVar2 = uVar2 - uStack_b0;
    }
    param_3 = param_3 - 1;
    param_1 = param_1 + (unsigned __int64)uStack0000002c;
    if (param_3 == 0) goto LAB_8270a8e4;
    param_8 = (unsigned __int64)uStack0000004c;
    param_6 = (unsigned __int64)uStack0000003c;
  } while( true );
}

