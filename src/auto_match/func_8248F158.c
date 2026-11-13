#define true 1
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_823F2E20();
extern int fn_8248E2C0();
extern unsigned int iStack_6c;
extern unsigned int uStack_70;


void fn_8248F158(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  char cVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  struct { unsigned int first; int second; } stack_pair_70;

  unsigned char auStack_68 [8];
  unsigned char auStack_60 [8];
  unsigned char auStack_58 [8];
  unsigned char auStack_50 [80];
  
  puVar7 = param_1;
  puVar2 = param_1;
  while (puVar2 = puVar2 + 2, puVar2 != param_2) {
    stack_pair_70.first = 0;
    stack_pair_70.second = 0;
    if (&stack_pair_70.first != puVar2) {
      stack_pair_70.second = puVar7[3];
      puVar7[3] = 0;
      stack_pair_70.first = *puVar2;
      *puVar2 = 0;
    }
    uVar3 = fn_82365BD8(auStack_58,param_1);
    uVar4 = fn_82365BD8(auStack_50,&stack_pair_70.first);
    cVar5 = fn_8248E2C0(uVar4,uVar3);
    puVar6 = puVar2;
    puVar8 = puVar7;
    puVar1 = puVar2;
    if (cVar5 == '\0') {
      while( true ) {
        uVar3 = fn_82365BD8(auStack_68,puVar8);
        uVar4 = fn_82365BD8(auStack_60,&stack_pair_70.first);
        cVar5 = fn_8248E2C0(uVar4,uVar3);
        if (cVar5 == '\0') break;
        fn_823F2E20(puVar6,puVar8);
        puVar6 = puVar8;
        puVar8 = puVar8 + -2;
      }
    }
    else {
      while (puVar6 = param_1, param_1 != puVar1) {
        fn_823F2E20(puVar1,puVar1 + -2);
        puVar1 = puVar1 + -2;
      }
    }
    fn_823F2E20(puVar6,&stack_pair_70.first);
    if (stack_pair_70.second != 0) {
      fn_822315A0();
    }
    puVar7 = puVar7 + 2;
  }
  return;
}

