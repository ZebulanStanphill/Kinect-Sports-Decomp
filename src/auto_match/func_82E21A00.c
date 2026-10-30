extern void fn_82E21200(char *p, const char *s);
extern void fn_82E212B0(char *p, const unsigned short *s);

int fn_82E21A00(char *p, const char *name, const char *value)
{
  if (*p != 0) {
    fn_82E212B0(p, L"   <Parameter Name=\"");
    fn_82E21200(p, name);
    fn_82E212B0(p, L"\" Type=\"");
    fn_82E21200(p, value);
    fn_82E212B0(p, L"\" Value=\"");
  } else {
    fn_82E21200(p, "   <Parameter Name=\"");
    fn_82E21200(p, name);
    fn_82E21200(p, "\" Type=\"");
    fn_82E21200(p, value);
    fn_82E21200(p, "\" Value=\"");
  }
  return 1;
}
