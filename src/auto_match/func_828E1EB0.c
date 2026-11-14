typedef struct Entry_828E1EB0 {
    int id;
    char rest[0x18];
} Entry_828E1EB0;

typedef struct Self_828E1EB0 {
    char pad0[0xc];
    Entry_828E1EB0 *first;
    Entry_828E1EB0 *last;
} Self_828E1EB0;

extern __declspec(noreturn) void fn_82F622E0(const char *message);

int fn_828E1EB0(Self_828E1EB0 *self, unsigned int index)
{
    if ((unsigned int)(self->last - self->first) <= index)
        fn_82F622E0("invalid vector<T> subscript");
    return self->first[index].id;
}
