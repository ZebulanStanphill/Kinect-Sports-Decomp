extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FAF408();
extern int fn_83013B98();
extern int fn_8301B058();
extern int fn_83034438();
extern int fn_83034858();
extern int fn_83034DB0();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642EC;


unsigned int * fn_83002FF0(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int *puVar3;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned int *puVar5;
  unsigned char uVar6;
  
  if ((param_2 & 0xffffffff) == 0) {
    fn_8301B058(lbl_832642EC,param_1);
    if (*(int *)(param_1 + 0x24) == 0) {
      if (*(int *)(param_1 + 0x28) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(unsigned char *)(*(int *)(param_1 + 0x28) + 0x3c);
      }
      uVar2 = fn_82FA5060(lbl_831BC768,0x40);
      if ((uVar2 & 0xffffffff) != 0) {
        puVar3 = (unsigned int *)fn_83034858(uVar2,param_1,uVar6);
        *(unsigned int **)(param_1 + 0x24) = puVar3;
        return puVar3;
      }
      *(unsigned int *)(param_1 + 0x24) = 0;
    }
    puVar3 = *(unsigned int **)(param_1 + 0x24);
  }
  else {
    puVar3 = *(unsigned int **)(param_1 + 0x54);
    if (puVar3 == (unsigned int *)0x0) {
      puVar3 = (unsigned int *)fn_82FA5060(lbl_831BC768,0xc);
      *(unsigned int **)(param_1 + 0x54) = puVar3;
      if (puVar3 != (unsigned int *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      puVar3 = *(unsigned int **)(param_1 + 0x54);
      if (puVar3 == (unsigned int *)0x0) {
        return (unsigned int *)0x0;
      }
    }
    for (puVar5 = (unsigned int *)*puVar3;
        (puVar5 != (unsigned int *)puVar3[1] && ((unsigned __int64)*puVar5 != (param_2 & 0xffffffff)));
        puVar5 = puVar5 + 2) {
    }
    puVar3 = (unsigned int *)(-(unsigned int)((unsigned int *)puVar3[1] != puVar5) & (unsigned int)(puVar5 + 1));
    if (puVar3 == (unsigned int *)0x0) {
      if (*(int *)(param_1 + 0x28) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(unsigned char *)(*(int *)(param_1 + 0x28) + 0x3c);
      }
      uVar2 = fn_82FA5060(lbl_831BC768,0x40);
      if ((uVar2 & 0xffffffff) != 0) {
        puVar3 = (unsigned int *)fn_83034438(uVar2,param_1,param_2,uVar6);
        if (puVar3 == (unsigned int *)0x0) {
          return (unsigned int *)0x0;
        }
        iVar4 = fn_83013B98(*(unsigned int *)(param_1 + 0x54),param_2,puVar3);
        uVar1 = lbl_831BC768;
        if (iVar4 == 0) {
          (**(int (***)())*puVar3)(puVar3,0);
          fn_82FA5190(uVar1,puVar3);
          return (unsigned int *)0x0;
        }
        iVar4 = fn_83034DB0(param_2,param_1);
        if (iVar4 == 1) {
          return puVar3;
        }
        fn_82FAF408(*(unsigned int *)(param_1 + 0x54),param_2);
        uVar1 = lbl_831BC768;
        (**(int (***)())*puVar3)(puVar3,0);
        fn_82FA5190(uVar1,puVar3);
      }
      puVar3 = (unsigned int *)0x0;
    }
    else {
      puVar3 = (unsigned int *)*puVar3;
    }
  }
  return puVar3;
}

