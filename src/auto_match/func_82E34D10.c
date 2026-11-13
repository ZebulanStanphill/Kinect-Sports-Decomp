typedef struct Surf_82E34D10 {
  unsigned short format;
  char pad2[0x1a];
  int f1c;
  int f20;
  char pad24[8];
  int f2c;
} Surf_82E34D10;
typedef struct Desc_82E34D10 { char pad[0x54]; int flag; } Desc_82E34D10;
extern int fn_82A753E8(unsigned short format);

int fn_82E34D10(Surf_82E34D10 *s, Desc_82E34D10 *d)
{
  if (s == 0 || d == 0) {
    return 0;
  }
  if (fn_82A753E8(s->format) != 0) {
    return (s->f2c + s->f20 + 3) * s->f1c;
  }
  if (d->flag != 0) {
    return (s->f2c + s->f20 + 3) * s->f1c;
  }
  return (s->f2c + s->f20 + 3) * s->f1c;
}
