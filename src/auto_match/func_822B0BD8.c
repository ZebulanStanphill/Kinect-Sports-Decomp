extern void fn_822AF138(void *, unsigned int);

typedef struct { char pad[0x1c]; unsigned int state; } O;
typedef struct { char pad[0x110]; O *o; char pad2[0xc]; int flag; } P;

int fn_822B0BD8(int a, P *p)
{
  unsigned int s = p->o->state;
  if (s != 8) {
    if (p->flag != 0) {
      if (s != 9) {
        fn_822AF138(p->o, 9);
      }
    } else {
      if (s != 0x1b) {
        fn_822AF138(p->o, 0x1b);
      }
    }
  }
  return 1;
}
