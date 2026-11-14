typedef struct Reader_827B0990 {
    int unused;
} Reader_827B0990;

typedef struct Table_827B0990 {
    char pad0[0xc];
    Reader_827B0990 reader;     /* 0x0c */
} Table_827B0990;

extern unsigned int fn_827664B0(Reader_827B0990 *reader, unsigned int pos, unsigned int *out);
extern unsigned int fn_827668B8(Reader_827B0990 *reader, unsigned int pos, unsigned char *out);

unsigned int fn_827B0990(Table_827B0990 *self, unsigned int pos)
{
    unsigned int hash = 0;
    unsigned int length;
    unsigned int count;
    unsigned int n;
    unsigned int i;
    unsigned char bytes[8];

    pos += fn_827664B0(&self->reader, pos, &length);
    count = length >> 1;
    while (count != 0) {
        count--;
        n = fn_827668B8(&self->reader, pos, bytes);
        pos += n;
        for (i = 0; i < n; i++) {
            hash = hash * 33 ^ bytes[i];
        }
    }
    return hash;
}
