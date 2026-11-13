typedef unsigned int uint;

typedef struct Node_8302F040 {
    struct Node_8302F040 *next;
    uint key;
    uint value;
} Node_8302F040;

typedef struct {
    char pad0[8];
    uint count;
    char padc[0x18 - 0xc];
    Node_8302F040 *head;
} Obj_8302F040;

extern int fn_8302EE08(void *outer, uint *value);
extern void fn_8302EE80(void *outer, uint *value);

int fn_8302F040(Obj_8302F040 *o, uint key, unsigned char now)
{
    int r = 1;
    Node_8302F040 *p;
    if (o->count != 0) {
        for (p = o->head; p != 0; p = p->next) {
            if (p->key == key) {
                if (now)
                    r = fn_8302EE08((char *)o - 0xac, &p->value);
                else
                    fn_8302EE80((char *)o - 0xac, &p->value);
                break;
            }
        }
    }
    return r;
}
