typedef struct Entry_83003848 { unsigned int key; int value; } Entry_83003848;
typedef struct Keys_83003848 { unsigned int *begin; unsigned int *end; } Keys_83003848;
typedef struct Self_83003848 {
  char pad0[0x10];
  int f10;
  char pad1[0x32 - 0x14];
  short f32;
  char pad2[0x3d - 0x34];
  unsigned char flags;
  char pad3[0x48 - 0x3e];
  Entry_83003848 *begin;
  Entry_83003848 *end;
} Self_83003848;
extern void fn_83000688(Self_83003848 *self, int arg, unsigned int key, int *value);

static __forceinline int *Select_83003848(int ok, int *v)
{
  return ok ? v : 0;
}

static __forceinline int *Find_83003848(Self_83003848 *self, unsigned int key)
{
  Entry_83003848 *end = self->end;
  Entry_83003848 *it;

  for (it = self->begin; it != end; it++) {
    if (it->key == key) {
      break;
    }
  }
  return Select_83003848(it != end, &it->value);
}

void fn_83003848(Self_83003848 *self, int arg, unsigned int key, Keys_83003848 *skip)
{
  Entry_83003848 *it;
  unsigned int *k;
  unsigned char found;
  int *value;

  if (key != 0) {
    if ((self->flags & 0x20) != 0 || self->f10 == 0) {
      value = Find_83003848(self, key);
      if (value != 0) {
        fn_83000688(self, arg, key, value);
      }
    }
    return;
  }
  it = self->begin;
  if (skip == 0) {
    for (; it != self->end; it++) {
      fn_83000688(self, arg, it->key, &it->value);
    }
  } else {
    for (; it != self->end; it++) {
      found = 0;
      for (k = skip->begin; k != skip->end; k++) {
        if (*k == it->key) {
          found = 1;
          break;
        }
      }
      if (!found) {
        fn_83000688(self, arg, it->key, &it->value);
      }
    }
  }
  self->f32 = (short)arg;
}
