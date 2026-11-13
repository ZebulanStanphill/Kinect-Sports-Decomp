typedef struct { short a; short b; } Key_8276D790;
typedef struct { int key; float value; } Ent_8276D790;
extern Ent_8276D790 *fn_8276B280(void *map, Key_8276D790 *key);

float fn_8276D790(char *self, short a, short b)
{
  Key_8276D790 k;
  Ent_8276D790 *e;
  float v;
  unsigned char found;

  k.a = a;
  k.b = b;
  e = fn_8276B280(self + 0x3c, &k);
  if (e != 0) {
    v = e->value;
    found = 1;
  } else {
    found = 0;
  }
  if (found) return v;
  return 0.0f;
}
