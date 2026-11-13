extern long fn_82C11160(void *obj);

long fn_82C08028(void *self, void **obj, int unused, void *out)
{
    if (self == 0) {
        return 0x80070057;
    }
    if (obj == 0) {
        return 0x80070057;
    }
    if (out == 0) {
        return 0x80070057;
    }
    return fn_82C11160(*obj);
}
