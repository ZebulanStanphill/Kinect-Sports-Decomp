typedef struct Entry_8266DBB8 {
    int first;
    int second;
    unsigned int key;
} Entry_8266DBB8;

typedef struct Iterator_8266DBB8 {
    unsigned int words[5];
} Iterator_8266DBB8;

typedef struct Result_8266DBB8 {
    unsigned int words[6];
} Result_8266DBB8;

extern Result_8266DBB8 *fn_8266D8A8(Result_8266DBB8 *out, Entry_8266DBB8 *first, Entry_8266DBB8 *middle,
                                    Entry_8266DBB8 *second, Entry_8266DBB8 *last, Iterator_8266DBB8 *state);
extern Result_8266DBB8 *fn_8266D840(Result_8266DBB8 *out, Entry_8266DBB8 *first, Entry_8266DBB8 *last,
                                    Iterator_8266DBB8 *state);
extern void fn_8266D440(void *state);

void fn_8266DBB8(Entry_8266DBB8 *first, Entry_8266DBB8 *last, Iterator_8266DBB8 *state, int count,
                 int remaining)
{
    int pairCount;
    Iterator_8266DBB8 copy;
    Result_8266DBB8 result;
    for (pairCount = count * 2; pairCount <= remaining; remaining -= pairCount) {
        Entry_8266DBB8 *middle = first + count;
        Entry_8266DBB8 *end = middle + count;
        Result_8266DBB8 *out;
        copy.words[4] = state->words[4];
        copy.words[0] = 0;
        copy.words[1] = 0;
        copy.words[2] = 0;
        copy.words[3] = 0;
        out = fn_8266D8A8(&result, first, middle, middle, end, &copy);
        state->words[4] = out->words[4];
        fn_8266D440(&result);
        first = end;
    }
    if (remaining <= count) {
        copy.words[0] = 0;
        copy.words[1] = 0;
        copy.words[2] = 0;
        copy.words[3] = 0;

        copy.words[4] = state->words[4];
        fn_8266D840(&result, first, last, &copy);
    } else {
        copy.words[0] = 0;
        copy.words[1] = 0;
        copy.words[2] = 0;
        copy.words[3] = 0;
        {
            Entry_8266DBB8 *middle = first + count;
            copy.words[4] = state->words[4];
            fn_8266D8A8(&result, first, middle, middle, last, &copy);
        }
    }
    fn_8266D440(&result);
    fn_8266D440(state);
}
