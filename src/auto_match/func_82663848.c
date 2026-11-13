typedef struct WString_82663848 {
    char pad0[0x10];
    unsigned int size;
} WString_82663848;

extern unsigned short *fn_82663B70(WString_82663848 *s);
extern void fn_82297DA0(unsigned short *dst, const unsigned short *src);

void fn_82663848(WString_82663848 *s, unsigned int n)
{
    unsigned short nul = 0;
    fn_82297DA0(&fn_82663B70(s)[s->size = n], &nul);
}
