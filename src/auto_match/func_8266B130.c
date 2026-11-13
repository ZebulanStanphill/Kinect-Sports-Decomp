extern char lbl_82002780[];
extern void fn_8266ACB8(void *, int);
extern void fn_8266A220(void *);
extern void fn_8266A1F0(void *);
void fn_8266B130(void **self)
{
  *self = lbl_82002780;
  fn_8266ACB8(self, 1);
  fn_8266A220((char *)self + 4);
  fn_8266A1F0((char *)self + 4);
}
