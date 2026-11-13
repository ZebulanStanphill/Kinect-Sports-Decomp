extern unsigned int *auStack_40;
extern int fn_82B80CD0();
extern int fn_82B86C90();


void fn_82AF88B0(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned __int64 *puVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned __int64 extraout_f1;
  unsigned int auStack_40;
  
  uVar4 = fn_82B86C90(param_1[3],param_2,&auStack_40);
  uVar1 = *param_1;
  uVar7 = 0;
  uVar2 = uVar1 & 0x1f;
  if ((uVar1 & 0xe000000) != 0) {
    uVar8 = 0;
    puVar6 = (unsigned __int64 *)(param_2 + -8);
    do {
      uVar3 = (unsigned __int64)((uVar1 >> 5 & 0xff) >> (uVar8 & 0x3f));
      iVar5 = (int)((uVar3 & 3) << 1);
      uVar4 = fn_82B80CD0(*(unsigned __int64 *)((int)((uVar3 & 3) << 3) + param_2),uVar4,
                                ((2 << (int)((uVar3 & 3) << 1) + 1) - 1U & auStack_40 &
                                -1 << iVar5) >> iVar5,uVar2);
      puVar6 = puVar6 + 1;
      *puVar6 = extraout_f1;
      uVar1 = *param_1;
      uVar7 = uVar7 + 1;
      uVar8 = uVar8 + 2;
    } while (uVar7 < (uVar1 >> 0x19 & 7));
  }
  return;
}

