typedef struct Node_828C60E0 {
    int pad0;
    int pad4;
    int freq;   /* +0x8 */
    int value;  /* +0xc */
} Node_828C60E0;

extern char lbl_82015A34[];

char *strcat(char *dst, const char *src);

extern void *fn_8223FDB8(void *s);
extern void *fn_82240158(void *s, const char *str);
extern void *fn_82517B60(void *s, int c);
extern void *fn_82520AC8(void *s, int v);

void fn_828C60E0(Node_828C60E0 *node, void *stream, unsigned int depth)
{
    char buf[256];
    unsigned int i;
    int freq;
    int value;
    void *s;

    buf[0] = 0;
    for (i = 0; i < depth; i++) {
        strcat(buf, lbl_82015A34);
    }
    freq = node->freq;
    value = node->value;
    s = fn_82240158(stream, buf);
    s = fn_82240158(s, "Leaf: Value = ");
    s = fn_82520AC8(s, value);
    s = fn_82240158(s, ", Freq = ");
    s = fn_82520AC8(s, freq);
    fn_82517B60(s, 10);
    fn_8223FDB8(s);
}
