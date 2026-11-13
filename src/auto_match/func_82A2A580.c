typedef struct { unsigned short Length, MaximumLength; char *Buffer; } ANSI_STRING;
typedef struct { int RootDirectory; ANSI_STRING *ObjectName; int Attributes; } OBJECT_ATTRIBUTES;

extern OBJECT_ATTRIBUTES *fn_82A33950(OBJECT_ATTRIBUTES *o, ANSI_STRING *s, const char *name);
extern long NtCreateSemaphore(void **handle, OBJECT_ATTRIBUTES *attributes, long initial, long maximum);
extern void fn_82A2A370(unsigned int err);
extern void fn_82A31F28(long status);

void *fn_82A2A580(void *security, long initial, long maximum, const char *name)
{
    void *handle;
    ANSI_STRING str;
    OBJECT_ATTRIBUTES attributes;
    long status;

    status = NtCreateSemaphore(&handle, name != 0 ? fn_82A33950(&attributes, &str, name) : 0, initial, maximum);
    if (status >= 0) {
        if (status == 0x40000000) {
            fn_82A2A370(0xb7);
        } else {
            fn_82A2A370(0);
        }
        return handle;
    }
    fn_82A31F28(status);
    return 0;
}
