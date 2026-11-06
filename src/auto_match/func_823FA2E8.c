typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

struct Rd_823FA2E8;
typedef struct RdVt_823FA2E8 {
  unsigned char pad0[0x14];
  void (*read)(struct Rd_823FA2E8 *, int, void *);
} RdVt_823FA2E8;
typedef struct Rd_823FA2E8 {
  RdVt_823FA2E8 *vt;
} Rd_823FA2E8;

typedef struct Obj_823FA2E8 {
  int pad0[2];
  int f8;
  int fc;
  int f10;
  int f14;
  int f18;
  int f1c;
  int f20;
  int f24;
  Rd_823FA2E8 *r28;
  int pad2c;
  Rd_823FA2E8 *r30;
  int pad34;
  Rd_823FA2E8 *r38;
  int pad3c;
  Rd_823FA2E8 *r40;
  int pad44;
  Rd_823FA2E8 *r48;
  int pad4c;
  Rd_823FA2E8 *r50;
  int pad54;
  Rd_823FA2E8 *r58;
  int pad5c;
  Rd_823FA2E8 *r60;
} Obj_823FA2E8;

void fn_823FA2E8(Obj_823FA2E8 *param_1, int param_2, unsigned int param_3)
{
  unsigned char b0;
  unsigned char b1;
  int i0;
  int i1;
  int i2;
  int i3;
  int i4;
  __vector4 v;

  param_1->r28->vt->read(param_1->r28, param_2, &i0);
  param_1->r30->vt->read(param_1->r30, param_2, &i1);
  param_1->r38->vt->read(param_1->r38, param_2, &i2);
  param_1->r40->vt->read(param_1->r40, param_2, &i3);
  param_1->r48->vt->read(param_1->r48, param_2, &i4);
  param_1->r50->vt->read(param_1->r50, param_2, &b0);
  param_1->r58->vt->read(param_1->r58, param_2, &b1);
  param_1->r60->vt->read(param_1->r60, param_2, &v);
  if (param_3 != 0) {
    *(int *)(param_1->f8 + param_3) = i0;
    *(int *)(param_1->fc + param_3) = i1;
    *(int *)(param_1->f10 + param_3) = i2;
    *(int *)(param_1->f14 + param_3) = i3;
    *(int *)(param_1->f18 + param_3) = i4;
    *(unsigned char *)(param_1->f1c + param_3) = b0;
    *(unsigned char *)(param_1->f20 + param_3) = b1;
    *(__vector4 *)(param_1->f24 + param_3) = v;
  }
}
