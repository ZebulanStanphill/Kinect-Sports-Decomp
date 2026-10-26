typedef struct Obj Obj;
typedef struct Vt { void *f0; char *(*get)(Obj *); } Vt;
struct Obj { Vt *vt; };
typedef struct Sub Sub;
typedef struct SVt { void *f[15]; void (*f3c)(Sub *); } SVt;
struct Sub { SVt *vt; };
extern unsigned char fn_8288B760(void);

void fn_82247000(Obj *p)
{
  Sub *s;
  if (fn_8288B760()) {
    s = (Sub *)(p->vt->get(p) + 0x48);
  } else {
    s = (Sub *)(p->vt->get(p) + 0x9c);
  }
  s->vt->f3c(s);
}
