typedef struct {
  int type;
  int iface;
  int value;
} Value_822A5480;

extern void fn_82273CD8(Value_822A5480 *, int);
extern void fn_82273C88(Value_822A5480 *);
extern void fn_82672C20(int, const char *, Value_822A5480 *, int);

void fn_822A5480(int *self, unsigned int text)
{
  Value_822A5480 v;

  if (text != 0) {
    v.type = 0;
    v.iface = 0;
    fn_82273CD8(&v, 5);
    v.value = text;
    fn_82672C20(*self, "_root.SetText", &v, 1);
    fn_82273C88(&v);
  }
}
