typedef struct OpcodeInfo_82BB5CB0 {
    unsigned int pad : 29;
    unsigned int isBarrier : 1;
    unsigned int low : 2;
    char pad4[0x30];
} OpcodeInfo_82BB5CB0;

typedef struct Inst_82BB5CB0 {
    char pad0[0x18];
    int opcode; /* 0x18 */
} Inst_82BB5CB0;

typedef struct Node_82BB5CB0 {
    char pad0[0x8];
    struct Node_82BB5CB0 *next; /* 0x8 */
    char padc[0x1c];
    Inst_82BB5CB0 *inst; /* 0x28 */
} Node_82BB5CB0;

typedef struct Target_82BB5CB0 Target_82BB5CB0;

typedef struct TargetVtbl_82BB5CB0 {
    void *slots[5];
    unsigned char (*IsModeA)(Target_82BB5CB0 *self); /* 0x14 */
    unsigned char (*IsModeB)(Target_82BB5CB0 *self); /* 0x18 */
    unsigned char (*IsModeC)(Target_82BB5CB0 *self); /* 0x1c */
} TargetVtbl_82BB5CB0;

struct Target_82BB5CB0 {
    TargetVtbl_82BB5CB0 *vt;
};

typedef struct Sched_82BB5CB0 {
    char pad0[0x8];
    Target_82BB5CB0 *target; /* 0x8 */
    char padc[0x20];
    Node_82BB5CB0 *nodes; /* 0x2c */
} Sched_82BB5CB0;

extern OpcodeInfo_82BB5CB0 lbl_8316FF50[];
extern int fn_82BC23E0(Inst_82BB5CB0 *inst);

static __forceinline int IsTail(Node_82BB5CB0 *node)
{
    return (int)node->next == 0;
}

Node_82BB5CB0 *fn_82BB5CB0(Sched_82BB5CB0 *self, unsigned char *wide)
{
    Node_82BB5CB0 *node;
    if (self->target->vt->IsModeA(self->target)) {
        for (node = self->nodes; !IsTail(node); node = node->next) {
            if ((unsigned char)lbl_8316FF50[node->inst->opcode].isBarrier) {
                *wide = 0;
                return node;
            }
            if (fn_82BC23E0(node->inst) >= 3) {
                *wide = 1;
                return node;
            }
        }
        *wide = 0;
        return self->nodes;
    }
    if (self->target->vt->IsModeB(self->target)) {
        for (node = self->nodes; !IsTail(node); node = node->next) {
            if (fn_82BC23E0(node->inst) >= 3) {
                *wide = 1;
                return node;
            }
        }
        *wide = 0;
        return 0;
    }
    if (self->target->vt->IsModeC(self->target)) {
        for (node = self->nodes; !IsTail(node); node = node->next) {
            if (fn_82BC23E0(node->inst) < 3) {
                *wide = 0;
                return node;
            }
        }
        *wide = 0;
        return self->nodes;
    }
    return 0;
}
