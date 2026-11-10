struct Pair_826D6F48 {
    int a;
    int b;
    Pair_826D6F48(const Pair_826D6F48 &o) : a(o.a), b(o.b) {}
};

struct Obj_826D6F48 {
    unsigned char pad00[0x74];
    int threadMode;
    unsigned char pad78[0xd4 - 0x78];
    unsigned char lock[0x1c];
    Pair_826D6F48 *entries;
};

extern "C" void RtlEnterCriticalSection(void *cs);
extern "C" void RtlLeaveCriticalSection(void *cs);

struct Lock_826D6F48 {
    void *cs;
    Lock_826D6F48(void *c) : cs(c) { RtlEnterCriticalSection(cs); }
    ~Lock_826D6F48() { RtlLeaveCriticalSection(cs); }
};

extern "C" Pair_826D6F48 fn_826D6F48(Obj_826D6F48 *obj, unsigned int index)
{
    if (obj->threadMode >= 2) {
        return obj->entries[index];
    } else {
        Lock_826D6F48 l(obj->lock);
        return obj->entries[index];
    }
}
