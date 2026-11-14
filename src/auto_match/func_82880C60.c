#include <string.h>

typedef struct Session_82880C60 {
    char pad0[0x28];
    unsigned int id;
    char pad2c[0x34 - 0x2c];
    unsigned char guid[0x24];
} Session_82880C60;

typedef struct Node_82880C60 {
    struct Node_82880C60 *left;
    struct Node_82880C60 *parent;
    struct Node_82880C60 *right;
    int key;
    Session_82880C60 *value;
} Node_82880C60;

typedef struct Tree_82880C60 {
    int pad;
    Node_82880C60 *head;
} Tree_82880C60;

extern Tree_82880C60 lbl_83212A00;
extern void fn_828EA790(Node_82880C60 **it);
extern unsigned char fn_82880818(Session_82880C60 *session, int arg);

int fn_82880C60(unsigned int *handle, const unsigned char *guid, int arg)
{
    int result = -1;
    Node_82880C60 *head = lbl_83212A00.head;
    Node_82880C60 *begin = head->left;
    Node_82880C60 *it;
    unsigned int id;

    for (it = begin; it != head; fn_828EA790(&it)) {
        if (memcmp(guid, it->value->guid, 0x24) == 0 && fn_82880818(it->value, arg)) {
            result = it->key;
            if (result != -1)
                return result;
            break;
        }
    }
    if (handle != 0) {
        id = *handle;
        if (id != 0) {
            for (it = begin; it != head; fn_828EA790(&it)) {
                if (it->value->id == id)
                    return it->key;
            }
        }
    }
    return result;
}
