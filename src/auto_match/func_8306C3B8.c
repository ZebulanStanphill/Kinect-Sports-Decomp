extern void XapiCallThreadNotifyRoutines(int create);
extern __declspec(noreturn) void ExTerminateThread(unsigned int exitCode);

void fn_8306C3B8(unsigned int exitCode)
{
    XapiCallThreadNotifyRoutines(0);
    ExTerminateThread(exitCode);
}
