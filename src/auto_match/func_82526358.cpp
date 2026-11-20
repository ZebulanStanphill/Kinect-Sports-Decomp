#include <map>

typedef std::map<unsigned int, int> Map_82526358;
typedef Map_82526358::_Mybase Tree_82526358;

struct Request_82526358 {
    void *owner;            // 0x0
    unsigned int id;        // 0x4
    int value;              // 0x8
    unsigned int pending;   // 0xc
    unsigned char isBuffer; // 0x10
};

struct User_82526358 {
    void *owner;                   // 0x0
    Map_82526358 values;           // 0x4
    Map_82526358 others;           // 0x14
    Request_82526358 requests[15]; // 0x24
    char result[0x1c];             // 0x150
    int issued;                    // 0x16c
};

extern "C" {
extern User_82526358 lbl_832961E0[];
unsigned int fn_823AB478(void *owner);
void fn_825264F0(unsigned char user);
int *fn_82526608(Tree_82526358 *tree, const unsigned int *key);
void fn_825266F8(Tree_82526358 *tree);
}

template <> __forceinline void Tree_82526358::clear()
{
    fn_825266F8(this);
}

template <> __forceinline int &Map_82526358::operator[](const unsigned int &key)
{
    return *fn_82526608(this, &key);
}

template <> Tree_82526358::iterator Tree_82526358::erase(Tree_82526358::const_iterator where);

extern "C" void fn_82526358(void *owner, unsigned int id, int value)
{
    unsigned int user = fn_823AB478(owner);
    unsigned char unchanged;
    int i;

    if (lbl_832961E0[user].owner != owner) {
        lbl_832961E0[user].values.clear();
        lbl_832961E0[user].others.clear();
    }
    lbl_832961E0[user].owner = owner;
    unchanged = 0;
    Map_82526358::iterator it = lbl_832961E0[user].values.find(id);
    if (it != lbl_832961E0[user].values.end()) {
        unchanged = it->second == value;
        lbl_832961E0[user].values.erase(it);
    }
    lbl_832961E0[user].values[id] = value;
    if (!unchanged) {
        for (i = 0; i < 15; i++) {
            if (lbl_832961E0[user].requests[i].pending == 0) {
                lbl_832961E0[user].requests[i].pending = 1;
                lbl_832961E0[user].requests[i].id = id;
                lbl_832961E0[user].requests[i].value = value;
                lbl_832961E0[user].requests[i].owner = owner;
                lbl_832961E0[user].requests[i].isBuffer = 0;
                if (lbl_832961E0[user].issued == 0) {
                    fn_825264F0((unsigned char)user);
                }
                return;
            }
        }
    }
}
