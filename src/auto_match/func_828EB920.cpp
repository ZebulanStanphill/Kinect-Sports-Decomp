// Create a player profile through the system service, then index the result
// in both profile registries. Descriptor_828EB920 preserves the by-value ABI.
struct Descriptor_828EB920 { unsigned int words[9]; };
struct Profile_828EB920 { char pad[0x54]; unsigned int key; };
struct Pair_828EB920 { unsigned int key; Profile_828EB920 *value; };
struct System_828EB920 {
    virtual void vf00(); virtual void vf04(); virtual void vf08();
    virtual void vf0C(); virtual void vf10(); virtual void vf14();
    virtual void vf18(); virtual void vf1C(); virtual void vf20();
    virtual void vf24(); virtual void vf28(); virtual void vf2C();
    virtual void vf30(); virtual void vf34(); virtual void vf38();
    virtual Profile_828EB920 *vf3C(int, int, int, unsigned __int64,
        Descriptor_828EB920, void *, int, bool, int, int, int, int, bool, bool);
};
extern "C" {
System_828EB920 *fn_825089A0();
void fn_8251C390(void *, const char *, int);
void fn_829E53B0(void *);
void *fn_828EB278(); void *fn_828EB7C8();
void *fn_828EB1E8(void *, Pair_828EB920 *);
void fn_828EAFD8(void *, void *, void *, int);
Profile_828EB920 *fn_828EB920(int a, void *name, unsigned __int64 b,
    Descriptor_828EB920 desc, int c, bool d, int e, int f, int g, int h, bool i)
{
    char scope[16];
    fn_8251C390(scope, "D:\\Work\\R1SDK\\Olympus_testing\\NetworkLibrary\\NetworkLibrary\\PlayerProfile\\PlayerProfile.cpp", 0x246);
    Profile_828EB920 *profile = fn_825089A0()->vf3C(1, 0, a, b, desc, name,
        c, d, e, f, g, h, false, i);
    void *registry = fn_828EB278();
    Pair_828EB920 value;
    value.key = profile->key;
    value.value = profile;
    fn_828EAFD8(&value, registry, fn_828EB1E8(registry, &value), 0);
    registry = fn_828EB7C8();
    value.key = profile->key;
    value.value = profile;
    fn_828EAFD8(&value, registry, fn_828EB1E8(registry, &value), 0);
    fn_829E53B0(scope);
    return profile;
}
}
