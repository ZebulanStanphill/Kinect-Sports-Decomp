extern char lbl_820026C4[];
extern void fn_8266A110(void *, int);
extern void fn_8266A220(void *);
extern void fn_8266A1F0(void *);
void fn_8266A0B8(void **self)
{
  *self = lbl_820026C4;
  fn_8266A110(self, 1);
  fn_8266A220((char *)self + 4);
  fn_8266A1F0((char *)self + 4);
}
