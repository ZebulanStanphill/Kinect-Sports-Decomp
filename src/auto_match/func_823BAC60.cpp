// std::rotate over checked deque iterators: rotates the unchecked range and returns
// first advanced by (last - mid).
struct Deque_823BAC60;

struct Proxy_823BAC60 {
    const Deque_823BAC60 *container; /* 0x0 */
    void *firstIterator;             /* 0x4 */
};

struct Deque_823BAC60 {
    Proxy_823BAC60 *proxy; /* 0x0 */
};

struct IteratorBase_823BAC60 {
    Proxy_823BAC60 *proxy;       /* 0x0 */
    IteratorBase_823BAC60 *next; /* 0x4 */

    IteratorBase_823BAC60() : proxy(0), next(0)
    {
    }

    __forceinline IteratorBase_823BAC60(const IteratorBase_823BAC60 &right) : proxy(0), next(0)
    {
        *this = right;
    }

    IteratorBase_823BAC60 &operator=(const IteratorBase_823BAC60 &right)
    {
        if (proxy != right.proxy) {
            if (right.proxy != 0) {
                Adopt(right.proxy->container);
            }
        }
        return *this;
    }

    void Adopt(const Deque_823BAC60 *parent)
    {
        if (parent != 0) {
            proxy = parent->proxy;
        }
    }

    const Deque_823BAC60 *GetContainer() const
    {
        return proxy == 0 ? 0 : proxy->container;
    }
};

struct Unchecked_823BAC60 {
    const Deque_823BAC60 *container; /* 0x0 */
    unsigned int offset;             /* 0x4 */
};

struct Iterator_823BAC60 : IteratorBase_823BAC60 {
    unsigned int offset; /* 0x8 */

    __forceinline Iterator_823BAC60 &operator+=(int count)
    {
        offset += count;
        return *this;
    }

    bool operator!=(const Iterator_823BAC60 &right) const
    {
        return offset != right.offset;
    }

    int operator-(const Iterator_823BAC60 &right) const
    {
        return right.offset < offset ? (int)(offset - right.offset) : -(int)(right.offset - offset);
    }
};

extern "C" void fn_823BAEC8(Unchecked_823BAC60 first, Unchecked_823BAC60 mid, Unchecked_823BAC60 last);

__forceinline Unchecked_823BAC60 Unchecked(Iterator_823BAC60 source)
{
    const Deque_823BAC60 *container = source.GetContainer();
    Unchecked_823BAC60 result;

    result.container = container;
    result.offset = source.offset;
    return result;
}

/* std::distance for random-access iterators: the count starts at zero and the difference is added. */
static __forceinline int Distance(Iterator_823BAC60 first, Iterator_823BAC60 last)
{
    int count = 0;

    count += last - first;
    return count;
}

extern "C" Iterator_823BAC60 fn_823BAC60(Iterator_823BAC60 first, Iterator_823BAC60 mid,
                                         Iterator_823BAC60 last)
{
    if (first != mid && mid != last) {
        fn_823BAEC8(Unchecked(first), Unchecked(mid), Unchecked(last));
        first += Distance(mid, last);
    }
    return first;
}
