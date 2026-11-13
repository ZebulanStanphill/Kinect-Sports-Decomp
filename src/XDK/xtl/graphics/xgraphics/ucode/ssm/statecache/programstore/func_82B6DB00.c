extern int fn_82AB15D0();
extern int fn_82AB68E0();
extern int fn_82B69A00();
extern int fn_82B6B008();
extern int fn_82B6D848();
extern int fn_82B6D938();
extern int fn_82B6E5C0();


unsigned int *
fn_82B6DB00(unsigned __int64 param_1,int (**param_2)(),unsigned __int64 param_3,unsigned int param_4,
             unsigned int param_5,int param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  int *piVar8;
  int in_stack_00000054;
  int in_stack_0000005c;
  unsigned int *in_stack_0000006c;
  
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d77bc,0xffffffff820d9f48,0x9d);
  }
  if (param_2 == (int (**)())0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69d8,0xffffffff820d9f48,0x9e);
  }
  if ((param_3 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69cc,0xffffffff820d9f48,0x9f);
  }
  if (param_6 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7790,0xffffffff820d9f48,0xa0);
  }
  if ((param_7 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6bdc,0xffffffff820d9f48,0xa1);
  }
  if ((param_8 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6bcc,0xffffffff820d9f48,0xa2);
  }
  if (in_stack_00000054 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6bbc,0xffffffff820d9f48,0xa3);
  }
  if (in_stack_0000005c == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6bac,0xffffffff820d9f48,0xa4);
  }
  puVar2 = (unsigned int *)(*param_2)(param_1,0x14c);
  if (puVar2 == (unsigned int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d77ac,0xffffffff820d9f48,0xa9);
  }
  else {
    puVar2[6] = param_6;
    puVar2[0x51] = in_stack_00000054;
    puVar2[0x52] = in_stack_0000005c;
    *puVar2 = (int)param_1;
    puVar7 = puVar2 + 7;
    puVar2[1] = param_2;
    lVar6 = 8;
    puVar2[2] = (int)param_3;
    puVar2[3] = param_4;
    puVar2[4] = param_5;
    puVar2[5] = (int)param_7;
    puVar2[0x50] = (int)param_8;
    do {
      if (puVar7[0x40] != 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da100,0xffffffff820d9f48,0xc2);
      }
      uVar1 = fn_82B6E5C0(param_1,param_2,param_3,param_8,100);
      *puVar7 = (int)uVar1;
      if ((uVar1 & 0xffffffff) == 0) {
        fn_82AB15D0(uVar1,0xffffffff820d2ea4,0xffffffff820da130,0xffffffff820d9f48,200);
      }
      uVar1 = fn_82AB68E0(param_1,param_2,param_3,10);
      puVar7[8] = (int)uVar1;
      if ((uVar1 & 0xffffffff) == 0) {
        fn_82AB15D0(uVar1,0xffffffff820d2ea4,0xffffffff820da154,0xffffffff820d9f48,0xce);
      }
      lVar6 = lVar6 + -1;
      puVar7 = puVar7 + 1;
    } while (lVar6 != 0);
    uVar3 = fn_82B6B008(100,0x24,param_2,param_3,param_1);
    puVar2[0x4f] = uVar3;
    iVar5 = 0;
    piVar8 = puVar2 + 0x47;
    puVar7 = puVar2 + 0x17;
    do {
      uVar1 = ((unsigned __int64)*in_stack_0000006c - ((unsigned __int64)*in_stack_0000006c & 7)) + 8;
      iVar4 = fn_82B6D848(puVar2,uVar1,puVar7);
      piVar8[-8] = 1;
      *piVar8 = (int)((uVar1 & 0xffffffff) << 2) + *piVar8;
      if (iVar4 != 0) goto LAB_82b6de7c;
      iVar5 = iVar5 + 1;
      in_stack_0000006c = in_stack_0000006c + 1;
      piVar8 = piVar8 + 1;
      puVar7 = puVar7 + 5;
    } while (iVar5 < 6);
    uVar1 = fn_82B69A00(param_7,6);
    uVar1 = (uVar1 & 0xffffffff) >> 2;
    iVar5 = fn_82B6D848(puVar2,uVar1,puVar2 + 0x35);
    puVar2[0x45] = 1;
    puVar2[0x4d] = (int)(uVar1 << 2) + puVar2[0x4d];
    if (iVar5 == 0) {
      uVar1 = fn_82B69A00(param_7,5);
      uVar1 = (uVar1 & 0xffffffff) >> 2;
      iVar5 = fn_82B6D848(puVar2,uVar1,puVar2 + 0x3a);
      puVar2[0x46] = 1;
      puVar2[0x4e] = (int)(uVar1 << 2) + puVar2[0x4e];
      if (iVar5 == 0) {
        return puVar2;
      }
    }
  }
LAB_82b6de7c:
  fn_82B6D938(puVar2);
  return (unsigned int *)0x0;
}

