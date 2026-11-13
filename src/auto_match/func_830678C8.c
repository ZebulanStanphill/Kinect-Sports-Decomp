typedef struct {
  char pad0[8];
  const char *tail;
  char pad0c[4];
  int depth;
  char pad14[0xc];
  int level;
} Obj_830678C8;
extern void fn_830676A8(Obj_830678C8 *self, const char *fmt, ...);

void fn_830678C8(Obj_830678C8 *self)
{
  while (self->level < self->depth) {
    fn_830676A8(self, ".");
    self->level++;
  }
  if (self->tail != 0) {
    fn_830676A8(self, self->tail);
  }
}
