extern int fn_83018DD8();
extern unsigned int lbl_832642FC;


unsigned __int64 fn_83035128(int param_1,int *param_2,int *param_3)

{
  unsigned char uVar1;
  unsigned short uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  
  uVar2 = *(unsigned short *)*param_2;
  *param_2 = (int)((unsigned short *)*param_2 + 1);
  for (uVar8 = (unsigned __int64)uVar2; uVar8 != 0; uVar8 = uVar8 - 1) {
    iVar3 = *param_2;
    *param_2 = iVar3 + 5;
    uVar4 = *(unsigned int *)(iVar3 + 5);
    *param_2 = iVar3 + 9;
    uVar5 = *(unsigned int *)(iVar3 + 9);
    *param_2 = iVar3 + 0xd;
    uVar6 = *(unsigned int *)(iVar3 + 0xd);
    *param_2 = iVar3 + 0x11;
    uVar1 = *(unsigned char *)(iVar3 + 0x11);
    *param_2 = iVar3 + 0x12;
    uVar7 = (unsigned int)*(unsigned short *)(iVar3 + 0x12);
    *param_2 = iVar3 + 0x14;
    *(unsigned int *)(param_1 + 0x1c) = 1 << (uVar5 & 0x3f) | *(unsigned int *)(param_1 + 0x1c);
    fn_83018DD8(lbl_832642FC,param_1,uVar4,uVar5,uVar6,uVar1,iVar3 + 0x14,uVar7);
    *param_2 = *param_2 + uVar7 * 0xc;
    *param_3 = *param_3 + uVar7 * -0xc;
  }
  return 1;
}

