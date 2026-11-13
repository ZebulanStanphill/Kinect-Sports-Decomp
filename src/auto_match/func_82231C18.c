/* Returns the description of a status code in a string object (hidden result
   pointer out). Codes below 0x21 are described by fn_82515390, which receives the
   same arguments; unknown codes give the empty string lbl_82196582. */
typedef struct String_82231C18 {
    char b[32];
} String_82231C18;

extern char lbl_82196582[];
extern void fn_82230110(String_82231C18 *s, const char *text);
extern String_82231C18 *fn_82515390(String_82231C18 *out, void *self, unsigned int code);

String_82231C18 *fn_82231C18(String_82231C18 *out, void *self, unsigned int code)
{
    if (code < 0x21) {
        fn_82515390(out, self, code);
        return out;
    }
    switch (code) {
    case 0x21:
        fn_82230110(out, "The session network object was destroyed");
        return out;
    case 0x22:
        fn_82230110(out, "There were not enough players to continue playing the game");
        return out;
    case 0x23:
        fn_82230110(out, "Failed to connect/Lost connection to the sport network, so kicking out of the lobby network");
        return out;
    case 0x24:
        fn_82230110(out, "Failed to connect/Lost connection to the lobby network, so kicking out of the sport network");
        return out;
    case 0x25:
        fn_82230110(out, "Failed to join the session from an invitation");
        return out;
    }
    fn_82230110(out, lbl_82196582);
    return out;
}
