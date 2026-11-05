typedef struct Out_8282A170 { char pad[0xc]; unsigned mc; } Out_8282A170;
typedef struct Tab_8282A170 { char *base; } Tab_8282A170;
typedef struct X_8282A170 { char pad[0x388]; Tab_8282A170 *m388; char pad2[0x4c]; unsigned m3d8; } X_8282A170;
typedef struct Host_8282A170 { char pad[8]; X_8282A170 *m8; char pad2[0x28]; unsigned char m34; } Host_8282A170;
typedef struct Node_8282A170 { int m0; char pad[0x14]; unsigned m18; } Node_8282A170;
typedef struct Ctx_8282A170 { Host_8282A170 *m0; int m4; int m8; unsigned mc; } Ctx_8282A170;
typedef struct Ent_8282A170 { char pad[0x10]; int m10; } Ent_8282A170;
extern unsigned char fn_82824308(Node_8282A170 *);
extern unsigned char fn_82824338(Node_8282A170 *);
extern unsigned char fn_828243A0(Node_8282A170 *);
extern unsigned char fn_828243B8(Node_8282A170 *);
extern unsigned char fn_828243D0(Node_8282A170 *);
extern void fn_828299A8(unsigned *, X_8282A170 *, Out_8282A170 **);
extern unsigned char fn_8282A0E8(X_8282A170 *, unsigned *);

int fn_8282A170(void *unused, Node_8282A170 *n, char *base, Ctx_8282A170 *ctx)
{
  X_8282A170 *x = ctx->m0->m8;
  Ent_8282A170 *rec = (Ent_8282A170 *)(x->m388->base + ctx->m4 * 0x20);
  unsigned char c;
  unsigned i;
  struct { Out_8282A170 *out; int pad; unsigned t; } l;
  unsigned *p;
  c = fn_828243A0(n);
  if ((c != 0 && n->m18 <= 0) || fn_828243B8(n) != 0) return 0;
    if (fn_828243D0(n) != 0) {
      while (fn_82824308(n) == 0 && fn_82824338(n) == 0) {
        n = (Node_8282A170 *)(n->m0 * 0x20 + x->m388->base);
      }
    }
  if (fn_82824338(n) != 0) {
      for (i = 0; i < ctx->mc; i++) {
        p = (unsigned *)(rec->m10 * i + base);
        if (fn_8282A0E8(x, p) != 0) {
          l.t = *p;
          if (l.t != 0) {
            fn_828299A8(&l.t, x, &l.out);
            if (l.out->mc == x->m3d8) {
              ctx->m0->m34 = 1;
              break;
            }
          }
        }
      }
    return 0;
  }
  return 1;
}
