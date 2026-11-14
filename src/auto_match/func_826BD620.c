extern void fn_826BD398(char *out, int *len, unsigned int c);

void fn_826BD620(char *out, const unsigned short *text, int count)
{
    int len = 0;
    int i = 0;

    if (count != -1) {
        for (; i < count; i++) {
            if (*text == 0)
                break;
            fn_826BD398(out, &len, *text);
            text++;
        }
    } else {
        while (text[i] != 0) {
            fn_826BD398(out, &len, text[i]);
            i++;
        }
    }
    out[len] = 0;
}
