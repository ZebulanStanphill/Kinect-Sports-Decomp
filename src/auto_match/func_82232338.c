extern int fn_8288B668();
extern int fn_8289D6D0(void *, int);
extern char lbl_82196A54[];
extern char lbl_82196A68[];
extern char lbl_82196AA8[];
extern char lbl_82197080[];
extern char lbl_82197100[];
extern char lbl_821B9BC8[];


typedef struct { void *vt; char p[0x54 - 4]; void *v54; void *v58; void *vb; } Sub_82232338;
typedef struct { void *vt; char p0[0x48 - 4]; void *v48; char p1[0x9c - 0x4c]; void *v9c; char p2[0xf0 - 0xa0]; Sub_82232338 s; void *v150; } Obj_82232338;

Obj_82232338 *fn_82232338(Obj_82232338 *param_1)
{
  Sub_82232338 *s;
  fn_8288B668();
  param_1->vt = lbl_82196A54;
  fn_8289D6D0((char *)param_1 + 0x48, 4);
  param_1->v48 = lbl_82197100;
  fn_8289D6D0((char *)param_1 + 0x9c, 4);
  param_1->v9c = lbl_82197100;
  s = &param_1->s;
  fn_8289D6D0(s, 4);
  param_1->s.vb = s;
  param_1->s.v54 = lbl_821B9BC8;
  param_1->s.v58 = 0;
  s->vt = lbl_82196A68;
  s->v54 = lbl_82196AA8;
  fn_8289D6D0((char *)param_1 + 0x150, 0);
  param_1->v150 = lbl_82197080;
  return param_1;
}
