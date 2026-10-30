typedef struct Obj_82FA70D8 Obj_82FA70D8;
typedef struct Info_82FA70D8 { char pad[0x20]; int f20; int pad24; unsigned f28; } Info_82FA70D8;
struct Vt_82FA70D8 { void *s0[2]; int (*f8)(Obj_82FA70D8 *, int); void *sc[5]; unsigned (*f20)(Obj_82FA70D8 *); };
struct Obj_82FA70D8 { struct Vt_82FA70D8 *vt; char pad[0x34]; Info_82FA70D8 *info; Obj_82FA70D8 *next; };
extern void fn_82FF4BB8(int, int);
extern Obj_82FA70D8 *lbl_83264234;
extern int lbl_83264304;
void fn_82FA70D8(int param_1, unsigned param_2, unsigned param_3, unsigned param_4)
{
  Obj_82FA70D8 *o;
  Obj_82FA70D8 *n = lbl_83264234;
  if (n != 0) do {
    o = n;
    n = o->next;
    if (o->vt->f20(o) == param_2 &&
        (param_3 == 0 || o->info->f28 == param_3) &&
        o->vt->f8(o, (param_4 + (param_4 & 0x7fffffff) * 2 & 0xfffffff) << 4) == 1) {
      fn_82FF4BB8(lbl_83264304, o->info->f20);
    }
  } while (n != 0);
}
