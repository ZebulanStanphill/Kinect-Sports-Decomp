typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696B20();
extern int fn_82696D38();
extern int fn_826ADE60();
extern int fn_826B3578();
extern int fn_826B5160();
extern unsigned int iStack_44;
extern unsigned int iStack_48;


void fn_826BFD40(int param_1)

{
  unsigned char *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  bool bVar6;
  unsigned __int64 uVar7;
  char *pcVar8;
  unsigned char uVar9;
  unsigned int *puStack_50;
  unsigned int *puStack_4c;
  struct { int first; int second; } stack_pair_48;

  unsigned char bStack_40;
  
  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 2;
  puVar1[4] = 0;
  if (*(int *)(param_1 + 0x1c) < 2) {
    fn_826ADE60(*(unsigned int *)(param_1 + 0x18),0xffffffff8200b654);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x18);
    uVar3 = *(unsigned int *)(iVar2 + 0x78);
    uVar7 = fn_826957D0(param_1,0);
    fn_82696D38(&puStack_50,uVar7,iVar2,0xffffffffffffffff,0);
    pcVar8 = (char *)fn_826957D0(param_1,1);
    if ((*pcVar8 == '\b') || (bVar6 = false, *pcVar8 == '\v')) {
      bVar6 = true;
    }
    if (bVar6) {
      uVar4 = *(unsigned int *)(param_1 + 0x18);
      uVar7 = fn_826957D0(param_1,1);
      fn_82696B20(&stack_pair_48.first,uVar7,uVar4);
      uVar9 = fn_826B5160(uVar3,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,&puStack_50,&stack_pair_48.first
                           );
      puVar1 = *(unsigned char **)(param_1 + 4);
      fn_826959C8(puVar1);
      puVar1[4] = uVar9;
      *puVar1 = 2;
      if (((bStack_40 & 2) == 0) && (stack_pair_48.first != 0)) {
        fn_826824B0();
      }
      stack_pair_48.first = 0;
      if (((bStack_40 & 1) == 0) && (stack_pair_48.second != 0)) {
        fn_826824B0();
      }
      stack_pair_48.second = 0;
    }
    else {
      pcVar8 = (char *)fn_826957D0(param_1,1);
      if (*pcVar8 == '\x01') {
        uVar9 = fn_826B3578(uVar3,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,&puStack_50);
        puVar1 = *(unsigned char **)(param_1 + 4);
        fn_826959C8(puVar1);
        puVar1[4] = uVar9;
        *puVar1 = 2;
      }
      else {
        uVar3 = *(unsigned int *)(param_1 + 0x18);
        uVar7 = fn_826957D0(param_1,1);
        fn_82696D38(&puStack_4c,uVar7,uVar3,0xffffffffffffffff,0);
        fn_826ADE60(*(unsigned int *)(param_1 + 0x18),0xffffffff8200b600,*puStack_50,*puStack_4c
                         );
        uVar5 = puStack_4c[2];
        puStack_4c[2] = (int)((unsigned __int64)uVar5 - 1);
        if ((unsigned __int64)uVar5 - 1 == 0) {
          fn_826944C8(puStack_4c);
        }
      }
    }
    uVar5 = puStack_50[2];
    puStack_50[2] = (int)((unsigned __int64)uVar5 - 1);
    if ((unsigned __int64)uVar5 - 1 == 0) {
      fn_826944C8(puStack_50);
    }
  }
  return;
}

