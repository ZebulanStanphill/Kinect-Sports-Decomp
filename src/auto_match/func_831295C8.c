typedef struct Vec4_831295C8 {
    float v[4];
} Vec4_831295C8;

typedef struct Global_831295C8 {
    void *f0;
    int triple[3];    /* 0x04 */
    __int64 block[5]; /* 0x10 */
    Vec4_831295C8 a;  /* 0x38 */
    Vec4_831295C8 b;  /* 0x48 */
    int count;        /* 0x58 */
} Global_831295C8;

extern Global_831295C8 lbl_83217B08;
extern void fn_829E37B0(Vec4_831295C8 *v);
extern void *memset(void *dest, int value, unsigned int size);

void fn_831295C8(void)
{
    memset(lbl_83217B08.triple, 0, sizeof(lbl_83217B08.triple));
    memset(lbl_83217B08.block, 0, sizeof(lbl_83217B08.block));
    fn_829E37B0(&lbl_83217B08.a);
    fn_829E37B0(&lbl_83217B08.b);
    memset(&lbl_83217B08.count, 0, sizeof(lbl_83217B08.count));
}
