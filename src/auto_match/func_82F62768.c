typedef void (*dtor_t)(void *, int);
typedef struct Obj { dtor_t *vt; } Obj;
extern Obj *fn_8223F5A0(void *p);

void fn_82F62768(void **param_1)
{
  Obj *o;
  if (*param_1 != 0) {
    o = fn_8223F5A0(*param_1);
    if (o != 0) (*o->vt[0])(o, 1);
  }
}
