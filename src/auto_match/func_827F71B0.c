// Kinect Sports retail 4D5308C9, function 0x827F71B0 (72 bytes).
// Returns whether the named value exists: the inlined fn_827F6A78 lookup (value or -1, signed) compared with -1.

extern unsigned int fn_82800838(void *object, unsigned int kind, const char *name, unsigned int *value);

static __forceinline int GetValue_827F71B0(void *object, const char *name)
{
    unsigned int value;
    unsigned int found = fn_82800838(object, 1, name, &value);
    return found ? value : -1;
}

int fn_827F71B0(void *object, const char *name)
{
    return GetValue_827F71B0(object, name) != -1;
}
