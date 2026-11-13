typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8267C498();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_82685480();
extern int fn_82685680();
extern int fn_82685AA8();
extern int fn_82693410();
extern int fn_826A8E58();
extern int fn_826EEB08();
extern int fn_826EEBC0();
extern int fn_826F7AE0();
extern int fn_826FCDB0();
extern int fn_8270D350();
extern int fn_8270D6C0();
extern int fn_827741E8();
extern int fn_8278C110();
extern unsigned int iStack_188;
extern unsigned int iStack_18c;
extern unsigned int iStack_1a4;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1b0;


void fn_826FE0A0(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  bool bVar3;
  __int64 lVar4;
  char cVar9;
  __int64 lVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned __int64 in_r7;
  __int64 lVar10;
  int iVar11;
  int iVar12;
  struct { unsigned int first; unsigned int second; } stack_pair_1b0;

  int *piStack_1a8;
  int iStack_1a4;
  int aiStack_1a0 [5];
  int iStack_18c;
  int iStack_188;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    return;
  }
  lVar4 = fn_82693410();
  iVar6 = 0;
  bVar3 = false;
  uVar7 = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar12 = 0;
    do {
      cVar9 = (**(int (***)())(**(int **)(iVar12 + *(int *)(param_1 + 0x5c) + 4) + 8))();
      if (cVar9 != '\0') {
        bVar3 = true;
        break;
      }
      uVar7 = uVar7 + 1;
      iVar12 = iVar12 + 8;
    } while (uVar7 < *(unsigned int *)(param_1 + 0x60));
  }
  if (bVar3) {
    lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x100) + 8;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 0x100) == 0) {
      lVar5 = 0;
    }
    fn_8270D6C0((double)*(float *)(param_1 + 0xac),aiStack_1a0,lVar5,
                      *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x14) + 0x18),
                      (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x6c) + 0x1c) + 0x18,in_r7,
                      param_1 + 0xe8,param_1 + 0xb70);
    if ((aiStack_1a0[0] == 0) || (*(int *)(aiStack_1a0[0] + 0xc) == 0)) {
      fn_8270D350(aiStack_1a0);
      lVar5 = fn_82693410();
      lVar10 = (lVar5 - lVar4) + *(__int64 *)(param_1 + 0xb68);
      goto LAB_826fe3b0;
    }
    *(unsigned int *)(param_1 + 0xb00) = *(unsigned int *)(param_1 + 0xb00) | 2;
    if (iStack_18c != 0) {
      fn_8267C4C8();
    }
    if (*(int *)(param_1 + 0x108) != 0) {
      fn_8267C4F0();
    }
    *(int *)(param_1 + 0x108) = iStack_18c;
    stack_pair_1b0.first = *(unsigned int *)(param_1 + 0x940);
    (**(int (***)())(**(int **)(aiStack_1a0[0] + 0xc) + 0x18))
              ((double)*(float *)(param_1 + 200),(double)*(float *)(param_1 + 0xd0),
               (double)*(float *)(param_1 + 0xcc),(double)*(float *)(param_1 + 0xd4),
               *(int **)(aiStack_1a0[0] + 0xc),&stack_pair_1b0.first,param_1 + 0x78);
    if ((*(int **)(param_1 + 0x104) != (int *)0x0) && (**(int **)(param_1 + 0x104) != 0)) {
      fn_8278C110(&piStack_1a8,param_1 + 0x104);
      stack_pair_1b0.first = 0;
      stack_pair_1b0.second = 0;
      cVar9 = fn_826A8E58(&piStack_1a8,&stack_pair_1b0.first);
      if (cVar9 == '\0') {
        stack_pair_1b0.first = 0;
        stack_pair_1b0.second = 0;
        do {
          iVar11 = iStack_1a4 * 0xc + *piStack_1a8;
          iVar12 = *(int *)(iVar11 + 0x10);
          if (iVar12 != 0) {
            *(int *)(iVar12 + 4) = *(int *)(iVar12 + 4) + 1;
          }
          piVar1 = *(int **)(iVar11 + 0x10);
          (**(int (***)())(*piVar1 + 0xc))(piVar1,*(unsigned int *)(aiStack_1a0[0] + 0xc));
          fn_8267C498(piVar1);
          fn_827741E8(&piStack_1a8);
          cVar9 = fn_826A8E58(&piStack_1a8,&stack_pair_1b0.first);
        } while (cVar9 == '\0');
      }
    }
    uVar7 = 0;
    if (*(int *)(param_1 + 0x60) != 0) {
      do {
        piVar1 = *(int **)(iVar6 + *(int *)(param_1 + 0x5c) + 4);
        (**(int (***)())(*piVar1 + 0x60))(piVar1,aiStack_1a0);
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 8;
      } while (uVar7 < *(unsigned int *)(param_1 + 0x60));
    }
    fn_826F7AE0(param_1,aiStack_1a0);
    fn_826FCDB0(param_1,aiStack_1a0);
    (**(int (***)())(**(int **)(aiStack_1a0[0] + 0xc) + 0x1c))();
    *(unsigned int *)(param_1 + 0xb00) = *(unsigned int *)(param_1 + 0xb00) & 0xfffffffd;
    fn_82685AA8(iStack_188);
    fn_82685680(iStack_188);
    iVar6 = fn_82685480(iStack_188);
    if (iVar6 != 0) {
      uVar2 = *(unsigned int *)(iStack_188 + 0x10);
      uVar7 = fn_82685480();
      uVar8 = fn_826EEB08(uVar2);
      if (uVar7 < uVar8) {
        fn_826EEBC0(uVar2);
      }
    }
    fn_8270D350(aiStack_1a0);
    lVar10 = fn_82693410();
    lVar5 = *(__int64 *)(param_1 + 0xb68);
    lVar10 = lVar10 - lVar4;
  }
  else {
    lVar5 = fn_82693410();
    lVar10 = *(__int64 *)(param_1 + 0xb68);
    lVar5 = lVar5 - lVar4;
  }
  lVar10 = lVar10 + lVar5;
LAB_826fe3b0:
  *(__int64 *)(param_1 + 0xb68) = lVar10;
  return;
}

