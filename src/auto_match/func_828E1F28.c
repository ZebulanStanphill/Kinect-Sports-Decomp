typedef struct Entry_828E1F28 {
    int id;
    char rest[0x18];
} Entry_828E1F28;

typedef struct Self_828E1F28 {
    char pad0[0xc];
    Entry_828E1F28 *first;
    Entry_828E1F28 *last;
} Self_828E1F28;

extern __declspec(noreturn) void fn_82F622E0(const char *message);

void fn_828E1F28(Self_828E1F28 *self, unsigned int index, int id)
{
    if ((unsigned int)(self->last - self->first) <= index)
        fn_82F622E0("invalid vector<T> subscript");
    self->first[index].id = id;
}
