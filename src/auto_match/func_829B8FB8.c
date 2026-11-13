extern int png_read_data();


typedef struct Obj_829B8FB8 {
  char pad[0x55c];
  unsigned f55c;
  char pad2[0x600 - 0x560];
  unsigned f600;
  char pad3[0x60c - 0x604];
  unsigned char f60c;
} Obj_829B8FB8;

unsigned int fn_829B8FB8(Obj_829B8FB8 *o)
{
  int on;
  unsigned char b[4];

  on = 1;
  if ((o->f60c & 0x20) != 0) {
    if ((o->f55c & 0x300) == 0x300) {
      on = 0;
    }
  } else {
    on = (o->f55c & 0x800) ? 0 : on;
  }
  png_read_data(o, b, 4);
  if (on) {
    on = (((b[0] * 0x100 + b[1]) * 0x100 + b[2]) * 0x100 + b[3]) != o->f600;
  } else {
    on = 0;
  }
  return on;
}
