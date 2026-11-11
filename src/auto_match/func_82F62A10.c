extern const char *fn_82F70430(int category, const char *locale);

const char *fn_82F62A10(const char *self)
{
    const char *name = *(const char **)(self + 0x14);

    if (name == 0) {
        return self;
    }
    return fn_82F70430(0, name);
}
