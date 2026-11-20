// Adds a value to the owner's deque unless it is already there:
// if (std::find(items.begin(), items.end(), key) == items.end()) items.push_back(key);
//
// The iterator classes are those of the find instance (fn_828A2E00), which
// takes its iterators by value. The original keeps the parameter in a register
// across the find call although its address is passed: that needs link-time
// code generation with the find and the loop it calls (fn_828A1DE8), which
// shows that neither writes through the reference.
struct Proxy_828A2E00;

struct Container_828A2E00 {
    Proxy_828A2E00 *proxy; /* 0x0 */
};

struct Proxy_828A2E00 {
    const Container_828A2E00 *container; /* 0x0 */
};

struct IteratorBase_828A2E00 {
    Proxy_828A2E00 *proxy;       /* 0x0 */
    IteratorBase_828A2E00 *next; /* 0x4 */

    IteratorBase_828A2E00() : proxy(0), next(0)
    {
    }

    IteratorBase_828A2E00(const IteratorBase_828A2E00 &right) : proxy(0), next(0)
    {
        *this = right;
    }

    IteratorBase_828A2E00 &operator=(const IteratorBase_828A2E00 &right)
    {
        if (proxy != right.proxy) {
            Adopt(right.proxy->container);
        }
        return *this;
    }

    void Adopt(const Container_828A2E00 *parent)
    {
        if (parent != 0) {
            Proxy_828A2E00 *parentProxy = parent->proxy;

            proxy = parentProxy;
        }
    }

    const Container_828A2E00 *GetContainer() const
    {
        return proxy == 0 ? 0 : proxy->container;
    }
};

struct Unchecked_828A2E00 {
    const Container_828A2E00 *container; /* 0x0 */
    unsigned int offset;                 /* 0x4 */

    Unchecked_828A2E00(unsigned int off, const Container_828A2E00 *cont) : container(cont), offset(off)
    {
    }
};

struct Iterator_828A2E00 : IteratorBase_828A2E00 {
    unsigned int offset; /* 0x8 */

    Unchecked_828A2E00 Unchecked() const
    {
        return Unchecked_828A2E00(offset, GetContainer());
    }

    Iterator_828A2E00 &Rechecked(Unchecked_828A2E00 right)
    {
        offset = right.offset;
        return *this;
    }
};

Iterator_828A2E00 Find_828A2E00(Iterator_828A2E00 first, Iterator_828A2E00 last, const int &value);

struct Deque_828A4E50 : Container_828A2E00 {
    void *map;            /* 0x4 */
    unsigned int mapSize; /* 0x8 */
    unsigned int offset;  /* 0xc */
    unsigned int size;    /* 0x10 */

    Iterator_828A2E00 Make(unsigned int off) const
    {
        Iterator_828A2E00 it;

        it.offset = off;
        it.Adopt(this);
        return it;
    }

    Iterator_828A2E00 begin() const
    {
        return Make(offset);
    }

    Iterator_828A2E00 end() const
    {
        return Make(offset + size);
    }
};

struct Owner_828A4E50 {
    char pad0[0x240];
    Deque_828A4E50 items; /* 0x240 */
};

extern "C" void fn_828A43E8(Deque_828A4E50 *self, const int *value);

extern "C" void fn_828A4E50(Owner_828A4E50 *self, int key)
{
    Deque_828A4E50 *items = &self->items;

    if (Find_828A2E00(items->begin(), items->end(), key).offset == items->end().offset) {
        int value = key;

        fn_828A43E8(items, &value);
    }
}
