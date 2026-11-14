typedef struct Node_82FAABA8 Node_82FAABA8;
typedef struct Source_82FAABA8 Source_82FAABA8;

typedef struct Cursor_82FAABA8 {
    unsigned int root;
    Node_82FAABA8 *node;
} Cursor_82FAABA8;

typedef struct NodeVtbl_82FAABA8 {
    void *slot0;
    void *slot4;
    void *slot8;
    Node_82FAABA8 *(*Next)(Node_82FAABA8 *self, Source_82FAABA8 *source, Cursor_82FAABA8 *cursor, unsigned int *extra);
} NodeVtbl_82FAABA8;

struct Node_82FAABA8 {
    NodeVtbl_82FAABA8 *vt;
};

typedef struct SourceVtbl_82FAABA8 {
    void *slots[6];
    unsigned int (*GetRoot)(Source_82FAABA8 *self);
} SourceVtbl_82FAABA8;

struct Source_82FAABA8 {
    SourceVtbl_82FAABA8 *vt;
};

typedef struct Self_82FAABA8 {
    int pad0;
    int pad4;
    Source_82FAABA8 *source;
} Self_82FAABA8;

typedef struct Request_82FAABA8 {
    unsigned int value;
    int flag;
    unsigned int key;
    int padc;
} Request_82FAABA8;

extern Node_82FAABA8 *fn_82FAD0A8(void);
extern int fn_82FAA780(Node_82FAABA8 *node, Request_82FAABA8 *request);

int fn_82FAABA8(Self_82FAABA8 *self, unsigned int key, unsigned int count, unsigned int value)
{
    unsigned int extra;
    Cursor_82FAABA8 cursor;
    Request_82FAABA8 request;
    int result;

    cursor.root = self->source->vt->GetRoot(self->source);
    if (cursor.root == 0) {
        result = 2;
    } else {
        if ((cursor.node = fn_82FAD0A8()) == 0) {
            return 2;
        }
    while (count != 0) {
        cursor.node = cursor.node->vt->Next(cursor.node, self->source, &cursor, &extra);
        count--;
    }
    request.value = value;
    request.flag = 1;
    request.key = key;
        result = fn_82FAA780(cursor.node, &request);
    }
    return result;
}
