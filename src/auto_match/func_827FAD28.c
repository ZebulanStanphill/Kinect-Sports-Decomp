typedef struct Obj Obj;
typedef struct Vt { void *f0, *f4, *f8; void (*fc)(Obj *, void *, int); } Vt;
struct Obj { Vt *vt; };
extern Obj *fn_8262F6A8(void);
extern int fn_82811400(void *buf, int n);

void fn_827FAD28(void *param_1)
{
  char buf[32];
  Obj *o = fn_8262F6A8();
  o->vt->fc(o, param_1, fn_82811400(buf, 4));
}
