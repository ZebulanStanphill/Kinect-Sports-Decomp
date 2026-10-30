struct Streambuf_82CED9E8 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int Sputn(const char *s, int n);
};
struct Ostream_82CED9E8 {
    int vbptr;
    int pad;
    Streambuf_82CED9E8 *sb;
};
extern "C" {
int fn_82CFBB60(char *, int, const char *, ...);
unsigned int fn_82CFBE40(const char *);
Ostream_82CED9E8 *fn_82CEDDC0(Ostream_82CED9E8 *os, __int64 v)
{
    char buf[10032];
    fn_82CFBB60(buf, 0x2728, "%I64i", v);
    Streambuf_82CED9E8 *sb = os->sb;
    sb->Sputn(buf, fn_82CFBE40(buf));
    return os;
}
}
