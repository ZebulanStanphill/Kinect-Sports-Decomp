#include <sstream>
#include "game/OStringStreamObject_8223DCC8.h"

struct Stream_8251A540 {
    int vbtable;
    char buffer[0x94];
};

struct String_8251A540 {
    int data[8];
};

struct Matchmaking_8251A540 {
    char pad0[0xc];
    int error;
    char pad10[0x24];
    int publicSlots;
    int privateSlots;
    char pad3C[8];
    int session;
    char pad48[8];
    unsigned int state;
};

extern "C" {
void fn_8223CFC0(void *, int, int);
void fn_822403C8(void *, void *);
void *fn_82240158(void *, const void *);
void *fn_8223B728(void *, void *);
void fn_82230300(void *, int, int);
void *fn_82520AC8(void *, int);
String_8251A540 *fn_8251A6C0(String_8251A540 *, int);
String_8251A540 *fn_828B9720(String_8251A540 *, int, unsigned __int64, char, char);
extern char lbl_821C24F0[];

void *fn_8251A540(void *result, const Matchmaking_8251A540 *match)
{
    Stream_8251A540 stream;
    String_8251A540 error;
    String_8251A540 session;
    void *out;
    String_8251A540 *text;
    const char *suffix = lbl_821C24F0;
    fn_8223CFC0(&stream, 2, 1);
    fn_82240158(&stream, "Matchmaking (State:");
    switch (match->state) {
    case 2:
        text = fn_8251A6C0(&error, match->error);
        out = fn_82240158(&stream, "Failed (Reason:");
        fn_82240158(fn_8223B728(out, text), suffix);
        fn_82230300(&error, 1, 0);
        break;
    case 4: {
        int privateSlots = match->privateSlots;
        int publicSlots = match->publicSlots;
        out = fn_82240158(&stream, "Creating (Public slots:");
        out = fn_82520AC8(out, publicSlots);
        out = fn_82240158(out, ", Private slots:");
        fn_82240158(fn_82520AC8(out, privateSlots), suffix);
        break;
    }
    case 3:
        fn_82240158(&stream, "Searching");
        break;
    case 5:
        text = fn_828B9720(&session, match->session, 0, 0, 0);
        out = fn_82240158(&stream, "Joining (Session:");
        fn_82240158(fn_8223B728(out, text), suffix);
        fn_82230300(&session, 1, 0);
        break;
    case 1:
        fn_82240158(&stream, "Success");
        break;
    case 0:
        fn_82240158(&stream, "None");
        break;
    }
    fn_82240158(&stream, suffix);
    fn_822403C8(result, stream.buffer);
    DestroyOStringStream_8223DCC8(&stream);
    return result;
}
}
