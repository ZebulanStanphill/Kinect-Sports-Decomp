#include <sstream>
#include "game/OStringStreamObject_8223DCC8.h"

struct Stream_82513478 {
    int vbtable;
    char buffer[0x94];
};

struct String_82513478 {
    int data[8];
};

struct Session_82513478 {
    char pad[8];
    int network;
    char pad2[0x10];
    String_82513478 type;
};

extern "C" {
void fn_8223CFC0(void *, int, int);
void *fn_822403C8(void *, void *);
void *fn_82240158(void *, const char *);
void *fn_8223B728(void *, const void *);
void fn_82230300(void *, int, int);
unsigned int fn_828C1DD8(int);
unsigned int fn_828ACD28(int);
unsigned char fn_828ACCE8(int);
int fn_828B1340(void *);
const unsigned char *fn_828A1B60(int);
int fn_8289EEE0(int);
String_82513478 *fn_828EFE38(String_82513478 *, const unsigned char *);
String_82513478 *fn_8289FDC8(String_82513478 *, int, char);
extern char lbl_821C24F0[];

void *fn_82513478(void *result, const Session_82513478 *self)
{
    Stream_82513478 stream;
    void *out;
    const char *label;

    fn_8223CFC0(&stream, 2, 1);
    fn_8223B728(fn_82240158(&stream, "Session (Type:"), &self->type);
    fn_82240158(&stream, ", Net Mode:");
    switch (fn_828C1DD8(self->network)) {
    case 3:
        label = "LOCAL";
        break;
    case 2:
        label = "LIVE";
        break;
    case 1:
        label = "SYSLINK";
        break;
    case 0:
        label = "NONE";
        break;
    default:
        label = 0;
        break;
    }
    if (label) {
        fn_82240158(&stream, label);
    }
    fn_82240158(&stream, ", Conn State:");
    switch (fn_828ACD28(self->network)) {
    case 3:
        label = "Leaving";
        break;
    case 2:
        label = "Connected";
        break;
    case 1:
        label = "Connecting";
        break;
    case 0:
        label = "Not Connected";
        break;
    default:
        label = 0;
        break;
    }
    if (label) {
        fn_82240158(&stream, label);
    }
    if (fn_828ACCE8(self->network)) {
        if ((unsigned char)fn_828B1340((void *)self->network)) {
            fn_82240158(&stream, ", HOST MIGRATION IN PROGRESS...");
        } else {
            String_82513478 owner;
            String_82513478 key;
            String_82513478 *keyText = fn_828EFE38(&key, fn_828A1B60(self->network));
            String_82513478 *ownerText;

            fn_8223B728(fn_82240158(&stream, ", XNKID:"), keyText);
            fn_82230300(&key, 1, 0);
            ownerText = fn_8289FDC8(&owner, fn_8289EEE0(self->network), 0);
            fn_8223B728(fn_82240158(&stream, ", Owner:"), ownerText);
            fn_82230300(&owner, 1, 0);
        }
    }
    fn_82240158(&stream, lbl_821C24F0);
    fn_822403C8(result, stream.buffer);
    DestroyOStringStream_8223DCC8(&stream);
    return result;
}
}
