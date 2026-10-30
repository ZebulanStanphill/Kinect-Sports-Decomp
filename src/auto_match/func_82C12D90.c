typedef struct { char base[0x2c]; char data[0x50]; } Self;
extern void fn_82C06348(Self *s);
extern void *memset(void *d, int c, unsigned int n);

Self *fn_82C12D90(Self *s)
{
    fn_82C06348(s);
    memset(s->data, 0, 0x50);
    return s;
}
