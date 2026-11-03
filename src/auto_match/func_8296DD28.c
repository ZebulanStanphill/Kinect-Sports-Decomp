typedef struct Obj_8296DD28 Obj_8296DD28;
typedef struct { void *f0, *f4, *f8; int (*fc)(Obj_8296DD28 *); } VT_8296DD28;
struct Obj_8296DD28 {
  VT_8296DD28 *vt;
  char pad4[0x74 - 4];
  int w74, w78, w7c, w80, w84, w88, w8c, w90, w94, w98, w9c, wa0, wa4, wa8, wac, wb0, wb4, wb8;
  char padbc[4];
  int wc0, wc4, wc8, wcc, wd0, wd4, wd8, wdc;
};
extern int fn_82964A30();
extern void *memset(void *, int, unsigned);
extern void fn_8265C990(int, int);

int fn_8296DD28(Obj_8296DD28 *o, Obj_8296DD28 *s, int a, int b)
{
  int r = fn_82964A30();
  if (r >= 0) {
    o->wc0 = s->wc0;
    o->wc4 = s->wc4;
    o->wc8 = a;
    o->wcc = b;
    o->wd4 = 0;
    o->wd8 = 0;
    o->wdc = 0;
    o->w74 = s->w74;
    o->w78 = s->w78;
    o->w7c = s->w7c;
    o->w80 = s->w80;
    o->w84 = s->w84;
    o->w88 = s->w88;
    o->w8c = s->w8c;
    o->w90 = s->w90;
    o->w94 = s->w94;
    o->w98 = s->w98;
    o->w9c = s->w9c;
    o->wa0 = s->wa0;
    o->wa4 = s->wa4;
    o->wa8 = s->wa8;
    o->wac = s->wac;
    o->wb0 = s->wb0;
    o->wb4 = s->wb4;
    o->wb8 = s->wb8;
    memset((char *)o + 0x28, 0, 0x4c);
    r = o->vt->fc(o);
    if (r >= 0) {
      fn_8265C990(o->wd0, 0x24810000);
      o->wd0 = 0;
      return 0;
    }
  }
  return r;
}
