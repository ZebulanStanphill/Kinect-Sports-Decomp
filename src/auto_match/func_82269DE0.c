extern unsigned int *auStack_454;
extern unsigned int *auStack_46c;
extern unsigned int *auStack_60;
extern int fn_82230300();
extern int fn_8225C590();
extern int fn_8225DA18();
extern int fn_82486B08();
extern int fn_82829120();
extern int fn_82A1DD38();
extern unsigned int iStack_470;
extern unsigned int uStack_45c;
extern unsigned int uStack_460;


void fn_82269DE0(int *param_1,int param_2)

{
  unsigned int *puVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  int iVar4;
  __int64 lVar5;
  int iVar6;
  int iStack_470;
  unsigned int auStack_46c [3];
  struct { unsigned int first; unsigned int second; } stack_pair_460;

  unsigned char auStack_454 [1012];
  unsigned char auStack_60 [16];
  
  lVar2 = fn_8225C590();
  iVar6 = *param_1;
  if (iVar6 != param_1[1]) {
    lVar5 = 0x420;
    do {
      if (*(int *)(iVar6 + 0x40) != param_2) {
        for (puVar1 = (unsigned int *)**(unsigned int **)param_1[0xb3];
            puVar1 != *(unsigned int **)param_1[0xb3]; puVar1 = (unsigned int *)*puVar1) {
          iVar4 = puVar1[2];
          if (*(int *)(iVar4 + 0x40) == *(int *)(iVar6 + 0x40)) goto LAB_82269e50;
        }
        iVar4 = 0;
LAB_82269e50:
        iVar4 = *(int *)(iVar4 + 0xdc);
        fn_82486B08(&stack_pair_460.first);
        stack_pair_460.first = 0;
        stack_pair_460.second = *(unsigned int *)(iVar6 + 0xd0);
        uVar3 = (**(int (***)())(**(int **)(iVar4 + 0x8c0) + 100))();
        fn_82A1DD38(auStack_454,uVar3,1000);
        fn_82A1DD38((unsigned __int64)(unsigned int)param_1[0xe3] + lVar5 + 0x838,&stack_pair_460.first,0x420);
        auStack_46c[0] = fn_8225DA18(lVar2,*(unsigned int *)(iVar6 + 0xd0));
        fn_82829120(&iStack_470,lVar2 + 0x48,auStack_46c);
        iVar4 = *(int *)(iStack_470 + 0x10);
        fn_82A1DD38(iVar4,uVar3,1000);
        *(unsigned int *)(iVar4 + 0x404) = 1;
        *(unsigned int *)(iVar4 + 0x408) = 1;
        lVar5 = lVar5 + 0x420;
        fn_82230300(auStack_60,1,0);
      }
      iVar6 = iVar6 + 0xe0;
    } while (iVar6 != param_1[1]);
  }
  return;
}

