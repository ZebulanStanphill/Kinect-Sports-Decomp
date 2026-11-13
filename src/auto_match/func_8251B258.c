#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_40;
extern int fn_82250928();
extern int fn_822509A0();
extern int fn_82517978();
extern int fn_8288A398();
extern int fn_828BB4B8();
extern int fn_828BCC48();
extern int fn_828C2BD8();
extern int fn_828EA820();
extern unsigned int lbl_83265988;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


void fn_8251B258(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iVar6;
  unsigned __int64 uVar5;
  unsigned __int64 uVar7;
  unsigned int auStack_40;
  struct { unsigned int first; unsigned int second; } stack_pair_38;

  
  if (lbl_83265988 != 0) {
    uVar4 = fn_828EA820();
    iVar6 = fn_8288A398();
    uVar1 = *(unsigned int *)(*(int *)(param_1 + 4) + 8);
    uVar5 = fn_828BB4B8(&stack_pair_38.first,*(unsigned int *)(iVar6 + 0x38));
    fn_828BCC48(uVar1,uVar4,0xffffffff8329ea78,uVar5);
    iVar6 = *(int *)(*(int *)(param_1 + 4) + 8);
    uVar5 = fn_828BB4B8(&stack_pair_38.first,*(unsigned int *)(iVar6 + 0x28));
    fn_828BCC48(iVar6,uVar4,0xffffffff8329ea5c,uVar5);
    fn_828C2BD8(*(unsigned int *)(*(int *)(param_1 + 4) + 8),uVar4,0xffffffff83296028,
                      0xffffffff8329ea94);
    auStack_40 = **(int **)(param_1 + 0x18);
    if ((int *)auStack_40 != *(int **)(param_1 + 0x18)) {
      do {
        uVar3 = auStack_40;
        stack_pair_38.first = 0;
        stack_pair_38.second = 0;
        fn_82517978(&stack_pair_38.first,*(unsigned int *)(auStack_40 + 0x28),
                          *(unsigned int *)(auStack_40 + 0x2c),0);
        fn_828BCC48(*(unsigned int *)(*(int *)(param_1 + 4) + 8),uVar4,uVar3 + 0xc,&stack_pair_38.first);
        fn_82250928(&auStack_40);
      } while (auStack_40 != *(unsigned int *)(param_1 + 0x18));
    }
    puVar2 = *(unsigned int **)(param_1 + 0x28);
    auStack_40 = *puVar2;
    while (uVar7 = (unsigned __int64)auStack_40, uVar7 != ZEXT48(puVar2)) {
      fn_828C2BD8(*(unsigned int *)(*(int *)(param_1 + 4) + 8),uVar4,uVar7 + 0xc,uVar7 + 0x28);
      fn_822509A0(&auStack_40);
      puVar2 = *(unsigned int **)(param_1 + 0x28);
    }
  }
  return;
}

