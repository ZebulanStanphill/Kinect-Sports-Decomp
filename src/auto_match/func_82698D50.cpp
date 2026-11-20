struct Node {
    int f0;
    void *x4;
    int f8;
    unsigned int hash;
    unsigned int f10;
};

struct Handle_826A65E8 {
    Node *node;
    bool equals(const Handle_826A65E8 &o) const;
};

extern "C" void fn_82694D70(Node *n);

struct Info_82698D50 {
    int pad0[2];
    Handle_826A65E8 name; /* 0x08 */
};

struct Definition_82698D50 {
    char pad0[0x78];
    Info_82698D50 *info; /* 0x78 */
};

struct Character_82698D50 {
    virtual void slot00();
    virtual void slot04();
    virtual void slot08();
    virtual void slot0c();
    virtual void slot10();
    virtual void slot14();
    virtual void slot18();
    virtual void slot1c();
    virtual void slot20();
    virtual void slot24();
    virtual void slot28();
    virtual void slot2c();
    virtual void slot30();
    virtual void slot34();
    virtual void slot38();
    virtual void slot3c();
    virtual void slot40();
    virtual void slot44();
    virtual void slot48();
    virtual void slot4c();
    virtual void slot50();
    virtual void slot54();
    virtual Definition_82698D50 *getDefinition(); /* 0x58 */

    char pad4[0x66 - 0x4];
    unsigned char flags; /* 0x66 */
    char pad67[0x80 - 0x67];
    int info; /* 0x80 */
};

struct Context_82698D50 {
    int pad0;
    unsigned char version; /* 0x04 */
};

struct DisplayList_82698D50 {
    Character_82698D50 **items; /* 0x00 */
    unsigned int count;         /* 0x04 */
    int pad8;
    Character_82698D50 *cached; /* 0x0c */
};

extern "C" Info_82698D50 *fn_8269F500(Character_82698D50 *ch);

static __forceinline const Handle_826A65E8 &NameOf(Character_82698D50 *ch)
{
    Info_82698D50 *info = (Info_82698D50 *)ch->info;

    if (ch->info == 0)
        info = fn_8269F500(ch);
    if (info != 0)
        return info->name;
    return ch->getDefinition()->info->name;
}

extern "C" Character_82698D50 *fn_82698D50(DisplayList_82698D50 *self, Context_82698D50 *context,
                                           const Handle_826A65E8 *name)
{
    Character_82698D50 *found;
    unsigned int i;
    unsigned int count;

    if (name->node->f10 == 0)
        return 0;
    found = 0;
    if (context->version > 6) {
        Character_82698D50 *cached = self->cached;

        if (cached != 0 && NameOf(cached).node == name->node)
            return self->cached;
        count = self->count;
        for (i = 0; i < count; i++) {
            Character_82698D50 *ch = self->items[i];

            if (ch != 0 && (ch->flags & 0x80) != 0 && NameOf(ch).node == name->node) {
                found = ch;
                break;
            }
        }
    } else {
        Character_82698D50 *cached;

        if (name->node->x4 == 0)
            fn_82694D70(name->node);
        cached = self->cached;
        if (cached != 0 && name->equals(NameOf(cached)))
            return self->cached;
        count = self->count;
        for (i = 0; i < count; i++) {
            Character_82698D50 *ch = self->items[i];

            if (ch != 0 && (ch->flags & 0x80) != 0 && name->equals(NameOf(ch))) {
                found = ch;
                break;
            }
        }
    }
    self->cached = found;
    return found;
}
