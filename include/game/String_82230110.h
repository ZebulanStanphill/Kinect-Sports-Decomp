// A std::string with Visual C++ 2010's layout (0x1C bytes) whose constructors
// and destructor are out-of-line library code. Placeholder, named after the
// constructor from a C string at that address, until the units that use it can
// include the real <string>.

#ifndef GAME_STRING_82230110_H
#define GAME_STRING_82230110_H

extern "C" {
void fn_82230110(void *string, const char *text);
void fn_82240378(void *string, const void *source);
void fn_82230300(void *string, bool built, unsigned int new_size);
}

struct String_82230110 {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int capacity;
    char alloc;

    // Leaves the string unconstructed, for out-of-line functions that build it.
    struct Raw {};
    __forceinline String_82230110(Raw) {}
    __forceinline String_82230110(const char *text) { fn_82230110(this, text); }
    __forceinline String_82230110(const String_82230110 &other) { fn_82240378(this, &other); }
    __forceinline ~String_82230110() { fn_82230300(this, true, 0); }

    const char *c_str() const
    {
        const char *text = bx.buf;
        if (capacity >= 16) {
            text = bx.ptr;
        }
        return text;
    }
};

#endif
