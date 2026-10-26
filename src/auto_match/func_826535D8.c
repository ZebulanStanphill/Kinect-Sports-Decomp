extern unsigned int *__imp_VdGlobalDevice;
extern void ExRegisterTitleTerminateNotification(void *reg, int create);
extern void fn_82653510(unsigned int dev);

void fn_826535D8(void *param_1)
{
  ExRegisterTitleTerminateNotification(param_1, 0);
  if (*__imp_VdGlobalDevice != 0) {
    fn_82653510(*__imp_VdGlobalDevice);
  }
}
