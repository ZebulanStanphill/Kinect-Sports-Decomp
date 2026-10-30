extern double sqrt(double);
typedef struct Obj_829E7918 {
  int pad0;
  void *h;
  int w;
  int hgt;
  unsigned char ok;
  char pad11[3];
  char sub14[0x34];
  char sub48[1];
} Obj_829E7918;
extern char *lbl_832179FC;
extern void fn_829E7640(void **);
extern void *fn_82A28568(int, int, int);
extern void *fn_829E8FA8(void);
extern int fn_829E97C8(void *, int, int);
extern int fn_829E9078(void *, unsigned int *);
extern void fn_829E8B70(char *);
extern void fn_829E8C48(char *, int, int, int, int, int, int);
extern void fn_829E7830(char *, int);

int fn_829E7918(Obj_829E7918 *o, int arg)
{
  void *obj;
  int hr;
  unsigned int n;
  int s;
  fn_829E7640(&o->h);
  if (fn_82A28568(*(int *)(lbl_832179FC + 0x8f4cc), 0, 0x28) != 0) {
    obj = fn_829E8FA8();
  } else {
    obj = 0;
  }
  o->h = obj;
  if (obj == 0) {
    return 0x8007000e;
  } else {
    hr = fn_829E97C8(obj, arg, 1);
    if (hr < 0) {
      fn_829E7640(&o->h);
      o->w = 0;
      o->hgt = 0;
      o->ok = 0;
    } else if (fn_829E9078(o->h, &n) >= 0) {
      s = (int)sqrt((float)n);
      o->w = s;
      if (s > 0) {
        o->hgt = n / s;
        if (o->w == o->hgt) {
          fn_829E8B70(o->sub14);
          fn_829E8C48(o->sub14, o->w, o->hgt, 1, 4, 2, 0);
          o->ok = 1;
          fn_829E7830(o->sub48, o->hgt * o->w);
        }
      }
    }
  }
  return hr;
}
