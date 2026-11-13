// Kinect Sports retail 4D5308C9, function 0x82802400 (72 bytes).
// Returns whether the named value exists: the inlined fn_828023C0 lookup (value or -1, signed) compared with -1.

extern unsigned int fn_828005B0(void *object, unsigned int kind, const char *name, unsigned int *value);

static __forceinline int GetValue_82802400(void *object, const char *name)
{
    unsigned int value;
    unsigned int found = fn_828005B0(object, 1, name, &value);
    return found ? value : -1;
}

int fn_82802400(void *object, const char *name)
{
    return GetValue_82802400(object, name) != -1;
}
