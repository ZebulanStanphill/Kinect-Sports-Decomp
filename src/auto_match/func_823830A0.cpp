#include <new>
#include <set>

struct Element_8224ED20 {
    int data[3];
};

inline bool operator<(const Element_8224ED20 &a, const Element_8224ED20 &b)
{
    return a.data[0] < b.data[0];
}

typedef std::set<Element_8224ED20>::_Mybase Tree_823830A0;
template <> Tree_823830A0::iterator Tree_823830A0::erase(const_iterator, const_iterator);
struct Object_823830A0;

struct DataVTable_823830A0 {
    void *unused[15];
    unsigned int (*getValue)(void *);
};

struct Data_823830A0 {
    DataVTable_823830A0 *vtable;
};

struct ObjectVTable_823830A0 {
    void *unused[2];
    char *(*getData)(Object_823830A0 *);
};

struct Object_823830A0 {
    ObjectVTable_823830A0 *vtable;
};

struct Target_823830A0 {
    char unknown[0x2180];
    unsigned int limit;
};

struct Pair_823830A0 {
    Target_823830A0 *object;
    void *references;
};

struct Node_823830A0 {
    Node_823830A0 *next;
    char unknown[0x14 - 4];
    Object_823830A0 *object;
};

extern "C" {
void fn_82383000(Pair_823830A0 *, void *);
void *fn_828A12E8(void *);
void *fn_8288F948(void *, int);
void fn_8224E928(Tree_823830A0 *, void *);
unsigned char fn_8288B760(Object_823830A0 *);
__declspec(noalias) void fn_82248B90(Node_823830A0 **);
void fn_8265CA20(void *);
void fn_822315A0(void *);
}

static __forceinline void Clear_823830A0(Tree_823830A0 *tree, void *result)
{
    new (result) Tree_823830A0::iterator(tree->erase(tree->begin(), tree->end()));
}

extern "C" int fn_823830A0(char *self)
{
    Pair_823830A0 target;
    fn_82383000(&target, self);
    Target_823830A0 *objectTarget = target.object;
    if (objectTarget) {
        char storage[16];
        Tree_823830A0 &tree = *(Tree_823830A0 *)storage;
        fn_8224E928(&tree, fn_8288F948(fn_828A12E8(*(void **)(self + 0x10)), 10));
        Node_823830A0 *it = (*(Node_823830A0 **)((char *)&tree + 4))->next;
        while (it != *(Node_823830A0 **)((char *)&tree + 4)) {
            Object_823830A0 *object = it->object;
            if (!fn_8288B760(object)) {
                Data_823830A0 *data = (Data_823830A0 *)(object->vtable->getData(object) + 0x2e8);
                if (data->vtable->getValue(data) < objectTarget->limit) {
                    Clear_823830A0(&tree, &it);
                    fn_8265CA20(*(void **)((char *)&tree + 4));
                    if (target.references) {
                        fn_822315A0(target.references);
                    }
                    return 0;
                }
            }
            fn_82248B90(&it);
        }
        Clear_823830A0(&tree, &it);
        fn_8265CA20(*(void **)((char *)&tree + 4));
        if (target.references) {
            fn_822315A0(target.references);
        }
        return 1;
    }
    if (target.references) {
        fn_822315A0(target.references);
    }
    return 0;
}
