typedef struct { unsigned int v[4]; } Q16;
extern int memcmp(const void *, const void *, unsigned int);
extern Q16 lbl_82154B68;

int fn_82EE3028(char *self, Q16 *in)
{
  if (*(void **)(self + 0xc) == 0) {
    return 0xc00d36b6;
  }
  if (memcmp(&lbl_82154B68, in, sizeof(Q16)) != 0) {
    return 0x80070057;
  }
  *(Q16 *)(self + 0x174) = *in;
  return 0;
}
