extern long fn_82916830(const void *src, unsigned int srcLen, const void *defines, const char *name,
                        void *a5, void *a6, void *a7, const char *entry, const char *profile,
                        unsigned int flags, void **shader, void **errors, void *table);

long fn_82917790(const void *src, unsigned int srcLen, const void *defines, const char *name,
                 const char *entry, const char *profile, unsigned int flags, void **shader,
                 void **errors, void *table)
{
    if (shader != 0)
        *shader = 0;
    if (errors != 0)
        *errors = 0;
    if (name == 0)
        return 0x8876086c;
    return fn_82916830(src, srcLen, defines, name, 0, 0, 0, entry, profile, flags, shader, errors, table);
}
