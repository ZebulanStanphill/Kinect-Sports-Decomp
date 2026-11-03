extern int fn_82672C20(void *, char *, int, int);
extern float lbl_821917A8[];

typedef struct Sub_82383F20 {
  char pad[0x38];
  int f38;
  void *f3c;
} Sub_82383F20;

typedef struct Obj_82383F20 {
  char pad0[0x60];
  int f60;
  char pad64[0xc];
  Sub_82383F20 s;
  char pad_b0[0x10];
  float fc0;
  char pad_c4[0x1c];
  int fe0;
} Obj_82383F20;

void fn_82383F20(Obj_82383F20 *o)
{
  if (o->fe0 != 0) {
    int x = *(int *)((char *)o + 0xa4);
    Sub_82383F20 *s = &o->s;
    if (x != 0 && s->f38 == 0) {
      s->f38 = 1;
      fn_82672C20(s->f3c, "_root.mainCtrl.hide", 0, 0);
    }
    o->fe0 = 0;
    o->f60 = 0;
    o->fc0 = lbl_821917A8[6];
  }
}
