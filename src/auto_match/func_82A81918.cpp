// The constructor of the class whose vtable is lbl_820AA970 (its destructor is func_82A819E0).
struct GUID_82A81918 {
    unsigned int data[4];
};

struct ListNode_82A81918 {
    void *value;             /* 0x0 */
    ListNode_82A81918 *next; /* 0x4 */
    ListNode_82A81918 *prev; /* 0x8 */
};

struct ListBlock_82A81918 {
    ListBlock_82A81918 *next;   /* 0x0 */
    ListNode_82A81918 nodes[1]; /* 0x4 */
};

/* A linked list whose nodes come from a free list; the first block is embedded. */
struct List_82A81918 {
    List_82A81918()
    {
        ListNode_82A81918 *node;

        freeNodes = 0;
        blocks = &firstBlock;
        head = 0;
        tail = 0;
        count = 0;
        nodesPerBlock = 1;
        blocks->next = 0;
        node = &blocks->nodes[0];
        node->next = freeNodes;
        freeNodes = node;
    }

    ListNode_82A81918 *freeNodes;  /* 0x0 */
    ListBlock_82A81918 *blocks;    /* 0x4 */
    ListBlock_82A81918 firstBlock; /* 0x8 */
    ListNode_82A81918 *head;       /* 0x18 */
    ListNode_82A81918 *tail;       /* 0x1C */
    int count;                     /* 0x20 */
    int nodesPerBlock;             /* 0x24 */
};

extern "C" GUID_82A81918 lbl_8202E618;

class Object_82A81918
{
  public:
    Object_82A81918(void *owner);
    virtual ~Object_82A81918();

    void *m_owner;         /* 0x4 */
    void *m_8;             /* 0x8 */
    void *m_C;             /* 0xC */
    List_82A81918 m_listA; /* 0x10 */
    List_82A81918 m_listB; /* 0x38 */
    int m_60;              /* 0x60 */
    GUID_82A81918 m_id;    /* 0x64 */
    int m_74;              /* 0x74 */
};

Object_82A81918::Object_82A81918(void *owner) : m_owner(owner), m_8(0), m_C(0)
{
    m_60 = 1;
    m_id = lbl_8202E618;
    m_74 = 1;
}
