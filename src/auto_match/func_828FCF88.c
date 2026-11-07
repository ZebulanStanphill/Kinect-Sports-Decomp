typedef struct PtrArray_828FCF88 {
  void *e[7];
} PtrArray_828FCF88;

typedef struct Obj_828FCF88 {
  PtrArray_828FCF88 a[5];
} Obj_828FCF88;

extern void fn_828FCD88(void *p);
extern void fn_8265C990(void *p, unsigned int flags);

static __forceinline void destroyArray_828FCF88(PtrArray_828FCF88 *arr)
{
  int i;
  for (i = 0; i < 7; i++) {
    void *e = arr->e[i];
    if (e != 0) {
      fn_828FCD88(e);
      fn_8265C990(e, 0x24810000);
    }
  }
}

void fn_828FCF88(Obj_828FCF88 *self)
{
  destroyArray_828FCF88(&self->a[4]);
  destroyArray_828FCF88(&self->a[3]);
  destroyArray_828FCF88(&self->a[2]);
  destroyArray_828FCF88(&self->a[1]);
  destroyArray_828FCF88(&self->a[0]);
}
