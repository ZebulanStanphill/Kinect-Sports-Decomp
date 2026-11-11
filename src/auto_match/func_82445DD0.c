typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Entry_82445DD0 {
  char pad0[0x9c];
  unsigned int flags;
  char pad1[0x18];
  unsigned char kind;
  char pad2[0x17];
} Entry_82445DD0;

typedef struct Target_82445DD0 {
  char pad0[0x120];
  __vector4 position;
} Target_82445DD0;

typedef struct World_82445DD0 {
  char pad0[0x380];
  Entry_82445DD0 *begin;
  Entry_82445DD0 *end;
  char pad1[0x438];
  Target_82445DD0 *target;
} World_82445DD0;

typedef struct Self_82445DD0 {
  int unk0;
  int *world; /* holds a World_82445DD0 pointer; tested as an int */
} Self_82445DD0;

extern const float lbl_82192730[];
extern const __vector4 lbl_8329EA20;
extern int fn_8242E320(void *obj, __vector4 *outPosition, unsigned char *outKind, __vector4 from, __vector4 to);

static __forceinline __vector4 Replicate(float value)
{
  __vector4 v = __lvlx(&value, 0);
  return __vspltw(v, 0);
}

int fn_82445DD0(Self_82445DD0 *self, void *obj, unsigned char *outKind)
{
  __vector4 hit;
  Entry_82445DD0 *e;
  Entry_82445DD0 *end;

  if (*self->world != 0) {
    e = ((World_82445DD0 *)*self->world)->begin;
    end = ((World_82445DD0 *)*self->world)->end;
    for (; e < end; e++) {
      if (e->flags & 1) {
        __vector4 from;
        if (outKind != 0) {
          *outKind = e->kind;
        }
        from = ((World_82445DD0 *)*self->world)->target->position;
        fn_8242E320(obj, &hit, outKind, from, __vsel(from, Replicate(lbl_82192730[1]), lbl_8329EA20));
        return 1;
      }
    }
  }
  return 0;
}
