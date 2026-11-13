extern unsigned int *auStack_440;
extern unsigned int *auStack_570;
extern unsigned int *auStack_580;
extern unsigned int *auStack_670;
extern unsigned int *auStack_680;
extern unsigned int *auStack_8a0;
extern unsigned int *auStack_9a0;
extern int fn_82F2A8A8();
extern int fn_82F2A9C8();
extern unsigned int iStack_9a4;
extern unsigned int uStack_9a8;
extern unsigned int uStack_9ac;


void fn_82E9AC18(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned short *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *in_stack_00000054;
  int *in_stack_0000005c;
  int *in_stack_00000064;
  short asStack_9b0 [2];
  unsigned int uStack_9ac;
  unsigned int uStack_9a8;
  int iStack_9a4;
  unsigned short auStack_9a0 [128];
  unsigned char auStack_8a0 [544];
  unsigned char auStack_680 [16];
  unsigned char auStack_670 [240];
  unsigned char auStack_580 [16];
  unsigned char auStack_570 [304];
  unsigned char auStack_440 [1040];
  
  iVar7 = 0;
  uStack_9a8 = 0;
  uStack_9ac = 0;
  uVar1 = *(unsigned int *)((*(int *)(param_1 + 0x4e44) + 0x1385) * 4 + param_1);
  uVar2 = *(unsigned int *)((*(int *)(param_1 + 0x4e44) + 5000) * 4 + param_1);
  iStack_9a4 = 0;
  iVar8 = 0;
  iVar5 = 0;
  (**(int (***)())(param_1 + 0x6f80))(param_2,param_3,param_4,param_5,auStack_680,param_6,param_7);
  (**(int (***)())(param_1 + 0x1f8c))(auStack_680,param_6,auStack_8a0,auStack_440);
  (**(int (***)())(param_1 + 0x2010))
            (param_1,auStack_9a0,asStack_9b0,auStack_8a0,*(unsigned int *)(param_1 + 0x2048),
             &iStack_9a4,0x40,*(unsigned int *)(param_1 + 0x2070));
  if (asStack_9b0[0] != 0) {
    if (0 < (__int64)asStack_9b0[0] + -2) {
      piVar6 = &iStack_9a4;
      do {
        puVar3 = (unsigned short *)((int)piVar6 + 6);
        piVar6 = piVar6 + 1;
        iVar4 = fn_82F2A8A8(param_1,*puVar3,*(unsigned short *)piVar6,uVar1,&uStack_9a8,&uStack_9ac);
        iVar5 = iVar5 + 2;
        iVar8 = iVar4 + iVar8;
      } while (iVar5 < asStack_9b0[0] + -2);
    }
    iVar5 = fn_82F2A9C8(param_1,auStack_9a0[iVar5 + 1],auStack_9a0[iVar5],uVar2,&uStack_9a8,
                              &uStack_9ac);
    iVar8 = iVar5 + iVar8;
    iVar5 = 1;
  }
  if (8 < (int)param_6) {
    (**(int (***)())(param_1 + 0x1f8c))(auStack_670,param_6,auStack_8a0,auStack_440);
    (**(int (***)())(param_1 + 0x2010))
              (param_1,auStack_9a0,asStack_9b0,auStack_8a0,*(unsigned int *)(param_1 + 0x2048),
               &iStack_9a4,0x40,*(unsigned int *)(param_1 + 0x2070));
    if (asStack_9b0[0] != 0) {
      iVar5 = 0;
      if (0 < (__int64)asStack_9b0[0] + -2) {
        piVar6 = &iStack_9a4;
        do {
          puVar3 = (unsigned short *)((int)piVar6 + 6);
          piVar6 = piVar6 + 1;
          iVar4 = fn_82F2A8A8(param_1,*puVar3,*(unsigned short *)piVar6,uVar1,&uStack_9a8,&uStack_9ac);
          iVar5 = iVar5 + 2;
          iVar8 = iVar4 + iVar8;
        } while (iVar5 < asStack_9b0[0] + -2);
      }
      iVar5 = fn_82F2A9C8(param_1,auStack_9a0[iVar5 + 1],auStack_9a0[iVar5],uVar2,&uStack_9a8,
                                &uStack_9ac);
      iVar8 = iVar5 + iVar8;
      iVar5 = 1;
    }
    if (8 < (int)param_7) {
      (**(int (***)())(param_1 + 0x1f8c))(auStack_580,param_6,auStack_8a0,auStack_440);
      (**(int (***)())(param_1 + 0x2010))
                (param_1,auStack_9a0,asStack_9b0,auStack_8a0,*(unsigned int *)(param_1 + 0x2048),
                 &iStack_9a4,0x40,*(unsigned int *)(param_1 + 0x2070));
      if (asStack_9b0[0] != 0) {
        iVar5 = 0;
        if (0 < (__int64)asStack_9b0[0] + -2) {
          piVar6 = &iStack_9a4;
          do {
            puVar3 = (unsigned short *)((int)piVar6 + 6);
            piVar6 = piVar6 + 1;
            iVar4 = fn_82F2A8A8(param_1,*puVar3,*(unsigned short *)piVar6,uVar1,&uStack_9a8,&uStack_9ac
                                );
            iVar5 = iVar5 + 2;
            iVar8 = iVar4 + iVar8;
          } while (iVar5 < asStack_9b0[0] + -2);
        }
        iVar5 = fn_82F2A9C8(param_1,auStack_9a0[iVar5 + 1],auStack_9a0[iVar5],uVar2,
                                  &uStack_9a8,&uStack_9ac);
        iVar8 = iVar5 + iVar8;
        iVar5 = 1;
      }
      (**(int (***)())(param_1 + 0x1f8c))(auStack_570,param_6,auStack_8a0,auStack_440);
      (**(int (***)())(param_1 + 0x2010))
                (param_1,auStack_9a0,asStack_9b0,auStack_8a0,*(unsigned int *)(param_1 + 0x2048),
                 &iStack_9a4,0x40,*(unsigned int *)(param_1 + 0x2070));
      if (asStack_9b0[0] != 0) {
        if (0 < (__int64)asStack_9b0[0] + -2) {
          piVar6 = &iStack_9a4;
          do {
            puVar3 = (unsigned short *)((int)piVar6 + 6);
            piVar6 = piVar6 + 1;
            iVar5 = fn_82F2A8A8(param_1,*puVar3,*(unsigned short *)piVar6,uVar1,&uStack_9a8,&uStack_9ac
                                );
            iVar7 = iVar7 + 2;
            iVar8 = iVar5 + iVar8;
          } while (iVar7 < asStack_9b0[0] + -2);
        }
        iVar5 = fn_82F2A9C8(param_1,auStack_9a0[iVar7 + 1],auStack_9a0[iVar7],uVar2,
                                  &uStack_9a8,&uStack_9ac);
        iVar8 = iVar5 + iVar8;
        iVar5 = 1;
      }
    }
  }
  *in_stack_00000054 = iVar8;
  *in_stack_0000005c = iStack_9a4 >> 8;
  *in_stack_00000064 = iVar5;
  return;
}

