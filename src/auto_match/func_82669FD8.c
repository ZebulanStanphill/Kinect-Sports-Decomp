extern char lbl_820026C0[];
extern void fn_826688D8(void *, int);
extern void fn_8266A220(void *);
extern void fn_8266A1F0(void *);
void fn_82669FD8(void **self)
{
  *self = lbl_820026C0;
  fn_826688D8(self, 1);
  fn_8266A220((char *)self + 4);
  fn_8266A1F0((char *)self + 4);
}
