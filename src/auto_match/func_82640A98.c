#define true 1
extern int fn_826417C8();
extern int fn_82641B60();
extern int fn_82641C20();
extern int fn_82641DA0();
extern int fn_82641EF8();
extern int fn_82642F50();
extern int fn_82643B08();
extern int fn_82645110();
extern int fn_82647258();
extern unsigned int lbl_82195ED8;
extern unsigned int lbl_82195EDC;


void fn_82640A98(__int64 *param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  int iVar9;
  __int64 lVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  
  uVar7 = param_1[4];
  uVar8 = param_1[3];
  uVar12 = param_1[2];
  lVar10 = param_1[1];
  if (*param_1 != 0) {
    fn_82641EF8(param_1,*param_1,0x4000,param_1 + 0xf0);
    *param_1 = 0;
  }
  if (lVar10 != 0) {
    fn_82641EF8(param_1,lVar10,0x4400,param_1 + 0x2f0);
    param_1[1] = 0;
  }
  if (uVar12 != 0) {
    if ((uVar12 & 0x1e0000) != 0) {
      uVar12 = fn_82642F50(param_1,uVar12);
    }
    if ((param_1[5] & uVar12) != 0) {
      uVar12 = fn_826417C8(param_1,uVar12,*(unsigned int *)(param_1 + 0x528));
    }
    if ((uVar12 & 0xfff) != 0) {
      fn_82641B60(param_1,uVar12 << 0x34,0x2200,(int)param_1 + 0x2934);
    }
    if ((uVar12 & 0x1f000) != 0) {
      fn_82641B60(param_1,(uVar12 & 0x1f000) << 0x2f,0x2180,param_1 + 0x524);
    }
    if ((uVar12 & 0x3fffc0000000000) != 0) {
      fn_82641B60(param_1,(uVar12 & 0x3fffc0000000000) << 6,0x2000,param_1 + 0x510);
    }
    if ((uVar12 & 0x3ffffe00000) != 0) {
      fn_82641B60(param_1,(uVar12 & 0x3ffffe00000) << 0x16,0x2100,(int)param_1 + 0x28cc);
    }
    param_1[2] = 0;
  }
  if (uVar8 != 0) {
    if ((uVar8 & 0xffffffff) != 0) {
      fn_82641DA0(param_1,uVar8 << 0x20);
    }
    if ((uVar8 & 0x7ffffc00000000) != 0) {
      fn_82641B60(param_1,(uVar8 & 0x7ffffc00000000) << 9,0x2280,(int)param_1 + 0x2964);
    }
    param_1[3] = 0;
  }
  if (uVar7 != 0) {
    if ((uVar7 & 0x3fc000000000) != 0) {
      fn_82641B60(param_1,(uVar7 & 0x3fc000000000) << 0x12,0x2380,param_1 + 0x54a);
    }
    if ((uVar7 & 0x7e000000000000) != 0) {
      fn_82641C20(param_1,(uVar7 & 0x7e000000000000) << 9);
    }
    if ((uVar7 & 0x100000000000000) != 0) {
      fn_82641B60(param_1,0xffffffffff000000,0x4900,param_1 + 0x4f0);
    }
    if ((uVar7 & 0x3fffffffff) != 0) {
      fn_82641B60(param_1,uVar7 << 0x1a,0x2300,param_1 + 0x537);
    }
    if ((uVar7 & 0xc000000000000000) != 0) {
      if (((*(unsigned char *)(param_1 + 0x558) & 0x80) != 0) || ((*(unsigned char *)(param_1 + 0x558) & 0x40) != 0))
      {
        fn_82647258(param_1);
      }
    }
    param_1[4] = 0;
  }
  puVar1 = *(unsigned int **)((int)param_1 + 0x3144);
  while( true ) {
    uVar3 = *(unsigned int *)(param_1 + 6);
    if (*(unsigned int *)(param_1 + 7) < uVar3) {
      uVar3 = fn_82645110(param_1);
    }
    *(unsigned int *)(uVar3 + 4) = 0x2102;
    *(unsigned int *)(uVar3 + 8) = param_3;
    uVar12 = param_5;
    if (0xffff < (param_5 & 0xffffffff)) {
      uVar2 = *(unsigned int *)(&lbl_82195ED8 + param_2 * 8);
      trapWord(6,(unsigned __int64)uVar2,0);
      uVar12 = (__int64)(int)((unsigned int)(0xffff / (unsigned __int64)uVar2) & 0xfffffffe) *
               (__int64)(int)uVar2;
    }
    uVar7 = (unsigned __int64)puVar1[6];
    uVar8 = (param_4 & 0x7fffffff) * 2 + uVar7;
    uVar2 = *puVar1;
    uVar11 = (unsigned int)uVar12 & 0xffffff;
    uVar6 = (unsigned int)(*(unsigned char *)((int)param_1 + 0x304b) != 0) << 8 |
            *(unsigned char *)((int)param_1 + *(unsigned char *)((int)param_1 + 0x304b) + 0x300a) & 0x3f;
    uVar13 = (unsigned int)((uVar12 & 0xffffffff) << 0x10) | param_2 & 0x3f;
    iVar9 = ((int)((uVar8 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) + ((unsigned int)uVar8 & 0x1fffffff);
    if ((uVar2 & 0x80000000) != 0) {
      uVar11 = (unsigned int)((uVar12 & 0x7fffff) << 1);
      uVar7 = (param_4 & 0x3fffffff) * 4 + uVar7;
      uVar13 = uVar13 | 0x800;
      iVar9 = ((int)((uVar7 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) + ((unsigned int)uVar7 & 0x1fffffff);
    }
    uVar11 = uVar11 | (uVar2 & 0x60000000) << 1;
    if ((*(unsigned char *)((int)param_1 + 0x2abc) & 1) == 0) {
      *(unsigned int *)(uVar3 + 0xc) = 0xc0032201;
      *(unsigned int *)(uVar3 + 0x10) = uVar6;
      *(unsigned int *)(uVar3 + 0x14) = uVar13;
      *(int *)(uVar3 + 0x18) = iVar9;
      puVar5 = (unsigned int *)(uVar3 + 0x1c);
      *puVar5 = uVar11;
    }
    else {
      piVar4 = *(int **)((int)param_1 + 0x347c);
      if (*(int **)(param_1 + 0x690) < piVar4 + 4) {
        piVar4 = (int *)fn_82643B08(param_1 + 0x68e);
      }
      *piVar4 = (int)(uVar3 + 8);
      *(int **)((int)param_1 + 0x347c) = piVar4 + 4;
      *(unsigned int *)(uVar3 + 0xc) = 0xc0006000;
      *(unsigned int *)(uVar3 + 0x10) = 0xffffffff;
      *(unsigned int *)(uVar3 + 0x14) = 0xc0032201;
      *(unsigned int *)(uVar3 + 0x18) = uVar6;
      *(unsigned int *)(uVar3 + 0x1c) = uVar13;
      *(int *)(uVar3 + 0x20) = iVar9;
      *(unsigned int *)(uVar3 + 0x24) = uVar11;
      *(unsigned int *)(uVar3 + 0x28) = 0xc0006000;
      *(unsigned int *)(uVar3 + 0x2c) = 0x80000000;
      *(unsigned int *)(uVar3 + 0x30) = 0xc0015a01;
      *(unsigned int *)(uVar3 + 0x34) = 0x1a;
      *(unsigned int *)(uVar3 + 0x38) =
           (((unsigned int)(piVar4 + 1) >> 0x14) + 0x200 & 0x1000) + ((unsigned int)(piVar4 + 1) & 0x1ffffffe) | 1;
      *(unsigned int *)(uVar3 + 0x3c) = 0xc0004601;
      puVar5 = (unsigned int *)(uVar3 + 0x40);
      *puVar5 = 0x19;
    }
    *(unsigned int **)(param_1 + 6) = puVar5;
    if (param_5 - uVar12 == 0) break;
    param_5 = (unsigned __int64)*(unsigned int *)(&lbl_82195EDC + param_2 * 8) + (param_5 - uVar12);
    param_4 = (uVar12 - *(unsigned int *)(&lbl_82195EDC + param_2 * 8)) + param_4;
  }
  return;
}

