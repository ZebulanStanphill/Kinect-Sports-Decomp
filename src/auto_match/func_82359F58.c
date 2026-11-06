typedef struct G_82359F58 { char pad[4]; unsigned char b; } G_82359F58;
typedef struct M_82359F58 { char pad[0x40]; unsigned x; } M_82359F58;
typedef struct C_82359F58 { char pad[0xa0]; int m; } C_82359F58;
typedef struct A_82359F58 { char pad[4]; C_82359F58 *c; } A_82359F58;
typedef struct T_82359F58 { char pad[0xd8]; unsigned char f; } T_82359F58;
extern G_82359F58 *lbl_832975B0;
extern G_82359F58 *fn_82250A18(void);
extern void fn_82526358(T_82359F58 *, int, int);

void fn_82359F58(A_82359F58 *param_1, T_82359F58 *param_2)
{
  if (param_2 != 0) {
    G_82359F58 *g = lbl_832975B0;
    int m;
    if (lbl_832975B0 == 0) {
      g = fn_82250A18();
    }
    if (g->b != 0) {
      if (param_2->f != 0) return;
      fn_82526358(param_2, 0x8001, 1);
    } else {
      m = param_1->c->m;
      if (m != 0 && ((M_82359F58 *)m)->x == 1) {
        if (param_2->f != 0) return;
        fn_82526358(param_2, 0x8001, 4);
      } else {
        if (param_2->f != 0) return;
        fn_82526358(param_2, 0x8001, 2);
      }
    }
  }
}
