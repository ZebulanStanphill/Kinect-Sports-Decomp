typedef struct {
  unsigned int first;
  unsigned int second;
  double value;
} Value_8227D908;

extern void fn_8266F640(int obj, int v);
extern void fn_8266F628(int obj, int v);
extern void fn_82273CD8(Value_8227D908 *v, int type);
extern void fn_82672C20(int obj, const char *path, Value_8227D908 *args, int count);
extern void fn_82273C88(Value_8227D908 *v);

void fn_8227D908(int param_1, int param_2)
{
  Value_8227D908 v;

  fn_8266F640(*(int *)(param_1 + 0x3c), 1);
  fn_8266F628(*(int *)(param_1 + 0x3c), 1);
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x38) = 0;
  v.first = 0;
  v.second = 0;
  fn_82273CD8(&v, 3);
  v.value = (double)param_2;
  fn_82672C20(*(int *)(param_1 + 0x3c), "_root.mainCtrl.setDisplayMode", &v, 1);
  fn_82273C88(&v);
}
