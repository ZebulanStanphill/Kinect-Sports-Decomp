typedef struct Itf_8248C270 Itf_8248C270;
struct Itf_8248C270 { struct { int pad[2]; int (*f2)(Itf_8248C270 *); } *vt; };
typedef struct Sp_8248C270 { Itf_8248C270 *px; int *rep; } Sp_8248C270;
typedef struct Ent_8248C270 { char pad[0x10]; Sp_8248C270 wp; unsigned key; int flag; } Ent_8248C270;
typedef struct Obj_8248C270 { char pad[0x30]; Ent_8248C270 *begin; Ent_8248C270 *end; } Obj_8248C270;
extern void fn_822315A0(int *);
extern void fn_82365BD8(Sp_8248C270 *, Sp_8248C270 *);
int fn_8248C270(Obj_8248C270 *o, unsigned key)
{
  Ent_8248C270 *e = o->begin;
  while (e != o->end) {
    if (e->key == key) {
    Sp_8248C270 t;
    unsigned char ok;
    int r;
    fn_82365BD8(&t, &e->wp);
    ok = t.px != 0;
    if (t.rep != 0) fn_822315A0(t.rep);
    if (ok) {
      fn_82365BD8(&t, &e->wp);
      r = t.px->vt->f2(t.px);
      if (t.rep != 0) fn_822315A0(t.rep);
      if (r != 0) e->flag = 1;
    }
    return 1;
    }
    e++;
  }
  return 0;
}
