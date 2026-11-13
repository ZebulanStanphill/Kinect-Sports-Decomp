#define true 1
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
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


void fn_82640680(__int64 *param_1,unsigned int param_2,__int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  
  uVar5 = param_1[4];
  uVar6 = param_1[3];
  uVar8 = param_1[2];
  lVar7 = param_1[1];
  if (*param_1 != 0) {
    fn_82641EF8(param_1,*param_1,0x4000,param_1 + 0xf0);
    *param_1 = 0;
  }
  if (lVar7 != 0) {
    fn_82641EF8(param_1,lVar7,0x4400,param_1 + 0x2f0);
    param_1[1] = 0;
  }
  if (uVar8 != 0) {
    if ((uVar8 & 0x1e0000) != 0) {
      uVar8 = fn_82642F50(param_1,uVar8);
    }
    if ((param_1[5] & uVar8) != 0) {
      uVar8 = fn_826417C8(param_1,uVar8,*(unsigned int *)(param_1 + 0x528));
    }
    if ((uVar8 & 0xfff) != 0) {
      fn_82641B60(param_1,uVar8 << 0x34,0x2200,(int)param_1 + 0x2934);
    }
    if ((uVar8 & 0x1f000) != 0) {
      fn_82641B60(param_1,(uVar8 & 0x1f000) << 0x2f,0x2180,param_1 + 0x524);
    }
    if ((uVar8 & 0x3fffc0000000000) != 0) {
      fn_82641B60(param_1,(uVar8 & 0x3fffc0000000000) << 6,0x2000,param_1 + 0x510);
    }
    if ((uVar8 & 0x3ffffe00000) != 0) {
      fn_82641B60(param_1,(uVar8 & 0x3ffffe00000) << 0x16,0x2100,(int)param_1 + 0x28cc);
    }
    param_1[2] = 0;
  }
  if (uVar6 != 0) {
    if ((uVar6 & 0xffffffff) != 0) {
      fn_82641DA0(param_1,uVar6 << 0x20);
    }
    if ((uVar6 & 0x7ffffc00000000) != 0) {
      fn_82641B60(param_1,(uVar6 & 0x7ffffc00000000) << 9,0x2280,(int)param_1 + 0x2964);
    }
    param_1[3] = 0;
  }
  if (uVar5 != 0) {
    if ((uVar5 & 0x3fc000000000) != 0) {
      fn_82641B60(param_1,(uVar5 & 0x3fc000000000) << 0x12,0x2380,param_1 + 0x54a);
    }
    if ((uVar5 & 0x7e000000000000) != 0) {
      fn_82641C20(param_1,(uVar5 & 0x7e000000000000) << 9);
    }
    if ((uVar5 & 0x100000000000000) != 0) {
      fn_82641B60(param_1,0xffffffffff000000,0x4900,param_1 + 0x4f0);
    }
    if ((uVar5 & 0x3fffffffff) != 0) {
      fn_82641B60(param_1,uVar5 << 0x1a,0x2300,param_1 + 0x537);
    }
    if (((uVar5 & 0xc000000000000000) != 0) &&
       (((*(unsigned char *)(param_1 + 0x558) & 0x80) != 0 || ((*(unsigned char *)(param_1 + 0x558) & 0x40) != 0)))) {
      fn_82647258(param_1);
    }
    param_1[4] = 0;
  }
  while( true ) {
    uVar2 = *(unsigned int *)(param_1 + 6);
    if (*(unsigned int *)(param_1 + 7) < uVar2) {
      uVar2 = fn_82645110(param_1);
    }
    *(unsigned int *)(uVar2 + 4) = 0x2102;
    *(unsigned int *)(uVar2 + 8) = (int)param_3;
    uVar8 = param_4;
    if (0xffff < (param_4 & 0xffffffff)) {
      uVar1 = *(unsigned int *)(&lbl_82195ED8 + param_2 * 8);
      trapWord(6,(unsigned __int64)uVar1,0);
      uVar8 = (__int64)(int)((unsigned int)(0xffff / (unsigned __int64)uVar1) & 0xfffffffe) * (__int64)(int)uVar1
      ;
    }
    uVar1 = CONCAT11(*(unsigned char *)((int)param_1 + 0x304b) != 0,
                     *(unsigned char *)((int)param_1 + *(unsigned char *)((int)param_1 + 0x304b) + 0x300a)) &
            0xffffff3f;
    if ((*(unsigned char *)((int)param_1 + 0x2abc) & 1) == 0) {
      *(unsigned int *)(uVar2 + 0xc) = 0xc0012201;
      *(unsigned int *)(uVar2 + 0x10) = uVar1;
      puVar4 = (unsigned int *)(uVar2 + 0x14);
      *puVar4 = (unsigned int)((uVar8 & 0xffffffff) << 0x10) | param_2 & 0x3f | 0x80;
    }
    else {
      piVar3 = *(int **)((int)param_1 + 0x347c);
      if (*(int **)(param_1 + 0x690) < piVar3 + 4) {
        piVar3 = (int *)fn_82643B08(param_1 + 0x68e);
      }
      *piVar3 = (int)(uVar2 + 8);
      *(int **)((int)param_1 + 0x347c) = piVar3 + 4;
      *(unsigned int *)(uVar2 + 0xc) = 0xc0006000;
      *(unsigned int *)(uVar2 + 0x10) = 0xffffffff;
      *(unsigned int *)(uVar2 + 0x14) = 0xc0012201;
      *(unsigned int *)(uVar2 + 0x18) = uVar1;
      *(unsigned int *)(uVar2 + 0x1c) = (unsigned int)((uVar8 & 0xffffffff) << 0x10) | param_2 & 0x3f | 0x80;
      *(unsigned int *)(uVar2 + 0x20) = 0xc0006000;
      *(unsigned int *)(uVar2 + 0x24) = 0x80000000;
      *(unsigned int *)(uVar2 + 0x28) = 0xc0015a01;
      *(unsigned int *)(uVar2 + 0x2c) = 0x1a;
      *(unsigned int *)(uVar2 + 0x30) =
           (((unsigned int)(piVar3 + 1) >> 0x14) + 0x200 & 0x1000) + ((unsigned int)(piVar3 + 1) & 0x1ffffffe) | 1;
      *(unsigned int *)(uVar2 + 0x34) = 0xc0004601;
      puVar4 = (unsigned int *)(uVar2 + 0x38);
      *puVar4 = 0x19;
    }
    *(unsigned int **)(param_1 + 6) = puVar4;
    if (param_4 - uVar8 == 0) break;
    param_4 = (unsigned __int64)*(unsigned int *)(&lbl_82195EDC + param_2 * 8) + (param_4 - uVar8);
    param_3 = (uVar8 - *(unsigned int *)(&lbl_82195EDC + param_2 * 8)) + param_3;
  }
  return;
}

