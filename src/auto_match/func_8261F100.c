typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_70;
extern unsigned int fStack_6c;
extern unsigned int fStack_7c;
extern int fn_8261EAE8();
extern unsigned int lbl_821917D4;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Removing unreachable block (ram,0x8261f1b4) */
/* WARNING: Removing unreachable block (ram,0x8261f1ec) */
/* WARNING: Removing unreachable block (ram,0x8261f250) */
/* WARNING: Removing unreachable block (ram,0x8261f25c) */
/* WARNING: Removing unreachable block (ram,0x8261f288) */
/* WARNING: Removing unreachable block (ram,0x8261f2d8) */

unsigned __int64
fn_8261F100(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,float *param_5)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 in_r0;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  double dVar7;
  unsigned char in_vr0 [16];
  unsigned char auVar8 [16];
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned char in_vr12 [16];
  unsigned char auVar12 [16];
  unsigned char in_vr13 [16];
  float fStack_7c;
  unsigned char auStack_70 [4];
  float fStack_6c;

  uVar4 = ZEXT48(&stack0x00000000);
  if ((*(int *)(param_2 + 0x90) == 0) || (*(int *)(param_2 + 0x68) == 0)) {
    uVar6 = 0;
  }
  else {
    iVar2 = (int)param_3;
    puVar1 = (unsigned int *)((int)in_r0 + iVar2 & 0xfffffff0);
    uVar9 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
    puVar3 = (unsigned int *)((unsigned int)(auStack_70 + (int)in_r0) & 0xfffffff0);
    *puVar3 = *puVar1;
    puVar3[1] = uVar9;
    puVar3[2] = uVar10;
    puVar3[3] = uVar11;
    fStack_6c = (float)((double)fStack_6c + param_1);
    dVar7 = (double)lbl_821917D4;
    iVar5 = fn_8261EAE8(dVar7,param_2,uVar4 - 0x70,param_4,0,uVar4 - 0x80,uVar4 - 0x90,0);
    if (iVar5 == 0) {
      loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
      loadVectorLeftIndexed128(in_r0,param_3);
      loadVectorLeftIndexed128(param_3,8);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr12,in_vr13,4,3); memcpy(auVar12, &_vt0, 16); }
      loadVectorLeftIndexed128(in_r0,uVar4 - 0x90);{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(in_vr0,in_vr13,4,3); memcpy(auVar8, &_vt1, 16); }{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(auVar8,auVar12,3,2); memcpy(auVar8, &_vt2, 16); }
      memcpy((void *)((const void *)((int)in_r0 + (int)(uVar4 - 0x70) & 0xfffffff0)), auVar8, 16);
      uVar6 = fn_8261EAE8(dVar7,param_2,uVar4 - 0x70,uVar4 - 0x70,1,uVar4 - 0x80,0,0,8);
      if ((int)uVar6 != 0) {
        *param_5 = fStack_7c;
        return uVar6;
      }
      uVar6 = 0;
      iVar5 = fn_8261EAE8(dVar7,param_2,param_2);
      if (iVar5 == 0) {
        fStack_7c = (float)((double)*(float *)(iVar2 + 4) - param_1);
      }
      else {
        fStack_7c = *(float *)(iVar2 + 4);
      }
    }
    else {
      uVar6 = 1;
    }
    *param_5 = fStack_7c;
  }
  return uVar6;
}
