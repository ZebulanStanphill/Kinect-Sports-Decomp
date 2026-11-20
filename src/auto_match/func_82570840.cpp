#include <vector>

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" __vector4 __VMXGetReg(int n);

struct __declspec(align(16)) Element_82570B78 {
    int id;       /* 0x00 */
    void *object; /* 0x04 */
    int value;    /* 0x08 */
    int pad0c;    /* 0x0c */
    __vector4 a;  /* 0x10 */
    __vector4 b;  /* 0x20 */
};

typedef Element_82570B78 T;

template <> void std::vector<T>::push_back(const T &element);

struct Context_82570840 {
    char pad0[0x844];
    void *list; /* 0x844 */
};

struct Object_82566CA8 {
    char pad0[0x11c];
    int flag; /* 0x11c */
};

struct Owner_82570840 {
    Context_82570840 *context; /* 0x00 */
    int nextId;                /* 0x04 */
    std::vector<T> elements;   /* 0x08 */
};

extern "C" {
Object_82566CA8 *fn_82566CA8(void *list, int a, int b, int c, int d, int e, float x, int f);
extern __vector4 lbl_82196750;
int fn_82570840(Owner_82570840 *self, int arg, unsigned char flag, int value);
}

int fn_82570840(Owner_82570840 *self, int arg, unsigned char flag, int value)
{
    Object_82566CA8 *object;
    int id;
    T element;

    object = fn_82566CA8(self->context->list, arg, 4, 0, 0, 0, 0.0f, 0);
    if (object != 0) {
        element.object = object;
        object->flag = flag != 0;
        id = ++self->nextId;
        element.id = id;
        element.a = __VMXGetReg(77);
        element.b = lbl_82196750;
        element.value = value;
        self->elements.push_back(element);
        return id;
    }
    return -1;
}
