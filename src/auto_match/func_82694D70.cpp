extern "C" long _InterlockedExchangeAdd(long volatile *value, long add);
extern "C" void fn_8267BE38(void *block);

struct StringData_8268C510 {
    unsigned int size;
    long refs;
    char text[1];
};

struct String_8268C510 {
    unsigned int tagged;
    String_8268C510(const char *text);

    __forceinline ~String_8268C510()
    {
        StringData_8268C510 *data = Data();
        if (_InterlockedExchangeAdd(&data->refs, -1) - 1 == 0) {
            fn_8267BE38(data);
        }
    }

    StringData_8268C510 *Data() const
    {
        return (StringData_8268C510 *)(tagged & ~3u);
    }
};

struct Node_82694D70 {
    const char *text;    /* 0x00 */
    Node_82694D70 *next; /* 0x04 */
    int references;      /* 0x08 */
};

struct Owner_82694D70 {
    char reserved00[0x18];
    Node_82694D70 *empty; /* 0x18 */
};

extern "C" String_8268C510 fn_8268CAB0(const String_8268C510 &text);
extern "C" Node_82694D70 *fn_82694610(Owner_82694D70 *, const char *, unsigned int);
extern "C" unsigned int strlen(const char *);

extern "C" void fn_82694D70(Node_82694D70 *self)
{
    String_8268C510 folded = fn_8268CAB0(String_8268C510(self->text));
    Owner_82694D70 *owner = *(Owner_82694D70 **)((unsigned int)self & ~0x3ffu);
    const char *text = folded.Data()->text;
    Node_82694D70 *result;
    if (text == 0) {
        result = owner->empty;
    } else {
        result = fn_82694610(owner, text, strlen(text));
    }
    if (result != owner->empty) {
        self->next = result;
        if (result != self) {
            ++result->references;
        }
    }
}
