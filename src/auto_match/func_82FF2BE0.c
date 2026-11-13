typedef struct Node_82FF2BE0 {
    char pad0[0x10];
    struct Node_82FF2BE0 *next;
    char pad14[0x50 - 0x14];
    unsigned int id;
    char pad54[0x68 - 0x54];
    unsigned int key;
    int pad6c;
    unsigned int owner;
} Node_82FF2BE0;

extern Node_82FF2BE0 *lbl_83264574;
extern char lbl_83264580[];
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void fn_82FF0BA8(Node_82FF2BE0 *n, int a);
extern void fn_82FF0D20(Node_82FF2BE0 *n, int a);
extern void fn_82FF0E18(Node_82FF2BE0 *n, int a, int b);

int fn_82FF2BE0(int type, unsigned int key, unsigned int owner, unsigned int id, int a, int b)
{
    Node_82FF2BE0 *n;
    RtlEnterCriticalSection(lbl_83264580);
    for (n = lbl_83264574; n != 0; n = n->next) {
        if (n->key == key && (owner == 0 || n->owner == owner) && (id == 0 || n->id == id)) {
            switch (type) {
            case 3:
                fn_82FF0BA8(n, a);
                break;
            case 4:
                fn_82FF0D20(n, a);
                break;
            case 5:
                fn_82FF0E18(n, a, b);
                break;
            }
        }
    }
    RtlLeaveCriticalSection(lbl_83264580);
    return 1;
}
