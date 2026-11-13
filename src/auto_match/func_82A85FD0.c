extern int fn_8262FEC8();


typedef struct { int **vt; } Iface_82A85FD0;

void fn_82A85FD0(int param_1)

{
  int i;
  Iface_82A85FD0 **pp;
  unsigned int *pu;

  if (*(Iface_82A85FD0 **)(param_1 + 700) != 0) {
    ((void (*)(Iface_82A85FD0 *))(*(Iface_82A85FD0 **)(param_1 + 700))->vt[1])(*(Iface_82A85FD0 **)(param_1 + 700));
    *(unsigned int *)(param_1 + 700) = 0;
  }
  i = 6;
  pp = (Iface_82A85FD0 **)(param_1 + 0x2d8);
  do {
    if (*pp != 0) {
      ((void (*)(Iface_82A85FD0 *))(*pp)->vt[1])(*pp);
      *pp = 0;
    }
    i--;
    pp--;
  } while (i >= 0);
  i = 3;
  pp = (Iface_82A85FD0 **)(param_1 + 0x2f8);
  do {
    if (pp[-1] != 0) {
      ((void (*)(Iface_82A85FD0 *))pp[-1]->vt[1])(pp[-1]);
      pp[-1] = 0;
    }
    if (*pp != 0) {
      ((void (*)(Iface_82A85FD0 *))(*pp)->vt[1])(*pp);
      *pp = 0;
    }
    i--;
    pp -= 2;
  } while (i >= 0);
  if (*(unsigned int *)(param_1 + 0x50) != 0) {
    fn_8262FEC8(*(unsigned int *)(param_1 + 0x50));
    *(unsigned int *)(param_1 + 0x50) = 0;
  }
  i = 4;
  pu = (unsigned int *)(param_1 + 0x48);
  do {
    if (pu[-2] != 0) {
      fn_8262FEC8(pu[-2]);
      pu[-2] = 0;
    }
    if (pu[-1] != 0) {
      fn_8262FEC8(pu[-1]);
      pu[-1] = 0;
    }
    if (*pu != 0) {
      fn_8262FEC8(*pu);
      *pu = 0;
    }
    if (pu[1] != 0) {
      fn_8262FEC8(pu[1]);
      pu[1] = 0;
    }
    i--;
    pu -= 4;
  } while (i >= 0);
}
