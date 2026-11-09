typedef struct State_82C3A0F8 {
    char pad[0x2da];
    unsigned short maxLen;
} State_82C3A0F8;

typedef struct Ctx_82C3A0F8 {
    State_82C3A0F8 *state;
} Ctx_82C3A0F8;

typedef struct Item_82C3A0F8 {
    char pad0[0x24];
    int f24;
    int f28;
    char pad2c[0x1ea - 0x2c];
    unsigned short len;
} Item_82C3A0F8;

extern int fn_82C397B8(Ctx_82C3A0F8 *c, Item_82C3A0F8 *it, int a, int b);

int fn_82C3A0F8(Ctx_82C3A0F8 *c, Item_82C3A0F8 *it)
{
    State_82C3A0F8 *s = c->state;
    int hr = 0;

    if (it->f28 != 0) {
        hr = fn_82C397B8(c, it, 0, it->f24);
        if (hr >= 0) {
            s->maxLen = s->maxLen > it->len ? s->maxLen : it->len;
        }
    }
    return hr;
}
