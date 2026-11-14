int strcmp(const char *a, const char *b);

typedef struct Str_8273CA30 { const char *chars; char pad4[4]; int rc; } Str_8273CA30;

extern char lbl_82012158[];   /* "data" */
extern int fn_826C1BA0(void *members, void *env, Str_8273CA30 **name, void *value, unsigned char *flags);

int fn_8273CA30(void *members, void *env, Str_8273CA30 **name, void *value, unsigned char *flags)
{
    if (strcmp((*name)->chars, lbl_82012158) == 0) {
        return 1;
    }
    return fn_826C1BA0(members, env, name, value, flags);
}
