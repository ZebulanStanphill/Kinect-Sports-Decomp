#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82691A10();
extern int fn_8270AA18();
extern unsigned int lbl_8200E1B0;
extern unsigned int lbl_831E7E60;
extern unsigned int uStack_50;
extern unsigned int uStack_58;


unsigned int *
fn_82692630(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,__int64 param_6,__int64 param_7,unsigned int param_8)

{
  unsigned int uVar1;
  unsigned int *puVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  char cVar6;
  __int64 lVar7;
  unsigned int in_stack_00000054;
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [8];
  unsigned __int64 uStack_58;
  unsigned __int64 uStack_50;
  
  *param_1 = param_3;
  param_1[1] = param_2;
  param_1[2] = lbl_831E7E60 + 0x118;
  if ((param_5 & 0xffff0000) == 0) {
    if ((param_5 & 0xff00) == 0) {
      uVar4 = (unsigned int)(unsigned char)(&lbl_8200E1B0)[(unsigned int)param_5 & 0xff];
    }
    else {
      uVar4 = (unsigned char)(&lbl_8200E1B0)[(unsigned int)(param_5 >> 8) & 0xff] + 8;
    }
  }
  else if ((param_5 & 0xff000000) == 0) {
    uVar4 = (unsigned char)(&lbl_8200E1B0)[(unsigned int)(param_5 >> 0x10) & 0xff] + 0x10;
  }
  else {
    uVar4 = (unsigned char)(&lbl_8200E1B0)[(unsigned int)(param_5 >> 0x18) & 0xff] + 0x18;
  }
  param_1[3] = uVar4 & 0xff;
  param_1[4] = (1 << (uVar4 & 0x3f)) + -1;
  fn_8270AA18(param_1 + 5);
  puVar3 = param_1 + 0x6d;
  param_1[0x6b] = param_1 + 0x6b;
  param_1[0x6c] = param_1 + 0x6b;
  lVar7 = 8;
  do {
    *puVar3 = puVar3;
    puVar3[1] = puVar3;
    puVar3 = puVar3 + 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  param_1[0x88] = in_stack_00000054;
  uVar5 = param_6 + 0xfffU & 0xfffff000;
  param_1[0x81] = param_8;
  param_1[0x7f] = (int)uVar5;
  trapWord(6,uVar5,0);
  *(unsigned char *)((int)param_1 + 0x1f6) = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  *(unsigned char *)(param_1 + 0x7d) = (unsigned char)((param_4 & 0xffffffff) >> 4) & 1;
  *(unsigned char *)((int)param_1 + 0x1f7) = 0;
  param_1[0x82] = 0;
  *(unsigned char *)((int)param_1 + 0x1f5) = (unsigned char)((param_4 & 0xffffffff) >> 5) & 1;
  param_1[0x80] = (int)(((uVar5 + param_7) - 1 & 0xffffffff) / uVar5) * (int)uVar5;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x89] = 0;
  param_1[0x7e] = 0x1000;
  (*(int (**)())**(unsigned int **)param_1[1])((unsigned int *)param_1[1],auStack_60);
  uVar5 = uStack_58 >> 0x20;
  *(unsigned char *)((int)param_1 + 0x1f7) = (((unsigned __int64)(uStack_50) >> 32) & 0xFF);
  if (uVar5 < 0x1000) {
    uVar5 = 0x1000;
    uStack_58 = CONCAT44(0x1000,(((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF));
  }
  trapWord(6,uVar5,0);
  param_1[0x7e] = (int)uVar5;
  param_1[0x82] = (((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF);
  uVar4 = (int)((((unsigned int)param_1[0x7f] + uVar5) - 1 & 0xffffffff) / uVar5) * (int)uVar5;
  param_1[0x7f] = uVar4;
  if ((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) != 0) {
    uVar1 = (((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0xfffU & 0xfffff000;
    uStack_50 = CONCAT44((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0xfffU,(((unsigned __int64)(uStack_50) >> 32) & 0xFFFFFFFF)) & 0xfffff000ffffffff;
    if (uVar1 < uVar4) {
      param_1[0x7f] = uVar1;
      *(unsigned char *)(param_1 + 0x7d) = 0;
      *(unsigned char *)((int)param_1 + 0x1f5) = 0;
    }
  }
  uVar2 = (uVar5 & 0x7ffffff) << 5;
  if (((unsigned int)param_1[0x81] < uVar2) && ((unsigned __int64)(unsigned int)param_1[0x81] != 0)) {
    param_1[0x81] = (int)uVar2;
  }
  if ((((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) != 0) {
    if ((((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) < (unsigned int)param_1[0x81]) {
      param_1[0x81] = (((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF);
    }
    if (((unsigned int)param_1[0x81] < 0x1000) && (param_1[0x81] != 0)) {
      param_1[0x81] = 0x1000;
    }
    if ((((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) < (unsigned int)param_1[0x7f]) {
      param_1[0x7f] = (((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) + 0xfff & 0xfffff000;
    }
    if ((uStack_58 & 0xffffffff) < uVar5) {
      param_1[0x7e] = (((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) + 0xfff & 0xfffff000;
    }
    if ((((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) < (unsigned int)param_1[0x80]) {
      param_1[0x80] = (((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF);
    }
    *(unsigned char *)((int)param_1 + 0x1f5) = 0;
  }
  if (param_1[0x80] == 0) {
    cVar6 = '\x01';
  }
  else {
    lVar7 = fn_82691A10(param_1,param_1[0x80],param_5,param_1[0x7f],auStack_70);
    cVar6 = '\x01' - (lVar7 == 0);
  }
  *(char *)((int)param_1 + 0x1f6) = cVar6;
  return param_1;
}

