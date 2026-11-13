extern char lbl_82001D8C[];
extern void fn_826635E0(void *, int);
extern void fn_8266A220(void *);
extern void fn_8266A1F0(void *);
void fn_82664018(void **self)
{
  *self = lbl_82001D8C;
  fn_826635E0(self, 1);
  fn_8266A220((char *)self + 4);
  fn_8266A1F0((char *)self + 4);
}
