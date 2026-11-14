struct Conn_828D4D68;
typedef struct ConnVtbl_828D4D68 {
    char pad0[0x4c];
    unsigned int (*GetSize)(struct Conn_828D4D68 *self);
} ConnVtbl_828D4D68;
typedef struct Conn_828D4D68 {
    ConnVtbl_828D4D68 *vt;
} Conn_828D4D68;

typedef struct Msg_828D4D68 {
    void *f0;
    Conn_828D4D68 *conn;
} Msg_828D4D68;

extern unsigned char fn_828D9A48(Conn_828D4D68 *conn);

/* A named 0x20 constant whose address the max helper takes; the original
 * object names it lbl_82026D68 (score with --alias kMinSize_828D4D68=lbl_82026D68). */
static const unsigned int kMinSize_828D4D68 = 0x20;

static __forceinline const unsigned int *Max_828D4D68(const unsigned int *a, const unsigned int *b)
{
    return *a < *b ? b : a;
}

unsigned int fn_828D4D68(Msg_828D4D68 *self)
{
    unsigned int size = self->conn->vt->GetSize(self->conn);
    Conn_828D4D68 *conn = self->conn;
    if (fn_828D9A48(conn))
        return *Max_828D4D68(&size, &kMinSize_828D4D68);
    return size;
}
