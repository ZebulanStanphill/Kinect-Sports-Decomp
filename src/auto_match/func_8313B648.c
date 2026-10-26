typedef struct { char d[0x1c]; } E;
extern E lbl_83283E60[];
extern void fn_82230300(E *, int, int);

void fn_8313B648(void)
{
  int i = 4 - 1;
  E *p = lbl_83283E60 + 4;
  do {
    p--;
    fn_82230300(p, 1, 0);
  } while (--i >= 0);
}
