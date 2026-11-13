extern void fn_829CFB48(int, void *);
extern void fn_829CFC20(int);
extern void fn_829D2868(int);
extern char lbl_83215000[];

void fn_829C9680(unsigned **p)
{
  unsigned *t;
  t = p[5]; if (t != 0) { fn_829CFB48(0, t); fn_829CFC20(0); }
  t = p[3]; if (t != 0) { fn_829CFB48(1, t); fn_829CFC20(1); }
  t = p[4]; if (t != 0) { fn_829CFB48(0, t); fn_829CFC20(0); }
  t = p[1]; if (t != 0) { fn_829CFB48(2, t); fn_829CFC20(2); }
  t = p[2]; if (t != 0) { fn_829CFB48(5, t); fn_829CFC20(5); }
  t = p[0]; if (t != 0) { fn_829CFB48(3, t); fn_829CFC20(3); }
  if (p[0xd] == 0) fn_829D2868(0);
  ((int *)(lbl_83215000 + 0x28a8))[((char *)p - (lbl_83215000 + 0x27c4)) / 0x4c] = 0;
}