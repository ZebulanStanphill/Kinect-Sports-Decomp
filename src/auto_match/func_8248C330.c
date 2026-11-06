extern void fn_822315A0(void *);
extern void fn_82365BD8(void *, void *);
extern void fn_8248B7E0(void *);

typedef struct Pair_8248C330 { int a; void *b; } Pair_8248C330;
typedef struct Sink_8248C330 Sink_8248C330;
typedef struct SinkVt_8248C330 { void (*put)(Sink_8248C330 *, Pair_8248C330 *); } SinkVt_8248C330;
struct Sink_8248C330 { SinkVt_8248C330 *vt; };
typedef struct Ent_8248C330 { int pad[4]; char val[8]; unsigned int key; int pad2; } Ent_8248C330;
typedef struct Tab_8248C330 { int pad[12]; Ent_8248C330 *begin; Ent_8248C330 *end; } Tab_8248C330;

int fn_8248C330(Tab_8248C330 *t, Sink_8248C330 *sink, unsigned int key)
{
  Ent_8248C330 *e = t->begin;
  Pair_8248C330 st;
  unsigned char nz;
  while (e != t->end) {
    if (e->key == key) {
      fn_82365BD8(&st, e->val);
      nz = st.a != 0;
      if (st.b != 0) {
        fn_822315A0(st.b);
      }
      if (nz) {
        fn_82365BD8(&st, e->val);
        sink->vt->put(sink, &st);
      }
      fn_8248B7E0(e);
      return 1;
    }
    e++;
  }
  return 0;
}
