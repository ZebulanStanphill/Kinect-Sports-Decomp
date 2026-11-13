extern unsigned int *auStack_34;
extern int fn_82C40BA0();
extern int fn_82C40C70();
extern int fn_82C40D20();
extern int fn_82C40DC8();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


unsigned __int64 fn_82C40E58(int param_1,int param_2,short *param_3)

{
  unsigned short uVar1;
  unsigned short uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  short sVar7;
  unsigned __int64 uVar8;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  short *psStack_38;
  unsigned int auStack_34 [13];
  
  if (*(short *)(param_1 + 0x22) != 0) {
    uVar8 = 0;
    do {
      uVar1 = *(unsigned short *)(param_1 + 0xd2);
      uVar2 = *(unsigned short *)(param_1 + 0x22);
      auStack_34[0] = (unsigned int)uVar1;
      psStack_38 = (short *)((int)((uVar8 & 0xffffffff) << 1) + (int)param_3);
      iVar3 = (int)((uVar8 & 0xffffffff) << 2);
      uStack_40 = *(unsigned int *)((int)uVar8 * 0x6f0 + *(int *)(param_1 + 0x140) + 0x38);
      sVar7 = *psStack_38;
      uStack_3c = *(unsigned int *)(iVar3 + param_2);
      *psStack_38 = 0;
      uVar6 = (__int64)sVar7 + (unsigned __int64)uVar1;
      uVar4 = *(unsigned int *)(iVar3 + *(int *)(param_1 + 0x164));
      if ((int)auStack_34[0] < (int)uVar4) {
        uVar5 = (unsigned __int64)uVar4;
        if ((int)uVar6 <= (int)uVar4) {
          uVar5 = uVar6;
        }
        if (*(int *)(param_1 + 0x100) < (int)uVar4) {
          return 0xffffffff80004005;
        }
        iVar3 = *(int *)(param_1 + 0x60);
        if (iVar3 == 0x3d) {
          fn_82C40DC8(param_1,auStack_34,uVar5,&psStack_38,&uStack_3c,&uStack_40,uVar2);
        }
        else if (iVar3 == 0x4e) {
          fn_82C40D20();
        }
        else if (iVar3 == 0x5e) {
          fn_82C40C70();
        }
        else {
          fn_82C40BA0();
        }
      }
      sVar7 = (short)uVar8 + 1;
      uVar8 = (unsigned __int64)sVar7;
    } while ((int)sVar7 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x22));
  }
  if (*(unsigned short *)(param_1 + 0x22) != 0) {
    sVar7 = 0;
    do {
      sVar7 = sVar7 + 1;
    } while ((int)sVar7 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x22));
  }
  *(short *)(param_1 + 0xd2) = *param_3 + *(short *)(param_1 + 0xd2);
  return 0;
}

