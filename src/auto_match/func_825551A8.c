typedef struct Obj_825551A8 { int pad[2]; int f8; int pad2[3]; void *f18; } Obj_825551A8;
extern int fn_82BFEB80(void *, void *, int);
extern int lbl_831C1DE0;
extern int lbl_8326B370[];

int fn_825551A8(Obj_825551A8 *o, void *p2)
{
  int hr;
  if (o->f8 == 0 && o->f18 != 0) {
    lbl_8326B370[0x3c] = 0;
    lbl_831C1DE0 = 0;
    hr = fn_82BFEB80(o->f18, p2, 0);
    lbl_831C1DE0 = 0;
    lbl_8326B370[0x3c] = 0;
  } else {
    hr = 0x80004005;
  }
  return hr >= 0;
}
