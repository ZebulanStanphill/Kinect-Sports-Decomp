struct Iface_830071F8;
typedef struct IfaceVt_830071F8 {
  void *f0[2];
  void (*f8)(struct Iface_830071F8 *);
} IfaceVt_830071F8;
typedef struct Iface_830071F8 { IfaceVt_830071F8 *vt; } Iface_830071F8;
typedef struct Val_830071F8 {
  Iface_830071F8 *obj;
  int pad4;
  unsigned char flags;
} Val_830071F8;
typedef struct Ent_830071F8 {
  unsigned int id;
  Val_830071F8 val;
} Ent_830071F8;
typedef struct Map_830071F8 {
  Ent_830071F8 *begin;
  Ent_830071F8 *end;
} Map_830071F8;
typedef struct Cont_830071F8 {
  char pad[0x24];
  Map_830071F8 map;
} Cont_830071F8;
struct Obj_830071F8;
typedef struct ObjVt_830071F8 {
  char pad[0xdc];
  void (*fdc)(struct Obj_830071F8 *);
} ObjVt_830071F8;
typedef struct Obj_830071F8 {
  ObjVt_830071F8 *vt;
  char pad[0x1c];
  Cont_830071F8 *cont;
} Obj_830071F8;
extern void fn_8302AE48(Iface_830071F8 *);
extern void fn_82FF7D48(void *, unsigned int);

static __inline int Found(Map_830071F8 *m, Ent_830071F8 *p) { return p != m->end; }
static __inline Val_830071F8 *Get(Map_830071F8 *m, Ent_830071F8 *p) { return Found(m, p) ? &p->val : 0; }

unsigned int fn_830071F8(Obj_830071F8 *o, unsigned int id)
{
  unsigned int ret = 1;
  Ent_830071F8 *e;
  Val_830071F8 *v;
  if (o->cont != 0) {
    for (e = o->cont->map.begin; e != o->cont->map.end && e->id != id; e++) {
    }
    v = Get(&o->cont->map, e);
    if (v == 0) {
      ret = 0xf;
    } else {
      if ((v->flags & 0x80) == 0) {
        fn_8302AE48(v->obj);
        v->obj->vt->f8(v->obj);
      }
      fn_82FF7D48(&o->cont->map, id);
    }
    o->vt->fdc(o);
  }
  return ret;
}
