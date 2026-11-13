typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int fStack_44;
extern int fn_8279C2A0();
extern int fn_827A0BD0();
extern int fn_827A8770();
extern int fn_827A9328();
extern unsigned int iStack_48;
extern unsigned int iStack_50;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_4c;
extern unsigned int uStack_54;
extern unsigned int uStack_68;
extern unsigned int uStack_74;


__int64 fn_827A0EB8(double param_1,double param_2,int param_3)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  bool bVar5;
  unsigned int *puVar4;
  unsigned int *puVar6;
  int iVar7;
  __int64 lVar8;
  double dVar9;
  double dVar10;
  unsigned int uStack_74;
  int aiStack_70 [2];
  unsigned int uStack_68;
  unsigned int uStack_54;
  int iStack_50;
  unsigned int uStack_4c;
  int iStack_48;
  float fStack_44;
  unsigned char bStack_40;
  
  fn_827A0BD0();
  iVar7 = param_3 + 0x24;
  dVar9 = (double)(float)(param_1 -
                         (double)(*(float *)(param_3 + 0x3c) - *(float *)(param_3 + 0xf0)));
  dVar10 = (double)(float)(param_2 -
                          (double)(*(float *)(param_3 + 0x40) - *(float *)(param_3 + 0xf4)));
  uVar2 = fn_827A8770(iVar7);
  fn_827A9328((double)(float)((double)uVar2 + dVar10),aiStack_70,iVar7);
  if (((aiStack_70[0] == 0) || (*(unsigned int *)(aiStack_70[0] + 4) <= uStack_68)) ||
     (bVar5 = false, (int)uStack_68 < 0)) {
    bVar5 = true;
  }
  if (bVar5) {
    puVar4 = &uStack_74;
    uStack_4c = 0;
    fStack_44 = lbl_821AAD20;
    lVar8 = 5;
    puVar6 = &uStack_54;
    if ((double)lbl_821AAD20 < dVar10) {
      bVar1 = *(unsigned char *)(param_3 + 0x98);
      iStack_48 = *(int *)(param_3 + 0x28) + -1;
      do {
        puVar6 = puVar6 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar6;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    else {
      bVar1 = *(unsigned char *)(param_3 + 0x98);
      iStack_48 = 0;
      do {
        puVar6 = puVar6 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar6;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    bStack_40 = bVar1 >> 2 & 1;
    iStack_50 = iVar7;
  }
  uVar3 = (unsigned __int64)uStack_68;
  if (((aiStack_70[0] == 0) || (*(unsigned int *)(aiStack_70[0] + 4) <= uVar3)) ||
     (bVar5 = false, (int)uStack_68 < 0)) {
    bVar5 = true;
  }
  if (bVar5) {
    lVar8 = -(unsigned __int64)(*(int *)(param_3 + 0x28) != 0);
  }
  else {
    if ((int)uStack_68 < 0) {
      uVar3 = 0xffffffffffffffff;
    }
    lVar8 = fn_8279C2A0(dVar9,param_3,uVar3);
  }
  return lVar8;
}

