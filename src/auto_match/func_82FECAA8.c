typedef struct Mid_82FECAA8 {
    char pad[8];
    void *inner;
} Mid_82FECAA8;

typedef struct Obj_82FECAA8 {
    char pad[0xfc];
    Mid_82FECAA8 *mid;
} Obj_82FECAA8;

typedef struct Node_82FECAA8 {
    struct Node_82FECAA8 *next;
    int pad[4];
    Obj_82FECAA8 *obj;
} Node_82FECAA8;

typedef struct Query_82FECAA8 {
    void *key;
    int pad4[2];
    Node_82FECAA8 **bucket;
    Node_82FECAA8 *node;
} Query_82FECAA8;

typedef struct Range_82FECAA8 {
    Node_82FECAA8 ***begin;
    Node_82FECAA8 ***end;
} Range_82FECAA8;

extern Range_82FECAA8 lbl_832643F4;
extern Node_82FECAA8 *lbl_83264400;

Node_82FECAA8 *fn_82FECAA8(Query_82FECAA8 *query)
{
    Node_82FECAA8 ***it;
    Node_82FECAA8 **bucket;
    Node_82FECAA8 *n;
    void *key = query->key;

    for (it = lbl_832643F4.begin; it != lbl_832643F4.end; it++) {
        bucket = *it;
        for (n = *bucket; n != 0; n = n->next) {
            if ((n->obj != 0 ? n->obj->mid->inner : 0) == key) {
                query->node = n;
                query->bucket = bucket;
                return n;
            }
        }
    }
    for (n = lbl_83264400; n != 0; n = n->next) {
        if ((n->obj != 0 ? n->obj->mid->inner : 0) == key) {
            return n;
        }
    }
    return 0;
}
