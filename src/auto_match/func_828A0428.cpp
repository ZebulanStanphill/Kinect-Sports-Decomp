#include <set>

struct Element_828E4F28 {
    unsigned int key;
};

inline bool operator<(const Element_828E4F28 &left, const Element_828E4F28 &right)
{
    return left.key < right.key;
}

typedef std::set<Element_828E4F28>::_Mybase Tree_828A0428;
template <> Tree_828A0428::iterator Tree_828A0428::erase(const_iterator first, const_iterator last);

struct Allocator_828A0428 {
    unsigned char unused;

    Allocator_828A0428()
    {
    }
};

struct List_828A0428;
struct TreeStorage_828A0428;

extern "C" {
void fn_8265CA20(void *memory);
List_828A0428 *fn_828A2058(List_828A0428 *self, const Allocator_828A0428 *allocator);
TreeStorage_828A0428 *fn_828E2F58(TreeStorage_828A0428 *self, const Allocator_828A0428 *compare,
                                  const Allocator_828A0428 *allocator);
void fn_828E35B8(void *self, void *object);
void fn_82BA02A8(void *self, void *first, void *last);
void fn_828E3D60(List_828A0428 *self);
void RtlInitializeCriticalSection(void *section);
}

struct List_828A0428 {
    void *head;             /* 0x00 */
    unsigned int size;      /* 0x04 */
    unsigned int allocator; /* 0x08 */

    List_828A0428(const Allocator_828A0428 &alloc)
    {
        fn_828A2058(this, &alloc);
    }

    ~List_828A0428()
    {
        fn_828E3D60(this);
        fn_8265CA20(head);
    }
};

struct TreeStorage_828A0428 {
    unsigned int unknown0; /* 0x00 */
    void *head;            /* 0x04 */
    unsigned int size;     /* 0x08 */
    unsigned int unknownC; /* 0x0c */

    TreeStorage_828A0428(const Allocator_828A0428 &alloc)
    {
        fn_828E2F58(this, &alloc, &alloc);
    }

    ~TreeStorage_828A0428()
    {
        Tree_828A0428 *tree = (Tree_828A0428 *)this;

        tree->erase(tree->begin(), tree->end());
        fn_8265CA20(head);
    }
};

struct Parameters_828A0428 {
    List_828A0428 list;           /* 0x00 */
    TreeStorage_828A0428 tree;    /* 0x0c */
    Allocator_828A0428 allocator; /* 0x1c */

    Parameters_828A0428(const Allocator_828A0428 &alloc = Allocator_828A0428())
        : list(alloc), tree(alloc), allocator(alloc)
    {
    }
};

struct Object_828A0428 {
    unsigned int *table; /* 0x00 */
    char pad4[0xc];

    Object_828A0428(const Parameters_828A0428 &parameters, void *owner);
};

struct SharedCount_828A0428 {
    void *counter; /* 0x00 */

    SharedCount_828A0428(Object_828A0428 *object)
    {
        fn_828E35B8(this, object);
    }
};

struct SharedPointer_828A0428 {
    Object_828A0428 *object;    /* 0x00 */
    SharedCount_828A0428 count; /* 0x04 */

    explicit SharedPointer_828A0428(Object_828A0428 *pointer) : object(pointer), count(pointer)
    {
        fn_82BA02A8(this, pointer, pointer);
    }
};

struct Owner_828A0428 {
    SharedPointer_828A0428 pointer; /* 0x00 */
    unsigned int value;             /* 0x08 */
    char section[0x1c];             /* 0x0c */

    Owner_828A0428(void *owner);
};

Owner_828A0428::Owner_828A0428(void *owner) : pointer(new Object_828A0428(Parameters_828A0428(), owner))
{
    value = *pointer.object->table;
    RtlInitializeCriticalSection(section);
}
