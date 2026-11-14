typedef struct Info_82A49350 { char pad[0x10]; unsigned int f10; } Info_82A49350;
typedef struct Self_82A49350 {
  char pad0[0x1c0];
  unsigned int count;
  char pad1[0x1d4 - 0x1c4];
  int active;
  int handle;
  int state;
  char pad2[0x20c - 0x1e0];
  Info_82A49350 **info;
  char pad3[0x214 - 0x210];
  unsigned int f214;
} Self_82A49350;
extern int fn_82A47440(Self_82A49350 *self);
extern void fn_82A481D0(Self_82A49350 *self);
extern unsigned int fn_82A47900(Self_82A49350 *self);
extern void fn_82A48100(Self_82A49350 *self);
extern void fn_82A455C8(int handle, unsigned int index, int flags);
extern void fn_82A48820(Self_82A49350 *self);
extern void fn_82A48728(Self_82A49350 *self);

void fn_82A49350(Self_82A49350 *self)
{
  int prev;
  int cur;
  unsigned int i;
  Info_82A49350 *info;

  prev = self->state;
  cur = fn_82A47440(self);
  self->state = cur;
  if (prev == 0) {
    fn_82A48728(self);
  } else if (cur == 0) {
    fn_82A481D0(self);
    if (self->active != 0) {
      for (i = 0; i < self->count; i++) {
        fn_82A455C8(self->handle, i, 0x80);
      }
      self->active = 0;
    }
    fn_82A48820(self);
    fn_82A48728(self);
  } else {
    if (self->f214 != 0) {
      fn_82A481D0(self);
      if (self->info != 0) {
        info = *self->info;
      } else {
        info = 0;
      }
      if (info->f10 != 0 && fn_82A47900(self) == 0 && self->active == 0) {
        fn_82A48100(self);
        self->active = 1;
      }
    }
  }
}
