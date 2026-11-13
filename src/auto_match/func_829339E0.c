typedef struct D_829339E0 { unsigned __int64 a, b, c, d; } D_829339E0;
typedef struct Obj_829339E0 { void *vt; int f4, f8, fc; D_829339E0 data; int f30, f34; } Obj_829339E0;
extern void **fn_82934160();
extern Obj_829339E0 *fn_829301D0(void *, int, int);
extern unsigned int lbl_8202F1B8;

static Obj_829339E0 *init_(Obj_829339E0 *p)
{
  p->vt = &lbl_8202F1B8;
  p->f4 = 0x10;
  p->f8 = 0;
  p->fc = 0;
  p->f30 = 0;
  p->f34 = 0;
  return p;
}

void fn_829339E0(Obj_829339E0 *param_1)
{
  Obj_829339E0 *mem = fn_829301D0(*fn_82934160(), 0x38, 0x10);
  Obj_829339E0 *p = mem;
  if (mem != 0) {
    init_(mem);
  } else {
    p = 0;
  }
  if (p != 0) {
    D_829339E0 *dp = &p->data;
    D_829339E0 *sp = &param_1->data;
    *dp = *sp;
    p->f30 = param_1->f30;
    p->f34 = param_1->f34;
  }
}
