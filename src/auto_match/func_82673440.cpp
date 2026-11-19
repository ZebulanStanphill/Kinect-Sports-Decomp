// ScaleformMovieView destructor: frees the pending command list and the movie's
// objects, then the members and the enable_shared_from_this weak pointer are
// destroyed.
extern "C" long _InterlockedDecrement(long volatile *addend);

extern "C" {
void fn_8265CA20(void *block);
void fn_82522ED8(void *node);
void fn_8267A1C0(void *object);
void fn_8262FEC8(void *object);
void fn_8267C4F0(void *object);
void fn_82687270(void *object);
void fn_82670C10(void *array);
void fn_82670C78(void *array);
}

struct Node_82673440 {
    char unk00[0x24];
    Node_82673440 *next; /* 0x24 */
};

// std::tr1 _Ref_count_base.
class RefCount_82673440
{
  public:
    virtual void Destroy();
    virtual void DeleteThis();

    __forceinline void DecrementWeaks()
    {
        if (_InterlockedDecrement(&weaks) == 0) {
            DeleteThis();
        }
    }

    long uses;  /* 0x04 */
    long weaks; /* 0x08 */
};

// std::tr1::enable_shared_from_this's weak pointer.
struct WeakPtr_82673440 {
    void *ptr;              /* 0x00 */
    RefCount_82673440 *rep; /* 0x04 */

    __forceinline ~WeakPtr_82673440()
    {
        if (rep != 0) {
            rep->DecrementWeaks();
        }
    }
};

struct MovieDefPtr_82673440 {
    void *ptr;

    __forceinline ~MovieDefPtr_82673440()
    {
        if (ptr != 0) {
            fn_82687270(ptr);
        }
    }

    __forceinline void Clear()
    {
        if (ptr != 0) {
            fn_82687270(ptr);
        }
        ptr = 0;
    }
};

struct RendererPtr_82673440 {
    void *ptr;

    __forceinline ~RendererPtr_82673440()
    {
        if (ptr != 0) {
            fn_8267C4F0(ptr);
        }
    }

    __forceinline void Clear()
    {
        if (ptr != 0) {
            fn_8267C4F0(ptr);
        }
        ptr = 0;
    }
};

struct ArrayA_82670C10 {
    int words[4];

    __forceinline ~ArrayA_82670C10()
    {
        fn_82670C10(this);
    }
};

struct ArrayB_82670C78 {
    int words[4];

    __forceinline ~ArrayB_82670C78()
    {
        fn_82670C78(this);
    }
};

struct TreeNode_82673440 {
    TreeNode_82673440 *left;
};

struct TreeIterator_82673440 {
    TreeNode_82673440 *node;

    __forceinline TreeIterator_82673440()
    {
    }

    __forceinline TreeIterator_82673440(TreeNode_82673440 *at) : node(at)
    {
    }
};

struct Tree_82673440;
extern "C" TreeIterator_82673440 *fn_82825F40(TreeIterator_82673440 *result, Tree_82673440 *tree,
                                              TreeIterator_82673440 first, TreeIterator_82673440 last);

struct Tree_82673440 {
    int unk00;
    TreeNode_82673440 *head; /* 0x04 */
    unsigned int size;       /* 0x08 */

    __forceinline ~Tree_82673440()
    {
        TreeIterator_82673440 erased;
        fn_82825F40(&erased, this, TreeIterator_82673440(head->left), TreeIterator_82673440(head));
        fn_8265CA20(head);
    }
};

class ScaleformMovieView
{
  public:
    virtual ~ScaleformMovieView();

    WeakPtr_82673440 unk04;     /* 0x04 */
    MovieDefPtr_82673440 unk0C; /* 0x0C */
    RendererPtr_82673440 unk10; /* 0x10 */
    ArrayA_82670C10 unk14;      /* 0x14 */
    ArrayA_82670C10 unk24;      /* 0x24 */
    ArrayA_82670C10 unk34;      /* 0x34 */
    ArrayA_82670C10 unk44;      /* 0x44 */
    ArrayB_82670C78 unk54;      /* 0x54 */
    Tree_82673440 unk64;        /* 0x64 */
    char unk70[0xB8 - 0x70];
    void *unkB8; /* 0xB8 */
    char unkBC[0xEC - 0xBC];
    Node_82673440 *unkEC; /* 0xEC */
    char unkF0[0xF8 - 0xF0];
    void *unkF8; /* 0xF8 */
};

extern "C" void fn_82672718(ScaleformMovieView *view);

ScaleformMovieView::~ScaleformMovieView()
{
    Node_82673440 *node = unkEC;

    while (node != 0) {
        Node_82673440 *next = node->next;
        fn_82522ED8(node);
        node = next;
    }
    unkEC = 0;
    if (unkB8 != 0) {
        fn_8267A1C0(unkB8);
        fn_8265CA20(unkB8);
        unkB8 = 0;
    }
    if (unkF8 != 0) {
        fn_8262FEC8(unkF8);
        unkF8 = 0;
    }
    unk10.Clear();
    unk0C.Clear();
    fn_82672718(this);
}
