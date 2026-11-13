extern int *piRam83219598;
extern unsigned int *auStack_98;
extern int fn_82A33E20();
extern int fn_82A34278();
extern int fn_82A37FF0();
extern int fn_82A38740();
extern unsigned int uStack_a0;


__int64 fn_82A387A8(unsigned int *param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int *piVar1;
  int iVar4;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned char bVar5;
  unsigned int in_stack_00000054;
  int in_stack_0000005c;
  unsigned int uStack_a0;
  unsigned int *puStack_9c;
  unsigned int auStack_98 [2];
  int aiStack_90 [8];

  piVar1 = piRam83219598;
  uStack_a0 = 0xffffffff;
  puStack_9c = (unsigned int *)0x0;
  iVar4 = -0x3fffffff;
  if (((in_stack_00000054 & 0x8000) == 0) && ((param_8 & 0xffffffff) != 2)) {
    if ((int (**)())piRam83219598[0xd] != (int (**)())0x0) {
      bVar5 = (in_stack_00000054 & 0x20) != 0;
      if ((in_stack_00000054 & 8) == 0) {
        bVar5 = bVar5 | 2;
      }
      iVar4 = (*(int (**)())piRam83219598[0xd])
                        (0xffffffff820893a4,*(unsigned int *)(param_3 + 4),bVar5,auStack_98);
    }
    if (in_stack_0000005c == 0) {
      lVar2 = (**(int (***)())(*piVar1 + 0x28))
                        (&uStack_a0,param_2 | 0xffffffff80120089,param_3,param_4,param_7 | 1,
                         in_stack_00000054 & 0xffffffd7 | 8);
    }
    else {
      lVar2 = (**(int (***)())(*piVar1 + 0xc))();
    }
    if ((-1 < (int)lVar2) &&
       (lVar2 = fn_82A37FF0(piVar1 + 0x14,&puStack_9c,uStack_a0,param_2,param_6,param_7,param_8,
                              in_stack_00000054), lVar2 < 0)) {
      (**(int (***)())(*piVar1 + 4))(uStack_a0);
    }
    if (((int (**)())piVar1[0xe] != (int (**)())0x0) && (-1 < iVar4)) {
      if ((int)lVar2 < 0) {
        uVar3 = 0xffffffffffffffff;
      }
      else {
        uVar3 = (unsigned __int64)*puStack_9c;
      }
      (*(int (**)())piVar1[0xe])(uVar3,lVar2,auStack_98[0]);
    }
    if (-1 < (int)lVar2) {
      if ((piVar1[0x13] == 0) && (iVar4 = fn_82A38740(piVar1,uStack_a0), iVar4 != 2)) {
        aiStack_90[0] = iVar4 + -1;
LAB_82a389c4:
        auStack_98[0] = (unsigned int)(aiStack_90[0] == 0);
      }
      else {
        lVar2 = fn_82A33E20(piVar1,puStack_9c,aiStack_90);
        if (-1 < lVar2) {
          aiStack_90[0] = 0xff512ed - aiStack_90[0];
          goto LAB_82a389c4;
        }
        fn_82A34278(piVar1,*puStack_9c);
      }
      if (-1 < (int)lVar2) goto LAB_82a389f0;
    }
LAB_82a389d8:
    *param_1 = 0xffffffff;
  }
  else {
    auStack_98[0] = 0;
LAB_82a389f0:
    if (auStack_98[0] == 0) {
      if (puStack_9c == (unsigned int *)0x0) {
        if (uStack_a0 != 0xffffffff) {
          (**(int (***)())(*piVar1 + 4))();
        }
      }
      else {
        fn_82A34278(piVar1,*puStack_9c);
      }
      if (in_stack_0000005c == 0) {
        lVar2 = (**(int (***)())(*piVar1 + 0x28))
                          (&uStack_a0,param_2 | 0xffffffff80120089,param_3,param_4,param_7 | 1,
                           in_stack_00000054);
      }
      else {
        lVar2 = (**(int (***)())(*piVar1 + 0xc))();
      }
      if ((int)lVar2 < 0) goto LAB_82a389d8;
    }
    else {
      uStack_a0 = *puStack_9c;
    }
    *param_1 = uStack_a0;
    lVar2 = 0;
  }
  return lVar2;
}
