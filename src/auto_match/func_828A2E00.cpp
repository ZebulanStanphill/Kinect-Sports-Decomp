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

inline Unchecked_828A2E00 Unchecked(Iterator_828A2E00 source)
{
    return source.Unchecked();
}

inline Iterator_828A2E00 &Rechecked(Iterator_828A2E00 &destination, Unchecked_828A2E00 source)
{
    return destination.Rechecked(source);
}

extern "C" Unchecked_828A2E00 fn_828A1DE8(Unchecked_828A2E00 first, Unchecked_828A2E00 last,
                                          const int &value);

Iterator_828A2E00 Find_828A2E00(Iterator_828A2E00 first, Iterator_828A2E00 last, const int &value)
{
    return Rechecked(first, fn_828A1DE8(Unchecked(first), Unchecked(last), value));
}
