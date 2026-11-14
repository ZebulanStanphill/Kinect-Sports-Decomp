typedef struct Value_83005C68 {
  char pad0[8];
  float value;
} Value_83005C68;

typedef struct Obj_83005C68 {
  char pad0[0x40];
  unsigned int flags;
  Value_83005C68 *value;
} Obj_83005C68;

extern void *lbl_832642FC;
extern float fn_830177C8(void *mgr, Obj_83005C68 *obj, int bit, int arg);

float fn_83005C68(Obj_83005C68 *self, int arg)
{
  float value = 0.0f;
  if (self->value != 0)
    value = self->value->value;
  if ((unsigned char)((self->flags >> 30) & 1))
    return fn_830177C8(lbl_832642FC, self, 0x1e, arg) + value;
  return value;
}
