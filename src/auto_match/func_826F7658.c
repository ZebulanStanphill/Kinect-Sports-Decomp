typedef struct Node_826F7658 Node_826F7658;

typedef struct NodeVtbl_826F7658 {
    void *slots0[0x68 / 4];
    void (*Update)(Node_826F7658 *self, unsigned char force, float time); /* 0x68 */
    void *slots6c[(0x104 - 0x6c) / 4];
    int (*Prepare)(Node_826F7658 *self, int flags); /* 0x104 */
} NodeVtbl_826F7658;

struct Node_826F7658 {
    NodeVtbl_826F7658 *vt; /* 0x00 */
    char pad4[0x66 - 0x4];
    unsigned char pad66 : 1;
    unsigned char hidden : 1; /* 0x66 bit 6 */
    unsigned char state : 6;
    char pad67[0x70 - 0x67];
    Node_826F7658 *nextAll; /* 0x70 */
    int pad74;
    Node_826F7658 *nextDirty; /* 0x78 */
    char pad7c[0x8c - 0x7c];
    unsigned int flagsHigh : 12;
    unsigned int queued : 1;       /* 0x8c bit 19 */
    unsigned int alwaysUpdate : 1; /* 0x8c bit 18 */
    unsigned int flagsLow : 18;
};

typedef struct SceneFlags_826F7658 {
    unsigned int high : 12;
    unsigned int rebuild : 1; /* bit 19 */
    unsigned int low : 19;
} SceneFlags_826F7658;

static __forceinline void ClearRebuild(SceneFlags_826F7658 *flags)
{
    flags->rebuild = 0;
}

typedef struct Scene_826F7658 {
    char pad0[0xaf4];
    Node_826F7658 *allNodes;   /* 0xaf4 */
    Node_826F7658 *dirtyNodes; /* 0xaf8 */
    int padafc;
    SceneFlags_826F7658 flags; /* 0xb00 */
} Scene_826F7658;

extern void fn_8269AD70(Node_826F7658 *node, Scene_826F7658 *scene);

void fn_826F7658(Scene_826F7658 *self, unsigned char force, float time)
{
    Node_826F7658 *node;
    Node_826F7658 *next;

    if ((unsigned char)self->flags.rebuild) {
        self->dirtyNodes = 0;
        ClearRebuild(&self->flags);
        for (node = self->allNodes; node != 0; node = next) {
            next = node->nextAll;
            node->nextDirty = 0;
            node->queued = 0;
            if ((unsigned char)~node->hidden & 1) {
                if (node->vt->Prepare(node, 0) == 1) {
                    fn_8269AD70(node, self);
                }
                if (force || (unsigned char)node->alwaysUpdate) {
                    node->vt->Update(node, force, time);
                }
            }
        }
    } else {
        for (node = self->dirtyNodes; node != 0; node = next) {
            next = node->nextDirty;
            if ((unsigned char)~node->hidden & 1) {
                if (force || (unsigned char)node->alwaysUpdate) {
                    node->vt->Update(node, force, time);
                }
            }
        }
    }
}
