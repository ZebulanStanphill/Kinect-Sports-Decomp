extern char lbl_82196582[]; extern void fn_8268C750(void *); extern void fn_8268B610(void *, const char *, int);
void *fn_8268C880(void *self, int unused, const char *s) {
  fn_8268C750(self);
  fn_8268B610(self, s ? s : lbl_82196582, -1);
  return self;
}
