typedef struct A_8303B890 {
    char pad[0x1c];
    int id;               /* 0x1c */
    float value;          /* 0x20 */
} A_8303B890;

typedef struct B_8303B890 {
    char pad[0x34];
    int arg;              /* 0x34 */
} B_8303B890;

extern void *lbl_832642FC;
extern void fn_83018CD8(void *mgr, int id, float value, int arg);

void fn_8303B890(A_8303B890 *a, B_8303B890 *b)
{
    fn_83018CD8(lbl_832642FC, a->id, a->value, b->arg);
}
