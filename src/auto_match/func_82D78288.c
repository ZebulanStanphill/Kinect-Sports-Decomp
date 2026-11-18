typedef struct Pair_82D78288 {
    unsigned short x; /* 0x00 */
    unsigned short y; /* 0x02 */
} Pair_82D78288;

typedef struct Set_82D78288 {
    Pair_82D78288 e[8]; /* 0x00 */
    unsigned char pad20;
    unsigned char count; /* 0x21 */
    unsigned char dirty; /* 0x22 */
} Set_82D78288;

void fn_82D78288(Set_82D78288 *s, int index)
{
    {
        unsigned char *dirty = &s->dirty;

        *dirty = 0;
    }
    s->e[index] = s->e[s->count - 1];
    s->count--;
}
