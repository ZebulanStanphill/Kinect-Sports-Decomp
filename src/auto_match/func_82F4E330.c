typedef struct Table_82F4E330 {
    char data[0x1c];
    int valid;                  /* 0x1c */
    char pad20[0x8];
} Table_82F4E330;

typedef struct State_82F4E330 {
    char pad0[0x2c78];
    Table_82F4E330 first;       /* 0x2c78 */
    Table_82F4E330 second;      /* 0x2ca0 */
    char pad2cc8[0x2d70 - 0x2cc8];
    unsigned int flags;         /* 0x2d70 */
    float a;                    /* 0x2d74 */
    float c;                    /* 0x2d78 */
    float b;                    /* 0x2d7c */
} State_82F4E330;

extern State_82F4E330 *lbl_8326183C;
extern void fn_824B4288(void *p, unsigned int size);
extern void fn_82F4DC20(void);
extern void fn_829C62A8(unsigned int flags, float a, float b, float c, Table_82F4E330 *second, Table_82F4E330 *first);

int fn_82F4E330(float a, float b, unsigned int flags, float c)
{
    State_82F4E330 *s = lbl_8326183C;
    s->a = a;
    s->flags = flags;
    s->b = b;
    s->c = c;
    fn_824B4288(&s->first, 0x1c);
    fn_824B4288(&lbl_8326183C->second, 0xd0);
    fn_82F4DC20();
    fn_829C62A8(flags | 0x20, a, c, b, &lbl_8326183C->second, &lbl_8326183C->first);
    lbl_8326183C->first.valid = 1;
    return 1;
}
