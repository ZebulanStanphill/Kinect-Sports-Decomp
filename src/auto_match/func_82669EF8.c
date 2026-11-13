extern char lbl_820026BC[];
extern void fn_8265D948(void *, int);
extern void fn_8266A220(void *);
extern void fn_8266A1F0(void *);
void fn_82669EF8(void **self)
{
  *self = lbl_820026BC;
  fn_8265D948(self, 1);
  fn_8266A220((char *)self + 4);
  fn_8266A1F0((char *)self + 4);
}
