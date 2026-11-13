#define true 1
extern unsigned int lbl_820887D8;


void fn_82A1EB30(unsigned int param_1,int param_2,int param_3)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned short *puVar3;
  unsigned short uVar4;
  unsigned int uVar5;
  unsigned short *puVar6;
  
  uVar2 = 0;
  puVar6 = (unsigned short *)&lbl_820887D8;
  do {
    uVar4 = (unsigned int)*puVar6;
    puVar6 = puVar6 + 1;
    if (uVar2 == param_1) {
      uVar5 = 0;
      if (uVar4 != 0) {
        unsigned int lim = param_3 - 1U;
        puVar3 = (unsigned short *)(param_2 + -2);
        do {
          if (uVar5 >= lim) break;
          uVar1 = *puVar6;
          uVar5 = uVar5 + 1;
          puVar6 = puVar6 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = uVar1;
        } while (uVar5 < uVar4);
      }
      *(unsigned short *)(uVar5 * 2 + param_2) = 0;
    }
    else {
      puVar6 = puVar6 + uVar4;
    }
    uVar2 = uVar2 + 1;
    if (param_1 < uVar2) {
      return;
    }
  } while( true );
}

