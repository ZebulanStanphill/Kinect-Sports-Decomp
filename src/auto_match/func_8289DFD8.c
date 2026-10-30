struct Obj_8289DFD8;
typedef struct VT_8289DFD8 { void *pad[2]; void (*f8)(struct Obj_8289DFD8 *); void (*fc)(struct Obj_8289DFD8 *); } VT_8289DFD8;
typedef struct Sub_8289DFD8 { unsigned char flag; } Sub_8289DFD8;
typedef struct Obj_8289DFD8 { VT_8289DFD8 *vt; Sub_8289DFD8 s; } Obj_8289DFD8;

void fn_8289DFD8(Obj_8289DFD8 *o)
{
  Sub_8289DFD8 *s;
  o->vt->f8(o);
  s = &o->s;
  s->flag = 0;
  o->vt->fc(o);
}
