extern int fn_82D7C4B0();
extern int fn_82D7D360();
extern unsigned int fn_82DB0258();
extern int fn_83089DB0();
void fn_82D8EC40(int param_1,int param_2,int param_3,int param_4)
{
  unsigned int uVar1;
  int *piVar3;
  unsigned int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned int *puVar8;
  
  piVar3 = (int *)fn_83089DB0(param_2 + 0x10);
  iVar5 = 0;
  if (0 < piVar3[1]) {
    iVar6 = 0;
    do {
      puVar8 = (unsigned int *)(*piVar3 + iVar6);
      iVar7 = (int)*(char *)(puVar8[1] + 0x10) + puVar8[1];
      if (*(unsigned char *)(iVar7 + 0xe8) == 5) {
        uVar1 = *puVar8;
        fn_82D7D360(param_3,uVar1);
        fn_82D7C4B0(param_1,uVar1);
      }
      else if ((param_4 == 5) &&
              (iVar4 = fn_82DB0258(*puVar8,*(unsigned int *)(param_2 + 0xcc),
                                         *(unsigned int *)(iVar7 + 0xcc)),
              iVar4 == *(unsigned int *)(param_2 + 0xcc))) {
        uVar1 = *puVar8;
        fn_82D7D360(*(unsigned int *)(iVar7 + 0xcc) + 0x58,uVar1);
        fn_82D7C4B0(param_1,uVar1);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 8;
    } while (iVar5 < piVar3[1]);
  }
  return;
}
