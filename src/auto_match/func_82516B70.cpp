// Refills the owner's two vectors of 16-byte entries (pairs of shared references) from the
// source: the counts come from fn_8223C610 under two keys, each entry from its reader.
#include <vector>
#include "game/Allocator_825089A0.h"

struct Element_82516B70;
extern "C" void fn_825179F8(Element_82516B70 *self, const Element_82516B70 *other);
extern "C" void fn_822315A0(void *rep);

struct Half_82516B70 {
    ~Half_82516B70()
    {
        if (rep != 0) {
            fn_822315A0(rep);
        }
    }

    void *ptr;
    void *rep;
};

struct Element_82516B70 {
    Element_82516B70(const Element_82516B70 &other)
    {
        fn_825179F8(this, &other);
    }

    Half_82516B70 first;
    Half_82516B70 second;
};

typedef Element_82516B70 T;
typedef std::vector<T, Allocator_825089A0<T, 1>> Vector;

extern "C" {
void fn_82517238(Vector *self);
void fn_82517340(Vector *self, unsigned int count);
unsigned int fn_8223C610(void *source, unsigned int key, int a, int b);
T fn_828C2568(void *context, void *source);
T fn_828BB708(void *context, void *source);
extern unsigned int lbl_83295F34;
extern unsigned int lbl_83295F38;
}

template <> __forceinline void Vector::clear()
{
    fn_82517238(this);
}

template <> __forceinline void Vector::_Reserve(size_type count)
{
    fn_82517340(this, count);
}

struct Owner_82516B70 {
    int unknown0;
    int unknown4;
    Vector first;  /* 0x08 */
    Vector second; /* 0x18 */
};

extern "C" void fn_82516B70(Owner_82516B70 *self, void *context, void *source)
{
    unsigned int count;
    unsigned int i;

    self->first.clear();
    count = fn_8223C610(source, lbl_83295F34, 0, 0);
    for (i = 0; i < count; i++) {
        self->first.push_back(fn_828C2568(context, source));
    }
    self->second.clear();
    count = fn_8223C610(source, lbl_83295F38, 0, 0);
    for (i = 0; i < count; i++) {
        self->second.push_back(fn_828BB708(context, source));
    }
}
