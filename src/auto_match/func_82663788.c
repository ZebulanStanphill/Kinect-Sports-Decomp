extern unsigned char fn_82663AF8(void *self, short *where);
extern unsigned char fn_82663A00(void *self, int value, int flag);
extern short *fn_82663B70(void *self);
extern void *fn_826638E8(void *self, void *out, int index, int value);
extern void fn_82297D98(short *first, short *where, int value);
extern void fn_82663848(void *self, int value);

void *fn_82663788(void *self, short *where, int value)
{
    if (fn_82663AF8(self, where)) {
        return fn_826638E8(self, self, where - fn_82663B70(self), value);
    }
    if (fn_82663A00(self, value, 0)) {
        fn_82297D98(fn_82663B70(self), where, value);
        fn_82663848(self, value);
    }
    return self;
}
