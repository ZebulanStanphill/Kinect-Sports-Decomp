extern int fn_826417C8();
extern int fn_82641B60();
extern int fn_82641C20();
extern int fn_82641DA0();
extern int fn_82641EF8();
extern int fn_82642F50();
extern int fn_82643B08();
extern int fn_82644040();
extern int fn_82645110();
extern int fn_82647258();


unsigned __int64
fn_826400A0(__int64 *param_1,unsigned int param_2,unsigned int param_3,int param_4,unsigned __int64 param_5,
             unsigned int param_6,unsigned __int64 param_7,unsigned int *param_8)

{
  unsigned char uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar3;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  int iVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  unsigned __int64 uVar14;
  __int64 lVar15;
  unsigned int uVar16;
  unsigned __int64 uVar17;
  unsigned int *in_stack_00000054;
  
  uVar2 = ((__int64)param_4 * (__int64)(int)param_7 & 0xffffffffU) >> 2;
  uVar9 = param_5;
  if ((param_6 & 4) == 0) {
    uVar9 = (param_5 + 1 & 0xffffffff) >> 1;
  }
  uVar17 = (param_7 & 0xffffffff) >> 2;
  uVar1 = *(unsigned char *)(param_1 + 0x634);
  *(char *)(param_1 + 0x634) = (char)uVar17;
  if (((uVar17 & 0xff) != (unsigned __int64)*(unsigned char *)(param_1 + 0x5dd)) && (*(int *)(param_1 + 0x649) != 0)
     ) {
    param_1[2] = param_1[2] | 0x80000;
  }
  uVar12 = param_1[4];
  uVar14 = param_1[3];
  uVar17 = param_1[2];
  lVar15 = param_1[1];
  if (*param_1 != 0) {
    fn_82641EF8(param_1,*param_1,0x4000,param_1 + 0xf0);
    *param_1 = 0;
  }
  if (lVar15 != 0) {
    fn_82641EF8(param_1,lVar15,0x4400,param_1 + 0x2f0);
    param_1[1] = 0;
  }
  if (uVar17 != 0) {
    if ((uVar17 & 0x1e0000) != 0) {
      uVar17 = fn_82642F50(param_1,uVar17);
    }
    if ((param_1[5] & uVar17) != 0) {
      uVar17 = fn_826417C8(param_1,uVar17,*(unsigned int *)(param_1 + 0x528));
    }
    if ((uVar17 & 0xfff) != 0) {
      fn_82641B60(param_1,uVar17 << 0x34,0x2200,(int)param_1 + 0x2934);
    }
    if ((uVar17 & 0x1f000) != 0) {
      fn_82641B60(param_1,(uVar17 & 0x1f000) << 0x2f,0x2180,param_1 + 0x524);
    }
    if ((uVar17 & 0x3fffc0000000000) != 0) {
      fn_82641B60(param_1,(uVar17 & 0x3fffc0000000000) << 6,0x2000,param_1 + 0x510);
    }
    if ((uVar17 & 0x3ffffe00000) != 0) {
      fn_82641B60(param_1,(uVar17 & 0x3ffffe00000) << 0x16,0x2100,(int)param_1 + 0x28cc);
    }
    param_1[2] = 0;
  }
  if (uVar14 != 0) {
    if ((uVar14 & 0xffffffff) != 0) {
      fn_82641DA0(param_1,uVar14 << 0x20);
    }
    if ((uVar14 & 0x7ffffc00000000) != 0) {
      fn_82641B60(param_1,(uVar14 & 0x7ffffc00000000) << 9,0x2280,(int)param_1 + 0x2964);
    }
    param_1[3] = 0;
  }
  if (uVar12 != 0) {
    if ((uVar12 & 0x3fc000000000) != 0) {
      fn_82641B60(param_1,(uVar12 & 0x3fc000000000) << 0x12,0x2380,param_1 + 0x54a);
    }
    if ((uVar12 & 0x7e000000000000) != 0) {
      fn_82641C20(param_1,(uVar12 & 0x7e000000000000) << 9);
    }
    if ((uVar12 & 0x100000000000000) != 0) {
      fn_82641B60(param_1,0xffffffffff000000,0x4900,param_1 + 0x4f0);
    }
    if ((uVar12 & 0x3fffffffff) != 0) {
      fn_82641B60(param_1,uVar12 << 0x1a,0x2300,param_1 + 0x537);
    }
    if (((uVar12 & 0xc000000000000000) != 0) &&
       (((*(unsigned char *)(param_1 + 0x558) & 0x80) != 0 || ((*(unsigned char *)(param_1 + 0x558) & 0x40) != 0)))) {
      fn_82647258(param_1);
    }
    param_1[4] = 0;
  }
  uVar4 = *(unsigned int *)(param_1 + 6);
  *(unsigned char *)(param_1 + 0x634) = uVar1;
  if (*(unsigned int *)(param_1 + 7) < uVar4) {
    uVar4 = fn_82645110(param_1);
  }
  uVar5 = fn_82644040(param_1,uVar2,0x10);
  uVar6 = fn_82644040(param_1,uVar9,0x10);
  if ((uVar5 == 0) || (uVar6 == 0)) {
    *(unsigned int *)(param_1 + 6) = uVar4;
    *param_8 = 0;
    uVar3 = 0xffffffff8007000e;
    *in_stack_00000054 = 0;
  }
  else {
    *(unsigned int *)(uVar4 + 4) = 0x2102;
    *(unsigned int *)(uVar4 + 8) = param_3;
    uVar17 = (uVar2 & 0xffffff) << 2 | 0x10000002;
    *(unsigned int *)(uVar4 + 0xc) = 0x548ba;
    *(unsigned int *)(uVar4 + 0x10) = 0;
    *(unsigned int *)(uVar4 + 0x14) = 0;
    iVar11 = ((uVar6 >> 0x14) + 0x200 & 0x1000) + (uVar6 & 0x1fffffff);
    *(unsigned int *)(uVar4 + 0x18) = 0;
    uVar16 = param_2 & 0x3f | (unsigned int)((param_5 & 0xffffffff) << 0x10);
    uVar13 = (unsigned int)param_5 & 0xffffff;
    *(unsigned int *)(uVar4 + 0x1c) = 0;
    *(unsigned int *)(uVar4 + 0x20) = ((uVar5 >> 0x14) + 0x200 & 0x1000) + (uVar5 & 0x1fffffff) | 3;
    *(int *)(uVar4 + 0x24) = (int)uVar17;
    *(unsigned int *)(uVar4 + 0x28) = 0x25000;
    *(unsigned int *)(uVar4 + 0x2c) = 0;
    *(unsigned int *)(uVar4 + 0x30) = 0;
    *(unsigned int *)(uVar4 + 0x34) = 0;
    uVar10 = (unsigned int)(*(unsigned char *)((int)param_1 + 0x304b) != 0) << 8 |
             *(unsigned char *)((int)param_1 + *(unsigned char *)((int)param_1 + 0x304b) + 0x300a) & 0x3f;
    if ((param_6 & 4) != 0) {
      uVar13 = (unsigned int)((param_5 & 0x7fffff) << 1);
      uVar16 = uVar16 | 0x800;
    }
    uVar13 = uVar13 | param_6 << 0x1e;
    if ((*(unsigned char *)((int)param_1 + 0x2abc) & 1) == 0) {
      *(unsigned int *)(uVar4 + 0x38) = 0xc0032201;
      *(unsigned int *)(uVar4 + 0x3c) = uVar10;
      *(unsigned int *)(uVar4 + 0x40) = uVar16;
      *(int *)(uVar4 + 0x44) = iVar11;
      puVar8 = (unsigned int *)(uVar4 + 0x48);
      *puVar8 = uVar13;
    }
    else {
      puVar7 = *(unsigned int **)((int)param_1 + 0x347c);
      if (*(unsigned int **)(param_1 + 0x690) < puVar7 + 4) {
        puVar7 = (unsigned int *)fn_82643B08(param_1 + 0x68e,uVar17,0,0);
      }
      *puVar7 = (unsigned int *)(uVar4 + 0x34);
      *(unsigned int **)((int)param_1 + 0x347c) = puVar7 + 4;
      *(unsigned int *)(uVar4 + 0x38) = 0xc0006000;
      *(unsigned int *)(uVar4 + 0x3c) = 0xffffffff;
      *(unsigned int *)(uVar4 + 0x40) = 0xc0032201;
      *(unsigned int *)(uVar4 + 0x44) = uVar10;
      *(unsigned int *)(uVar4 + 0x48) = uVar16;
      *(int *)(uVar4 + 0x4c) = iVar11;
      *(unsigned int *)(uVar4 + 0x50) = uVar13;
      *(unsigned int *)(uVar4 + 0x54) = 0xc0006000;
      *(unsigned int *)(uVar4 + 0x58) = 0x80000000;
      *(unsigned int *)(uVar4 + 0x5c) = 0xc0015a01;
      *(unsigned int *)(uVar4 + 0x60) = 0x1a;
      *(unsigned int *)(uVar4 + 100) =
           (((unsigned int)(puVar7 + 1) >> 0x14) + 0x200 & 0x1000) + ((unsigned int)(puVar7 + 1) & 0x1ffffffe) | 1;
      *(unsigned int *)(uVar4 + 0x68) = 0xc0004601;
      puVar8 = (unsigned int *)(uVar4 + 0x6c);
      *puVar8 = 0x19;
    }
    uVar17 = param_1[3];
    uVar3 = 0;
    *param_8 = uVar6;
    param_1[3] = uVar17 | 1;
    *(unsigned int **)((int)param_1 + 0x3554) = puVar8;
    *in_stack_00000054 = uVar5;
    *(unsigned int *)(param_1 + 0x6ab) = uVar5;
    *(unsigned int *)((int)param_1 + 0x355c) = uVar6;
    *(int *)(param_1 + 0x6ac) = (int)uVar2;
    *(int *)((int)param_1 + 0x3564) = (int)uVar9;
  }
  return uVar3;
}

