typedef unsigned char bool;
extern int fn_8256E1D8();
extern int fn_8266CB08();
extern int fn_8266D210();
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8266D4A8(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  unsigned int *puVar7;
  char in_RESERVE;
  unsigned char in_cr0;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  
  puVar5 = param_1;
  if (param_1 != param_2) {
    while (puVar7 = puVar5 + 3, puVar7 != param_2) {
      fn_8266CB08(&stack_pair_50.first,puVar7);
      uVar1 = uStack_48;
      if (uStack_48 < (unsigned int)param_1[2]) {
        fn_8266D210(param_1,puVar7,puVar5 + 6);
        uVar6 = (unsigned __int64)stack_pair_50.second;
        fn_8256E1D8(param_1,stack_pair_50.first,uVar6);
        param_1[2] = uVar1;
      }
      else {
        uVar3 = puVar5[2];
        puVar5 = puVar7;
        while (uVar1 < uVar3) {
          fn_8256E1D8(puVar5,puVar5[-3],puVar5[-2]);
          puVar5[2] = puVar5[-1];
          uVar3 = puVar5[-4];
          puVar5 = puVar5 + -3;
        }
        uVar6 = (unsigned __int64)stack_pair_50.second;
        fn_8256E1D8(puVar5,stack_pair_50.first,uVar6);
        puVar5[2] = uVar1;
      }
      puVar5 = puVar7;
      if (uVar6 != 0) {
        do {
          puVar4 = (unsigned int *)(uVar6 + 8);
          lVar2 = (unsigned __int64)*puVar4 - 1;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(lVar2,0,uVar6 + 8);
            *puVar4 = uVar1;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        if ((int)lVar2 == 0) {
          (**(int (***)())(*(int *)uVar6 + 4))(uVar6);
        }
      }
    }
  }
  return;
}

