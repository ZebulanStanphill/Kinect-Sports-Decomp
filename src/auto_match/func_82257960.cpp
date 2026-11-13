struct Pair_82257960 {
    int first;
    void *second;
};

extern "C" void fn_822315A0(void *p);

class Source_82257960 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void Get(long long value, void *out);
};

class Sink_82257960 {
public:
    virtual void v0();
    virtual void Set(void *a, void *b);
};

struct Base_82257960 {
    char pad[0x10];
    Sink_82257960 *sink;
    int pad14;
    Source_82257960 *a;
    int pad1c;
    Source_82257960 *b;
};

extern "C" void fn_82257960(char *object, long long value)
{
    Pair_82257960 pair;
    int buf[2];
    Base_82257960 *base = (Base_82257960 *)(object + 0x50);

    pair.first = 0;
    pair.second = 0;
    base->a->Get(value, buf);
    base->b->Get(value, &pair);
    if (base->sink != 0) {
        base->sink->Set(buf, &pair);
    }
    if (pair.second != 0) {
        fn_822315A0(pair.second);
    }
}
