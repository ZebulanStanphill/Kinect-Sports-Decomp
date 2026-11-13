extern int fn_82FA5190();
extern int fn_82FF8410();
extern unsigned int lbl_831BC768;


unsigned __int64 fn_82FF7B98(int param_1,char param_2)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  
  puVar4 = *(unsigned int **)(param_1 + 4);
  if (puVar4 != *(unsigned int **)(param_1 + 8)) {
    do {
      puVar1 = (unsigned int *)puVar4[1];
      if ((param_2 == '\0') || (puVar1[0xc] == 0)) {
        if (puVar1[4] != 0) {
          puVar1[5] = puVar1[4];
          fn_82FA5190(lbl_831BC768);
          puVar1[4] = 0;
          puVar1[5] = 0;
          puVar1[6] = 0;
        }
        if (puVar1[0xf] != 0) {
          puVar1[0x10] = puVar1[0xf];
          fn_82FA5190(lbl_831BC768);
          puVar1[0xf] = 0;
          puVar1[0x10] = 0;
          puVar1[0x11] = 0;
        }
        fn_82FF8410(puVar1 + 7);
        uVar3 = lbl_831BC768;
        if (puVar1 != (unsigned int *)0x0) {
          (**(int (***)())*puVar1)(puVar1,0);
          fn_82FA5190(uVar3,puVar1);
        }
        iVar2 = *(int *)(param_1 + 8);
        if (1 < (unsigned int)(iVar2 - *(int *)(param_1 + 4) >> 3)) {
          *puVar4 = *(unsigned int *)(iVar2 + -8);
          puVar4[1] = *(unsigned int *)(iVar2 + -4);
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -8;
      }
      else {
        puVar4 = puVar4 + 2;
      }
    } while (puVar4 != *(unsigned int **)(param_1 + 8));
  }
  return 1;
}

