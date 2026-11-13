extern unsigned int lbl_832642E4;
extern unsigned fn_8300F100(void);
extern void fn_8300F208(unsigned int, void *, unsigned short);

struct Msg_82FE85A0 {
    short unused;
    short kind;
    int x;
    unsigned int id;
    unsigned char y;
    unsigned char z;
    char pad[30];
};

void fn_82FE85A0(int a, unsigned int id)
{
    struct Msg_82FE85A0 m;
    m.kind = 3;
    m.x = a;
    m.id = id != 0x2ca33bdb ? id : 0;
    m.y = 0;
    m.z = 0;
    fn_8300F208(lbl_832642E4, &m, fn_8300F100());
}
