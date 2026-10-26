extern __int64 fn_82A345D8(void *);

typedef struct { int d[4]; } A;
typedef struct { char d[0x28]; __int64 v; char rest[8]; } B;
typedef struct O O;
typedef struct { void *f[8]; void (*get)(int, A *, B *, int, int); } VT;
struct O { VT *vt; };
typedef struct { int pad[3]; unsigned int flags; } Q;

__int64 fn_82A34678(O *o, Q *q, int h)
{
  A a;
  B b;
  if ((q->flags & 0x3fffc0) == 0) {
    o->vt->get(h, &a, &b, 0x38, 0x22);
    return b.v - 0x10;
  }
  return fn_82A345D8(q);
}
