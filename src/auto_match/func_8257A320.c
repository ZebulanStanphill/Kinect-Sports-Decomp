extern int isspace(int c);

int fn_8257A320(char **pbuf, unsigned int *plen, char *out)
{
    char *buf;
    unsigned int len;
    unsigned int i;
    unsigned int j;
    char c;

    buf = *pbuf;
    if (buf == 0 || *plen == 0 || out == 0) {
        return 0x80070057;
    }
    len = *plen;
    i = 0;
    j = 0;
    for (; i < len; i++) {
        if (j >= 0x1ff) {
            return 0x7a;
        }
        c = buf[i];
        if (c == '\n' || c == '\r') {
            while (i < len && (buf[i] == '\n' || buf[i] == '\r')) {
                i++;
            }
            out[j++] = 0;
            break;
        }
        if (j != 0 || !isspace((unsigned char)c)) {
            out[j++] = buf[i];
        }
    }
    out[j] = 0;
    if (i >= len) {
        *plen = 0;
        *pbuf = 0;
    } else {
        *plen = len - i;
        *pbuf = buf + i;
    }
    return 0;
}
