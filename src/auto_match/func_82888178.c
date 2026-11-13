extern unsigned int lbl_83213E3C;
extern unsigned int lbl_83213E40;
extern unsigned int lbl_83213E4C;
extern unsigned int lbl_83213E50;


void fn_82888178(int param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int iVar7;
  
  if ((lbl_83213E3C != 0) && (param_1 < lbl_83213E4C)) {
    uVar6 = (unsigned __int64)lbl_83213E40;
    iVar7 = param_1 * 0x13ec + lbl_83213E50;
    iVar3 = (int)((param_2 + 0x66 & 0xffffffff) << 2);
    iVar4 = (int)((param_2 & 0xffffffff) << 2);
    iVar5 = (int)((param_2 + 0x33 & 0xffffffff) << 2);
    iVar1 = *(int *)(iVar4 + iVar7);
    iVar2 = *(int *)(iVar5 + iVar7);
    *(int *)(iVar3 + iVar7) = *(int *)(iVar3 + iVar7) + param_4;
    iVar3 = (int)(((uVar6 + 3) * 0x33 + param_2 & 0xffffffff) << 2);
    *(int *)(iVar5 + iVar7) = iVar2 + param_3;
    iVar2 = (int)(((uVar6 + 0xe) * 0x33 + param_2 & 0xffffffff) << 2);
    *(int *)(iVar4 + iVar7) = iVar1 + param_3;
    *(int *)(iVar3 + iVar7) = *(int *)(iVar3 + iVar7) + param_3;
    *(int *)(iVar2 + iVar7) = *(int *)(iVar2 + iVar7) + param_4;
  }
  return;
}

