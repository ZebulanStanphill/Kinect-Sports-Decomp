typedef unsigned int uint;
typedef struct { char p0[0x38]; int chain; uint f3c; char p40[0x2f]; unsigned char f6f; } Rec;
typedef struct { uint f0; uint n; int *idx; char pc[4]; int *f10; char p14[0x28]; int f3c; } Ent;
typedef struct { char p0[0x14]; Rec **recs; } Dummy;
extern void fn_82975BB8(void *, int, int, char *, unsigned char);
int fn_82996B40(char *param_1)
{
  uint u;
  Ent **pp;
  uint cnt = *(uint *)(param_1 + 0x228);
  u = *(uint *)(param_1 + 0x4c);
  if (u < cnt) {
    pp = (Ent **)(*(char **)(param_1 + 0x234) + u * 4);
    do {
      Ent *e = *pp;
      if (e != 0 && e->f0 != 0) {
        char *tab = *(char **)(param_1 + 0x14);
        if (*(uint *)(*(int *)(*(int *)e->f10 * 4 + (int)tab) + 4) != *(uint *)(param_1 + 0x84) || (e->f0 & 0xfff00000) != 0x10000000) {
          uint k = 0;
          if (e->n != 0) {
            int *ip = e->idx;
            do {
              Rec *r = *(Rec **)(*ip * 4 + (int)tab);
              uint first = r->f3c;
              for (; r->chain != -1; r = *(Rec **)(r->chain * 4 + (int)tab)) {
              }
              if (r->f6f == 3 && ((r->f3c | first) & 0x200) == 0) {
                fn_82975BB8(param_1, e->f3c, 0x1263, "texcoord inputs used directly (that is, other than sampling from textures) in shader body in ps_1_%i are always clamped from 0 to 1", *(unsigned char *)(param_1 + 0xcb));
                return 0;
              }
              k++;
              ip++;
            } while (k < e->n);
          }
        }
      }
      u++;
      pp++;
    } while (u < *(uint *)(param_1 + 0x228));
  }
  return 0;
}
