typedef struct Impl_82850528 {
  char pad0[0x1c];
  unsigned int mode;
} Impl_82850528;

typedef struct Info_82850528 {
  int pad0;
  int x4;
  char pad8[0xc];
  int x14;
} Info_82850528;

typedef struct Ctx_82850528 {
  int pad0;
  Info_82850528 *info;
  char pad8[0x14];
  void *buffer;
} Ctx_82850528;

typedef struct Self_82850528 {
  char pad0[0x90];
  Impl_82850528 *impl;
  unsigned int bufferSize;
} Self_82850528;

extern void *memset(void *, int, unsigned int);
extern void fn_8284FBD0(Impl_82850528 *impl, int v, Self_82850528 *self, Ctx_82850528 *ctx);
extern void fn_8284FA10(Impl_82850528 *impl, int v, Self_82850528 *self, Ctx_82850528 *ctx);
extern void fn_8284F8A0(Impl_82850528 *impl, int v, Self_82850528 *self, Ctx_82850528 *ctx);

void fn_82850528(Self_82850528 *self, Ctx_82850528 *ctx)
{
  int v;
  if (self->impl != 0) {
    switch (self->impl->mode) {
    case 0:
      v = ctx->info->x14;
      fn_8284FBD0(self->impl, v, self, ctx);
      fn_8284FA10(self->impl, v, self, ctx);
      break;
    case 1:
      v = ctx->info->x4;
      memset(ctx->buffer, 0, self->bufferSize);
      fn_8284F8A0(self->impl, v, self, ctx);
      break;
    }
  }
}
