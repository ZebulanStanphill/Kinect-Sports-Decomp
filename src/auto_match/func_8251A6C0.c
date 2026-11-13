typedef struct String_8251A6C0 {
    char b[32];
} String_8251A6C0;

extern char lbl_82196582[];
extern void fn_82230110(String_8251A6C0 *s, const char *text);

String_8251A6C0 *fn_8251A6C0(String_8251A6C0 *out, int error)
{
    switch (error) {
    case 1:
        fn_82230110(out, "Matchmaking failed because no primary profile exists anymore");
        return out;
    case 2:
        fn_82230110(out, "The main Gamer Profile is not able to play on live!");
        return out;
    case 3:
        fn_82230110(out, "Matchmaking failed to create a session");
        return out;
    case 4:
        fn_82230110(out, "Matchmaking failed due to join failure when we were told not to fall back on a create");
        return out;
    case 5:
        fn_82230110(out, "Matchmaking failed because the search failed. Possible incorrect parameters passed to search.");
        return out;
    case 6:
        fn_82230110(out, "Matchmaking general failure.");
        return out;
    }
    fn_82230110(out, lbl_82196582);
    return out;
}
