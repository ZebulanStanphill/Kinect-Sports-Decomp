typedef struct Obj_82933960 {
  int pad0;
  int kind;                 /* 0x04 */
  int pad8[2];
  char name[0x20];          /* 0x10 */
  unsigned int a;           /* 0x30 */
  int b;                    /* 0x34 */
} Obj_82933960;

extern int fn_82930800(void *a, void *b);

static __forceinline int SameKind(Obj_82933960 *self, Obj_82933960 *other)
{
  return other != 0 && other->kind == self->kind;
}

unsigned char fn_82933960(Obj_82933960 *self, Obj_82933960 *other)
{
  if (!SameKind(self, other))
    return 0;
  if (fn_82930800(self->name, other->name) == 0)
    return 0;
  if (other->a != self->a)
    return 0;
  return other->b == self->b;
}
