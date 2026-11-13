typedef struct String_8232B670 {
    char b[32];
} String_8232B670;

extern char lbl_82196582[];
extern void fn_82230110(String_8232B670 *s, const char *text);

String_8232B670 *fn_8232B670(String_8232B670 *out, unsigned int type)
{
    switch (type) {
    case 0:
        fn_82230110(out, "Straight");
        return out;
    case 1:
        fn_82230110(out, "Left Hook");
        return out;
    case 2:
        fn_82230110(out, "Right Hook");
        return out;
    case 3:
        fn_82230110(out, "Uppercut");
        return out;
    case 4:
        fn_82230110(out, "Invalid");
        return out;
    }
    fn_82230110(out, lbl_82196582);
    return out;
}
