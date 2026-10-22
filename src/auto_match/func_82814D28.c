typedef struct Elem {
  int a;
  int pad[3];
  int b;
} Elem;

typedef struct Data {
  char pad0[0x1c];
  int f1c;
  int f20;
  int f24;
  int f28;
  int f2c;
  int f30;
  int f34;
  int f38;
  int f3c;
  int f40;
  int f44;
  int f48;
  int f4c;
  unsigned char f50;
  unsigned char f51;
  char pad52[2];
  int f54;
  Elem arr[2];
} Data;

extern void fn_82820EF8(void *p, int size);

void fn_82814D28(int param_1)
{
  Data *d;
  int i;

  d = *(Data **)(param_1 + 0x1c);
  fn_82820EF8(&d->f1c, 4);
  fn_82820EF8(&d->f20, 4);
  fn_82820EF8(&d->f24, 4);
  fn_82820EF8(&d->f2c, 4);
  fn_82820EF8(&d->f30, 4);
  fn_82820EF8(&d->f3c, 4);
  fn_82820EF8(&d->f40, 4);
  fn_82820EF8(&d->f34, 4);
  fn_82820EF8(&d->f38, 4);
  fn_82820EF8(&d->f44, 4);
  fn_82820EF8(&d->f48, 4);
  fn_82820EF8(&d->f28, 4);
  fn_82820EF8(&d->f51, 1);
  fn_82820EF8(&d->f54, 4);
  for (i = 0; i < 2; i++) {
    if (((*(Data **)(param_1 + 0x1c))->f50 & 1) != 1) {
      fn_82820EF8(&d->arr[i].a, 4);
      fn_82820EF8(&d->arr[i].b, 4);
    }
  }
}
