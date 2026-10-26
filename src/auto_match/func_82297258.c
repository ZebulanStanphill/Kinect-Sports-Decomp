extern int fn_82F62DA8(unsigned char *out, int key, unsigned int *len, char *tbl);

unsigned char fn_82297258(char *p, int key, unsigned char def)
{
    unsigned char b[4];
    unsigned int len = 0;
    if (fn_82F62DA8(b, key, &len, p + 0x18) != 1) {
        return def;
    }
    return b[0];
}
