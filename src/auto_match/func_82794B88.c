typedef struct O_82794B88 { char pad[8]; int m8; } O_82794B88;
extern void *fn_8267BF50(void);
extern void *fn_8267B890(void *, int, int);
extern void *fn_82704C38(void *, void *, int);
extern void fn_8267C498(void *);

void *fn_82794B88(O_82794B88 *self)
{
  if (self->m8 == 0) {
    void *h = fn_8267BF50();
    void *mem = fn_8267B890(h, 0x50, 0);
    void *q = mem != 0 ? fn_82704C38(mem, h, 0) : 0;
    if ((void *)self->m8 != 0) fn_8267C498((void *)self->m8);
    self->m8 = (int)q;
  }
  return (void *)self->m8;
}
