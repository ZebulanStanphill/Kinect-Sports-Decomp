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


unsigned __int64 fn_8263FB88(__int64 *param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
  unsigned char uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int uVar5;
  unsigned __int64 uVar4;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  
  uVar1 = *(unsigned char *)(param_1 + 0x634);
  *(char *)(param_1 + 0x634) = (char)(param_4 >> 2);
  uVar2 = ((__int64)param_3 * (__int64)(int)param_4 & 0xffffffffU) >> 2;
  if (((param_4 >> 2 & 0xff) != (unsigned int)*(unsigned char *)(param_1 + 0x5dd)) &&
     (*(int *)(param_1 + 0x649) != 0)) {
    param_1[2] = param_1[2] | 0x80000;
  }
  uVar7 = param_1[3];
  uVar4 = uVar7 & 0xfffffffffffffffe;
  param_1[3] = uVar4;
  uVar9 = param_1[4];
  uVar11 = param_1[2];
  lVar10 = param_1[1];
  if (*param_1 != 0) {
    fn_82641EF8(param_1,*param_1,0x4000,param_1 + 0xf0);
    *param_1 = 0;
  }
  if (lVar10 != 0) {
    fn_82641EF8(param_1,lVar10,0x4400,param_1 + 0x2f0);
    param_1[1] = 0;
  }
  if (uVar11 != 0) {
    if ((uVar11 & 0x1e0000) != 0) {
      uVar11 = fn_82642F50(param_1,uVar11);
    }
    if ((param_1[5] & uVar11) != 0) {
      uVar11 = fn_826417C8(param_1,uVar11,*(unsigned int *)(param_1 + 0x528));
    }
    if ((uVar11 & 0xfff) != 0) {
      fn_82641B60(param_1,uVar11 << 0x34,0x2200,(int)param_1 + 0x2934);
    }
    if ((uVar11 & 0x1f000) != 0) {
      fn_82641B60(param_1,(uVar11 & 0x1f000) << 0x2f,0x2180,param_1 + 0x524);
    }
    if ((uVar11 & 0x3fffc0000000000) != 0) {
      fn_82641B60(param_1,(uVar11 & 0x3fffc0000000000) << 6,0x2000,param_1 + 0x510);
    }
    if ((uVar11 & 0x3ffffe00000) != 0) {
      fn_82641B60(param_1,(uVar11 & 0x3ffffe00000) << 0x16,0x2100,(int)param_1 + 0x28cc);
    }
    param_1[2] = 0;
  }
  if (uVar4 != 0) {
    if ((uVar7 & 0xfffffffe) != 0) {
      fn_82641DA0(param_1,uVar4 << 0x20);
    }
    if ((uVar7 & 0x7ffffc00000000) != 0) {
      fn_82641B60(param_1,(uVar7 & 0x7ffffc00000000) << 9,0x2280,(int)param_1 + 0x2964);
    }
    param_1[3] = 0;
  }
  if (uVar9 != 0) {
    if ((uVar9 & 0x3fc000000000) != 0) {
      fn_82641B60(param_1,(uVar9 & 0x3fc000000000) << 0x12,0x2380,param_1 + 0x54a);
    }
    if ((uVar9 & 0x7e000000000000) != 0) {
      fn_82641C20(param_1,(uVar9 & 0x7e000000000000) << 9);
    }
    if ((uVar9 & 0x100000000000000) != 0) {
      fn_82641B60(param_1,0xffffffffff000000,0x4900,param_1 + 0x4f0);
    }
    if ((uVar9 & 0x3fffffffff) != 0) {
      fn_82641B60(param_1,uVar9 << 0x1a,0x2300,param_1 + 0x537);
    }
    if ((uVar9 & 0xc000000000000000) != 0) {
      if (((*(unsigned char *)(param_1 + 0x558) & 0x80) != 0) || ((*(unsigned char *)(param_1 + 0x558) & 0x40) != 0))
      {
        fn_82647258(param_1);
      }
    }
    param_1[4] = 0;
  }
  uVar5 = *(unsigned int *)(param_1 + 6);
  *(unsigned char *)(param_1 + 0x634) = uVar1;
  if (*(unsigned int *)(param_1 + 7) < uVar5) {
    uVar5 = fn_82645110(param_1);
  }
  uVar4 = fn_82644040(param_1,uVar2,0x10);
  if (uVar4 == 0) {
    *(unsigned int *)(param_1 + 6) = uVar5;
    uVar4 = 0;
  }
  else {
    *(unsigned int *)(uVar5 + 4) = 0x2102;
    *(unsigned int *)(uVar5 + 8) = 0;
    *(unsigned int *)(uVar5 + 0xc) = 0x548ba;
    *(unsigned int *)(uVar5 + 0x10) = *(unsigned int *)(param_1 + 0xed);
    *(unsigned int *)(uVar5 + 0x14) = *(unsigned int *)((int)param_1 + 0x76c);
    *(unsigned int *)(uVar5 + 0x18) = *(unsigned int *)(param_1 + 0xee);
    *(unsigned int *)(uVar5 + 0x1c) = *(unsigned int *)((int)param_1 + 0x774);
    *(unsigned int *)(uVar5 + 0x20) =
         ((int)((uVar4 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) + ((unsigned int)uVar4 & 0x1fffffff) | 3;
    *(unsigned int *)(uVar5 + 0x24) = (unsigned int)(uVar2 << 2) & 0x3fffffc | 0x10000002;
    *(unsigned int *)(uVar5 + 0x28) = 0x25000;
    *(unsigned int *)(uVar5 + 0x2c) = 0;
    *(unsigned int *)(uVar5 + 0x30) = 0;
    *(unsigned int *)(uVar5 + 0x34) = 0;
    uVar3 = (unsigned int)(*(unsigned char *)((int)param_1 + 0x304b) != 0) << 8 |
            *(unsigned char *)((int)param_1 + *(unsigned char *)((int)param_1 + 0x304b) + 0x300a) & 0xffffff3f;
    if ((*(unsigned char *)((int)param_1 + 0x2abc) & 1) == 0) {
      *(unsigned int *)(uVar5 + 0x38) = 0xc0012201;
      *(unsigned int *)(uVar5 + 0x3c) = uVar3;
      puVar8 = (unsigned int *)(uVar5 + 0x40);
      *puVar8 = param_2 & 0x3f | param_3 << 0x10 | 0x80;
    }
    else {
      puVar6 = *(unsigned int **)((int)param_1 + 0x347c);
      if (*(unsigned int **)(param_1 + 0x690) < puVar6 + 4) {
        puVar6 = (unsigned int *)fn_82643B08(param_1 + 0x68e);
      }
      *puVar6 = (unsigned int *)(uVar5 + 0x34);
      *(unsigned int **)((int)param_1 + 0x347c) = puVar6 + 4;
      *(unsigned int *)(uVar5 + 0x38) = 0xc0006000;
      *(unsigned int *)(uVar5 + 0x3c) = 0xffffffff;
      *(unsigned int *)(uVar5 + 0x40) = 0xc0012201;
      *(unsigned int *)(uVar5 + 0x44) = uVar3;
      *(unsigned int *)(uVar5 + 0x48) = param_2 & 0x3f | param_3 << 0x10 | 0x80;
      *(unsigned int *)(uVar5 + 0x4c) = 0xc0006000;
      *(unsigned int *)(uVar5 + 0x50) = 0x80000000;
      *(unsigned int *)(uVar5 + 0x54) = 0xc0015a01;
      *(unsigned int *)(uVar5 + 0x58) = 0x1a;
      *(unsigned int *)(uVar5 + 0x5c) =
           (((unsigned int)(puVar6 + 1) >> 0x14) + 0x200 & 0x1000) + ((unsigned int)(puVar6 + 1) & 0x1ffffffe) | 1;
      *(unsigned int *)(uVar5 + 0x60) = 0xc0004601;
      puVar8 = (unsigned int *)(uVar5 + 100);
      *puVar8 = 0x19;
    }
    param_1[3] = param_1[3] | 1;
    *(unsigned int **)((int)param_1 + 0x3554) = puVar8;
    *(unsigned int *)(param_1 + 0x6ab) = (unsigned int)uVar4;
    *(int *)(param_1 + 0x6ac) = (int)uVar2;
  }
  return uVar4;
}

