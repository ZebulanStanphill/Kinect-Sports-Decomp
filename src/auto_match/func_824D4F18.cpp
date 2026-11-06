extern "C" void fn_824CE358(void *self);
extern "C" unsigned char fn_8288B760(void *self);
extern "C" void fn_828AB870(char *dst, int v);

class Obj_824D4F18 {
public:
  virtual void v0();
  virtual void v1();
  virtual char *get();
  char pad4[0x80 - 4];
  char *cfg;
};

extern "C" void fn_824D4F18(Obj_824D4F18 *self)
{
  char *cfg;

  fn_824CE358(self);
  cfg = self->cfg;
  if (fn_8288B760(self) != 0) {
    fn_828AB870(self->get() + 0x924, *(int *)(cfg + 0x1c));
    fn_828AB870(self->get() + 0x978, *(int *)(cfg + 0x18));
  }
}
