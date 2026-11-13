extern int fn_82C4E3B0();


void fn_830D8DB8(__int64 *param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char *pbVar7;
  int iVar8;
  
  do {
    pbVar7 = *(unsigned char **)((int)param_1 + 0xc);
    if (pbVar7 < (unsigned char *)(*(int *)(param_1 + 2) - 4U)) {
      bVar1 = *pbVar7;
      bVar2 = pbVar7[1];
      bVar3 = pbVar7[2];
      bVar4 = pbVar7[3];
      bVar5 = pbVar7[4];
      bVar6 = pbVar7[5];
      iVar8 = *(int *)(param_1 + 1);
      *(unsigned char **)((int)param_1 + 0xc) = pbVar7 + 6;
      *(int *)(param_1 + 1) = iVar8 + 0x30;
      *param_1 = ((((((unsigned __int64)bVar1 * 0x100 + (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3) *
                    0x100 + (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5) * 0x100 + (unsigned __int64)bVar6
                 << ((__int64)-iVar8 & 0x7fU)) + *param_1;
      return;
    }
    iVar8 = fn_82C4E3B0(param_1);
  } while (iVar8 == 1);
  return;
}

