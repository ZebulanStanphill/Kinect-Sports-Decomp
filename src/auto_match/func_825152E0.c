/* Returns the description of a status code in a string object (hidden result
   pointer out). Codes below 6 are described by fn_8288ABF8, which receives the
   same arguments; unknown codes give the empty string lbl_82196582. */
typedef struct String_825152E0 {
    char b[32];
} String_825152E0;

extern char lbl_82196582[];
extern void fn_82230110(String_825152E0 *s, const char *text);
extern String_825152E0 *fn_8288ABF8(String_825152E0 *out, void *self, unsigned int code);

String_825152E0 *fn_825152E0(String_825152E0 *out, void *self, unsigned int code)
{
    if (code < 6) {
        fn_8288ABF8(out, self, code);
        return out;
    }
    switch (code) {
    case 6:
        fn_82230110(out, "Avatar is being force warped");
        return out;
    case 7:
        fn_82230110(out, "Avatar is inactive");
        return out;
    case 8:
        fn_82230110(out, "Avatar is being carried");
        return out;
    case 9:
        fn_82230110(out, "Avatar rigid body has attachments");
        return out;
    case 10:
        fn_82230110(out, "Avatar obj inst has not yet been created");
        return out;
    }
    fn_82230110(out, lbl_82196582);
    return out;
}
