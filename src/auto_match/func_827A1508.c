typedef struct C_827A1508 { int f0; unsigned int f4; } C_827A1508;
typedef struct It_827A1508 { C_827A1508 *c; int pad; unsigned int idx; int pad2[2]; } It_827A1508;
extern void fn_827A0BD0(void);
extern void fn_827A9228(It_827A1508 *, int, int);

int fn_827A1508(int param_1, int param_2)
{
  unsigned char bVar1;
  It_827A1508 it;

  fn_827A0BD0();
  fn_827A9228(&it, param_1 + 0x24, param_2);
  bVar1 = it.c == 0 || it.idx >= it.c->f4 || (int)it.idx < 0;
  if (bVar1 || (int)it.idx < 0) {
    return -1;
  }
  return it.idx;
}
