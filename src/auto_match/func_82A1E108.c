extern int SleepEx();


void Sleep(unsigned __int64 param_1)

{
  SleepEx(param_1,0);
  return;
}
