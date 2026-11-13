extern unsigned char fn_822BD338(void *s, const char *text);
extern char lbl_821AE24C[];

int fn_822EADF8(void *name)
{
    if (fn_822BD338(name, "backspin"))
        return 0;
    if (fn_822BD338(name, "block"))
        return 1;
    if (fn_822BD338(name, lbl_821AE24C))
        return 2;
    if (fn_822BD338(name, "power"))
        return 3;
    if (fn_822BD338(name, "push"))
        return 4;
    if (fn_822BD338(name, "topspin"))
        return 5;
    return 2;
}
