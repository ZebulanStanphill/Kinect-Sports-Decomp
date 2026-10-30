typedef struct Vt_825EB540 { void *pad[5]; int (*count)(void *); } Vt_825EB540;
typedef struct Iface_825EB540 { Vt_825EB540 *vt; } Iface_825EB540;
typedef struct Sub_825EB540 { char pad[0x24]; int *items; int count; } Sub_825EB540;
typedef struct Rec_825EB540 {
  Iface_825EB540 *iface_dummy;
} Rec_825EB540;
typedef struct Obj_825EB540 {
  char pad[0x78]; unsigned f78; unsigned f7c; char pad2[0x18]; Sub_825EB540 sub; 
} Obj_825EB540;
typedef struct Ctx_825EB540 { char pad[8]; int *arr; int pad2; int idx; } Ctx_825EB540;
extern void fn_825EB6C0(Ctx_825EB540 *, void *, int);
extern void fn_825EB968(Ctx_825EB540 *, int);

void fn_825EB540(Ctx_825EB540 *c)
{
  int n = c->arr[c->idx + 1];
  if (n > 0) {
    int off = 0;
    int cnt = n;
    do {
      char *tbl = (char *)c->arr[c->idx + 3];
      int *p = *(int **)(tbl + off);
      if ((p[c->idx + 0x1e] & 0x4000) != 0 || (p[c->idx + 0x1e] & 0x20000) != 0) {
        if ((p[c->idx + 0x1e] & 0x400) == 0) {
          void *o = (void *)p[0];
          Iface_825EB540 *q = *(Iface_825EB540 **)((char *)o + 0x1a8);
          if (q->vt->count(q) != 0) {
            int i = 0;
            if (q->vt->count(q) > 0) {
              do {
                fn_825EB6C0(c, o, i);
                i++;
              } while (i < q->vt->count(q));
            }
            *(unsigned *)(*(char **)(tbl + off) + 0x78) |= 0x10000;
            *(unsigned *)(*(char **)(tbl + off) + 0x7c) |= 0x10000;
          }
          {
            Obj_825EB540 *ob = **(Obj_825EB540 ***)(tbl + off);
            int j = 0;
            Sub_825EB540 *s = &ob->sub;
            if (0 < s->count) {
              int k = 0;
              do {
                fn_825EB968(c, *(int *)((char *)s->items + k));
                j++;
                k += 4;
              } while (j < s->count);
            }
          }
        }
      }
      cnt--;
      off += 0x18;
    } while (cnt != 0);
  }
}
