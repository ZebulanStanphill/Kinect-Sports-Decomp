typedef struct Key_83061150 { int v; } Key_83061150;
typedef struct Ent_83061150 { Key_83061150 *p; int x; } Ent_83061150;
typedef struct Vec_83061150 { int pad; Ent_83061150 *begin; Ent_83061150 *end; int pad2[3]; } Vec_83061150;
typedef struct Obj_83061150 { char pad[0x18]; int count; char pad2[0x10]; Vec_83061150 *vecs; } Obj_83061150;
extern void fn_83060438(Vec_83061150 *);
extern void fn_830677A0(void *, int, const char *);
extern void fn_830678C8(void *);
extern void fn_830679A8(void *);

int fn_83061150(Obj_83061150 *o, int *errs, void *ctx)
{
  unsigned char bad;
  int i, j, n, run;
  Vec_83061150 *vp;
  Ent_83061150 e;
  int key;
  bad = 0;
  if (errs != 0) {
    *errs = 0;
  }
  if (ctx != 0) {
    fn_830677A0(ctx, o->count, "Verifying closed volume");
  }
  i = 0;
  vp = o->vecs;
  if (0 < o->count) {
    do {
      n = vp->end - vp->begin;
      fn_83060438(vp);
      j = 0;
      if (0 < n) {
        do {
          e = vp->begin[j];
          j++;
          run = 1;
          key = e.p->v;
          if (j < n) {
            do {
              e = vp->begin[j];
              if (e.p->v != key) break;
              run++;
              j++;
            } while (j < n);
            if (run != 2) goto bad_;
          } else {
bad_:
            bad = 1;
            if (errs == 0) {
              return 0;
            }
            *errs = *errs + 1;
          }
        } while (j < n);
      }
      if (ctx != 0) {
        fn_830679A8(ctx);
      }
      i++;
      vp++;
    } while (i < o->count);
  }
  if (errs != 0) {
    *errs = *errs / 2;
  }
  if (ctx != 0) {
    fn_830678C8(ctx);
  }
  return !bad;
}
