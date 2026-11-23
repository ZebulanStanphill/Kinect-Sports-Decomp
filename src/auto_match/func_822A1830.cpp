#include <sstream>
#include "game/OStringStreamObject_8223DCC8.h"

extern "C" {
typedef struct Stream_822A1830 {
    int vbtable;
    char buffer[0x9c];
} Stream_822A1830;

typedef struct String_822A1830 {
    union {
        char buf[16];
        char *ptr;
    } u;

    unsigned int size;
    unsigned int capacity;
} String_822A1830;

typedef struct Settings_822A1830 {
    char pad0[0x8];
    float messageTime; /* 0x8 */
} Settings_822A1830;

typedef struct Channel_822A1830 {
    char pad0[0xc];
    int state;   /* 0xc */
    float timer; /* 0x10 */
    int busy;    /* 0x14 */
} Channel_822A1830;

typedef struct Self_822A1830 {
    char pad0[0x14];
    Channel_822A1830 *channel; /* 0x14 */
    char pad18[0x4];
    int strings; /* 0x1c */
} Self_822A1830;

/* the random number generator's state */
extern unsigned int lbl_83265A28;
extern Settings_822A1830 lbl_831CE908;
extern const char *lbl_8219386C[5];

void fn_8223CFC0(void *stream, int mode, int mostDerived);       // std::ostringstream's constructor
void fn_822403C8(void *result, void *buffer);                    // the stream buffer's str()
void *fn_82240158(void *stream, const char *text);               // stream << text
void *fn_82520AC8(void *stream, int value);                      // stream << value
void fn_82230300(void *string, int built, unsigned int newsize); // std::string's _Tidy
int fn_82358FD8(int strings, wchar_t *buf, int count, const char *key);
void fn_8229D418(Channel_822A1830 *channel, const char *text, wchar_t *message);

void fn_822A1830(Self_822A1830 *self, const char *text, int kind)
{
    union {
        unsigned int bits;
        float value;
    } random;

    Channel_822A1830 *channel;
    float messageTime;
    String_822A1830 key;
    Stream_822A1830 stream;
    wchar_t message[0x400];

    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    random.bits = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
    fn_8223CFC0(&stream, 2, 1);
    fn_82520AC8(fn_82240158(&stream, lbl_8219386C[kind]), 1 - (int)((random.value - 1.0f) * -3.0f));
    fn_822403C8(&key, stream.buffer);
    fn_82358FD8(self->strings, message, 0x400, key.capacity >= 16 ? key.u.ptr : key.u.buf);
    fn_82230300(&key, 1, 0);
    channel = self->channel;
    messageTime = lbl_831CE908.messageTime;
    if (channel->busy == 0) {
        fn_8229D418(channel, text, message);
        channel->timer = messageTime;
        channel->state = 1;
    }
    DestroyOStringStream_8223DCC8(&stream);
}
}
