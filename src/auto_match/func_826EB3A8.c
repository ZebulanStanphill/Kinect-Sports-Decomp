extern unsigned int *auStack_dc;
extern unsigned int *auStack_e0;
extern int fn_8268CC00();
extern int fn_8275B490();
extern int fn_8275BA90();
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_826EB3A8(unsigned __int64 param_1,unsigned int *param_2,int *param_3,__int64 param_4,int param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8,unsigned __int64 param_9)

{
  int *piVar1;
  char cVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  unsigned char *puVar7;
  char in_stack_00000057;
  unsigned int *puStack_100;
  unsigned char uStack_fc;
  struct { unsigned int first; unsigned int second; } stack_pair_f8;

  unsigned int uStack_f0;
  unsigned char auStack_e0 [4];
  unsigned char auStack_dc [140];
  
  piVar1 = *(int **)(*param_3 + 0xc);
  if (param_2[6] != 0) {
    if (in_stack_00000057 == '\0') {
      if (param_5 != 0) {
        if ((param_9 & 0xffffffff) == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = (unsigned __int64)param_2[1] * 0x18 + param_9;
        }
        fn_8275BA90(param_1,(unsigned __int64)param_2[1] * 0x28 + param_4,param_3,param_4,lVar5);
      }
    }
    else {
      lVar5 = 2;
      puVar7 = auStack_dc;
      do {
        fn_8268CC00(puVar7);
        lVar5 = lVar5 + -1;
        puVar7 = puVar7 + 0x24;
      } while (-1 < lVar5);
      stack_pair_f8.first = 0;
      stack_pair_f8.second = 0;
      uStack_f0 = 0;
      if ((param_5 != 0) && (uVar3 = 0, *param_2 != 0)) {
        puVar4 = &stack_pair_f8.first;
        puVar7 = auStack_e0;
        puVar6 = param_2;
        do {
          puVar6 = puVar6 + 1;
          if ((*puVar6 != 0xffffffff) &&
             (cVar2 = fn_8275B490(param_1,(unsigned __int64)*puVar6 * 0x28 + param_4,puVar7,param_3),
             cVar2 != '\0')) {
            *puVar4 = puVar7;
          }
          uVar3 = uVar3 + 1;
          puVar7 = puVar7 + 0x24;
          puVar4 = puVar4 + 1;
        } while (uVar3 < *param_2);
      }
      (**(int (***)())(*piVar1 + 100))(piVar1,param_2[4],stack_pair_f8.first,stack_pair_f8.second,uStack_f0);
    }
    puStack_100 = param_2 + 8;
    uStack_fc = 0;
    (**(int (***)())(*piVar1 + 0x40))(piVar1,param_2[5],param_2[6],1,&puStack_100);
    (**(int (***)())(*piVar1 + 0x48))(piVar1,param_6,0,param_7,0,(unsigned __int64)param_2[6] / 3);
  }
  return;
}

