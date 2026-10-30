extern void fn_82414950(void *, int, int);
extern void fn_82536590(void *, int);
typedef struct Owner_82423948 {
  char pad0[0xa0]; int a0;
  char pad1[0xc0c - 0xa4]; int c0c;
  char pad2[0xe24 - 0xc10]; char e24[4]; char e28[4];
  char pad3[0x2b20 - 0xe2c]; void *cur;
  char pad4[0x2b50 - 0x2b24]; void *o2b50;
} Owner_82423948;
typedef struct { int pad0; char *cur; Owner_82423948 *owner; } Self_82423948;
static void Snd(Self_82423948 *s, int off)
{
  Owner_82423948 *o = s->owner;
  if (s->cur == o->cur && (o->a0 == 0 || *(unsigned *)(o->a0 + 0x40) != 1) && o->c0c != 0)
    fn_82536590((char *)o + off, 0);
}
void fn_82423948(Self_82423948 *self)
{
  Snd(self, 0xe24);
  if (self->cur == self->owner->cur) {
    int id;
    char *c = self->cur;
    if (*(int *)(*(int *)(c + 0x18) * 0x1ac + *(int *)(c + 8) + 0x2c) != 0) {
      Snd(self, 0xe28);
      id = 0x23;
    } else {
      Snd(self, 0xe24);
      id = 0x22;
    }
    fn_82414950(self->owner->o2b50, 0, id);
  }
}

