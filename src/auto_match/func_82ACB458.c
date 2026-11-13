extern void fn_82ACA7C0(void *, void *);
typedef struct Q_82ACB458 { char pad[0x1c]; unsigned f1c; } Q_82ACB458;
typedef struct Lk_82ACB458 { struct Lk_82ACB458 *a; struct Lk_82ACB458 *next; int b; Q_82ACB458 *q; } Lk_82ACB458;
typedef struct Node_82ACB458 { Lk_82ACB458 *head; } Node_82ACB458;
typedef struct Obj_82ACB458 { char pad[0x18]; unsigned f18; unsigned f1c; } Obj_82ACB458;
static __forceinline int notNull_82ACB458(Lk_82ACB458 *p) { if (p) return 1; return 0; }
void fn_82ACB458(void *ctx, Obj_82ACB458 *o, unsigned char flag)
{
  if ((o->f1c & 1) == 0) {
    unsigned v = o->f18;
    unsigned n;
    while ((n = (v & 0xfffffffe) - 0x28) != 0) {
      Lk_82ACB458 *l;
      fn_82ACA7C0(ctx, (void *)n);
      if (flag != 0) {
        for (l = ((Node_82ACB458 *)n)->head; notNull_82ACB458(l); l = l->next) {
          if (l->q->f1c == (unsigned)o) fn_82ACA7C0(ctx, l->q);
        }
      }
      v = *(unsigned *)((n & 0xfffffffe) + 0x24);
      if (v & 1) break;
    }
  }
}
