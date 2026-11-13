typedef struct VObj_8233E8A0 { int *vt; } VObj_8233E8A0;
typedef struct Obj_8233E8A0 {
  char pad[0x48];
  VObj_8233E8A0 *o48;
  char pad1[0x68 - 0x4c];
  VObj_8233E8A0 *o68;
  int pad2;
  VObj_8233E8A0 *o70;
} Obj_8233E8A0;
typedef struct Pair_8233E8A0 { int first; unsigned second; } Pair_8233E8A0;
typedef void (*Set_8233E8A0)(VObj_8233E8A0 *, int, void *);
extern void fn_822315A0(unsigned);
extern void fn_822D79D8(Pair_8233E8A0 *, void *);
extern void *fn_822D7FE0(void *);
extern void *fn_8265C9E0(int);
extern void fn_828E2B28(Obj_8233E8A0 *, Pair_8233E8A0 *);
extern void fn_828E9D40(int);
extern void fn_828E9D90(int);

void fn_8233E8A0(Obj_8233E8A0 *self, float a, int b)
{
  void *mem = fn_8265C9E0(0x28);
  void *obj;
  Pair_8233E8A0 pr;
  if (mem != 0) {
    obj = fn_822D7FE0(mem);
  } else {
    obj = 0;
  }
  pr.first = 0;
  pr.second = 0;
  fn_822D79D8(&pr, obj);
  (*(Set_8233E8A0 *)(*(int *)self->o68 + 0x10))(self->o68, pr.first, &a);
  (*(Set_8233E8A0 *)(*(int *)self->o70 + 0x10))(self->o70, pr.first, &b);
  if (self->o48 != 0) {
    float fa;
    int fb;
    int h;
    fn_828E9D90(pr.first);
    fn_828E9D40(pr.first);
    h = pr.first;
    (*(Set_8233E8A0 *)(*(int *)self->o68 + 0x14))(self->o68, h, &fa);
    (*(Set_8233E8A0 *)(*(int *)self->o70 + 0x14))(self->o70, h, &fb);
    if (self->o48 != 0) {
      (*(void (**)(VObj_8233E8A0 *, float, int))(*(int *)self->o48 + 4))(self->o48, fa, fb);
    }
  }
  fn_828E2B28(self, &pr);
  if (pr.second != 0) {
    fn_822315A0(pr.second);
  }
}
