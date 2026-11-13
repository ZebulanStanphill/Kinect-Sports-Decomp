extern void fn_82811500(void *, int);
extern void *memset(void *, int, unsigned int);

typedef struct E_82850DC0 { int pad[2]; int v; } E_82850DC0;
typedef struct B_82850DC0 { int pad[2]; unsigned int n; E_82850DC0 **elems; } B_82850DC0;
typedef struct A_82850DC0 { unsigned int n; B_82850DC0 *b; int pad[3]; } A_82850DC0;
typedef struct Obj_82850DC0 {
  char pad[0x2c]; unsigned int *sz; char pad2[0x178 - 0x30]; unsigned int n; A_82850DC0 *a;
} Obj_82850DC0;

void fn_82850DC0(Obj_82850DC0 *o, void **ctx, int idx)
{
  unsigned int i, j, k;
  if (o->n != 0) {
    for (i = 0; i < o->n; i++) {
      for (j = 0; j < o->a[i].n; j++) {
        for (k = 0; k < o->a[i].b[j].n; k++) {
          fn_82811500(ctx[idx + 2], o->a[i].b[j].elems[k]->v);
        }
      }
    }
    i = 0;
    if (o->n != 0) {
      int off = 0;
      do {
        i++;
        *(int *)((char *)ctx[idx + 0x10] + off) = -1;
        off += 4;
      } while (i < o->n);
    }
    if (o->sz != 0 && *o->sz != 0) {
      memset(ctx[idx + 4], 0, *o->sz);
    }
  }
}
