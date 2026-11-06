typedef struct { char pad[0x58]; void *obj; int pad2; unsigned int h; } Self_82279438;
extern void fn_82278E58(void *, int);
extern void fn_8251FA58(void *);
extern int *fn_8251F720(unsigned int *, int);
extern void fn_82837D98(int, int, int *);

void fn_82279438(Self_82279438 *self, unsigned int *src)
{
  int out;
  unsigned int *p = &self->h;
  self->h = *src;
  if (p != 0) {
   if ((*p != 0) > 0u) {
    if (self->obj != 0) {
      fn_8251FA58(self->obj);
      self->obj = 0;
    }
    self->obj = fn_8251F720(p, 0);
    fn_82837D98(((int *)self->obj)[5], 0, &out);
    fn_82278E58(self, out);
   }
  }
}
