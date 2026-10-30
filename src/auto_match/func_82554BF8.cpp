struct Elem_82554BF8 { char data[0x34]; };

class Source_82554BF8 {
public:
    virtual void v0();
    virtual void get(Elem_82554BF8 **out);
};

extern "C" Elem_82554BF8 *fn_82554BF8(Source_82554BF8 *src, int index)
{
    Elem_82554BF8 *base = 0;
    src->get(&base);
    if (base != 0) {
        base = base + index;
    }
    return base;
}
