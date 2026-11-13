extern void fn_828974A8(void *self);
extern void fn_8289D4C0(void *self);
extern char lbl_82197070[];
extern char lbl_82197080[];
extern char lbl_82197100[];
extern char lbl_82197728[];

typedef struct Elem_822455B0 { void *vt; char pad[0x50]; } Elem_822455B0;
typedef struct Obj_822455B0 {
  void *vt;
  char pad0[0x44];
  Elem_822455B0 m[7];     /* +0x48 */
  Elem_822455B0 b[15];    /* +0x294 */
  Elem_822455B0 a[15];    /* +0x780 */
} Obj_822455B0;

void fn_822455B0(Obj_822455B0 *param_1)
{
  int i;
  char *e = (char *)param_1 + 0x4ec;
  Elem_822455B0 *p;

  param_1->vt = lbl_82197728;
  p = (Elem_822455B0 *)(e + 0x780);
  i = 14;
  do {
    p--;
    p->vt = lbl_82197080;
    fn_8289D4C0(p);
    i--;
  } while (i >= 0);
  p = (Elem_822455B0 *)(e + 0x294);
  i = 14;
  do {
    p--;
    p->vt = lbl_82197100;
    fn_8289D4C0(p);
    i--;
  } while (i >= 0);
  fn_8289D4C0(&param_1->m[6]);
  param_1->m[5].vt = lbl_82197080;
  fn_8289D4C0(&param_1->m[5]);
  param_1->m[4].vt = lbl_82197080;
  fn_8289D4C0(&param_1->m[4]);
  param_1->m[3].vt = lbl_82197080;
  fn_8289D4C0(&param_1->m[3]);
  fn_8289D4C0(&param_1->m[2]);
  param_1->m[1].vt = lbl_82197100;
  fn_8289D4C0(&param_1->m[1]);
  param_1->m[0].vt = lbl_82197100;
  fn_8289D4C0(&param_1->m[0]);
  param_1->vt = lbl_82197070;
  fn_828974A8(param_1);
}
