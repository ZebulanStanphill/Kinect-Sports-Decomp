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

struct Result_82694A78 {
    int unused[2];
    int references; /* 0x8 */
};

extern "C" String_8268C510 fn_8268C9F8(const String_8268C510 &text);
extern "C" Result_82694A78 *fn_82694610(void *owner, const char *text, unsigned int size);

extern "C" Result_82694A78 **fn_82694A78(Result_82694A78 **out, unsigned int *source)
{
    String_8268C510 folded = fn_8268C9F8(String_8268C510(**(const char ***)source));
    Result_82694A78 *result =
        fn_82694610(*(void **)(*source & ~0x3ffu), ((StringData_8268C510 *)(folded.tagged & ~3u))->text,
                    ((StringData_8268C510 *)(folded.tagged & ~3u))->size & 0x7fffffff);
    int references = result->references;
    *out = result;
    result->references = references + 1;
    return out;
}
