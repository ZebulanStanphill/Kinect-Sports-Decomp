int strcmp(const char *a, const char *b);

typedef struct Str_8274CD58 { const char *chars; char pad4[4]; int rc; } Str_8274CD58;

extern char lbl_8200EAF0[];   /* "width" */
extern char lbl_8200EAE8[];   /* "height" */
extern int fn_826C1BA0(void *members, void *env, Str_8274CD58 **name, void *value, unsigned char *flags);

int fn_8274CD58(void *members, void *env, Str_8274CD58 **name, void *value, unsigned char *flags)
{
    if (strcmp((*name)->chars, lbl_8200EAF0) == 0 || strcmp((*name)->chars, lbl_8200EAE8) == 0) {
        return 1;
    }
    return fn_826C1BA0(members, env, name, value, flags);
}
