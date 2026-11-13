extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_82264E68();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82526C70();
extern int fn_8266F668();
extern int fn_82672C20();
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


void fn_8227A218(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  struct { unsigned int first; unsigned int second; } stack_pair_d0;

  double dStack_c8;
  unsigned __int64 auStack_c0;
  unsigned char auStack_b0 [176];
  
  uVar7 = 1;
  *(unsigned int *)(param_1 + 0xfc) = 1;
  if (*(int *)(param_1 + 0xdc) != 0) {
    iVar5 = (int)param_3;
    if ((iVar5 < 0x14) || (99 < iVar5)) {
      uVar7 = 0;
    }
    piVar1 = *(int **)(param_1 + 0xa4);
    *(unsigned int *)(param_1 + 0x100) = uVar7;
    if (piVar1 != (int *)0x0) {
      (**(int (***)())(*piVar1 + 8))(piVar1,param_2,param_3);
    }
    puVar6 = *(unsigned int **)(param_1 + 0x10);
    for (puVar2 = (unsigned int *)*puVar6; puVar2 != puVar6; puVar2 = (unsigned int *)*puVar2) {
      iVar3 = puVar2[2];
      if ((unsigned __int64)*(unsigned int *)(iVar3 + 0x10) == (param_2 & 0xffffffff)) {
        if (((0x28 < *(unsigned int *)(iVar3 + 0x278)) && (*(unsigned int *)(iVar3 + 0x278) < 100)) &&
           ((param_3 & 0xffffffff) == 0)) {
          uVar4 = fn_8266F668(&auStack_c0,*(unsigned int *)(param_1 + 8));
          fn_82264E68(uVar4,iVar3 + 0x18,iVar3 + 100);
        }
        *(int *)(iVar3 + 0x278) = iVar5;
        stack_pair_d0.first = 0;
        stack_pair_d0.second = 0;
        fn_82273CD8(&stack_pair_d0.first,3);
        auStack_c0 = param_3 & 0xffffffff;
        dStack_c8 = (double)auStack_c0;
        fn_82526C70(auStack_b0,0x80,0xffffffff821a8218,iVar3 + 0x18);
        fn_82672C20(*(unsigned int *)(iVar3 + 8),auStack_b0,&stack_pair_d0.first,1);
        fn_82273C88(&stack_pair_d0.first);
        break;
      }
      puVar6 = *(unsigned int **)(param_1 + 0x10);
    }
  }
  *(unsigned int *)(param_1 + 0xfc) = 0;
  return;
}

