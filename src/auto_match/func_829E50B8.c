extern void fn_829E4EB0(void *, int); extern void *fn_82A28568(void *, int, int); extern void *fn_82923B38(void);
extern char *lbl_832179FC;
int fn_829E50B8(void **out) {
  void *p; void *m;
  if (*out != 0) { fn_829E4EB0(*out, 3); *out = 0; }
  m = fn_82A28568(*(void **)(lbl_832179FC + 0x8f4cc), 0, 4);
  if (m != 0) p = fn_82923B38(); else p = 0;
  *out = p;
  return p == 0 ? 0x8007000E : 0;
}
