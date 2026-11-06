typedef struct R_82FB4BA8 { char pad[0xc]; unsigned v; } R_82FB4BA8;
typedef struct V_82FB4BA8 { char pad[0x20]; R_82FB4BA8 *(*get)(struct W_82FB4BA8 *); } V_82FB4BA8;
typedef struct W_82FB4BA8 { V_82FB4BA8 *vt; } W_82FB4BA8;
typedef struct Y_82FB4BA8 { char pad[0x1c]; W_82FB4BA8 *w; } Y_82FB4BA8;
typedef struct Z_82FB4BA8 { char pad[4]; Y_82FB4BA8 *y; } Z_82FB4BA8;
typedef struct A_82FB4BA8 { char pad[0x58]; Z_82FB4BA8 *z; } A_82FB4BA8;

int fn_82FB4BA8(A_82FB4BA8 *param_1, unsigned param_2)
{
  W_82FB4BA8 *w = param_1->z->y->w;
  R_82FB4BA8 *r = w->vt->get(w);
  if (r != 0) {
    if (r->v == param_2) goto zero;
  } else if (param_2 == 0) goto zero;
  return 1;
zero:
  return 0;
}
