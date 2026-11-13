struct Range_82DFC0E8 {
    float lo;
    float hi;
};

struct Owner_82DFC0E8;

class Handler_82DFC0E8 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void Process(void *input, Owner_82DFC0E8 *owner, void *a, void *b, Range_82DFC0E8 *range);
};

struct Owner_82DFC0E8 {
    char pad0[0x28];
    Handler_82DFC0E8 *handler;
    char pad2c[0x88];
    Range_82DFC0E8 range;
};

extern "C" void fn_82DFC0E8(Owner_82DFC0E8 *self, void *input, void *a, void *b)
{
    Range_82DFC0E8 range;

    range.hi = self->range.hi;
    range.lo = self->range.lo;
    self->handler->Process(input, self, a, b, &range);
    self->range.hi = range.hi;
    self->range.lo = range.lo;
}
