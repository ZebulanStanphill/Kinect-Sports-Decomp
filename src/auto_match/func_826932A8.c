extern int fn_82693008();
extern int fn_82693078();
extern int fn_82693208();


int fn_826932A8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned char cVar3;
  unsigned int uVar4;
  int lVar5;
  unsigned int uVar6;
  int lVar7;
  
  if (param_3 != param_4) {
    puVar2 = (unsigned int *)param_1;
    if (param_3 > param_4) {
      uVar1 = ((param_2 + param_4) - 1 & 0xffffffff) >> 0x14;
      uVar4 = ((param_2 + param_3) - 1 & 0xffffffff) >> 0x14;
      uVar6 = uVar1 + 1;
      if (uVar6 <= uVar4) {
        lVar5 = uVar6 * 8 + param_1 + 4;
        do {
          cVar3 = fn_82693008(lVar5,*puVar2);
          if (cVar3 == '\0') {
            uVar6 = uVar6 - 1;
            if (uVar6 > uVar1) {
              lVar7 = uVar6 - uVar1;
              lVar5 = (uVar6 & 0x1fffffff) * 8 + param_1 + 4;
              do {
                fn_82693078(lVar5,*puVar2);
                lVar7 = lVar7 + -1;
                lVar5 = lVar5 + -8;
              } while (lVar7 != 0);
            }
            return 0;
          }
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + 8;
        } while (uVar6 <= uVar4);
      }
      fn_82693208(param_1,param_2 + param_4,param_3 - param_4,
                    *(unsigned int *)
                     (*(int *)((int)puVar2 + ((unsigned int)param_2 >> 0x11 & 0x7ff8) + 4) +
                     ((unsigned int)((param_2 & 0xffffffff) >> 10) & 0x3fc)));
    }
    else {
      uVar1 = ((param_2 + param_4) - 1 & 0xffffffff) >> 0x14;
      uVar4 = (((param_2 + param_3) - 1 & 0xffffffff) >> 0x14) + 1;
      if (uVar4 <= uVar1) {
        lVar7 = (uVar1 - uVar4) + 1;
        lVar5 = uVar4 * 8 + param_1 + 4;
        do {
          fn_82693078(lVar5,*puVar2);
          lVar7 = lVar7 + -1;
          lVar5 = lVar5 + 8;
        } while (lVar7 != 0);
      }
    }
  }
  return 1;
}

