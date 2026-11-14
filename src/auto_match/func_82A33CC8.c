extern __declspec(noreturn) void ExTerminateThread(int status);

void fn_82A33CC8(int (*start)(void *), void *context)
{
    ExTerminateThread(start(context));
}
