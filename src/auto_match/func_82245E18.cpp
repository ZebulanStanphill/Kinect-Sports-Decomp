// Describes a NetDefTyped_c<T> as text: the type's name and the value, which is
// first written to a stream of its own.
#include "game/OStringStreamObject_8223DCC8.h"

extern "C" {
void fn_8223CFC0(void *stream, int mode, int mostDerived); // std::ostringstream's constructor
void fn_822403C8(void *result, void *buffer);               // the stream buffer's str()
void *fn_82240158(void *stream, const void *text);     // stream << text
void fn_8223FBB0(void *stream, unsigned int value);    // stream << value
void *fn_8223B728(void *stream, void *string);         // stream << std::string
void fn_82230300(void *string, int built, int size);   // std::string::_Tidy
void *fn_82F644D8(void *typeInfo, void *names);        // the type's name
extern char lbl_831D70C4[];
extern char lbl_8326338C[];

struct Stream_82245E18 {
    int vbtable;
    char buffer[0x94];
};

struct String_82245E18 {
    int data[8];
};

void *fn_82245E18(void *result, void *unused1, void *unused2, int *value)
{
    Stream_82245E18 stream;
    Stream_82245E18 valueStream;
    String_82245E18 valueText;
    unsigned int *data;
    void *name;
    void *out;

    fn_8223CFC0(&stream, 2, 1);
    if ((unsigned int)value[3] <= 4) {
        data = (unsigned int *)(value + 2);
    } else {
        data = (unsigned int *)value[2];
    }
    fn_8223CFC0(&valueStream, 2, 1);
    fn_8223FBB0(&valueStream, *data);
    fn_822403C8(&valueText, valueStream.buffer);
    DestroyOStringStream_8223DCC8(&valueStream);
    name = fn_82F644D8(lbl_831D70C4, lbl_8326338C);
    out = fn_82240158(&stream, "NetDefTyped_c< ");
    out = fn_82240158(out, name);
    out = fn_82240158(out, " > - {");
    out = fn_8223B728(out, &valueText);
    fn_82240158(out, "}");
    fn_82230300(&valueText, 1, 0);
    fn_822403C8(result, stream.buffer);
    DestroyOStringStream_8223DCC8(&stream);
    return result;
}
}
