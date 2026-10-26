typedef unsigned __int64 U64;
typedef unsigned int size_t;
void *memset(void *d, int c, size_t n);

/* 56-byte record cleared as a whole; the int at 0x2c is then set. */
typedef struct {
    U64 unk0[5];
    int unk28;
    int value;
    U64 unk30;
} Rec;

void fn_82C4DDF0(Rec *r, int value)
{
    memset(r, 0, sizeof(*r));
    r->value = value;
}
