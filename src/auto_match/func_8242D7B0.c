extern unsigned int *auStack_40;
extern int fn_822ABA88();
extern int fn_822B7620();
extern int fn_822C6880();
extern int fn_82359C18();
extern int fn_8242C410();
extern int fn_82F56790();
extern unsigned int uStack_30;


void fn_8242D7B0(unsigned __int64 param_1,int param_2,int param_3)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned __int64 in_r0;
  int iVar4;
  __int64 lVar3;
  int iVar5;
  __int64 lVar6;
  __int64 lVar7;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_40 [16];
  unsigned int uStack_30;
  
  lVar6 = 0;
  iVar4 = fn_8242C410();
  if (0 < iVar4) {
    lVar7 = 0;
    iVar4 = **(int **)((int)param_1 + 8);
    do {
      piVar1 = *(int **)((int)lVar7 + iVar4);
      lVar3 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),0);
      iVar5 = (int)in_r0;
      if (*(int *)((int)lVar3 + 0x24) == param_3) {
        if (param_2 != 0) {
          uStack_30 = 0;
          fn_82F56790(lVar3 + 0x140,auStack_40);
          fn_82359C18(auStack_40);
          return;
        }
        fn_822C6880(lVar3 + 0xc0);
        iVar4 = *(int *)((int)lVar3 + 0x114);
        puVar2 = (unsigned int *)(iVar5 + iVar4 + 0x50 & 0xfffffff0);
        *puVar2 = in_register_000104d0;
        puVar2[1] = in_register_000104d4;
        puVar2[2] = in_register_000104d8;
        puVar2[3] = in_vr77;
        *(unsigned int *)(iVar4 + 0x7c) = 0;
        puVar2 = (unsigned int *)(iVar4 + 0x60U & 0xfffffff0);
        *puVar2 = in_register_000104d0;
        puVar2[1] = in_register_000104d4;
        puVar2[2] = in_register_000104d8;
        puVar2[3] = in_vr77;
        fn_822B7620(lVar3);
        return;
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 4;
      iVar5 = fn_8242C410(param_1);
    } while ((int)lVar6 < iVar5);
  }
  return;
}

