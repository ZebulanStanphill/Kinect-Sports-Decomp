extern void *fn_8265C9E0(int);
extern void fn_8288B668(void *, void *);
extern void fn_8289D6D0(void *, int);
extern char lbl_82196924[];
extern char lbl_82196A04[];
extern char lbl_82197100[];

void *fn_82238370(void *param_1)
{
  char *p = (char *)fn_8265C9E0(0x9c);
  if (p != 0) {
    fn_8288B668(p, param_1);
    *(void **)p = lbl_82196924;
    fn_8289D6D0(p + 0x48, 8);
    *(void **)(p + 0x48) = lbl_82197100;
    *(void **)p = lbl_82196A04;
    return p;
  }
  return 0;
}
