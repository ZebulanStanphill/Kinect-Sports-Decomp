typedef struct Pair_828A4ED0 { unsigned int first; unsigned int second; } Pair_828A4ED0;
extern char lbl_83213F00[];
extern void fn_828A1C98(Pair_828A4ED0 *, char *, unsigned int *);
extern void fn_828A1E60(unsigned int, unsigned int, unsigned int *, unsigned char);
extern unsigned int *fn_82883118(char *, unsigned int *);

unsigned int fn_828A4ED0(unsigned int key)
{
  Pair_828A4ED0 pr;
  unsigned int found;
  unsigned char c;
  fn_828A1C98(&pr, lbl_83213F00, &key);
  found = 0;
  fn_828A1E60(pr.first, pr.second, &found, c);
  if (found == 0) {
    return 0;
  }
  return *fn_82883118(lbl_83213F00, &key);
}
