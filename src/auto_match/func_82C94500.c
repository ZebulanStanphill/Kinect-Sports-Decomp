extern int fn_82C93EF8();
extern int fn_82C94128();
extern int fn_82C942F0();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;


unsigned __int64
fn_82C94500(int param_1,unsigned int *param_2,__int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,int *param_7,unsigned int *param_8)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned int in_stack_00000054;
  int iStack_70;
  int iStack_6c;
  int aiStack_68;
  
  uVar1 = *(unsigned int *)(param_1 + 0x88);
  uVar3 = (unsigned int)param_6;
  uVar5 = ((unsigned __int64)uVar1 & 0x7fffffff) << 1;
  iVar2 = *(int *)(param_1 + 0x120);
  uVar7 = 0;
  iVar8 = 0;
  uVar4 = ((__int64)(int)uVar1 * (__int64)(int)uVar3 & 0x7fffffffU) * 2 + param_5;
  if ((iVar2 == 2) && (*(int *)(param_1 + 0x50cc) == 0)) {
    uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x88);
    uVar4 = (__int64)((int)uVar3 >> 1) * (__int64)(int)*(unsigned int *)(param_1 + 0x88) +
            (__int64)((int)param_5 >> 1);
  }
  uVar9 = 0;
  if (((((iVar2 == 2) && (*(int *)(param_1 + 0x50cc) == 0)) && ((param_6 & 1) != 0)) ||
      ((uVar3 != 0 &&
       (((iVar2 == 0 || (iVar2 == 4)) ||
        (*(short *)((int)((uVar4 - uVar5 & 0xffffffff) << 1) + *(int *)(param_1 + 0x6f0)) == 0x4000)
        ))))) &&
     (((uVar3 & 1) == 1 || (*(int *)(((int)uVar3 >> 1) * 4 + *(int *)(param_1 + 0x55d0)) == 0)))) {
    iVar8 = *(int *)(param_1 + 0x78c);
    uVar9 = param_3 + ((unsigned __int64)uVar1 & 0x3ffffff) * -0x40;
  }
  uVar6 = uVar9;
  if ((((iVar2 == 2) && (*(int *)(param_1 + 0x50cc) == 0)) && ((param_5 & 1) != 0)) ||
     (((int)param_5 != 0 &&
      (((iVar2 == 0 || (iVar2 == 4)) ||
       (*(short *)(*(int *)(param_1 + 0x6f0) + (int)((uVar4 & 0xffffffff) << 1) + -2) == 0x4000)))))
     ) {
    uVar6 = param_3 - 0x20;
    iVar8 = *(int *)(param_1 + 0x788);
    if (uVar6 == 0) goto LAB_82c947ac;
    if ((uVar9 & 0xffffffff) != 0) {
      iStack_70 = 0;
      if ((((iVar2 == 2) && (*(int *)(param_1 + 0x50cc) == 0)) && (((param_5 | param_6) & 1) != 0))
         || (((iVar2 == 0 || (iVar2 == 4)) ||
             (*(short *)((int)(((uVar4 - uVar5) - 1 & 0xffffffff) << 1) + *(int *)(param_1 + 0x6f0))
              == 0x4000)))) {
        iStack_70 = (int)*(short *)((*(int *)(param_1 + 0x784) + -0x10) * 2 + (int)uVar9);
      }
      aiStack_68 = (int)*(short *)(*(int *)(param_1 + 0x784) * 2 + (int)uVar9);
      iStack_6c = (int)*(short *)(*(int *)(param_1 + 0x780) * 2 + (int)uVar6);
      fn_82C942F0(param_1,param_4,param_2,&aiStack_68,&iStack_6c,&iStack_70);
      uVar1 = iStack_70 - iStack_6c >> 0x1f;
      uVar3 = iStack_70 - aiStack_68 >> 0x1f;
      if ((int)((iStack_70 - iStack_6c ^ uVar1) - uVar1) <
          (int)((iStack_70 - aiStack_68 ^ uVar3) - uVar3)) {
        iVar8 = *(int *)(param_1 + 0x78c);
        uVar6 = uVar9;
      }
    }
  }
  if ((uVar6 & 0xffffffff) != 0) {
    uVar1 = *param_2;
    uVar7 = 1;
    if (iVar8 == *(int *)(param_1 + 0x788)) {
      fn_82C94128();
    }
    else {
      fn_82C93EF8(param_1,param_4,uVar6,in_stack_00000054,param_2,-((unsigned __int64)uVar1 & 0x18));
    }
    if ((uVar1 & 0x18) == 0) {
      iVar8 = -1;
    }
  }
LAB_82c947ac:
  *param_8 = (unsigned int)LZCOUNT(*(int *)(param_1 + 0x78c) - iVar8) >> 5;
  *param_7 = iVar8;
  return uVar7;
}

