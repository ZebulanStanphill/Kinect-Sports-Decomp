extern void fn_82AA1C90(void *out, const char *format, ...);

void fn_82AA1F00(void *out, float value)
{
    unsigned int bits = *(unsigned int *)&value;
    const char *text;
    if (bits == 0x80000000) {
        text = "-0";
    } else if ((bits & 0x7f800000) == 0x7f800000) {
        if (bits == 0x7f800000) {
            text = "1.#INF";
        } else if (bits == 0xff800000) {
            text = "-1.#INF";
        } else if (bits == 0xffc00000) {
            text = "1.#IND";
        } else if (bits & 0x400000) {
            text = "1.#QNAN";
        } else {
            text = "1.#SNAN";
        }
    } else {
        fn_82AA1C90(out, "%.9g", value);
        return;
    }
    fn_82AA1C90(out, text);
}
