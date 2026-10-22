typedef unsigned __int64 U64;

typedef struct Target Target;
typedef struct {
  void *f0, *f4, *f8, *fc, *f10;
  void (*f14)(Target *t, unsigned short id, U64 v);
} TargetVtbl;
struct Target {
  TargetVtbl *vt;
};

typedef struct Self Self;
typedef struct {
  void (*f0)(Self *s, int flag);
} SelfVtbl;
struct Self {
  SelfVtbl *vt;
  int f4;
  Target *target;
  unsigned short *ids;
  int count;
};

void fn_82D59CB0(Self *self, U64 v)
{
  int i;

  if (self->target != 0) {
    for (i = 0; i < self->count; i++) {
      if (self->ids[i] != 0xffff) {
        self->target->vt->f14(self->target, self->ids[i], v);
      }
    }
  }
  self->vt->f0(self, 1);
}
