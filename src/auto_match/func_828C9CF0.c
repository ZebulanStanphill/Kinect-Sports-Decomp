typedef struct {
  char pad0[0x10];
  char b[1];
} A_828C9CF0;

typedef struct {
  int f0;
  int f4;
  A_828C9CF0 a;
  char pad19[0x28 - 0x19];
  unsigned long long f28;
  int f30;
} Obj_828C9CF0;

extern void fn_828C92E8(void *, void *, void *);
extern void fn_828C9BD0(void *, void *);
extern void fn_828C9C30(void *, void *);

Obj_828C9CF0 *fn_828C9CF0(Obj_828C9CF0 *dst, Obj_828C9CF0 *src)
{
  char tmp[1];
  A_828C9CF0 *da = &dst->a;
  A_828C9CF0 *sa = &src->a;

  dst->f0 = src->f0;
  fn_828C92E8(da, tmp, tmp);
  fn_828C9C30(da, sa);
  fn_828C9BD0(da->b, sa->b);
  dst->f28 = src->f28;
  dst->f30 = src->f30;
  return dst;
}
