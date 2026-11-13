extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_826C6368();


void fn_827A9620(int param_1,__int64 param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned short *puVar3;
  unsigned int *puVar4;
  
  if ((int)param_2 != 0) {
    puVar3 = (unsigned short *)(param_1 + 6);
    puVar4 = (unsigned int *)(param_3 + -4);
    do {
      if ((*puVar3 >> 0xe & 1) != 0) {
        if ((*puVar3 >> 0xd & 1) != 0) {
          puVar1 = (unsigned int *)puVar4[1];
          uVar2 = *puVar1;
          *puVar1 = (unsigned int)((unsigned __int64)uVar2 - 1);
          if ((unsigned __int64)uVar2 - 1 == 0) {
            fn_826C6368(puVar1);
            fn_8267BE38(puVar1);
          }
          puVar4 = puVar4 + 1;
        }
        if ((*puVar3 >> 0xc & 1) != 0) {
          puVar4 = puVar4 + 1;
        }
        if ((*puVar3 >> 0xb & 1) != 0) {
          puVar4 = puVar4 + 1;
          fn_8267C498(*puVar4);
        }
      }
      param_2 = param_2 + -1;
      puVar3 = puVar3 + 4;
    } while (param_2 != 0);
  }
  return;
}

