#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_828229C8();
extern int fn_82822A38();
extern unsigned int lbl_8320A778;


void fn_82822BE0(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar7;
  unsigned int uVar9;
  unsigned __int64 uVar8;
  unsigned int uVar6;
  
  puVar7 = (unsigned int *)param_1;
  uVar5 = 1;
  uVar6 = 1;
  uVar3 = (unsigned __int64)lbl_8320A778;
  if (*puVar7 != uVar3) {
    uVar4 = 0;
    do {
      uVar6 = (unsigned int)uVar5;
      puVar7 = (unsigned int *)param_1;
      if (puVar7[3] != 1) break;
      uVar9 = *puVar7;
      uVar2 = *(unsigned int *)(uVar9 + 4);
      if ((param_1 & 0xffffffff) == (unsigned __int64)uVar2) {
        uVar2 = *(unsigned int *)(uVar9 + 8);
        if (*(int *)(uVar2 + 0xc) == 0) {
          *(unsigned int *)(uVar2 + 0xc) = uVar6;
          *(int *)(*puVar7 + 0xc) = (int)uVar4;
          fn_828229C8(*puVar7);
          uVar9 = *(unsigned int *)param_1;
          uVar2 = *(unsigned int *)(uVar9 + 8);
        }
        puVar7 = (unsigned int *)param_1;
        if ((*(int *)(*(int *)(uVar2 + 4) + 0xc) == 1) && (*(int *)(*(int *)(uVar2 + 8) + 0xc) == 1)
           ) {
LAB_82822d1c:
          *(int *)(uVar2 + 0xc) = (int)uVar4;
          param_1 = (unsigned __int64)*puVar7;
        }
        else {
          if (*(int *)(*(int *)(uVar2 + 8) + 0xc) == 1) {
            *(int *)(*(int *)(uVar2 + 4) + 0xc) = (int)uVar5;
            *(int *)(uVar2 + 0xc) = (int)uVar4;
            fn_82822A38();
            uVar9 = *(unsigned int *)param_1;
            uVar2 = *(unsigned int *)(uVar9 + 8);
          }
          *(unsigned int *)(uVar2 + 0xc) = *(unsigned int *)(uVar9 + 0xc);
          *(int *)(*(int *)param_1 + 0xc) = (int)uVar5;
          *(int *)(*(int *)(uVar2 + 8) + 0xc) = (int)uVar5;
          fn_828229C8(*(int *)param_1);
          puVar1 = (unsigned int *)*(unsigned int *)param_1;
          for (; uVar8 = ZEXT48(puVar1), uVar8 != (uVar3 & 0xffffffff);
              puVar1 = (unsigned int *)*puVar1) {
            param_1 = uVar8;
          }
        }
      }
      else {
        if (*(int *)(uVar2 + 0xc) == 0) {
          *(unsigned int *)(uVar2 + 0xc) = uVar6;
          *(int *)(*puVar7 + 0xc) = (int)uVar4;
          fn_82822A38(*puVar7);
          uVar9 = *(unsigned int *)param_1;
          uVar2 = *(unsigned int *)(uVar9 + 4);
        }
        puVar7 = (unsigned int *)param_1;
        if ((*(int *)(*(int *)(uVar2 + 8) + 0xc) == 1) && (*(int *)(*(int *)(uVar2 + 4) + 0xc) == 1)
           ) goto LAB_82822d1c;
        if (*(int *)(*(int *)(uVar2 + 4) + 0xc) == 1) {
          *(int *)(*(int *)(uVar2 + 8) + 0xc) = (int)uVar5;
          *(int *)(uVar2 + 0xc) = (int)uVar4;
          fn_828229C8();
          uVar9 = *(unsigned int *)param_1;
          uVar2 = *(unsigned int *)(uVar9 + 4);
        }
        *(unsigned int *)(uVar2 + 0xc) = *(unsigned int *)(uVar9 + 0xc);
        *(int *)(*(int *)param_1 + 0xc) = (int)uVar5;
        *(int *)(*(int *)(uVar2 + 4) + 0xc) = (int)uVar5;
        fn_82822A38(*(int *)param_1);
        puVar1 = (unsigned int *)*(unsigned int *)param_1;
        for (; uVar8 = ZEXT48(puVar1), uVar8 != (uVar3 & 0xffffffff); puVar1 = (unsigned int *)*puVar1
            ) {
          param_1 = uVar8;
        }
      }
      uVar6 = (unsigned int)uVar5;
      puVar7 = (unsigned int *)param_1;
    } while ((unsigned __int64)*puVar7 != (uVar3 & 0xffffffff));
  }
  puVar7[3] = uVar6;
  return;
}

