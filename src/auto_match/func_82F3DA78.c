typedef struct { unsigned int v[4]; } W4_82F3DA78;
extern void fn_82E58050(unsigned int *p);
extern char lbl_82162DEC[];
extern char lbl_8215FDD0[];
extern W4_82F3DA78 lbl_821549C8;

unsigned int *fn_82F3DA78(unsigned int *p)
{
  fn_82E58050(p);
  p[0] = (unsigned int)lbl_82162DEC;
  p[1] = (unsigned int)lbl_8215FDD0;
  *(W4_82F3DA78 *)(p + 4) = lbl_821549C8;
  p[0x13] = 0;
  p[0x12] = 0;
  return p;
}
