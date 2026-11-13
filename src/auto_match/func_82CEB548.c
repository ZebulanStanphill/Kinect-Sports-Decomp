extern int fn_82CEB8F0();
extern int fn_82CFD5B0();
extern int fn_82CFD5B8();
extern int fn_82CFD8C0();


unsigned __int64 fn_82CEB548(int param_1,int param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned int uVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  unsigned int *puVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x20);
  if ((iVar6 == 0) || (iVar1 = *(int *)(param_2 * 4 + iVar6), iVar1 < 0)) {
    uVar2 = 1;
  }
  else {
    puVar5 = (unsigned int *)(iVar6 + iVar1);
    iVar6 = param_2 * 0x18 + *(int *)(param_1 + 0x18);
    if (*(char *)(iVar6 + 0xc) == '\x14') {
      uVar3 = fn_82CFD5B0(iVar6);
      uVar4 = *puVar5;
      param_3[5] = uVar3;
      uVar2 = 0;
      *param_3 = 0x14;
      param_3[4] = uVar4;
    }
    else if (*(char *)(iVar6 + 0xc) == '\x18') {
      uVar4 = fn_82CFD5B8(iVar6);
      uVar3 = fn_82CFD8C0(iVar6,puVar5);
      param_3[4] = uVar3;
      uVar2 = 0;
      param_3[5] = uVar4;
      *param_3 = 0x18;
    }
    else {
      uVar2 = fn_82CEB8F0(param_3,puVar5);
    }
  }
  return uVar2;
}

