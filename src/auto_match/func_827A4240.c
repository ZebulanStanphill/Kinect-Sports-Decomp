extern int fn_8279C910();
extern int fn_827A3A50();
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned __int64 fn_827A4240(int param_1,unsigned int param_2)

{
  unsigned short uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int *piVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int uStack_50;
  unsigned short uStack_4c;
  struct { unsigned int first; unsigned int second; } stack_pair_48;

  unsigned short uStack_40;
  
  if ((param_2 == 0) || (uVar1 = *(unsigned short *)(param_1 + 0x68), (uVar1 >> 5 & 1) != 0)) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 8);
  uVar3 = *(unsigned int *)(param_1 + 0x18);
  uVar8 = 0;
  uVar4 = *(unsigned int *)(iVar2 + 0x1c);
  uVar9 = (unsigned __int64)uVar4;
  uVar10 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x20);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  if ((param_2 & 0xffff) < 0x20) {
    return 0;
  }
  if (uVar9 == uVar10) {
    if ((uVar1 >> 7 & 1) != 0) {
      uVar10 = uVar10 + 1;
    }
    if (uVar9 == (uVar10 & 0xffffffff)) {
      uStack_50 = uVar3;
      uStack_4c = (short)param_2;
      lVar6 = fn_8279C910(*(unsigned int *)(param_1 + 8),0,&uStack_50);
      uVar7 = lVar6 + (unsigned __int64)uVar3;
      goto LAB_827a4300;
    }
  }
  stack_pair_48.second = (unsigned int)uVar10;
  stack_pair_48.first = uVar4;
  uStack_40 = (short)param_2;
  lVar6 = fn_8279C910(*(unsigned int *)(param_1 + 8),5,&stack_pair_48.first);
  uVar7 = uVar9;
  if ((uVar10 & 0xffffffff) <= (unsigned __int64)uVar4) {
    uVar7 = uVar10;
  }
  uVar7 = uVar7 + lVar6;
LAB_827a4300:
  if ((((unsigned __int64)*(unsigned int *)(param_1 + 0x18) != (uVar7 & 0xffffffff)) ||
      (uVar9 != (uVar7 & 0xffffffff))) || ((uVar10 & 0xffffffff) != (uVar7 & 0xffffffff))) {
    fn_827A3A50(param_1,uVar7,0);
    uVar8 = 1;
  }
  piVar5 = *(int **)(iVar2 + 0x10);
  if (piVar5 != (int *)0x0) {
    (**(int (***)())(*piVar5 + 0x20))(piVar5,param_1);
  }
  return uVar8;
}

