typedef struct {
  int first;
  void *second;
} Pair;

extern unsigned char fn_8223AAC0(void *);
extern void fn_8224B9E0(void *, Pair *, Pair *);
extern char lbl_821AD588[];

typedef struct {
  void *vt;
  int a;
  int b;
  char sub[1];
} Obj;

Obj *fn_8224B4B8(Obj *param_1, Pair *param_2, Pair *param_3)
{
  Pair p50;
  Pair p48;
  void *s;
  int f;

  param_1->a = 1;
  param_1->vt = lbl_821AD588;
  param_1->b = 1;
  if (param_1->sub != 0) {
    s = param_3->second;
    f = param_3->first;
    p50.first = 0;
    p50.second = 0;
    if (s != 0 && fn_8223AAC0(s)) {
      p50.second = s;
      p50.first = f;
    }
    s = param_2->second;
    f = param_2->first;
    p48.first = 0;
    p48.second = 0;
    if (s != 0 && fn_8223AAC0(s)) {
      p48.second = s;
      p48.first = f;
    }
    fn_8224B9E0(param_1->sub, &p48, &p50);
  }
  return param_1;
}
