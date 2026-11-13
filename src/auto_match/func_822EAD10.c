extern unsigned char fn_822BD338(void *s, const char *text);
extern char lbl_821AE24C[];

int fn_822EAD10(void *name)
{
    if (fn_822BD338(name, "bigstretch"))
        return 0;
    if (fn_822BD338(name, "lungeforward"))
        return 1;
    if (fn_822BD338(name, "movementtoshot"))
        return 2;
    if (fn_822BD338(name, lbl_821AE24C))
        return 3;
    if (fn_822BD338(name, "quickstepbig"))
        return 4;
    if (fn_822BD338(name, "quickstepsmall"))
        return 5;
    return 3;
}
