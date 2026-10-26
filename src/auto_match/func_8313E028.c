typedef struct { char d[0x420]; } E;
typedef struct { char pad[0xc38]; E e[4]; } G;
extern G lbl_83290060;
extern void fn_82230300(E *, int, int);

void fn_8313E028(void)
{
  int i = 3;
  E *p = lbl_83290060.e + 4;
  do {
    p--;
    fn_82230300(p, 1, 0);
  } while (--i >= 0);
}
