typedef struct WString_8229C5E8 {
  union {
    unsigned short buf[8];
    unsigned short *ptr;
  } bx;
  unsigned int size;
  unsigned int res;
  int alloc;
} WString_8229C5E8;

typedef struct Info_8229C5E8 {
  char pad0[0x34];
  int value;
} Info_8229C5E8;

typedef struct Mgr_8229C5E8 {
  char pad0[0x24];
  int ready;
  char pad28[0x110 - 0x28];
  Info_8229C5E8 *info;
} Mgr_8229C5E8;

typedef struct Obj_8229C5E8 {
  char pad0[0x10];
  int mode;
  char pad14[0x5c - 0x14];
  int value;
  char pad60[0x68 - 0x60];
  int pending;
  int waiting;
  WString_8229C5E8 first;
  WString_8229C5E8 second;
} Obj_8229C5E8;

extern Mgr_8229C5E8 *fn_8249ABC0(void);
extern void fn_8229CAD0(Obj_8229C5E8 *self, const unsigned short *a);
extern void fn_8229CB40(Obj_8229C5E8 *self, const unsigned short *a, const unsigned short *b);

static __forceinline const unsigned short *CStr(const WString_8229C5E8 *s)
{
  return 8 <= s->res ? s->bx.ptr : s->bx.buf;
}

int fn_8229C5E8(Obj_8229C5E8 *self)
{
  if (self->waiting != 0) {
    if (self->value == 0 && fn_8249ABC0()->ready != 0) {
      self->value = fn_8249ABC0()->info->value;
    } else if (fn_8249ABC0()->info->value == 0) {
      goto ready;
    }
    return 0;
  }
ready:
  if (self->pending != 0) {
    if (self->mode != 0) {
      fn_8229CB40(self, CStr(&self->first), CStr(&self->second));
    } else {
      fn_8229CAD0(self, CStr(&self->first));
    }
    self->pending = 0;
  }
  return 1;
}
