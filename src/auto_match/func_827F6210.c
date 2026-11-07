extern void fn_82809CB0(void *);
extern void fn_827FA120(void *);
extern void fn_827F9DF0(void *, int);
extern float fn_827F9F98(void *);
extern void fn_827FED00(void *, float, float);
void fn_827F6210(char *self, float value) {
  void *part=self+0x24;
  void **ptr;
  fn_82809CB0(self);
  fn_827FA120(part);
  { int negative=0; if(value<0.0f) negative=1; fn_827F9DF0(part,negative); }
  ptr=(void **)(self+0x124);
  if (*ptr) fn_827FED00(ptr,value,fn_827F9F98(part));
}
