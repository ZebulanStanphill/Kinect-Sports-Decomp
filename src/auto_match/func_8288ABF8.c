typedef struct String_8288ABF8 {
    char b[32];
} String_8288ABF8;

extern char lbl_82196582[];
extern void fn_82230110(String_8288ABF8 *s, const char *text);

String_8288ABF8 *fn_8288ABF8(String_8288ABF8 *out, void *self, unsigned int result)
{
    const char *text;

    switch (result) {
    case 0:
        text = "Granted";
        break;
    case 1:
        text = "Default refused at base level";
        break;
    case 2:
        text = "Object not found";
        break;
    case 3:
        text = "Object not local";
        break;
    case 4:
        text = "CanSetVars set to false";
        break;
    case 5:
        text = "Cant transfer ownership of global netobj";
        break;
    default:
        text = lbl_82196582;
        break;
    }
    fn_82230110(out, text);
    return out;
}
