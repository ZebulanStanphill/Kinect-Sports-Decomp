#define true 1
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int *auStack_6c;
extern int fn_822315A0();
extern int fn_827D5070();
extern int fn_827D5610();
extern int fn_827D5630();
extern int fn_827D5710();
extern int fn_827D5740();
extern int fn_827DCBF8();
extern int fn_827E0250();
extern int fn_827E0438();
extern int fn_827E1280();
extern int fn_827E25F8();
extern int fn_827E2790();
extern int fn_827E8720();
extern int fn_82A1E300();
extern unsigned int iStack_5c;
extern unsigned int iStack_64;


__int64 fn_827DF8F0(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar5;
  __int64 lVar3;
  short sVar7;
  unsigned __int64 uVar4;
  unsigned int *puVar6;
  unsigned int *puStack_70;
  unsigned char auStack_6c [4];
  unsigned char auStack_68 [4];
  int iStack_64;
  unsigned char auStack_60 [4];
  int iStack_5c;
  
  if ((param_3 == 0) && (iVar5 = fn_827D5740(param_2), iVar5 == 0)) {
    lVar3 = 1;
  }
  else {
    fn_827D5610(param_2);
    while (iVar5 = fn_827D5710(param_2), iVar5 == 0) {
      (**(int (***)())(**(int **)(param_2 + 0x2c4) + 0x10))();
      fn_82A1E300();
    }
    while( true ) {
      iVar5 = RtlTryEnterCriticalSection(param_1 + 400);
      if (iVar5 != 0) break;
      (**(int (***)())(**(int **)(param_2 + 0x2c4) + 0x10))();
      fn_82A1E300();
    }
    puVar1 = *(unsigned int **)(param_1 + 4);
    lVar3 = 0;
    puVar6 = (unsigned int *)*puVar1;
    while (puVar6 != puVar1) {
      uVar2 = puVar6[3];
      sVar7 = fn_827E25F8(uVar2);
      if (sVar7 == 0) {
        lVar3 = lVar3 + 1;
        uVar4 = fn_827E0250(param_1,puVar6 + 2);
        fn_827E0438(param_1,puVar6,uVar4);
        fn_827E8720(&puStack_70,param_1 + 4,puVar6);
        puVar6 = (unsigned int *)fn_827E2790(auStack_68,uVar2);
        fn_827D5070(*puVar6);
        fn_827E1280(param_1 + 0xf0,auStack_6c);
        if (iStack_64 != 0) {
          fn_822315A0();
        }
        fn_827DCBF8(param_1 + 0x168,auStack_6c);
        puVar6 = puStack_70;
      }
      else {
        puVar6 = (unsigned int *)*puVar6;
      }
    }
    puVar1 = *(unsigned int **)(param_1 + 0x7c);
    puVar6 = (unsigned int *)*puVar1;
    while (puVar6 != puVar1) {
      uVar2 = puVar6[3];
      sVar7 = fn_827E25F8(uVar2);
      if (sVar7 == 0) {
        lVar3 = lVar3 + 1;
        uVar4 = fn_827E0250(param_1 + 0x78,puVar6 + 2);
        fn_827E0438(param_1 + 0x78,puVar6,uVar4);
        fn_827E8720(auStack_6c,param_1 + 0x7c,puVar6);
        puVar6 = (unsigned int *)fn_827E2790(auStack_60,uVar2);
        fn_827D5070(*puVar6);
        fn_827E1280(param_1 + 0xf0,&puStack_70);
        if (iStack_5c != 0) {
          fn_822315A0();
        }
        fn_827DCBF8(param_1 + 0x168,&puStack_70);
        puVar6 = puVar1;
      }
      else {
        puVar6 = (unsigned int *)*puVar6;
      }
    }
    lVar3 = (*(int *)(param_1 + 0x16c) - *(int *)(param_1 + 0x168) >> 2) + lVar3;
    RtlLeaveCriticalSection(param_1 + 400);
    fn_827D5630(param_2);
  }
  return lVar3;
}

