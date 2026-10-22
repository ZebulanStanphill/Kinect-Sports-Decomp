typedef struct Src Src;
typedef struct SrcVtbl {
  void (*get)(Src *self, void *a, int *b);
  void (*read)(Src *self, int b, void *c);
} SrcVtbl;
struct Src { SrcVtbl *vtbl; };

typedef struct Obj { char pad[0x30]; float f30; } Obj;

extern float lbl_821CC160;

void fn_824AD260(Obj *o, Src *s)
{
  int n;
  char a[4];
  char buf[8];
  s->vtbl->get(s, a, &n);
  s->vtbl->read(s, n, buf);
  o->f30 = lbl_821CC160;
}
