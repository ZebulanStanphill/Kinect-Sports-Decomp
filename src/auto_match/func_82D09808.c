extern int fn_82CE52E0();
extern int fn_82CE5338();
extern int fn_82CE5410();
extern int fn_82D09618();


unsigned __int64 fn_82D09808(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  int iVar6;
  
  iVar3 = param_3[1];
  iVar2 = fn_82CE5410();
  iVar2 = fn_82CE52E0(*(unsigned int *)(iVar2 + 0x10),iVar3 << 4);
  uVar1 = param_3[2];
  iVar3 = param_3[1];
  iVar4 = 0;
  if (0 < iVar3) {
    iVar6 = 0;
    puVar5 = (unsigned int *)(iVar2 + -8);
    do {
      iVar4 = iVar4 + 1;
      puVar5[2] = *(unsigned int *)(iVar6 + *param_3);
      puVar5[3] = *(unsigned int *)(iVar6 + *param_3 + 4);
      iVar3 = iVar6 + *param_3;
      iVar6 = (((int)uVar1 >> 2) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 3) != 0)) * 4 + iVar6;
      puVar5 = puVar5 + 4;
      *puVar5 = *(unsigned int *)(iVar3 + 8);
      iVar3 = param_3[1];
    } while (iVar4 < iVar3);
  }
  fn_82D09618(param_1,param_2,iVar2,iVar3,0);
  iVar3 = fn_82CE5410();
  fn_82CE5338(*(unsigned int *)(iVar3 + 0x10),iVar2);
  return param_2;
}

