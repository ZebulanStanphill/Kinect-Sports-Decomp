typedef unsigned int uint;
extern void fn_8265C990(void *, int);
extern void fn_8291AF48(void *, int);

typedef struct { char pad[8]; unsigned short n8; unsigned short nA; } Info;
typedef struct {
  char pad0[0x18];
  Info *info;
  char pad1[0x38 - 0x1c];
  void **a38;
  void **a3c;
  void *x40;
} Obj;

void fn_82917D90(Obj *p)
{
  uint i;
  void *e;

  if (p->a38 != 0) {
    for (i = 0; i < p->info->nA; i++) {
      e = p->a38[i];
      if (e != 0)
        fn_8291AF48(e, 1);
    }
    fn_8265C990(p->a38, 0x24810000);
  }
  if (p->a3c != 0) {
    for (i = 0; i < p->info->n8; i++) {
      e = p->a3c[i];
      if (e != 0)
        fn_8291AF48(e, 1);
    }
    fn_8265C990(p->a3c, 0x24810000);
  }
  fn_8265C990(p->x40, 0x24810000);
}
