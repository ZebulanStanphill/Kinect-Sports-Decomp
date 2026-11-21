// Finds the pool element with the given key along the chain that starts at index, or appends a
// new element to the end of the chain, copies the last element's values into it and gives it the
// key. Returns the index of the element.
//
// The element reference returned by fn_8277B730 is copied through its assignment operator, so
// both members are read through the returned pointer; the index stays in a register across the
// append only when fn_8273D588 is linked with link-time code generation.
class Accessor_82782F20
{
  public:
    virtual void Unknown00();
    virtual void Init(int element, float x, float y, int value);
    virtual void Unknown08();
    virtual void GetPosition(int element, float *x, float *y);
    virtual void Unknown10();
    virtual void SetKey(int element, unsigned int key);
    virtual int GetValue(int element);
    virtual unsigned int GetKey(int element);
};

struct Desc_82782F20 {
    int unknown0;              /* 0x0 */
    int stride;                /* 0x4 */
    Accessor_82782F20 *access; /* 0x8 */
};

struct Pool_82782F20 {
    unsigned int count;  /* 0x0 */
    unsigned int cap;    /* 0x4 */
    int base;            /* 0x8 */
    Desc_82782F20 *desc; /* 0xc */
};

struct Ref_82782F20 {
    int element;               /* 0x0 */
    Accessor_82782F20 *access; /* 0x4 */

    Ref_82782F20(int e, Accessor_82782F20 *a) : element(e), access(a)
    {
    }

    Ref_82782F20 &operator=(const Ref_82782F20 &other)
    {
        element = other.element;
        access = other.access;
        return *this;
    }
};

struct IndexVector_82782F20 {
    int *data;
    unsigned int size;
    unsigned int cap;
};

struct Table_82782F20 {
    Pool_82782F20 *pool;       /* 0x0 */
    IndexVector_82782F20 next; /* 0x4 */
};

extern "C" {
void fn_8273D588(IndexVector_82782F20 *v, unsigned int *value);
Ref_82782F20 fn_8277B730(Pool_82782F20 *p);

unsigned int fn_82782F20(Table_82782F20 *self, unsigned int index, unsigned int key)
{
    Desc_82782F20 *desc = self->pool->desc;
    Ref_82782F20 ref(desc->stride * index + self->pool->base, desc->access);

    if (self->next.data[index] == -1) {
        self->next.data[index] = index;
        ref.access->SetKey(ref.element, key);
        return index;
    } else {
        int value;
        float x;
        float y;
        Accessor_82782F20 *access;
        int element;

        if (ref.access->GetKey(ref.element) == key) {
            return index;
        }
        while (self->next.data[index] != index) {
            index = self->next.data[index];
            desc = self->pool->desc;
            if (desc->access->GetKey(desc->stride * index + self->pool->base) == key) {
                return index;
            }
        }
        desc = self->pool->desc;
        access = desc->access;
        element = desc->stride * index + self->pool->base;
        value = access->GetValue(element);
        access->GetPosition(element, &x, &y);
        self->next.data[index] = self->pool->count;
        index = self->pool->count;
        fn_8273D588(&self->next, &index);
        ref = fn_8277B730(self->pool);
        ref.access->Init(ref.element, x, y, value);
        ref.access->SetKey(ref.element, key);
    }
    return index;
}
}
