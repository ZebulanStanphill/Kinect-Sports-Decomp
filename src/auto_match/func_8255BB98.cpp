extern "C" void fn_822315A0(void *rep);

struct Info_8255BB98 {
    int pad0;
    unsigned int id; /* 0x4 */
};

template <class T> void Exchange_8255BB98(T &left, T &right)
{
    T old = left;

    left = right;
    right = old;
}

class Ref_8255BB98
{
  public:
    Info_8255BB98 *ptr; /* 0x0 */
    void *rep;          /* 0x4 */

    Ref_8255BB98() : ptr(0), rep(0)
    {
    }

    Ref_8255BB98(const Ref_8255BB98 &other);

    Ref_8255BB98(Ref_8255BB98 &&other) : ptr(0), rep(0)
    {
        if (this != &other) {
            Swap(other);
        }
    }

    ~Ref_8255BB98()
    {
        if (rep != 0) {
            fn_822315A0(rep);
        }
    }

    void Swap(Ref_8255BB98 &other)
    {
        Exchange_8255BB98(rep, other.rep);
        Exchange_8255BB98(ptr, other.ptr);
    }
};

struct Node_8255BB98 {
    Node_8255BB98 *next; /* 0x0 */
    Node_8255BB98 *prev; /* 0x4 */
    Ref_8255BB98 value;  /* 0x8 */
};

struct List_8255BB98 {
    Node_8255BB98 *head; /* 0x0 */
    unsigned int size;   /* 0x4 */

    Node_8255BB98 *Begin() const
    {
        return head->next;
    }

    Node_8255BB98 *End() const
    {
        return head;
    }
};

struct Player_8255BB98 {
    int pad0;
    List_8255BB98 list; /* 0x4 */
    int padc;
    unsigned int id; /* 0x10 */
};

static int Count_8255BB98(Node_8255BB98 *first, Node_8255BB98 *last)
{
    int count = 0;

    for (; first != last; first = first->next) {
        count++;
    }
    return count;
}

static Node_8255BB98 *Find_8255BB98(Node_8255BB98 *first, Node_8255BB98 *last, unsigned int id)
{
    for (; first != last; first = first->next) {
        if (first->value.ptr->id == id) {
            break;
        }
    }
    return first;
}

extern "C" Ref_8255BB98 fn_8255BB98(Player_8255BB98 *player)
{
    Node_8255BB98 *node;

    if (Count_8255BB98(player->list.Begin(), player->list.End()) == 1) {
        return player->list.Begin()->value;
    }
    node = Find_8255BB98(player->list.Begin(), player->list.End(), player->id);
    return node != player->list.End() ? Ref_8255BB98(node->value) : Ref_8255BB98();
}
