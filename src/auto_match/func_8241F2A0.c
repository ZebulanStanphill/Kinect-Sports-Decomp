typedef struct { int *data; int pad[3]; int idx; } Arr_8241F2A0;
typedef struct { char pad[0x40]; unsigned int state; } St_8241F2A0;
typedef struct { char pad[0x24]; int f24; char pad2[0x74 - 0x28]; struct Sub_8241F2A0 *sub; } Res_8241F2A0;
typedef struct Blk_8241F2A0 { char pad[0x458]; int vals[0x29]; } Blk_8241F2A0;
typedef struct Sub_8241F2A0 { char pad[0x100]; Blk_8241F2A0 *blk; } Sub_8241F2A0;
typedef struct Out_8241F2A0 { int index; char pad[0xf8 - 4]; int vals[0x29]; } Out_8241F2A0;
typedef struct { int pad[2]; int **tab; char pad2[0xa0 - 0xc]; int st; } Ctx_8241F2A0;
extern Res_8241F2A0 *fn_822ABA88(int a, int b);

int fn_8241F2A0(Ctx_8241F2A0 **pc, Out_8241F2A0 *out)
{
  Ctx_8241F2A0 *c = *pc;
  Res_8241F2A0 *r;
  Arr_8241F2A0 *a;
  Sub_8241F2A0 *sub;
  if (c->st == 0 || ((St_8241F2A0 *)c->st)->state != 1) {
    a = (Arr_8241F2A0 *)(*c->tab)[out->index];
    r = fn_822ABA88(a->data[a->idx], 0);
    if (r->f24 != 0 && (sub = r->sub) != 0) {
      int i = 0;
      do {
        out->vals[i] = sub->blk->vals[i];
        i++;
      } while (i < 0x29);
      return 1;
    }
  }
  return 0;
}
