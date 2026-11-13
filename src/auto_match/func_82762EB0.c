typedef struct Iter_82762EB0 {
    unsigned char pad[0x20];
    unsigned char state;
    unsigned char rest[0x5F];
} Iter_82762EB0;

extern void fn_82760648(Iter_82762EB0 *it, unsigned char *a);
extern void fn_827629D8(Iter_82762EB0 *it, unsigned char *sub);
extern void fn_82783F98(unsigned char *sub, float f);
extern void fn_827842B8(unsigned char *sub);

void fn_82762EB0(unsigned char *a, unsigned char *sub, float f)
{
    Iter_82762EB0 it;

    fn_827842B8(sub);
    fn_82783F98(sub, f);
    sub[0x44] = (a[0x24] >> 3) & 1;
    fn_82760648(&it, a);
    while (it.state != 1) {
        fn_827629D8(&it, sub);
    }
}
