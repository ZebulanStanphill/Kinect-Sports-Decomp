extern unsigned int fStack_34;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_8268D1D0();
extern int fn_8270D7A0();
extern unsigned int uStack_30;
extern unsigned int uStack_38;


void fn_8270DE48(int param_1)

{
  int iVar1;
  float *pfVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned int uVar5;
  __int64 lVar6;
  float fStack_40;
  float fStack_3c;
  unsigned int uStack_38;
  float fStack_34;
  unsigned int uStack_30;
  float afStack_2c [11];
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0x164) != 0) {
    lVar6 = 0;
    do {
      lVar4 = lVar6 + (unsigned __int64)*(unsigned int *)(param_1 + 0x160);
      fStack_40 = *(float *)((int)lVar6 + *(unsigned int *)(param_1 + 0x160));
      iVar1 = (int)lVar4;
      if (fStack_40 < *(float *)(iVar1 + 8)) {
        fStack_3c = *(float *)(iVar1 + 4);
        afStack_2c[0] = *(float *)(iVar1 + 0xc);
        if (fStack_3c < afStack_2c[0]) {
          uStack_38 = *(unsigned int *)(iVar1 + 8);
          fStack_34 = fStack_3c;
          uStack_30 = uStack_38;
          uVar3 = fn_8270D7A0(param_1,&fStack_40,&fStack_3c);
          uVar3 = fn_8270D7A0(uVar3,&uStack_38,&fStack_34);
          fn_8270D7A0(uVar3,&uStack_30,afStack_2c);
          pfVar2 = (float *)lVar4;
          fn_8268D1D0((double)*pfVar2,(double)pfVar2[1],(double)pfVar2[2],(double)pfVar2[3],
                            lVar4 + 0x10);
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x28;
    } while (uVar5 < *(unsigned int *)(param_1 + 0x164));
  }
  return;
}

