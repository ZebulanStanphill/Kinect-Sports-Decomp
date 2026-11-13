typedef unsigned char bool;
#define true 1
#define false 0
#define NAN(x) ((x) != (x))
extern int fn_82547FB8();
extern int fn_8263B758();
extern int fn_82837D98();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195598;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


unsigned __int64 fn_825D16E8(float *param_1,float *param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  unsigned int uVar5;
  char cVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  bool bVar10;
  __int64 alStack_70;
  int aiStack_60 [6];
  unsigned int uStack_48;
  unsigned int uStack_44;
  
  fn_82837D98(*(unsigned int *)(param_3 + 0x14),0,&alStack_70);
  fn_8263B758(((unsigned int)((unsigned __int64)(alStack_70) >> 32)),0,aiStack_60);
  uVar7 = (unsigned int)(float)(__int64)((double)(*param_2 * (float)uStack_48) + lbl_82195598);
  uVar1 = (unsigned int)(float)(__int64)((double)(*param_1 * (float)uStack_48) - lbl_82195598);
  if ((int)uStack_48 <= (int)uVar7) {
    uVar7 = uStack_48;
  }
  fVar3 = (float)uStack_44;
  fVar4 = (float)(__int64)((double)(param_2[1] * fVar3) + lbl_82195598);
  fVar2 = fVar4 - fVar3;
  uVar9 = (unsigned __int64)(unsigned int)(int)(float)(__int64)((double)(param_1[1] * fVar3) - lbl_82195598);
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar2 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar2) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar3 = fVar4;
  }
  alStack_70 = (__int64)(int)fVar3;
  do {
    uVar8 = (unsigned __int64)uVar1;
    uVar5 = uVar1;
    if ((int)fVar3 <= (int)uVar9) {
      return 0;
    }
    while ((int)uVar5 < (int)uVar7) {
      if (aiStack_60[0] == 0x1a200154) {
        cVar6 = fn_82547FB8(param_4,uStack_48,uVar8,uVar9);
        bVar10 = cVar6 != '\0';
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        return 1;
      }
      uVar8 = uVar8 + 1;
      uVar5 = (unsigned int)uVar8;
    }
    uVar9 = uVar9 + 1;
  } while( true );
}

