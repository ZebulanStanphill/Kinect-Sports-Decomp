struct Owner_82718C80 {
    char pad0[0x288];
    void *heap; /* 0x288 */
    char pad28C[0x18];
    unsigned char state; /* 0x2a4 */
};

struct Context_82718C80 {
    char pad0[0x78];
    Owner_82718C80 *owner; /* 0x78 */
    unsigned char count;   /* 0x7c */
};

struct Bounds_82718C80 {
    float x;
    float y;
    float width;
    float height;
};

struct Value_82718C80 {
    unsigned char type; /* 0x00 */
    char pad1[3];
    unsigned char bit; /* 0x04 */
};

struct Widget_82718C80;

struct Vtable_82718C80 {
    void *pad0[22];
    Context_82718C80 *(*getContext)(Widget_82718C80 *self);
};

struct Widget_82718C80 {
    Vtable_82718C80 *vtable; /* 0x00 */
    char pad4[0x88];
    unsigned int flags; /* 0x8c */
    char pad90[0x10];
    Bounds_82718C80 *bounds; /* 0xa0 */
};

extern "C" void *fn_8267B890(void *heap, int size, int flags);

class Object_82718C80
{
  public:
    Object_82718C80(Context_82718C80 *context);

    static void *operator new(unsigned int size, void *heap)
    {
        return fn_8267B890(heap, size, 0);
    }

  private:
    char storage[0x30];
};

extern "C" unsigned char fn_8269E188(Widget_82718C80 *self, int method, Value_82718C80 *value,
                                     unsigned char flags);
extern "C" void fn_827451A8(Object_82718C80 *object, Context_82718C80 *context, double *bounds);
extern "C" void fn_82696BC8(Value_82718C80 *value, Object_82718C80 *object);
extern "C" void fn_826824B0(Object_82718C80 *object);
extern "C" void fn_826959C8(Value_82718C80 *value);

extern "C" unsigned char fn_82718C80(Widget_82718C80 *self, int method, Value_82718C80 *value,
                                     unsigned char flags)
{
    if (fn_8269E188(self, method, value, flags))
        return 1;
    switch (method) {
    case 0x45:
        if (self->vtable->getContext(self)->owner->state == 1) {
            unsigned char bit = (self->flags >> 11) & 1;
            fn_826959C8(value);
            value->bit = bit;
            value->type = 2;
            return 1;
        }
        break;

    case 0x24:
        if (self->vtable->getContext(self)->count >= 8) {
            if (self->bounds != 0) {
                Context_82718C80 *context = self->vtable->getContext(self);
                Object_82718C80 *object = new (context->owner->heap) Object_82718C80(context);
                Bounds_82718C80 *bounds = self->bounds;
                double rect[4];
                float scale = 0.05f;
                float y = bounds->y;
                float x = bounds->x;
                float h;
                float w;
                y *= scale;
                x *= scale;
                h = bounds->height;
                w = bounds->width;
                rect[1] = y;
                rect[0] = x;
                rect[3] = h * scale + y;
                rect[2] = w * scale + x;
                fn_827451A8(object, context, rect);
                fn_82696BC8(value, object);
                if (object)
                    fn_826824B0(object);
            } else {
                fn_826959C8(value);
                value->type = 0;
            }
            return 1;
        }
        break;
    }
    return 0;
}
