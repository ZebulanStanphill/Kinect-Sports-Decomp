typedef unsigned short wchar_t;
extern void fn_82E21200(char *, const char *);
extern void fn_82E212B0(char *, const wchar_t *);
int fn_82E21908(char *p, const char *a, const char *b, const char *c)
{
  if (*p != 0) {
    fn_82E212B0(p, L"<Error Source=\"");
    fn_82E21200(p, a);
    fn_82E212B0(p, L"\" Location=\"");
    fn_82E21200(p, b);
    fn_82E212B0(p, L"\" Message=\"");
    fn_82E21200(p, c);
    fn_82E212B0(p, L"\" />\r\n\r\n");
  } else {
    fn_82E21200(p, "<Error Source=\"");
    fn_82E21200(p, a);
    fn_82E21200(p, "\" Location=\"");
    fn_82E21200(p, b);
    fn_82E21200(p, "\" Message=\"");
    fn_82E21200(p, c);
    fn_82E21200(p, "\" />\r\n\r\n");
  }
  return 1;
}
