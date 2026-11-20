#include "havok/hkString.h"

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
Ostream_82CED9E8 *fn_82CEDC20(Ostream_82CED9E8 *os, unsigned short v)
{
    char buf[10032];
    hkString::snprintf(buf, 0x2728, "%u", v);
    Streambuf_82CED9E8 *sb = os->sb;
    sb->Sputn(buf, hkString::strLen(buf));
    return os;
}
}
