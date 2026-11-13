typedef struct { unsigned __int64 lo, hi; } V16;
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82330AD8();
extern int fn_82520780();
extern int fn_825279F8();
extern int fn_82528948();
extern int fn_825319C0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821B097C;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


unsigned int *
fn_82331168(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             float *param_5,float *param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  unsigned char in_vs32 [16];
  unsigned char auVar10 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010430;
  unsigned int in_register_00010434;
  unsigned int in_register_00010438;
  unsigned int in_vr67;
  
  fn_82330AD8(param_1,param_2,param_4,param_3,param_7,param_8);
  *param_1 = &lbl_821B097C;
  param_1[0x28] = param_5[2];
  dVar9 = (double)lbl_821CA460;
  uVar5 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  dVar8 = (double)lbl_8218E8E8;
  uVar2 = uVar5 & 0x7fffff;
  lbl_83265A28 = uVar5 * 0x19660d + 0x3c6ef35f;
  *(unsigned __int64 *)(param_1 + 0x29) =
       CONCAT44((param_6[1] - *param_6) *
                (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar9) + *param_6,
                (param_6[3] - param_6[2]) * (float)((double)(float)(uVar2 | 0x3f800000) - dVar9) +
                param_6[2]);
  uVar5 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  lbl_83265A28 = uVar5 * 0x19660d + 0x3c6ef35f;
  *(unsigned __int64 *)(param_1 + 0x2b) =
       CONCAT44((param_5[1] - *param_5) *
                (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar9) + *param_5,
                (param_5[1] - *param_5) *
                (float)((double)(float)(uVar5 & 0x7fffff | 0x3f800000) - dVar9) + *param_5);
  param_1[0x2d] = *param_6;
  param_1[0x2e] = param_6[1];
  param_1[0x2f] = param_6[2];
  param_1[0x30] = param_6[3];
  iVar3 = fn_82520780(dVar8,0xffffffff83265a28,uVar2,0x3c6ef35f,0x3c6ef35f,0x3c6ef35f);
  dVar7 = (double)lbl_82192734;
  dVar6 = dVar7;
  if (iVar3 != 0) {
    dVar6 = dVar9;
  }
  param_1[0x2b] = (float)(dVar6 * (double)(float)param_1[0x2b]);
  iVar3 = fn_82520780(dVar8,0xffffffff83265a28);
  if (iVar3 == 0) {
    dVar9 = dVar7;
  }
  param_1[0x2c] = (float)((double)(float)param_1[0x2c] * dVar9);
  fn_825319C0((double)(float)param_1[0x28],param_1 + 0x29);
  iVar3 = param_1[4];
  iVar4 = fn_825279F8(iVar3);
  if ((iVar4 == 0) || (iVar4 == 3)) {
    puVar1 = (unsigned int *)(in_r0 + iVar3 + 0x70 & 0xfffffff0);
    *puVar1 = in_register_00010010;
    puVar1[1] = in_register_00010014;
    puVar1[2] = in_register_00010018;
    puVar1[3] = in_vr1;
  }
  else {{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs40,in_vs32); memcpy(auVar10, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs39,in_vs42,auVar10); memcpy(auVar10, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs38,in_vs41,auVar10); memcpy(auVar10, &_vt2, 16); }
    vectorConditionalSelect(auVar10,in_vs45,in_vs44);
    puVar1 = (unsigned int *)(in_r0 + iVar3 + 0x70 & 0xfffffff0);
    *puVar1 = in_register_00010430;
    puVar1[1] = in_register_00010434;
    puVar1[2] = in_register_00010438;
    puVar1[3] = in_vr67;
  }
  puVar1 = (unsigned int *)(in_r0 + iVar3 + 0x70 & 0xfffffff0);
  uVar11 = *puVar1;
  uVar12 = puVar1[1];
  uVar13 = puVar1[2];
  uVar14 = puVar1[3];
  *(unsigned int *)(iVar3 + 0x170) = 0;
  puVar1 = (unsigned int *)(iVar3 + 0x60U & 0xfffffff0);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  puVar1[2] = uVar13;
  puVar1[3] = uVar14;
  fn_82528948(iVar3);
  return param_1;
}

