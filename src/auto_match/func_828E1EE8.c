typedef struct Entry_828E1EE8 {
    int id;
    char rest[0x18];
} Entry_828E1EE8;

typedef struct Self_828E1EE8 {
    char pad0[0xc];
    Entry_828E1EE8 *first;
    Entry_828E1EE8 *last;
} Self_828E1EE8;

extern __declspec(noreturn) void fn_82F622E0(const char *message);

unsigned char fn_828E1EE8(Self_828E1EE8 *self, unsigned int index)
{
    if ((unsigned int)(self->last - self->first) <= index)
        fn_82F622E0("invalid vector<T> subscript");
    return self->first[index].id != 0;
}
