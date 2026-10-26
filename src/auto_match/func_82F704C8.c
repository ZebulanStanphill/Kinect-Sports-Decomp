typedef struct { char pad[200]; unsigned short *tbl; } G;
extern G *lbl_831BBCA8;
unsigned short fn_82F704C8(int i, unsigned int mask)
{
  if (i >= -1 && i <= 0xff) {
    return lbl_831BBCA8->tbl[i] & mask;
  }
  return 0;
}
