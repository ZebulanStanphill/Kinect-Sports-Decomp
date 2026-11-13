// Describes a NetDefBits_c<3> as text: its width and its first byte as two hex digits.
#include "game/OStringStreamObject_8223DCC8.h"

extern "C" {
void fn_8223CFC0(void *stream, int mode, int mostDerived); // std::ostringstream's constructor
void fn_822403C8(void *result, void *buffer);               // the stream buffer's str()
void *fn_82240158(void *stream, const char *text); // stream << text
void *fn_82520AC8(void *stream, int value);        // stream << value
void *fn_8223FBB0(void *stream, int value);        // stream << value (unsigned char)
void *fn_8223FCD8(void *stream, void *manip);      // stream << manipulator
void *fn_82F62578(void *manip, int width);         // std::setw

struct Bits_82255B50 {
    char pad[8];
    union {
        char buf[4];
        char *ptr;
    } u;
    unsigned int size;
};

struct Stream_82255B50 {
    int vbtable;
    char buffer[0x94];
};

// The std::ios_base part of a stream, found through its vbtable.
struct IosBase_82255B50 {
    char pad[0x14];
    unsigned int flags;
    char pad2[0x28];
    char fill;
};

static void SetFill_82255B50(int *stream, char fill)
{
    IosBase_82255B50 *ios = (IosBase_82255B50 *)((int)stream + *(int *)(*stream + 4));
    ios->fill = fill;
}

// setf(hex, basefield)
static void SetHex_82255B50(int *stream)
{
    IosBase_82255B50 *ios = (IosBase_82255B50 *)((int)stream + *(int *)(*stream + 4));
    ios->flags = (ios->flags & 0xfffff1ff) | 0x800;
}

void *fn_82255B50(void *result, int unused1, int unused2, Bits_82255B50 *bits)
{
    void *out;
    int *digits;
    unsigned char *data;
    char width[16];
    Stream_82255B50 stream;

    fn_8223CFC0(&stream, 2, 1);
    if (bits->size <= 4) {
        data = (unsigned char *)bits->u.buf;
    } else {
        data = (unsigned char *)bits->u.ptr;
    }
    out = fn_82240158(&stream, "NetDefBits_c<");
    out = fn_82520AC8(out, 3);
    fn_82240158(out, "> - {0x");
    digits = (int *)fn_8223FCD8(&stream, fn_82F62578(width, 2));
    SetFill_82255B50(digits, 0x30);
    SetHex_82255B50(digits);
    fn_8223FBB0(digits, *data);
    fn_82240158(&stream, "}");
    fn_822403C8(result, stream.buffer);
    DestroyOStringStream_8223DCC8(&stream);
    return result;
}
}
