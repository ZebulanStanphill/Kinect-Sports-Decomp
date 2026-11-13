extern int fn_825A8A70();
extern int fn_825B46F0();
extern int fn_825FDA90();
extern int fn_825FEAC0();
extern int fn_8265C9E0();
extern int fn_82D81078();
extern int fn_82DEDBA8();
extern unsigned int uStack_2f;
extern unsigned int uStack_30;


void fn_8253F650(int param_1)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int *piVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned char uStack_30;
  unsigned char uStack_2f;
  
  if (*(unsigned int *)(param_1 + 0x8c0) != 0) {
    if ((*(unsigned int *)(param_1 + 2000) & 8) != 0) {
      fn_825A8A70(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0x8c0) + 0x98,0,0,0);
      fn_825B46F0(param_1 + 0x758);
    }
  }
  if (*(int *)(param_1 + 0x7ac) != 0) {
    uVar1 = fn_8265C9E0(0x368);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_825FEAC0(uVar1,*(unsigned int *)(param_1 + 0x8c0),param_1 + 0x7ac);
    }
    *(unsigned int *)(param_1 + 0x7b4) = uVar2;
    uStack_30 = *(int *)(param_1 + 0x7bc) == 0;
    uStack_2f = 1;
    uVar1 = fn_8265C9E0(0xc0);
    if ((uVar1 & 0xffffffff) == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)fn_825FDA90(uVar1,param_1,*(unsigned int *)(param_1 + 0x7b4),&uStack_30);
    }
    *(int **)(param_1 + 0x7b0) = piVar3;
    uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x4c) + 0x1f8);
    lVar5 = (unsigned __int64)*(unsigned int *)(*piVar3 + 4) - 1;
    if (-1 < lVar5) {
      lVar4 = lVar5 * 0x90;
      do {
        fn_82D81078(uVar2,*(unsigned int *)((int)lVar4 + piVar3[1]),1);
        lVar5 = lVar5 + -1;
        lVar4 = lVar4 + -0x90;
      } while (-1 < lVar5);
    }
    fn_82DEDBA8(uVar2,piVar3[3]);
  }
  return;
}

