typedef unsigned short wchar_t;
extern int fn_82E1D238(void);
extern int fn_82E1D240(void);
extern void fn_82E1D550(void);
extern void fn_82E21200(char *, const char *);
extern void fn_82E212B0(char *, const wchar_t *);
extern void fn_82E21690(char *, int);

int fn_82E21778(char *param_1, char *param_2, char *param_3)
{
  int uVar1;
  int uVar2;

  fn_82E1D550();
  uVar1 = fn_82E1D240();
  fn_82E1D550();
  uVar2 = fn_82E1D238();
  if (*param_1 != '\0') {
    fn_82E212B0(param_1, L"<Event Name=\"");
    fn_82E21200(param_1, param_2);
    fn_82E212B0(param_1, L"\" SessionTime=\"");
    fn_82E21690(param_1, uVar1);
    fn_82E212B0(param_1, L"\" GameTime=\"");
    fn_82E21690(param_1, uVar2);
    fn_82E212B0(param_1, L"\" Session=\"");
    fn_82E21200(param_1, param_3);
    fn_82E212B0(param_1, L"\">\r\n");
  }
  else {
    fn_82E21200(param_1, "<Event Name=\"");
    fn_82E21200(param_1, param_2);
    fn_82E21200(param_1, "\" SessionTime=\"");
    fn_82E21690(param_1, uVar1);
    fn_82E21200(param_1, "\" GameTime=\"");
    fn_82E21690(param_1, uVar2);
    fn_82E21200(param_1, "\" Session=\"");
    fn_82E21200(param_1, param_3);
    fn_82E21200(param_1, "\">\r\n");
  }
  return 1;
}
