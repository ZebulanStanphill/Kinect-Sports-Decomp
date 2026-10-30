typedef struct Obj_830337B0 {
  void **vt;
} Obj_830337B0;

typedef struct Dst_830337B0 {
  char pad0[0x2c];
  unsigned int size;     /* 0x2c */
  unsigned int arg;      /* 0x30 */
  char pad34[0x6c];
  Obj_830337B0 *obj;     /* 0xa0 */
} Dst_830337B0;

typedef struct Src_830337B0 {
  unsigned int size;
  unsigned int arg;
} Src_830337B0;

extern void *lbl_832642F8;
extern char *lbl_832642E0;
extern void fn_8301B338(void *heap, unsigned int size);
extern Obj_830337B0 *fn_82FAB9C0(char *p, unsigned int arg);

void fn_830337B0(Dst_830337B0 *d, Src_830337B0 *s)
{
  d->size = 0;
  d->arg = 0;
  if (s->size != 0) {
    fn_8301B338(lbl_832642F8, s->size);
  }
  d->size = s->size;
  d->arg = s->arg;
  if (d->obj != 0) {
    (*(void (*)(Obj_830337B0 *))d->obj->vt[2])(d->obj);
    d->obj = 0;
  }
  d->obj = fn_82FAB9C0(lbl_832642E0 + 4, s->arg);
}
