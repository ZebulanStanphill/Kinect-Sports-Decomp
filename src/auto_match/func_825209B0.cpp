// Describes an XAvatarMetadataNetVar as text: its compressed size.
#include "game/OStringStreamObject_8223DCC8.h"

extern "C" {
void fn_8223CFC0(void *stream, int mode, int mostDerived); // std::ostringstream's constructor
void fn_822403C8(void *result, void *buffer);               // the stream buffer's str()
void *fn_82240158(void *stream, const char *text);  // stream << text
void *fn_82520AC8(void *stream, unsigned int value); // stream << value

struct Stream_825209B0 {
    unsigned int vbtable;
    unsigned char buffer[148];
};

struct NetVar_825209B0 {
    char pad[0x7d8];
    unsigned int compressedSize;
};

void *fn_825209B0(void *result, NetVar_825209B0 *self)
{
    unsigned int size;
    void *out;
    Stream_825209B0 stream;

    fn_8223CFC0(&stream, 2, 1);
    size = self->compressedSize;
    out = fn_82240158(&stream, "Live::Player::XAvatarMetadataNetVar - compressed size {");
    out = fn_82520AC8(out, size);
    fn_82240158(out, "}");
    fn_822403C8(result, stream.buffer);
    DestroyOStringStream_8223DCC8(&stream);
    return result;
}
}
