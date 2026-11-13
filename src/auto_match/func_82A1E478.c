typedef struct Thread_82A1E478 {
    int header;
    int signalState;
    char pad[0x140 - 8];
    unsigned int exitStatus;
} Thread_82A1E478;

extern void *__imp_ExThreadObjectType;
extern int ObReferenceObjectByHandle(void *handle, void *type, void **object);
extern void ObDereferenceObject(void *object);
extern void fn_82A31F28(int status);

int fn_82A1E478(void *handle, unsigned int *exitCode)
{
    Thread_82A1E478 *thread;
    int hr = ObReferenceObjectByHandle(handle, __imp_ExThreadObjectType, (void **)&thread);
    if (hr >= 0) {
        if ((unsigned char)thread->signalState)
            *exitCode = thread->exitStatus;
        else
            *exitCode = 0x103;
        ObDereferenceObject(thread);
        return 1;
    }
    fn_82A31F28(hr);
    return 0;
}
