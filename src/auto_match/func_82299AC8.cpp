struct Var_82299AC8;
extern "C" {
void fn_82273CD8(Var_82299AC8 *v, int type);
void fn_82273C88(Var_82299AC8 *v);
void fn_82672C20(void *movie, const char *name, Var_82299AC8 *args, int n);
void fn_82F64988(char *dst, unsigned size, const char *src);
}

struct Var_82299AC8 {
  int type;
  int f4;
  union {
    double num;
    const char *str;
  } v;
  Var_82299AC8() { type = 0; f4 = 0; }
  ~Var_82299AC8() { fn_82273C88(this); }
  void SetNumber(double d) { fn_82273CD8(this, 3); v.num = d; }
  void SetString(const char *s) { fn_82273CD8(this, 5); v.str = s; }
};

struct Obj_82299AC8 {
  void *movie;
  int f4;
  unsigned f8;
  char pad0c[0x20c - 0xc];
  char text[0x1000];
  int mode;
  int state;
  int pending;
  char pad1218[0x1220 - 0x1218];
  int f1220;
  int f1224;
  int ready;
};

extern "C" void fn_8229A0B8(Obj_82299AC8 *o);

extern "C" void fn_82299AC8(Obj_82299AC8 *o, const char *text)
{
  int s = o->state;
  int busy = 1;
  if (s >= 0 && (s <= 3 || (s > 7 && s <= 10)))
    busy = 0;
  if (o->ready == 0 || (busy && o->pending != 0)) {
    fn_82F64988(o->text, 0x400, text);
    o->pending = 0;
    fn_8229A0B8(o);
  } else {
    Var_82299AC8 args[2];
    args[0].SetNumber((double)o->f8);
    args[1].SetString(text);
    fn_82672C20(o->movie, "_root.mainCtrl.displayCaption", args, 2);
    o->f1224 = 0;
    o->mode = 3;
    o->f1220 = 1;
  }
}
