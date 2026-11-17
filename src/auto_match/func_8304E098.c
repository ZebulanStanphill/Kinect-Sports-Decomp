typedef struct Object_8304E098 Object_8304E098;

struct Object_8304E098 {
    int (**vtable)();
};

extern int fn_8304DD90(void *, unsigned int *);
extern int fn_8304DE60(void *, unsigned int);
extern void fn_8304DF58(void *);

int fn_8304E098(char *self)
{
    unsigned int position;
    unsigned int *remaining = (unsigned int *)(self + 0x3c);
    unsigned int *available = (unsigned int *)(self + 0x34);
    Object_8304E098 *stream = *(Object_8304E098 **)(self + 0x28);
    int result = stream->vtable[11](stream, available, remaining, 0);
    if (result == 46) {
        return 63;
    }
    if ((result != 45 && result != 17) || !*available) {
        return 2;
    }
    result = (*(Object_8304E098 *)self).vtable[14](self, *(unsigned short *)(*(int *)(self + 8) + 0xd4));
    if (result != 1) {
        return result;
    }
    self[0x41] = 0;
    if (*(unsigned char *)(*(int *)(self + 8) + 0xdb) & 0x80) {
        result = fn_8304DD90(self, &position);
        if (result != 1) {
            return result;
        }
        if (position < *remaining) {
            *(unsigned int *)(self + 0x54) = position;
        } else {
            if (fn_8304DE60(self, position) != 1) {
                return 2;
            }
            stream = *(Object_8304E098 **)(self + 0x28);
            stream->vtable[12](stream);
            *remaining = 0;
            return 1;
        }
        fn_8304DF58(self);
        return 1;
    } else {
        fn_8304DF58(self);
        return 1;
    }
}
