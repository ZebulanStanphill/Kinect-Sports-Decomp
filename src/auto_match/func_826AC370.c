extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_826964E0();
extern int fn_82697700();
extern int fn_826C35B8();
extern unsigned int iStack_3c;
extern unsigned int uStack_40;


void fn_826AC370(int param_1)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar4;
  unsigned int uVar7;
  struct { unsigned int first; int second; } stack_pair_40;

  unsigned char bStack_38;
  
  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  if (1 < *(int *)(param_1 + 0x1c)) {
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    iVar5 = fn_82697700(uVar3,uVar2);
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,1);
    iVar6 = fn_82697700(uVar3,uVar2);
    if ((iVar5 == 800) && (iVar6 == 2)) {
      uVar4 = fn_8267B890(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                                0x34,0);
      if ((uVar4 & 0xffffffff) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = fn_826C35B8(uVar4,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,
                                  0xffffffff826a7b88);
      }
      bStack_38 = 0;
      if (uVar7 != 0) {
        *(unsigned int *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
      }
      stack_pair_40.second = 0;
      stack_pair_40.first = uVar7;
      fn_826964E0(*(unsigned int *)(param_1 + 4),&stack_pair_40.first);
      if (((bStack_38 & 2) == 0) && (stack_pair_40.first != 0)) {
        fn_826824B0();
      }
      stack_pair_40.first = 0;
      if (((bStack_38 & 1) == 0) && (stack_pair_40.second != 0)) {
        fn_826824B0();
      }
      stack_pair_40.second = 0;
      if (uVar7 != 0) {
        fn_826824B0(uVar7);
      }
    }
  }
  return;
}

