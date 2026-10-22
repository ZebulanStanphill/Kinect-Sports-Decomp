typedef struct {
  unsigned int id;
  char rest[0x20];
} Entry;

extern unsigned int lbl_8214C388[8];
extern Entry lbl_83187510[57];

int fn_82E260A8(unsigned int id, int *out)
{
  unsigned int i;

  for (i = 0; i != 8; i++) {
    if (id == lbl_8214C388[i]) {
      if (out != 0)
        *out = 1;
      return 0;
    }
  }
  for (i = 0; i != 57; i++) {
    if (id == lbl_83187510[i].id) {
      if (out != 0)
        *out = 1;
      return 1;
    }
  }
  if (out != 0)
    *out = 0;
  return 1;
}
