typedef void (*vfn)(void *p, int f);
extern int fn_82230300(void *p, int a, int b);
extern int fn_82359C18(void *p);
extern char lbl_821AF1C8[];
extern char lbl_821AF948[];
extern char lbl_821C7FB8[];

typedef struct { vfn *vtbl; } VObj;

typedef struct {
  void *vtbl;
  int f4;
  char x[4];
} Sub;

typedef struct {
  void *vtbl;
  char pad[0x20 - 4];
  char arr[13][0x30];
  int f290;
  VObj *obj;
  char pad2[0x2e8 - 0x298];
  Sub sub;
} Obj;

void fn_8231A4C8(Obj *p)
{
  VObj *o;
  char *e;
  int n;

  o = p->obj;
  p->vtbl = lbl_821AF948;
  if (o != 0) {
    (*o->vtbl[0])(o, 1);
    p->obj = 0;
  }
  {
    Sub *s = &p->sub;
    fn_82359C18(s->x);
    s->vtbl = lbl_821C7FB8;
  }
  e = p->arr[13];
  n = 12;
  do {
    e -= 0x30;
    fn_82230300(e, 1, 0);
  } while (--n >= 0);
  p->vtbl = lbl_821AF1C8;
}
