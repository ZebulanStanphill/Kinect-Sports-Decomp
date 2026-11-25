typedef struct Chunk_829AAFE0 {
    char pad0[0x60c];
    unsigned char tag[4]; /* 0x60c */
} Chunk_829AAFE0;

extern const char lbl_820520E4[16]; /* "0123456789ABCDEF" */
extern void *memcpy(void *dest, const void *src, unsigned int count);

/* Writes the chunk's four-character tag, escaping odd characters as [XX],
   then ": " and the name if there is one. */
void fn_829AAFE0(Chunk_829AAFE0 *chunk, char *out, const char *name)
{
    int i;
    int n;
    int c;

    n = 0;
    i = 0;
    while (i < 4) {
        c = chunk->tag[i++];
        if (c < 0x29 || c > 0x7a || (c > 0x5a && c < 0x61)) {
            out[n++] = '[';
            out[n++] = lbl_820520E4[(c >> 4) & 0xf];
            out[n++] = lbl_820520E4[c & 0xf];
            out[n] = ']';
        } else {
            out[n] = c;
        }
        n++;
    }
    if (name == 0) {
        out[n] = 0;
    } else {
        out[n++] = ':';
        out[n++] = ' ';
        memcpy(out + n, name, 0x40);
        out[n + 0x3f] = 0;
    }
}
