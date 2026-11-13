// Describes a NetDefTyped_c<olympus::review::SportParameters> as text: the type's
// name, which is first written to a stream of its own, and the value.
#include <sstream>
#include "game/OStringStreamObject_8223DCC8.h"

namespace olympus { namespace review { class SportParameters {}; } }

extern "C" {
void fn_8223CFC0(void *stream, int mode, int mostDerived); // std::ostringstream's constructor
void fn_822403C8(void *result, void *buffer);               // the stream buffer's str()
void *fn_82240158(void *stream, const void *text);         // stream << text
void *fn_8223B728(void *stream, void *string);             // stream << std::string
void fn_82230300(void *string, int built, int size);       // std::string::_Tidy
void *fn_82F644D8(const void *typeInfo, void *names);      // the type's name
extern char lbl_8326338C[];

struct Stream_82245D20 {
    int vbtable;
    char buffer[0x94];
};

struct String_82245D20 {
    int data[8];
};

void *fn_82245D20(void *result)
{
    Stream_82245D20 stream;
    Stream_82245D20 textStream;
    String_82245D20 text;
    void *name;
    void *out;

    fn_8223CFC0(&stream, 2, 1);
    fn_8223CFC0(&textStream, 2, 1);
    name = fn_82F644D8(&typeid(olympus::review::SportParameters), lbl_8326338C);
    out = fn_82240158(&textStream, "No logging available for type: ");
    fn_82240158(out, name);
    fn_822403C8(&text, textStream.buffer);
    DestroyOStringStream_8223DCC8(&textStream);
    name = fn_82F644D8(&typeid(olympus::review::SportParameters), lbl_8326338C);
    out = fn_82240158(&stream, "NetDefTyped_c< ");
    out = fn_82240158(out, name);
    out = fn_82240158(out, " > - {");
    out = fn_8223B728(out, &text);
    fn_82240158(out, "}");
    fn_82230300(&text, 1, 0);
    fn_822403C8(result, stream.buffer);
    DestroyOStringStream_8223DCC8(&stream);
    return result;
}
}
