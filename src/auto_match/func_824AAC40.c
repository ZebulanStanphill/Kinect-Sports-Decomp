#define NAN(x) ((x) != (x))
extern unsigned int *auStack_40;
extern unsigned int fStack_3c;
extern unsigned int lbl_82193B38;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


double fn_824AAC40(int param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned __int64 in_r0;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  double dVar7;
  double dVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned __int64 uStack_48;
  unsigned char auStack_40 [4];
  float fStack_3c;
  
  (**(int (***)())*param_2)(param_2,&uStack_50,&uStack_4c);
  iVar1 = *(int *)(param_1 + 0x3c);
  dVar7 = (double)ltcg_pool_0_0f;
  uVar5 = (unsigned __int64)uStack_4c;
  dVar8 = (double)((float)uStack_50 - ((float)uVar5 - lbl_82193B38));
  fVar2 = (float)uStack_50;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((dVar8 < dVar7) << 2) | (unsigned int)(NAN(dVar8) || NAN(dVar7)) << 2)) < 0.0)
  {
    fVar2 = (float)uVar5 - lbl_82193B38;
  }
  uStack_48 = (unsigned __int64)fVar2;
  uVar6 = uStack_48 & 0xffffffff;
  uStack_50 = (((unsigned __int64)(uStack_48) >> 32) & 0xFFFFFFFF);
  if (uVar6 <= uVar5) {
    do {
      (**(int (***)())(*param_2 + 4))(param_2,uVar6,&uStack_48);
      uVar5 = (unsigned __int64)uStack_4c;
      uVar6 = uVar6 + 1;
      puVar3 = (unsigned int *)
               (*(int *)((((unsigned __int64)(uStack_48) >> 0) & 0xFFFFFFFF) + 0x40) + ((-(unsigned int)(iVar1 != 0) & 4) + 6) * 0x40 + 0x10 &
               0xfffffff0);
      uVar9 = puVar3[1];
      uVar10 = puVar3[2];
      uVar11 = puVar3[3];
      puVar4 = (unsigned int *)((unsigned int)(auStack_40 + (int)in_r0) & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar9;
      puVar4[2] = uVar10;
      puVar4[3] = uVar11;
      dVar7 = (double)(float)((double)fStack_3c + dVar7);
    } while ((uVar6 & 0xffffffff) <= uVar5);
    uVar6 = (unsigned __int64)uStack_50;
  }
  return (double)(float)(dVar7 / (double)((uVar5 - uVar6) + 1 & 0xffffffff));
}

