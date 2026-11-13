extern "C" void *fn_8265C9E0(unsigned int size);
extern "C" char *fn_82F65B18(const char *s);
extern "C" char lbl_821C1EA8[];

inline void *operator new(unsigned int, void *where) throw() { return where; }

struct Item_824F6098 {
    void *vt;
    int id;                /* 0x04 */
    int owner;             /* 0x08 */
    float value;           /* 0x0c */
    char *name;            /* 0x10 */
    float time;            /* 0x14 */
    int state;             /* 0x18 */

    __forceinline Item_824F6098(int owner_, int id_, float value_, const char *name_)
    {
        value = value_;
        id = id_;
        state = 0;
        vt = lbl_821C1EA8;
        time = 0.0f;
        owner = owner_;
        if (name_ != 0)
            name = fn_82F65B18(name_);
    }
};

struct Link_824F6098 {
    Item_824F6098 *item;
    Link_824F6098 *next;
};

struct List_824F6098 {
    int pad0[2];
    int owner;             /* 0x08 */
    Link_824F6098 *head;   /* 0x0c */
};

extern "C" Link_824F6098 *fn_82522D98(unsigned int size);

extern "C" Item_824F6098 *fn_824F6098(List_824F6098 *self, float value, int id, int unused6, int unused7, const char *name)
{
    void *mem = fn_8265C9E0(0x1c);
    Item_824F6098 *item = mem ? new (mem) Item_824F6098(self->owner, id, value, name) : 0;
    Link_824F6098 *link = fn_82522D98(8);
    link->item = item;
    link->next = self->head;
    self->head = link;
    return item;
}
