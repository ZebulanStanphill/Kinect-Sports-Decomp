extern void *lbl_83155AC0[];
extern void *lbl_83155C14[];

int fn_82683D70(unsigned int id, void **out)
{
  if (id < 0x55) {
    *out = lbl_83155AC0[id];
  } else if (id >= 1000 && id < 0x3f2) {
    *out = lbl_83155C14[id - 1000];
  } else {
    *out = 0;
  }
  return *out != 0;
}
