extern int fn_828229C8();
extern int fn_82822A38();
extern unsigned int lbl_8320A778;


void fn_82822AA8(unsigned __int64 param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  
  uVar1 = (unsigned __int64)*(unsigned int *)param_1;
  uVar4 = 1;
  uVar2 = (unsigned __int64)lbl_8320A778;
  if (uVar1 != uVar2) {
    uVar3 = 0;
    do {
      piVar5 = (int *)uVar1;
      if (piVar5[3] != 0) break;
      uVar7 = *(unsigned int *)(*piVar5 + 4);
      if (uVar1 == uVar7) {
        uVar7 = *(unsigned int *)(*piVar5 + 8);
        if (((unsigned __int64)uVar7 == (uVar2 & 0xffffffff)) || (*(int *)(uVar7 + 0xc) == 1)) {
          if ((param_1 & 0xffffffff) == (unsigned __int64)(unsigned int)piVar5[2]) {
            fn_828229C8();
            param_1 = uVar1;
          }
          piVar5 = (int *)param_1;
          *(int *)(*piVar5 + 0xc) = (int)uVar4;
          *(int *)(*(int *)*piVar5 + 0xc) = (int)uVar3;
          fn_82822A38(*(unsigned int *)*piVar5);
        }
        else {
code_r0x82822b54:
          piVar5[3] = (int)uVar4;
          *(int *)(uVar7 + 0xc) = (int)uVar4;
          *(int *)(*(int *)*(unsigned int *)param_1 + 0xc) = (int)uVar3;
          param_1 = (unsigned __int64)*(unsigned int *)*(unsigned int *)param_1;
        }
      }
      else {
        if (((unsigned __int64)uVar7 != (uVar2 & 0xffffffff)) && (*(int *)(uVar7 + 0xc) != 1))
        goto code_r0x82822b54;
        if ((param_1 & 0xffffffff) == (unsigned __int64)(unsigned int)piVar5[1]) {
          fn_82822A38();
          param_1 = uVar1;
        }
        piVar5 = (int *)param_1;
        *(int *)(*piVar5 + 0xc) = (int)uVar4;
        *(int *)(*(int *)*piVar5 + 0xc) = (int)uVar3;
        fn_828229C8(*(unsigned int *)*piVar5);
      }
      uVar1 = (unsigned __int64)*(unsigned int *)param_1;
    } while (uVar1 != (uVar2 & 0xffffffff));
  }
  while (puVar6 = (unsigned int *)param_1, (unsigned __int64)*puVar6 != (uVar2 & 0xffffffff)) {
    param_1 = (unsigned __int64)*puVar6;
  }
  puVar6[3] = (unsigned int)uVar4;
  return;
}

