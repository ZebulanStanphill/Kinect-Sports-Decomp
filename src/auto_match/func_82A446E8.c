typedef unsigned int undefined4;

extern int fn_82A3F6F0(void *p);
extern int fn_82A411B8(void *p);
extern int fn_82A412D8(void *p);
extern unsigned int lbl_82089758;
extern unsigned int lbl_82089788;

typedef struct Sub_82A446E8 {
  void *vt;             /* 0x00 (outer 0x04) */
  int pad04;            /* 0x04 */
  char m08[0x48];       /* 0x08 (outer 0x0c) */
  char m50[0x38];       /* 0x50 (outer 0x54) */
} Sub_82A446E8;

typedef struct Obj_82A446E8 {
  int f00;              /* 0x00 */
  Sub_82A446E8 sub;     /* 0x04 */
  void *vt2;            /* 0x8c */
  int pad90;            /* 0x90 */
  char m94[0x28];       /* 0x94 */
  char mbc[0x28];       /* 0xbc */
  char me4[0x10];       /* 0xe4 */
} Obj_82A446E8;

void fn_82A446E8(Obj_82A446E8 *param_1)
{
  Sub_82A446E8 *s;

  param_1->sub.vt = &lbl_82089788;
  param_1->vt2 = &lbl_82089758;
  s = &param_1->sub;
  param_1->f00 = 0;
  fn_82A412D8(param_1->me4);
  fn_82A3F6F0(param_1->mbc);
  fn_82A411B8(param_1->m94);
  param_1->sub.vt = 0;
  fn_82A411B8(s->m50);
  fn_82A411B8(s->m08);
}
