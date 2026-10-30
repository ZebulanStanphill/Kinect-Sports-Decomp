typedef struct { unsigned mode; int x; int y; } Req_829C8A38;
extern void fn_829C8918(void);
extern int lbl_83214FFC;
extern char lbl_83215000[];

int fn_829C8A38(unsigned idx, Req_829C8A38 *r)
{
  int mode;
  unsigned off;
  if (r == 0 || idx >= 2) return 0x80070057;
  if (lbl_83214FFC == 0) return 0x8000ffff;
  switch (r->mode) {
  case 0:
    if (r->x != 0) return 0x80070057;
    if (r->y != 0) return 0x80070057;
    mode = 0;
    break;
  case 1:
    if (r->x > 0x140) return 0x80070057;
    if (r->x < -0x140) return 0x80070057;
    if (r->y > 0xf0) return 0x80070057;
    if (r->y < -0xf0) return 0x80070057;
    mode = 1;
    break;
  default:
    return 0x80070057;
  }
  off = idx * 0x184;
  *(int *)(lbl_83215000 + 0x6b8 + off) = mode;
  *(int *)(lbl_83215000 + 0x6bc + off) = r->x;
  *(int *)(lbl_83215000 + 0x6c0 + off) = r->y;
  fn_829C8918();
  return 0;
}
