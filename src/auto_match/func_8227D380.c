#define true 1
extern unsigned int *auStack_50;
extern int fn_8227C270();
extern int fn_82F68CC0();
extern unsigned int stack0x00000034;
extern unsigned int uStack00000034;


void fn_8227D380(__int64 param_1,__int64 param_2,__int64 param_3,unsigned __int64 param_4,
                  unsigned int param_5)

{
  unsigned __int64 uVar1;
  char cVar2;
  unsigned int uVar3;
  __int64 lVar4;
  __int64 lVar5;
  __int64 lVar6;
  int iVar7;
  unsigned int uStack00000034;
  unsigned int auStack_50 [20];
  
  lVar6 = param_2;
  uStack00000034 = param_5;
  while( true ) {
    uVar1 = lVar6 + 1U & 0x7fffffff;
    lVar5 = uVar1 * 2;
    if ((int)param_3 <= (int)lVar5) break;
    lVar4 = uVar1 * 0x1b8 + param_1;
    cVar2 = fn_8227C270(&stack0x00000034,lVar4,lVar4 + -0xdc);
    if (cVar2 != '\0') {
      lVar5 = lVar5 + -1;
    }
    fn_82F68CC0(lVar6 * 0xdc + param_1,lVar5 * 0xdc + param_1,0xdc);
    lVar6 = lVar5;
  }
  if ((int)lVar5 == (int)param_3) {
    fn_82F68CC0(lVar6 * 0xdc + param_1,param_3 * 0xdc + param_1 + -0xdc,0xdc);
    lVar6 = param_3 + -1;
  }
  iVar7 = (int)lVar6;
  auStack_50[0] = param_5;
  while( true ) {
    uVar3 = (int)lVar6 - 1;
    lVar5 = (__int64)((int)uVar3 >> 1) + (unsigned __int64)((int)uVar3 < 0 && (uVar3 & 1) != 0);
    if (iVar7 <= (int)param_2) break;
    lVar4 = lVar5 * 0xdc + param_1;
    cVar2 = fn_8227C270(auStack_50,lVar4,param_4);
    if (cVar2 == '\0') break;
    fn_82F68CC0(lVar6 * 0xdc + param_1,lVar4,0xdc);
    iVar7 = (int)lVar5;
    lVar6 = lVar5;
  }
  fn_82F68CC0(lVar6 * 0xdc + param_1,param_4,0xdc);
  return;
}

