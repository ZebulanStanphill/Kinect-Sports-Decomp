// Describes an ActuatorTeleportMsg as text: its time and its object.
#include "game/OStringStreamObject_8223DCC8.h"

extern "C" {
void fn_8223CFC0(void *stream, int mode, int mostDerived); // std::ostringstream's constructor
void fn_822403C8(void *result, void *buffer);               // the stream buffer's str()
void *fn_82240158(void *stream, const char *text);     // stream << text
void *fn_82520AC8(void *stream, unsigned int value);   // stream << value
void fn_8223B728(void *stream, void *string);          // stream << std::string
void fn_82230300(void *string, int built, int size);   // std::string::_Tidy
void *fn_828B5B28(void *string, void *object, void *context); // the object's description

struct Msg_825AC948 {
    char pad[0x80];
    unsigned int time;
    char object[4];
};

void *fn_825AC948(void *result, Msg_825AC948 *self, void *context)
{
    unsigned int time;
    void *objectText;
    void *out;
    struct {
        unsigned char text[32];
        unsigned char stream[4];
        unsigned char buffer[148];
    } locals;

    fn_8223CFC0(locals.stream, 2, 1);
    objectText = fn_828B5B28(locals.text, self->object, context);
    time = self->time;
    out = fn_82240158(locals.stream, "ActuatorTeleportMsg - Time:");
    out = fn_82520AC8(out, time);
    out = fn_82240158(out, ", Object:");
    fn_8223B728(out, objectText);
    fn_82230300(locals.text, 1, 0);
    fn_822403C8(result, locals.buffer);
    DestroyOStringStream_8223DCC8(locals.stream);
    return result;
}
}
