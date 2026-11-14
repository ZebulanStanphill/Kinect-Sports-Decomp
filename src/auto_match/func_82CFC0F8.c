extern unsigned int strlen(const char *s);

void fn_82CFC0F8(unsigned char *out, const char *self, const char *suffix)
{
    int len = strlen(self);
    int suffixLen = strlen(suffix);
    int i;
    int offset;

    if (len < suffixLen) {
        *out = 0;
        return;
    }
    offset = len - suffixLen;
    for (i = 0; i < suffixLen; i++) {
        if (self[offset + i] != suffix[i]) {
            *out = 0;
            return;
        }
    }
    *out = 1;
}
