extern void fn_827FA130(void *);
extern void fn_827F9DF0(void *, int);
extern float fn_827F9F98(void *);
extern float fn_827F9F58(void *);
extern void fn_827FED00(void *, float, float);

typedef struct {
  char pad[0x24];
  char part[0x100];
  void *ptr;
} Obj_827F6370;

void fn_827F6370(Obj_827F6370 *self, float value)
{
  fn_827FA130(self->part);
  fn_827F9DF0(self->part, value >= 0.0f ? 0 : 1);
  if (self->ptr) {
    fn_827FED00(&self->ptr, fn_827F9F58(self->part), fn_827F9F98(self->part));
  }
}
