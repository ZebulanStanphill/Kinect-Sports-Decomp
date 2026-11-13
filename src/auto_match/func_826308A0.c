#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_4c;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8262FD28();
extern int fn_82630270();
extern int fn_826303C8();
extern int fn_8263B958();
extern int fn_82645110();
extern int fn_8264B4A0();


void fn_826308A0(int param_1,int param_2,unsigned int *param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 *puVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned int auStack_60 [4];
  unsigned char auStack_50 [4];
  unsigned char auStack_4c [4];
  unsigned char auStack_48 [8];
  unsigned int auStack_40 [16];
  
  *(unsigned int *)((param_2 + 0xa26) * 4 + param_1) = 0;
  uVar3 = *(unsigned int *)(param_1 + 0x30);
  if (*(unsigned int *)(param_1 + 0x38) < uVar3) {
    uVar3 = fn_82645110(param_1);
  }
  *(int *)(uVar3 + 4) = param_2 + 0x2006;
  *(unsigned int *)(uVar3 + 8) = 0;
  uVar1 = *(unsigned int *)(param_1 + 0x2a9c);
  *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar3 + 8);
  if (uVar1 == 0) {
    if ((*(unsigned int *)(param_1 + 0x2aa0) & *param_3) != 0) {
      puVar4 = *(unsigned __int64 **)(param_1 + 0x35a8);
      if (*(unsigned __int64 **)(param_1 + 0x35ac) <= puVar4) {
        puVar4 = (unsigned __int64 *)fn_8264B4A0(param_1);
      }
      auStack_40[1] = 0xffffffff;
      uVar3 = (unsigned int)param_3 >> 2 | auStack_40[0] & 0xc0000000;
      auStack_40[0] = uVar3 | 0x40000000;
      *puVar4 = CONCAT44(uVar3,0xffffffff) | 0x4000000000000000;
      *(unsigned __int64 **)(param_1 + 0x35a8) = puVar4 + 1;
    }
  }
  else {
    param_3[2] = uVar1;
    param_3[3] = uVar1;
  }
  if ((*param_3 & 0xf) == 1) {
    uVar1 = param_3[6];
    uVar2 = uVar1 & 0xfffffffc;
    auStack_60[0] = param_3[7] & 0x3fffffc;
  }
  else {
    if ((*param_3 & 0xf) != 3) goto LAB_82630a2c;
    uVar3 = param_3[8];
    uVar1 = param_3[0xc];
    uVar2 = uVar1 & 0xfffff000;
    fn_8263B958(param_3,0,0,auStack_40,auStack_48,auStack_60,auStack_4c,auStack_50);
    fn_8262FD28(param_1,((uVar3 >> 0x14) + 0x200 & 0x1000) + (uVar3 & 0x1ffff000),auStack_60[0]);
    if ((uVar1 & 0xfffff000) == 0) goto LAB_82630a2c;
  }
  fn_8262FD28(param_1,((uVar1 >> 0x14) + 0x200 & 0x1000) + (uVar2 & 0x1fffffff),auStack_60[0]);
LAB_82630a2c:
  uVar3 = *(unsigned int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x3590) = *(int *)(param_1 + 0x3590) + -1;
  if (*(unsigned int *)(param_1 + 0x38) < uVar3) {
    uVar3 = fn_82645110(param_1);
  }
  *(unsigned int *)(uVar3 + 4) = 0xc0004600;
  puVar5 = (unsigned int *)(uVar3 + 8);
  *puVar5 = 6;
  *(unsigned int **)(param_1 + 0x30) = puVar5;
  if ((*(int *)(param_1 + 0x3590) == 0) && (param_4 != 1)) {
    if (*(unsigned int **)(param_1 + 0x38) < puVar5) {
      puVar5 = (unsigned int *)fn_82645110(param_1);
    }
    puVar5[1] = 0x5c8;
    puVar5[2] = 0x20000;
    *(unsigned int **)(param_1 + 0x30) = puVar5 + 2;
    if (param_4 != 2) {
      fn_826303C8(param_1);
    }
  }
  else {
    fn_82630270(param_1);
  }
  uVar3 = *(unsigned int *)(param_1 + 0x30);
  if (*(unsigned int *)(param_1 + 0x38) < uVar3) {
    uVar3 = fn_82645110(param_1);
  }
  *(unsigned int *)(param_1 + 0x30) = uVar3;
  if ((*(int *)(param_1 + 0x3590) != 0) || (uVar6 = 1, param_4 != 1)) {
    uVar6 = 0;
  }
  *(unsigned int *)(param_1 + 0x3594) = uVar6;
  return;
}

