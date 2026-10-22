typedef struct {
  char pad[0x26];
  unsigned char bits;
} Info;

typedef struct {
  char pad[0x305];
  unsigned char a, b, c;
} Owner;

typedef struct {
  char pad0[8];
  Owner *owner;
  char pad1[0xcc - 0xc];
  int info;
  char pad2[0xe0 - 0xd0];
  char sub[8];
  unsigned char mode;
  char pad3;
  short x;
  short y;
} Self;

extern void fn_82D80768(void *p, unsigned char a, unsigned char b, unsigned char c);
extern void fn_82D90920(Owner *o, int i);

static char GetState(int info)
{
  if (info == 0)
    return 0;
  return (((Info *)info)->bits >> 4) & 3;
}

void fn_82D89BD8(Self *self)
{
  int info = self->info;

  if (GetState(info) == 0 && self->mode != 5 && self->owner != 0) {
    self->x = 0;
    self->y = 0;
    fn_82D90920(self->owner, info);
    fn_82D80768(self->sub, self->owner->a, self->owner->b, self->owner->c);
  }
}
