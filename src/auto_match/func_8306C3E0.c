typedef struct { unsigned short Length, MaximumLength; char *Buffer; } ANSI_STRING;
typedef struct { int RootDirectory; ANSI_STRING *ObjectName; int Attributes; } OBJECT_ATTRIBUTES;

extern OBJECT_ATTRIBUTES *fn_82A33950(OBJECT_ATTRIBUTES *o, ANSI_STRING *s, const char *name);
extern long NtCreateTimer(void **handle, OBJECT_ATTRIBUTES *attributes, int timerType);
extern void fn_82A2A370(unsigned int err);
extern void fn_82A2B760(long status);

void *fn_8306C3E0(void *security, int manualReset, const char *name)
{
    void *handle;
    ANSI_STRING str;
    OBJECT_ATTRIBUTES attributes;
    long status;

    status = NtCreateTimer(&handle, name != 0 ? fn_82A33950(&attributes, &str, name) : 0, manualReset == 0);
    if (status >= 0) {
        if (status == 0x40000000) {
            fn_82A2A370(0xb7);
        } else {
            fn_82A2A370(0);
        }
        return handle;
    }
    fn_82A2B760(status);
    return 0;
}
