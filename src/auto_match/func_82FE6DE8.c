typedef struct Pair_82FE6DE8 { unsigned int lo; unsigned int hi; } Pair_82FE6DE8;
typedef struct Message_82FE6DE8 {
    unsigned short type;
    unsigned short size;
    unsigned int value;
    unsigned int seq;
    Pair_82FE6DE8 time;
    unsigned int f14;
    unsigned int f18;
    unsigned int first;
    unsigned int second;
    unsigned int f24;
    unsigned char reserved[4];
} Message_82FE6DE8;

extern unsigned int lbl_832642E4;
extern unsigned int lbl_83264348;
extern unsigned int fn_8300F200(void);
extern int fn_8300F208(unsigned int queue, Message_82FE6DE8 *m, unsigned short id);

unsigned int fn_82FE6DE8(unsigned int a, unsigned int b, unsigned int c)
{
    Message_82FE6DE8 m;
    m.first = a;
    m.second = b;
    *(unsigned __int64 *)&m.time = 0;
    m.size = 0x24;
    m.f14 = 0;
    m.seq = ++lbl_83264348;
    m.value = c;
    m.f24 = 0;
    return fn_8300F208(lbl_832642E4, &m, fn_8300F200()) == 1 ? m.seq : 0;
}
