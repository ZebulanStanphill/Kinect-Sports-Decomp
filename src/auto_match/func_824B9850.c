typedef struct Obj_824B9850 { char pad[0x100]; unsigned *tab; } Obj_824B9850;
#define CLR(K) { if (self->tab[idx + (K)] != 0) self->tab[idx + (K)] = 0; }

void fn_824B9850(Obj_824B9850 *self, unsigned slot, int flag)
{
  int idx;
  if (flag != 0) {
    idx = 0x42;
  } else {
    switch (slot) {
    case 3:
      idx = 99;
      break;
    case 2:
      idx = 0x21;
      break;
    case 1:
      idx = 0x84;
      break;
    case 0:
      idx = 0;
      break;
    default:
      return;
    }
  }
  CLR(0x67);
  CLR(0x68);
  CLR(0x69);
  CLR(0x78);
  CLR(0x79);
  CLR(0x7a);
  CLR(0x7b);
  CLR(0x6a);
  CLR(0x6b);
  CLR(0x6c);
  CLR(0x6d);
  CLR(0x6e);
  CLR(0x6f);
  CLR(0x71);
  CLR(0x72);
  CLR(0x73);
  CLR(0x70);
  CLR(0x74);
  CLR(0x75);
  CLR(0x76);
  CLR(0x77);
  CLR(0x7f);
  CLR(0x7d);
  CLR(0x7c);
  CLR(0x7e);
  CLR(0x80);
  CLR(0x81);
}
