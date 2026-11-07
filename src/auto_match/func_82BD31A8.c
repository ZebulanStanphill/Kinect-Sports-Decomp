typedef struct Flags_82BD31A8 {
  unsigned int pad : 28;
  unsigned int b3 : 1;
  unsigned int b2 : 1;
  unsigned int b1 : 1;
  unsigned int b0 : 1;
} Flags_82BD31A8;

typedef struct Entry_82BD31A8 {
  Flags_82BD31A8 flags;
  int rest[12];
} Entry_82BD31A8;

typedef struct Obj_82BD31A8 {
  int pad0[6];
  int index;              /* 0x18 */
  int pad1[(0xe4 - 0x1c) / 4];
  Flags_82BD31A8 flags;   /* 0xe4 */
} Obj_82BD31A8;

typedef struct Counters_82BD31A8 {
  int pad0[4];
  int c10;   /* 0x10 */
  int c14;   /* 0x14 */
  int c18;   /* 0x18 */
} Counters_82BD31A8;

extern Entry_82BD31A8 lbl_8316FF50[];

void fn_82BD31A8(Counters_82BD31A8 *param_1, Obj_82BD31A8 *param_2)
{
  unsigned char c;
  unsigned int f;

  if ((unsigned char)param_2->flags.b1) {
    c = 0;
  } else {
    c = (unsigned char)lbl_8316FF50[param_2->index].flags.b3;
  }
  if (c == 0) {
    param_1->c18 = param_1->c18 - 1;
    return;
  }
  if ((unsigned char)lbl_8316FF50[param_2->index].flags.b2) {
    param_1->c14 = param_1->c14 - 1;
    return;
  }
  if ((unsigned char)lbl_8316FF50[param_2->index].flags.b1) {
    param_1->c10 = param_1->c10 - 1;
  }
}
