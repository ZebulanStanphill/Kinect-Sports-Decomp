// Placeholder for Scaleform's reference-counted string. The string is one
// word: a pointer to a shared block (size, reference count, text) whose low
// two bits hold flags. Its constructor from a C string is fn at 0x8268C510,
// which the class is named after until its real name is known; releasing the
// block is inline wherever a string goes out of scope.

#ifndef GAME_STRING_8268C510_H
#define GAME_STRING_8268C510_H

extern "C" {
long _InterlockedExchangeAdd(long volatile *value, long add);
void fn_8267BE38(void *block); // frees a block of Scaleform's heap
}

struct StringData_8268C510 {
    unsigned int size;
    long refs;
    char text[1];
};

struct String_8268C510 {
    unsigned int tagged;

    String_8268C510(const char *text);

    ~String_8268C510()
    {
        StringData_8268C510 *data = Data();
        if (_InterlockedExchangeAdd(&data->refs, -1) - 1 == 0) {
            fn_8267BE38(data);
        }
    }

    StringData_8268C510 *Data() const { return (StringData_8268C510 *)(tagged & ~3u); }
};

#endif
