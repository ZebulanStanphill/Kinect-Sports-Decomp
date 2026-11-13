extern int fn_82590DB8();
extern int fn_82591730();
extern unsigned int iStack00000024;


unsigned __int64 fn_82618028(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iStack00000024;
  
  iStack00000024 = param_3;
  if (param_2 == 5) {
    *(unsigned int *)(*(int *)(param_1 + 4) + 400) = 1;
    fn_82590DB8(param_1,0,0);
    iVar3 = 0xa0;
    puVar1 = (unsigned int *)(*(int *)(param_1 + 4) + 0xa0U & 0xfffffff0);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
  }
  else {
    if (param_2 == 8) {
      *(unsigned int *)(*(int *)(param_1 + 4) + 400) = 1;
      *(int *)(param_1 + 0xb0) = param_3;
      return 1;
    }
    if (param_2 != 0xd) {
      if (param_2 == 0x17) {
        *(int *)(param_1 + 0x10) = param_3;
        *(unsigned char *)(param_1 + 0xc6) = 1;
        return 1;
      }
      uVar2 = fn_82591730();
      return uVar2;
    }
    puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    iVar3 = 0x60;
  }
  puVar1 = (unsigned int *)(param_1 + iVar3 & 0xfffffff0);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  return 1;
}

