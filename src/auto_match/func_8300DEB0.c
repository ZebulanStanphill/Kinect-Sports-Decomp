extern int _blkmov();
extern int fn_8300D940();
extern int fn_83036908();


void fn_8300DEB0(int *param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar4;
  unsigned __int64 uVar3;
  unsigned int *puVar5;
  int *piVar6;
  int iVar7;
  
  uVar2 = (param_4 & 0xffff) << 0x10;
  iVar7 = (param_2 & 0xff) + 1;
  puVar5 = (unsigned int *)(param_1 + iVar7 * 3);
  for (puVar4 = (unsigned int *)param_1[iVar7 * 3];
      (puVar4 != (unsigned int *)puVar5[1] && ((unsigned __int64)*puVar4 != (uVar2 | param_3 & 0xffffffff)));
      puVar4 = puVar4 + 2) {
  }
  piVar6 = (int *)(-(unsigned int)((unsigned int *)puVar5[1] != puVar4) & (unsigned int)(puVar4 + 1));
  if (piVar6 != (int *)0x0) {
    iVar7 = *param_1;
    if (iVar7 != param_1[1]) {
      do {
        fn_83036908(*(unsigned int *)(iVar7 + 4),param_2,uVar2 | param_3);
        iVar7 = iVar7 + 8;
      } while (iVar7 != param_1[1]);
    }
    if ((int *)*piVar6 != (int *)0x0) {
      (**(int (***)())(*(int *)*piVar6 + 0x28))();
      (**(int (***)())(*(int *)*piVar6 + 4))((int *)*piVar6,0xffffffff831bc7fc);
      *piVar6 = 0;
    }
    uVar3 = (unsigned __int64)puVar5[1];
    uVar1 = (unsigned __int64)*puVar5;
    if (uVar1 != uVar3) {
      do {
        if ((unsigned __int64)*(unsigned int *)uVar1 == (uVar2 | param_3 & 0xffffffff)) break;
        uVar1 = uVar1 + 8;
      } while ((uVar1 & 0xffffffff) != uVar3);
      if ((uVar1 & 0xffffffff) != uVar3) {
        if ((uVar1 & 0xffffffff) < (uVar3 - 8 & 0xffffffff)) {
          _blkmov(uVar1,uVar1 + 8,
                       (((((uVar3 - 8) - uVar1) - 1 & 0xffffffff) >> 3) + 1) * 8 & 0xfffffff8);
        }
        puVar5[1] = puVar5[1] - 8;
      }
    }
    fn_8300D940(param_1);
  }
  return;
}

