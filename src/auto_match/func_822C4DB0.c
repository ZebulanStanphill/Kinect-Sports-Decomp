typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float v[4];
} __vector4;

extern unsigned char fn_8288B760(void *);
extern void fn_822CA5B0(void *);
extern void fn_822C6D68(void *, void *, void *, __vector4);
extern void fn_822C69F0(void *, void *, void *, __vector4);

typedef struct State_822C4DB0 {
    char pad[0x114];
    char *object;
    char gap[0x50];
    void *handle;
    int active;
} State_822C4DB0;

void fn_822C4DB0(State_822C4DB0 *self, __vector4 a, __vector4 b)
{
    int active;
    if (self->handle)
        active = fn_8288B760(self->handle);
    else
        active = self->active;
    if (!active && self->handle)
        fn_822CA5B0(self->handle);
    else {
        void *object = self->object + 0x50;
        void *last = (char *)self + 0xc0;
        void *first = (char *)self + 0x80;
        fn_822C6D68(object, first, last, a);
        fn_822C69F0(object, first, last, b);
    }
}
