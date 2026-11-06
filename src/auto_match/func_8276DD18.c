typedef struct Ent_8276DD18 { unsigned short a, b; } Ent_8276DD18;
extern Ent_8276DD18 *fn_8276D410(void *, short *);

int fn_8276DD18(char *self, short key)
{
  Ent_8276DD18 *e;
  unsigned short v;
  unsigned char found;

  e = fn_8276D410(self + 0x2c, &key);
  if (e != 0) {
    v = e->b;
    found = 1;
  } else {
    found = 0;
  }
  if (found) return v;
  return -1;
}
