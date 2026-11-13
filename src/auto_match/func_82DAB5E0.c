#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82DAD448();
extern int fn_82DAF190();
extern unsigned int stack0x00000000;


void fn_82DAB5E0(int param_1,int param_2,int param_3,unsigned __int64 param_4,int *param_5)

{
  short sVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned short uVar5;
  __int64 lVar4;
  
  uVar2 = ZEXT48(&stack0x00000000);
  sVar1 = *(short *)(param_1 + 0x18);
  *(short *)(param_1 + 0x18) = sVar1 + -1;
  if (sVar1 == 0) {
    param_2 = *(char *)(param_2 + 0x10) + param_2;
    param_3 = *(char *)(param_3 + 0x10) + param_3;
    uVar5 = *(unsigned short *)(param_2 + 0xaa);
    if (*(unsigned short *)(param_3 + 0xaa) <= *(unsigned short *)(param_2 + 0xaa)) {
      uVar5 = *(unsigned short *)(param_3 + 0xaa);
    }
    *(unsigned short *)(param_1 + 0x18) = uVar5;
    lVar3 = (__int64)(((*param_5 - (int)param_5) + -0x10) / 0x30);
    if (-1 < (__int64)(lVar3 - 1U)) {
      lVar4 = (lVar3 - 1U & 0x3fffffff) * 4 + (uVar2 - 0x41c);
      do {
        lVar4 = lVar4 + -4;
        *(unsigned int *)lVar4 = 0;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    fn_82DAF190(*(unsigned int *)(param_1 + 0xc),uVar2 - 0x430);
    if (*(short *)(param_2 + 0x204) != 0) {
      fn_82DAD448(param_2,uVar2 - 0x430);
    }
    if (*(short *)(param_3 + 0x204) != 0) {
      fn_82DAD448(param_3,uVar2 - 0x430);
    }
  }
  return;
}

