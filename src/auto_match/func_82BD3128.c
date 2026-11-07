typedef struct Entry_82BD3128 {
  unsigned int pad : 28;
  unsigned int b3 : 1;
  unsigned int b2 : 1;
  unsigned int b1 : 1;
  unsigned int b0 : 1;
  int rest[12];
} Entry_82BD3128;

typedef struct Obj_82BD3128 {
  int pad0[6];
  int index;              /* 0x18 */
  int pad1[(0xe4 - 0x1c) / 4];
  unsigned int fpad : 30; /* 0xe4 */
  unsigned int flag : 1;
  unsigned int flow : 1;
} Obj_82BD3128;

typedef struct Counters_82BD3128 {
  int pad0[4];
  int c10; /* 0x10 */
  int c14; /* 0x14 */
  int c18; /* 0x18 */
} Counters_82BD3128;

extern Entry_82BD3128 lbl_8316FF50[];

void fn_82BD3128(Counters_82BD3128 *param_1, Obj_82BD3128 *param_2)
{
  unsigned char v;
  Entry_82BD3128 *e;

  if ((unsigned char)param_2->flag) {
    v = 0;
  }
  else {
    v = (unsigned char)lbl_8316FF50[param_2->index].b3;
  }
  if (v == 0) {
    param_1->c18++;
    return;
  }
  e = &lbl_8316FF50[param_2->index];
  if ((unsigned char)e->b2) {
    param_1->c14++;
    return;
  }
  if ((unsigned char)e->b1) {
    param_1->c10++;
  }
}
