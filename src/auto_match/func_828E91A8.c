extern void fn_828B5580(void *dst, void *src);
extern void fn_828B55B0(void *p);
extern void fn_828E4A20(void *p);
extern void fn_828E6B10(void *out, void *mgr, void *key);
extern void *fn_828E8EF8(void);
extern void fn_828E8448(void *out, void *mgr, int a, int b);

typedef struct {
  char b[12];
} Str;

typedef struct {
  int id;
  Str name;
} Key;

typedef struct {
  int a;
  int *inner;
  char pad[0x30];
  Str name;
} Obj;

void fn_828E91A8(Obj *o)
{
  char res[4];
  struct { int first; int second; } pair;
  Key key;
  void *mgr;

  key.id = o->inner[10];
  fn_828B5580(&key.name, &o->name);
  mgr = fn_828E8EF8();
  fn_828E6B10(&pair, mgr, &key);
  fn_828E8448(res, mgr, pair.first, pair.second);
  fn_828B55B0(&key.name);
  fn_828B55B0(&o->name);
  fn_828E4A20(o);
}
