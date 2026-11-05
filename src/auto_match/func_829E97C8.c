typedef struct VT_829E97C8 { int pad0; void (*f4)(struct Obj_829E97C8 *); } VT_829E97C8;
typedef struct Obj_829E97C8 {
  VT_829E97C8 *vt; int m4, m8, mc; unsigned m10, m14; unsigned __int64 m18;
} Obj_829E97C8;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern char lbl_83218B78[];
extern int fn_829EC280(void *, unsigned *, unsigned __int64 *, int *);
extern int fn_829E9528(Obj_829E97C8 *, void *, int);
extern int fn_829E9668(Obj_829E97C8 *, unsigned, unsigned __int64);

int fn_829E97C8(Obj_829E97C8 *self, void *a, int c)
{
  int r;
  unsigned __int64 *p18;
  unsigned *p10;
  if (a == 0) return 0x80070057;
  self->vt->f4(self);
  RtlEnterCriticalSection(lbl_83218B78);
  p18 = &self->m18;
  p10 = &self->m10;
  r = fn_829EC280(a, p10, p18, &self->mc);
  if (r < 0) r = fn_829E9528(self, a, c);
  RtlLeaveCriticalSection(lbl_83218B78);
  if (r >= 0 && *p18 > 0) r = fn_829E9668(self, *p10, *p18);
  return r;
}
