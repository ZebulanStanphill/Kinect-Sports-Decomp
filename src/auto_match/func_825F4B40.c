typedef unsigned char bool;
typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82539560();
extern int fn_82545698();
extern int fn_825551A8();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_82637BC0();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82638D10();
extern int fn_8263CBB0();
extern int fn_8263E9F0();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8327F8B8;
extern unsigned int lbl_8327F964;
extern unsigned int stack0x00000000;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825F4B40(int param_1)

{
  int iVar1;
  unsigned __int64 in_r0;
  unsigned int uVar2;
  unsigned int uVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  unsigned char in_vr0 [16];
  unsigned char in_vr11 [16];
  unsigned char auVar8 [16];
  unsigned char in_vr12 [16];
  unsigned char auVar9 [16];
  unsigned char in_vr13 [16];
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;

  if (*(int *)(param_1 + 0x8dc) != 0) {
    if ((*(int *)(param_1 + 0x8fc) != 2) &&
       ((*(int *)(param_1 + 0x8dc) == 0 ||
        ((*(int *)(param_1 + 0x8fc) != 4 && (*(int *)(param_1 + 0x8fc) != 3)))))) {
      if (*(int *)(param_1 + 0x8dc) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (unsigned int)LZCOUNT(*(int *)(param_1 + 0x8fc) + -5) >> 5;
      }
      if (uVar3 == 0) {
        return;
      }
    }
    dVar5 = (double)*(float *)(param_1 + 0x920);
    dVar6 = (double)ltcg_pool_0_0f;
    dVar7 = (double)lbl_821CA460;
    bVar4 = dVar6 < dVar5;
    if (bVar4) {
      fn_82539560((double)*(float *)(param_1 + 0x8f4),dVar5,dVar6);
    }
    dVar5 = (double)*(float *)(param_1 + 0x924);
    if (dVar6 < dVar5) {
      fn_82539560((double)*(float *)(param_1 + 0x8f4),dVar5,
                   (double)*(float *)(*(int *)(param_1 + 0x8dc) + 0x10));
    }
    if (dVar6 < dVar5 || bVar4) {
      fn_8263E9F0(dVar7,lbl_8320A898,0,0,0,0,0xffffffff8326af58,0,0);
      fn_825551A8(*(unsigned int *)(param_1 + 0x8dc),*(unsigned int *)(param_1 + 0x900));
      fn_82631920(lbl_8320A898,lbl_8327F8B8);
      fn_82631578(lbl_8320A898,lbl_8327F964);
      fn_8263CBB0(lbl_8320A898,0,0xffffffff8326af58,0x80000000);
      iVar1 = lbl_8320A898;
      loadVectorLeftIndexed128(0xffffffff821ca45c,4);
      loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x50);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr12,in_vr13,4,3); memcpy(auVar9, &_vt0, 16); }{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(in_vr11,in_vr0,4,3); memcpy(auVar8, &_vt1, 16); }{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(auVar9,auVar8,3,2); memcpy(auVar8, &_vt2, 16); }
      memcpy((void *)((const void *)((int)&uStack_40 + (int)in_r0 & 0xfffffff0)), auVar8, 16);
      *(unsigned int *)(iVar1 + 0x1780) = uStack_40;
      *(unsigned int *)(iVar1 + 0x1784) = uStack_3c;
      *(unsigned int *)(iVar1 + 0x1788) = uStack_38;
      *(unsigned int *)(iVar1 + 0x178c) = uStack_34;
      *(unsigned __int64 *)(iVar1 + 8) = *(unsigned __int64 *)(iVar1 + 8) | 0x8000000000000000;
      fn_82638D10(lbl_8320A898,1);
      fn_82637B30(lbl_8320A898);
      fn_82637BC0(lbl_8320A898,0);
      fn_82637C50(lbl_8320A898,6);
      fn_82637CE0(lbl_8320A898,7);
      iVar1 = lbl_8320A898;
      *(unsigned int *)(lbl_8320A898 + 0x293c) = *(unsigned int *)(lbl_8320A898 + 0x293c) & 0xfffffff7;
      *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x40200;
      fn_82545698(lbl_8320A898);
    }
    else {
      uVar2 = fn_825551A8(*(unsigned int *)(param_1 + 0x8dc),*(unsigned int *)(param_1 + 0x900));
      *(unsigned int *)(param_1 + 0x918) = uVar2;
    }
  }
  return;
}
