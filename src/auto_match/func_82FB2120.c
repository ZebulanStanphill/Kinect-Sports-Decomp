typedef struct Obj_82FB2120 Obj_82FB2120;
typedef struct Pair_82FB2120 { unsigned key; void *val; } Pair_82FB2120;
typedef struct Vec_82FB2120 { unsigned *begin, *end; } Vec_82FB2120;
struct Obj_82FB2120 {
  struct { char pad[0x168]; void (*f168)(Obj_82FB2120 *); } *vt;
  char pad4[0xa8];
  char sub[0x8];
  unsigned cnt;
  Pair_82FB2120 *cur;
  Pair_82FB2120 *last;
  unsigned fc0;
  unsigned fc4;
  unsigned fc8;
  unsigned fcc;
};
extern unsigned char lbl_8326430C[];
extern int fn_82FAF8F0(Obj_82FB2120 *);
extern Vec_82FB2120 *fn_8300C838(void *, unsigned, unsigned);
extern int fn_8300C920(void *, unsigned, unsigned);
extern int fn_82FFF990(void *);

void fn_82FB2120(Obj_82FB2120 *o)
{
  if (lbl_8326430C[0x1c] == 0) {
    fn_82FAF8F0(o);
  } else if (o->cnt != 0 && --o->cnt == 0) {
    void *s = o->sub;
    Vec_82FB2120 *v = fn_8300C838(s, o->fc4, o->fcc);
    if (v != 0) {
      Pair_82FB2120 *it = o->cur;
      if (it != o->last) {
        do {
          unsigned *e = v->end;
          unsigned *p = v->begin;
          unsigned k = it->key;
          while (p != e) { if (*p == k) break; p++; }
          if (p != v->end) {
            fn_82FFF990(it->val);
          }
          it++;
        } while (it != o->last);
      }
    }
    fn_8300C920(s, o->fc4, o->fcc);
    o->vt->f168(o);
  }
}
