extern long NtSetIoCompletion(void *handle, unsigned int key, unsigned int context, long status, unsigned int info);
extern void fn_82A31F28(long status);

int fn_8306C690(void *handle, unsigned int info, unsigned int key, unsigned int context)
{
    long status;
    int result;

    result = 1;
    status = NtSetIoCompletion(handle, key, context, 0, info);
    if (status < 0) {
        fn_82A31F28(status);
        result = 0;
    }
    return result;
}
