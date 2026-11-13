// Formats two texts through a std::ostringstream and passes the result to
// fn_822ACAD8 with the current item's value.
#include "game/OStringStreamObject_8223DCC8.h"

extern "C" {
void fn_8223CFC0(void *stream, int mode, int mostDerived); // std::ostringstream's constructor
void fn_822403C8(void *result, void *buffer);               // the stream buffer's str()
void *fn_82240158(void *stream, const char *text);   // stream << text
unsigned int fn_822ACAD8(int target, const char *text, int arg);
void fn_82230300(void *string, int built, int size); // std::string::_Tidy

struct String_823818A0 {
    union {
        char buf[16];
        char *ptr;
    } u;
    unsigned int size;
    unsigned int res;
};

struct Stream_823818A0 {
    char vbtable[4];
    char buffer[140];
};

struct Item_823818A0 {
    char pad[0x48];
    int target;
};

// self[0] is a table of items and self[4] the index of the current one.
unsigned int fn_823818A0(int *self, const char *first, const char *second, int arg)
{
    String_823818A0 text;
    Stream_823818A0 stream;
    const char *chars;
    unsigned int result;

    fn_8223CFC0(&stream, 2, 1);
    fn_82240158(fn_82240158(&stream, first), second);
    fn_822403C8(&text, stream.buffer);
    chars = text.res >= 0x10 ? text.u.ptr : text.u.buf;
    result = fn_822ACAD8(((Item_823818A0 *)((int *)*self)[self[4]])->target, chars, arg);
    fn_82230300(&text, 1, 0);
    DestroyOStringStream_8223DCC8(&stream);
    return result;
}
}
