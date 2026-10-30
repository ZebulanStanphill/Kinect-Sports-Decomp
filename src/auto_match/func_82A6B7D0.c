extern void fn_82C2B590(void *p);

typedef struct {
  int n;
  char pad1[0x64];
  void ***rows;
} Sub_82A6B7D0;
typedef struct {
  char pad0[0xf4];
  Sub_82A6B7D0 s;
} Obj_82A6B7D0;

void fn_82A6B7D0(Obj_82A6B7D0 *o)
{
  Sub_82A6B7D0 *q = &o->s;
  int i;
  int j;
  if (o->s.rows != 0) {
    i = 0;
    if (q->n > 0) {
      do {
        if (o->s.rows[i] != 0) {
          j = 0;
          if (o->s.n > 0) {
            do {
              if (o->s.rows[i][j] != 0) {
                fn_82C2B590(o->s.rows[i][j]);
                o->s.rows[i][j] = 0;
              }
              j = j + 1;
            } while (j < o->s.n);
          }
          if (o->s.rows[i] != 0) {
            fn_82C2B590(o->s.rows[i]);
            o->s.rows[i] = 0;
          }
        }
        i = i + 1;
      } while (i < o->s.n);
    }
    if (o->s.rows != 0) {
      fn_82C2B590(o->s.rows);
      o->s.rows = 0;
    }
  }
}
