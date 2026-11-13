#include <vector>
#include <algorithm>

struct Item_82493C80 {
    char pad[0x90];
    unsigned int id;        /* 0x90 */
    int flag;               /* 0x94 */
};

struct IdIs_82493C80 {
    unsigned int id;
    IdIs_82493C80(unsigned int i) : id(i) {}
    bool operator()(const Item_82493C80 *p) const { return id == p->id; }
};

struct Self_82493C80 {
    void *unk0;
    std::vector<Item_82493C80 *> items;   /* 0x04 */
};

struct Msg_82493C80 {
    int type;               /* 0x00 */
    int unk4;
    unsigned int id;        /* 0x08 */
};

extern "C" void fn_82493C80(Self_82493C80 *self, Msg_82493C80 *msg)
{
    if (msg->type == 0x44) {
        std::vector<Item_82493C80 *>::iterator it =
            std::find_if(self->items.begin(), self->items.end(), IdIs_82493C80(msg->id));
        if (it != self->items.end())
            (*it)->flag = 1;
    }
}
